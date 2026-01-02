#ifndef XRTRANSPORT_VULKAN2_SESSION_STATE_H
#define XRTRANSPORT_VULKAN2_SESSION_STATE_H

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>
#include <unordered_set>
#include <optional>

class SwapchainState;
class SessionState;

std::optional<SwapchainState&> get_swapchain_state(XrSwapchain handle);
std::optional<SessionState&> get_session_state(XrSession handle);

SwapchainState& store_swapchain_state(XrSwapchain handle, SwapchainState&& swapchain_state);
SessionState& store_session_state(XrSession handle, SessionState&& session_state);

void destroy_swapchain_state(XrSwapchain handle);
void destroy_session_state(XrSession handle);

class SwapchainState {
private:

    std::vector<XrSwapchainImageVulkan2KHR> images;

    // need to track these for cleanup
    std::vector<VkDeviceMemory> image_memory;

    // This mutex guards size, acquire_head, acquire_tail
    std::mutex acquire_mutex;
    
    // keeps track of how many images have been acquired
    uint32_t size = 0;

    // ring buffer heads indicating which images have been acquired
    uint32_t acquire_head = 0, acquire_tail = 0;
    int32_t last_released_index = -1;

    // used to make sure that an image has been waited on before it is released
    uint32_t wait_head = 0;

    // This mutex guards wait_head and available
    std::mutex available_mutex;
    std::condition_variable available_cv;

    // semaphore counter for how many images are available to return from xrWaitSwapchainImage.
    // wait waits until this is > 0 and decrements this, and mark_available increments this.
    // starts at the total number of images, because they are all initially available
    uint32_t available;

    // if true, size is 1 and heads do not loop, i.e. the image can only be used once
    bool is_static;
public:
    XrSwapchain handle;
    XrSession parent_handle;
    uint32_t width;
    uint32_t height;

    SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<XrSwapchainImageVulkan2KHR> images,
        std::vector<VkDeviceMemory> image_memory,
        uint32_t width,
        uint32_t height,
        bool is_static
    )
      : handle(handle),
        parent_handle(parent_handle),
        images(std::move(images)),
        image_memory(std::move(image_memory)),
        is_static(is_static),
        width(width),
        height(height)
    {
        // intentionally set after initializer list because images moves
        available = images.size();
    }

    XrResult acquire(uint32_t& index_out) {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        if (size >= images.size()) {
            // all images are already acquired
            return XR_ERROR_CALL_ORDER_INVALID;
        }

        index_out = acquire_head;
        acquire_head = (acquire_head + 1) % images.size();
        size += 1;
        return XR_SUCCESS;
    }

    XrResult release() {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        if (size == 0) {
            // no image to release
            return XR_ERROR_CALL_ORDER_INVALID;
        }
        {
            std::lock_guard<std::mutex> wait_lock(available_mutex);
            if (wait_head == acquire_tail) {
                // the current image has not been waited on
                return XR_ERROR_CALL_ORDER_INVALID;
            }
        }

        last_released_index = acquire_tail;
        acquire_tail = (acquire_tail + 1) % images.size();
        size -= 1;
        return XR_SUCCESS;
    }

    XrResult wait(XrDuration timeout) {
        std::unique_lock<std::mutex> lock(available_mutex);
        if (timeout == XR_INFINITE_DURATION) {
            available_cv.wait(lock, [this]{ return available > 0; });
        }
        else {
            bool completed = available_cv.wait_for(
                lock,
                std::chrono::nanoseconds(timeout),
                [this]{ return available > 0; }
            );
            if (!completed) {
                return XR_TIMEOUT_EXPIRED;
            }
        }
        available -= 1;
    }

    void mark_available() {
        {
            std::lock_guard<std::mutex> lock(available_mutex);
            available += 1;
        }
        available_cv.notify_one();
    }

    const std::vector<XrSwapchainImageVulkan2KHR>& get_images() const {
        return images;
    }

    const std::vector<VkDeviceMemory>& get_image_memory() const {
        return image_memory;
    }

    int32_t get_last_released_index() {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        return last_released_index;
    }

    // gets the number of swapchains that are currently acquired
    uint32_t get_size() {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        return size;
    }
};

struct FrameEndJob {
    XrSession session;
    const XrFrameEndInfo* frame_end_info;
    std::vector<XrSwapchain> referenced_swapchains;
    std::promise<void> message_sent_promise;
};

class SessionState {
private:
    std::thread worker_thread;
    // Frame end worker message passing
    std::mutex worker_mutex;
    std::condition_variable worker_cv;
    std::queue<FrameEndJob> worker_queue;

public:
    XrSession handle;
    XrGraphicsBindingVulkan2KHR graphics_binding;
    std::unordered_set<XrSwapchain> swapchains;

    bool is_running = false; // TODO: track this so that we can validate it in xrEndFrame

    explicit SessionState(XrSession handle, XrGraphicsBindingVulkan2KHR graphics_binding)
        : worker_thread(SessionState::worker_thread_loop, this)
    {}

    void worker_thread_loop() {
        while (true) try {
            std::unique_lock<std::mutex> lock(worker_mutex);
            worker_cv.wait(lock, [this]{
                return !worker_queue.empty();
            });
            FrameEndJob job = std::move(worker_queue.front());
            worker_queue.pop();
            lock.unlock();

            auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_END_FRAME);
            SerializeContext s_ctx(msg_out.buffer);
            serialize(&job.session, s_ctx);
            serialize_ptr(job.frame_end_info, 1, s_ctx);
            msg_out.flush();

            // frame end info has been consumed so xrEndFrame can return
            job.message_sent_promise.set_value();

            // wait until server says it's done reading from the swapchain
            auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_END_FRAME_RETURN);

            // mark swapchains as available again
            for (XrSwapchain swapchain : job.referenced_swapchains) {
                SwapchainState& swapchain_state = get_swapchain_state(swapchain).value();
                swapchain_state.mark_available();
            }
        }
        catch (const std::exception& e) {
            spdlog::error("Exception occurred in frame end worker thread: {}", e.what());
            // wait for another job
        }
    }

    void submit_job(FrameEndJob job) {
        std::unique_lock<std::mutex> lock(worker_mutex);
        worker_queue.emplace(std::move(job));
        lock.unlock();
        worker_cv.notify_one();
    }
};

#endif // XRTRANSPORT_VULKAN2_SESSION_STATE_H