#include "session_state.h"

#include "vulkan2_common.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>
#include <optional>
#include <queue>
#include <future>
#include <unordered_map>
#include <tuple>

namespace {

std::unordered_map<XrSwapchain, SwapchainState> swapchain_states;
std::unordered_map<XrSession, SessionState> session_states;

} // namespace

std::optional<std::reference_wrapper<SwapchainState>> get_swapchain_state(XrSwapchain handle) {
    auto it = swapchain_states.find(handle);
    if (it == swapchain_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

std::optional<std::reference_wrapper<SessionState>> get_session_state(XrSession handle) {
    auto it = session_states.find(handle);
    if (it == session_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SwapchainImage> images,
    uint32_t width,
    uint32_t height,
    bool is_static,
    xrtransport::Transport& transport,
    VulkanLoader& vk
) {
    return swapchain_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle,
            parent_handle,
            std::move(images),
            width,
            height,
            is_static,
            transport,
            vk
        )
    ).first->second;
}

SessionState& store_session_state(
    XrSession handle,
    const XrGraphicsBindingVulkan2KHR&& graphics_binding,
    VkQueue queue
) {
    return session_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle,
            std::move(graphics_binding),
            queue
        )
    ).first->second;
}

void destroy_swapchain_state(XrSwapchain handle) {
    swapchain_states.erase(handle);
}

void destroy_session_state(XrSession handle) {
    session_states.erase(handle);
}

SwapchainState::SwapchainState(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SwapchainImage> images,
    uint32_t width,
    uint32_t height,
    bool is_static,
    xrtransport::Transport& transport,
    VulkanLoader& vk
)
    : handle(handle),
    parent_handle(parent_handle),
    images(std::move(images)),
    is_static(is_static),
    width(width),
    height(height),
    transport(transport),
    vk(vk)
{
    // intentionally set after initializer list because images moves
    available = images.size();
}

XrResult SwapchainState::acquire(uint32_t& index_out) {
    std::lock_guard<std::mutex> lock(acquire_mutex);
    if (is_static && has_been_acquired) {
        return XR_ERROR_CALL_ORDER_INVALID;
    }

    if (size >= images.size()) {
        // all images are already acquired
        return XR_ERROR_CALL_ORDER_INVALID;
    }

    index_out = acquire_head;
    acquire_head = (acquire_head + 1) % images.size();
    size += 1;
    has_been_acquired = true;
    return XR_SUCCESS;
}

XrResult SwapchainState::release(uint32_t& index_out) {
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

    index_out = last_released_index;
    return XR_SUCCESS;
}

XrResult SwapchainState::wait(XrDuration timeout) {
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

void SwapchainState::mark_available() {
    {
        std::lock_guard<std::mutex> lock(available_mutex);
        available += 1;
    }
    available_cv.notify_one();
}

int32_t SwapchainState::get_last_released_index() {
    std::lock_guard<std::mutex> lock(acquire_mutex);
    return last_released_index;
}

uint32_t SwapchainState::get_size() {
    std::lock_guard<std::mutex> lock(acquire_mutex);
    return size;
}

void SwapchainState::submit_release_job(ReleaseImageJob job) {
    std::unique_lock<std::mutex> lock(worker_mutex);
    worker_jobs.emplace(std::move(job));
    lock.unlock();
    worker_cv.notify_one();
}

SwapchainState::~SwapchainState() {
    // poison pill
    submit_release_job(ReleaseImageJob{nullptr, true});
    if (worker_thread.joinable()) {
        worker_thread.join();
    }
}

void SwapchainState::worker_thread_loop() {
    while (true) try {
        std::unique_lock<std::mutex> lock(worker_mutex);
        worker_cv.wait(lock, [this]{
            return !worker_jobs.empty();
        });
        ReleaseImageJob job = std::move(worker_jobs.front());
        worker_jobs.pop();
        lock.unlock();

        // handle poison pill
        if (job.should_stop)
            break;

        // For the future, we can copy any information out of job.release_info, but we're not using it now.
        // Signalling this promise allows xrReleaseSwapchainImage to return and job.release_info to become
        // invalid.
        job.can_return.set_value();

        const SwapchainImage& image = images[job.image_index];
        const SessionState& session_state = get_session_state(parent_handle).value();

        // wait for the work on the queue as of the xrReleaseSwapchainImage call to complete
        vk.WaitForFences(session_state.graphics_binding.device, 1, &image.fence, VK_TRUE, UINT64_MAX);
        vk.ResetFences(session_state.graphics_binding.device, 1, &image.fence);

        // notify the server that the image is ready to copy from
        auto msg_out = transport.start_message(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE);
        xrtransport::SerializeContext s_ctx(msg_out.buffer);
        xrtransport::serialize(&handle, s_ctx);
        xrtransport::serialize(&job.image_index, s_ctx);
        msg_out.flush();

        // wait until server says it's done reading from the image
        auto msg_in = transport.await_message(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE_RETURN);

        // notify anyone waiting on this swapchain image
        mark_available();
    }
    catch (const std::exception& e) {
        spdlog::error("Exception occured in swapchain {:#x} worker loop: {}", handle, e.what());
        // continue processing jobs
    }
}