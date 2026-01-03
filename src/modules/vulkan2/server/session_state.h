#ifndef XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H
#define XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <unordered_set>
#include <vector>
#include <optional>

struct ClientImage;
struct SwapchainState;
struct SessionState;

std::optional<std::reference_wrapper<SwapchainState>> get_swapchain_state(XrSwapchain handle);
std::optional<std::reference_wrapper<SessionState>> get_session_state(XrSession handle);

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<ClientImage>&& images,
    VkFence copying_fence
);
SessionState& store_session_state(
    XrSession handle,
    const XrGraphicsBindingVulkan2KHR& graphics_binding,
    VkQueue queue
);

void destroy_swapchain_state(XrSwapchain handle);
void destroy_session_state(XrSession handle);

struct ClientImage {
    VkImage image;
    VkDeviceMemory memory;
};

struct SwapchainState {
    XrSwapchain handle;
    XrSession parent_handle;
    std::vector<ClientImage> client_images;
    // if this fence is signaled, this swapchain is not copying
    // if it is reset, the swapchain is copying
    VkFence copying_fence;

    explicit SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<ClientImage>&& images,
        VkFence copying_fence
    ) :
        handle(handle),
        parent_handle(parent_handle),
        client_images(std::move(client_images)),
        copying_fence(copying_fence)
    {}
};

struct SessionState {
    XrSession handle;
    XrGraphicsBindingVulkan2KHR graphics_binding;
    VkQueue queue;
    std::unordered_set<XrSwapchain> swapchains;

    explicit SessionState(XrSession handle, const XrGraphicsBindingVulkan2KHR& graphics_binding, VkQueue queue)
        : handle(handle), graphics_binding(graphics_binding), queue(queue)
    {}
};

#endif // XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H