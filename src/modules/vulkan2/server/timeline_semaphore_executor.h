#ifndef XRTRANSPORT_VULKAN2_SERVER_TIMELINE_SEMAPHORE_EXECUTOR_H
#define XRTRANSPORT_VULKAN2_SERVER_TIMELINE_SEMAPHORE_EXECUTOR_H

#include <vulkan/vulkan.h>

#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>
#include <functional>
#include <atomic>

struct TimelineSemaphoreTask {
    VkSemaphore semaphore;
    uint64_t value;
    std::function<void()> callback;
};

class TimelineSemaphoreExecutor {
private:
    std::thread executor_thread;

    VkDevice device;

    // Unfortunately, we can't make the wakeup target value atomic because it needs to be in an
    // array with other non-atomic uint64_ts, so we have to protect access to it with a mutex.
    // The executor thread is the only one that can write to it, so it only locks when writing.
    // Other threads (ones calling interrupt_wait) must lock this before reading the value to
    // wake up the wait operation.
    std::mutex wakeup_value_mutex;

    // first slot is reserved for a "wakeup" semaphore
    // the wakeup semaphore is used to interrupt a wait if new semaphores are added,
    // and is also waited on when there are no other semaphores to avoid busy waiting
    std::vector<VkSemaphore> work_semaphores;
    std::vector<uint64_t> work_values;
    std::vector<std::function<void()>> work_callbacks;

    // The work_* data is only ever accessed by the executor thread. If another thead wants to add
    // a task, it must acquire a lock on staged_mutex and add the task to staged_tasks, and
    // optionally signal the wakeup semaphore for the executor to begin waiting on it immediately.
    // The executor thread will consume (clear) the staged tasks when it loops again.
    std::mutex staged_mutex;
    std::vector<TimelineSemaphoreTask> staged_tasks;

    std::atomic<bool> stopping;

    void executor_loop();
    void interrupt_wait();

public:
    TimelineSemaphoreExecutor(VkDevice device);
    ~TimelineSemaphoreExecutor();

    void start();
    void stop();

    void submit(TimelineSemaphoreTask task);
};

#endif // XRTRANSPORT_VULKAN2_SERVER_TIMELINE_SEMAPHORE_EXECUTOR_H
