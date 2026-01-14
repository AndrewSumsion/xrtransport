#include "timeline_semaphore_executor.h"

#include <vulkan/vulkan.h>

#include <mutex>
#include <cassert>

TimelineSemaphoreExecutor::TimelineSemaphoreExecutor(VkDevice device) : device(device) {
    // create wakeup semaphore
    VkSemaphore wakeup_semaphore{};
    uint64_t wakeup_value = 0;

    VkSemaphoreTypeCreateInfo type_info{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO};
    type_info.semaphoreType = VK_SEMAPHORE_TYPE_TIMELINE;
    type_info.initialValue = wakeup_value;

    VkSemaphoreCreateInfo create_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    create_info.pNext = &type_info;

    vkCreateSemaphore(device, &create_info, nullptr, &wakeup_semaphore);

    // put wakeup semaphore in the first slot
    work_semaphores.push_back(wakeup_semaphore);
    work_values.push_back(wakeup_value + 1);
    work_callbacks.emplace_back(); // empty function, never used
}

TimelineSemaphoreExecutor::~TimelineSemaphoreExecutor() {
    stop();
    vkDestroySemaphore(device, work_semaphores[0], nullptr);
}

void TimelineSemaphoreExecutor::executor_loop() {
    while (!stopping) {
        {
            std::lock_guard<std::mutex> lock(staged_mutex);
            for (const auto& task : staged_tasks) {
                work_semaphores.push_back(task.semaphore);
                work_values.push_back(task.value);
                work_callbacks.emplace_back(std::move(task.callback));
            }
            staged_tasks.clear();
        }

        VkSemaphoreWaitInfo wait_info{VK_STRUCTURE_TYPE_SEMAPHORE_WAIT_INFO};
        wait_info.flags = VK_SEMAPHORE_WAIT_ANY_BIT;
        wait_info.semaphoreCount = static_cast<uint32_t>(work_semaphores.size());
        wait_info.pSemaphores = work_semaphores.data();
        wait_info.pValues = work_values.data();

        // note: we do not need to lock wakeup_value_mutex even though we're reading from
        // work_values[0] here, because it is only written to by this thread.
        vkWaitSemaphores(device, &wait_info, UINT64_MAX);
        if (stopping)
            break;

        // Now that vkWaitSemaphores has returned, at least one semaphore has been signaled
        
        // if the wakeup semaphore was signaled, increment its target value so we can wait again
        uint64_t wakeup_value{};
        vkGetSemaphoreCounterValue(device, work_semaphores[0], &wakeup_value);
        {
            // protect access to the wakeup target value with a mutex
            std::lock_guard<std::mutex> lock(wakeup_value_mutex);
            work_values[0] = wakeup_value + 1;
        }

        // check the rest of the semaphores
        assert(work_semaphores.size() == work_values.size() &&
            work_values.size() == work_callbacks.size());
        auto semaphore_it = std::next(work_semaphores.begin()); // skip wakeup semaphore
        auto value_it = std::next(work_values.begin());
        auto callback_it = std::next(work_callbacks.begin());
        while (semaphore_it != work_semaphores.end()) {
            VkSemaphore semaphore = *semaphore_it;
            uint64_t target_value = *value_it;
            auto& callback = *callback_it;

            uint64_t actual_value{};
            vkGetSemaphoreCounterValue(device, semaphore, &actual_value);

            if (actual_value >= target_value) {
                // semaphore was signaled, call callback and remove it
                callback();
                semaphore_it = work_semaphores.erase(semaphore_it);
                value_it = work_values.erase(value_it);
                callback_it = work_callbacks.erase(callback_it);
            }
            else {
                ++semaphore_it;
                ++value_it;
                ++callback_it;
            }
        }
    }
}

void TimelineSemaphoreExecutor::interrupt_wait() {
    uint64_t target_wakeup_value{};
    {
        std::lock_guard<std::mutex> lock(wakeup_value_mutex);
        target_wakeup_value = work_values[0];
    }
    VkSemaphoreSignalInfo signal_info{VK_STRUCTURE_TYPE_SEMAPHORE_SIGNAL_INFO};
    signal_info.semaphore = work_semaphores[0]; // no need to synchronize this, it never changes
    signal_info.value = target_wakeup_value;
    vkSignalSemaphore(device, &signal_info);
}

void TimelineSemaphoreExecutor::start() {
    stopping = false;
    executor_thread = std::thread(&TimelineSemaphoreExecutor::executor_loop, this);
}

void TimelineSemaphoreExecutor::stop() {
    stopping = true;
    interrupt_wait();
    if (executor_thread.joinable()) {
        executor_thread.join();
    }
}

void TimelineSemaphoreExecutor::submit(TimelineSemaphoreTask task) {
    std::lock_guard<std::mutex> lock(staged_mutex);
    staged_tasks.emplace_back(std::move(task));
    interrupt_wait();
}