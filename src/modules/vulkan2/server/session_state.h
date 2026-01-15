#ifndef XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H
#define XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <unordered_set>
#include <vector>
#include <optional>

struct SwapchainImage;
struct SwapchainState;
struct SessionState;

std::optional<std::reference_wrapper<SwapchainState>> get_swapchain_state(XrSwapchain handle);
std::optional<std::reference_wrapper<SessionState>> get_session_state(XrSession handle);

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SwapchainImage>&& images
);
SessionState& store_session_state(
    XrSession handle
);

void destroy_swapchain_state(XrSwapchain handle);
void destroy_session_state(XrSession handle);

struct SwapchainImage {
    VkImage image;
    VkDeviceMemory shared_memory;
    VkSemaphore shared_semaphore;
    VkSemaphore copy_finished_semaphore;
    uint64_t copy_finished_counter;
};

struct SwapchainState {
    XrSwapchain handle;
    XrSession parent_handle;
    std::vector<SwapchainImage> images;

    explicit SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<SwapchainImage>&& images
    ) :
        handle(handle),
        parent_handle(parent_handle),
        images(std::move(images))
    {}
};

struct SessionState {
    XrSession handle;
    std::unordered_set<XrSwapchain> swapchains;

    explicit SessionState(XrSession handle)
        : handle(handle)
    {}
};

#endif // XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H