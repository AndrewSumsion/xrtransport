#ifndef XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H
#define XRTRANSPORT_VULKAN2_SERVER_SESSION_STATE_H

#include "image_type.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <unordered_set>
#include <vector>
#include <optional>

struct SharedImage;
struct RuntimeImage;
struct SwapchainState;
struct SessionState;

std::optional<std::reference_wrapper<SwapchainState>> get_swapchain_state(XrSwapchain handle);
std::optional<std::reference_wrapper<SessionState>> get_session_state(XrSession handle);

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SharedImage>&& shared_images,
    std::vector<RuntimeImage>&& runtime_images,
    ImageType image_type,
    uint32_t width,
    uint32_t height
);
SessionState& store_session_state(
    XrSession handle
);

void destroy_swapchain_state(XrSwapchain handle);
void destroy_session_state(XrSession handle);

struct SharedImage {
    VkImage image;
    VkDeviceMemory shared_memory;
    VkSemaphore rendering_done;
    VkSemaphore copying_done;
    VkCommandBuffer command_buffer;
    VkFence command_buffer_fence;

    VkImageAspectFlags aspect;
    uint32_t num_levels;
    uint32_t num_layers;
};

struct RuntimeImage {
    VkImage image;
};

struct SwapchainState {
    XrSwapchain handle;
    XrSession parent_handle;
    std::vector<SharedImage> shared_images;
    std::vector<RuntimeImage> runtime_images;
    ImageType image_type;
    uint32_t width;
    uint32_t height;

    explicit SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<SharedImage>&& shared_images,
        std::vector<RuntimeImage>&& runtime_images,
        ImageType image_type,
        uint32_t width,
        uint32_t height
    ) :
        handle(handle),
        parent_handle(parent_handle),
        shared_images(std::move(shared_images)),
        runtime_images(std::move(runtime_images)),
        image_type(image_type),
        width(width),
        height(height)
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