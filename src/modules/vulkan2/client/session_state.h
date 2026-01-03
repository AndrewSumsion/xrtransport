#ifndef XRTRANSPORT_VULKAN2_SESSION_STATE_H
#define XRTRANSPORT_VULKAN2_SESSION_STATE_H

#include "vulkan_loader.h"

#include "xrtransport/transport/transport.h"

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
#include <queue>
#include <future>

class SwapchainState;
class SessionState;
class SwapchainImage;

std::optional<SwapchainState&> get_swapchain_state(XrSwapchain handle);
std::optional<SessionState&> get_session_state(XrSession handle);

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SwapchainImage> images,
    uint32_t width,
    uint32_t height,
    bool is_static,
    xrtransport::Transport& transport,
    VulkanLoader& vk
);
SessionState& store_session_state(
    XrSession handle,
    const XrGraphicsBindingVulkan2KHR&& graphics_binding,
    VkQueue queue
);

void destroy_swapchain_state(XrSwapchain handle);
void destroy_session_state(XrSession handle);

struct ReleaseImageJob {
    const XrSwapchainImageReleaseInfo* release_info;
    uint32_t image_index;
    bool should_stop = false;
    std::promise<void> can_return;
};

struct SwapchainImage {
    XrSwapchainImageVulkan2KHR image;
    VkDeviceMemory memory;
    VkFence fence;
};

class SwapchainState {
private:
    std::vector<SwapchainImage> images;

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

    // if true, size is 1 and the image can only be acquired once
    bool is_static;
    bool has_been_acquired = false;

    xrtransport::Transport& transport;
    VulkanLoader& vk;

    std::thread worker_thread;
    std::mutex worker_mutex;
    std::condition_variable worker_cv;
    std::queue<ReleaseImageJob> worker_jobs;

    void worker_thread_loop();

public:
    XrSwapchain handle;
    XrSession parent_handle;
    uint32_t width;
    uint32_t height;

    explicit SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<SwapchainImage> images,
        uint32_t width,
        uint32_t height,
        bool is_static,
        xrtransport::Transport& transport,
        VulkanLoader& vk);

    ~SwapchainState();

    XrResult acquire(uint32_t& index_out);
    XrResult release(uint32_t& index_out);
    XrResult wait(XrDuration timeout);
    void mark_available();

    const std::vector<SwapchainImage>& get_images() const {
        return images;
    }

    int32_t get_last_released_index();

    // gets the number of swapchains that are currently acquired
    uint32_t get_size();

    void submit_release_job(ReleaseImageJob job);
};

struct SessionState {
    XrSession handle;
    XrGraphicsBindingVulkan2KHR graphics_binding;
    VkQueue queue;
    std::unordered_set<XrSwapchain> swapchains;
    bool is_running = false; // TODO: track this so that we can validate it in xrEndFrame

    explicit SessionState(XrSession handle, XrGraphicsBindingVulkan2KHR graphics_binding, VkQueue queue)
        : handle(handle), graphics_binding(std::move(graphics_binding)), queue(queue)
    {}
};

#endif // XRTRANSPORT_VULKAN2_SESSION_STATE_H