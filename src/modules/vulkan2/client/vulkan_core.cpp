#include "vulkan_core.h"
#include "vulkan_common.h"
#include "image_handles.h"
#include "vulkan_loader.h"
#include "session_state.h"

#include "xrtransport/handle_exchange.h"
#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <memory>
#include <cstdint>
#include <memory>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <thread>
#include <tuple>
#include <queue>

using namespace xrtransport;

namespace vulkan_core {

// declarations of extern function pointers:
PFN_xrCreateSwapchain pfn_xrCreateSwapchain_next;
PFN_xrDestroySwapchain pfn_xrDestroySwapchain_next;
PFN_xrEnumerateSwapchainImages pfn_xrEnumerateSwapchainImages_next;
PFN_xrAcquireSwapchainImage pfn_xrAcquireSwapchainImage_next;
PFN_xrWaitSwapchainImage pfn_xrWaitSwapchainImage_next;
PFN_xrReleaseSwapchainImage pfn_xrReleaseSwapchainImage_next;
PFN_xrCreateSession pfn_xrCreateSession_next;
PFN_xrDestroySession pfn_xrDestroySession_next;

namespace {

std::unique_ptr<Transport> transport;
std::unique_ptr<VulkanLoader> vk;
XrInstance saved_xr_instance = XR_NULL_HANDLE;
bool graphics_requirements_called = false;

} // namespace

void set_transport(xrtp_Transport handle) {
    transport = std::make_unique<Transport>(handle);
}

void initialize_vulkan(PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr) {
    vk = std::make_unique<VulkanLoader>(pfn_vkGetInstanceProcAddr);
}

void set_xr_instance(XrInstance instance) {
    saved_xr_instance = instance;
}

void on_graphics_requirements_called() {
    graphics_requirements_called = true;
}

VkSemaphore import_semaphore(VkDevice device, xrtp_Handle handle) {
    VkResult result{};

    VkSemaphoreCreateInfo create_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};

    VkSemaphore semaphore{};
    result = vk->CreateSemaphore(device, &create_info, nullptr, &semaphore);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to create semaphore: " + std::to_string(result));
    }

#ifdef _WIN32
    #error TODO
#else
    VkImportSemaphoreFdInfoKHR import_info{VK_STRUCTURE_TYPE_IMPORT_SEMAPHORE_FD_INFO_KHR};
    import_info.semaphore = semaphore;
    import_info.handleType = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT;
    import_info.fd = static_cast<int>(handle);

    result = vk->ImportSemaphoreFdKHR(device, &import_info);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to import semaphore: " + std::to_string(result));
    }
#endif

    return semaphore;
}

VkCommandBuffer record_acquire_command_buffer(
    VkDevice device,
    VkCommandPool command_pool,
    VkImage image,
    ImageType image_type,
    VkImageAspectFlags aspect,
    uint32_t num_levels,
    uint32_t num_layers
) {
    VkResult result{};

    VkCommandBufferAllocateInfo alloc_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    alloc_info.commandPool = command_pool;
    alloc_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    alloc_info.commandBufferCount = 1;

    VkCommandBuffer command_buffer{};
    result = vk->AllocateCommandBuffers(device, &alloc_info, &command_buffer);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to allocate command buffer: " + std::to_string(result));
    }

    VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    result = vk->BeginCommandBuffer(command_buffer, &begin_info);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to begin command buffer: " + std::to_string(result));
    }

    VkImageLayout image_layout;
    if (image_type == ImageType::COLOR) {
        image_layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    }
    else {
        image_layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    }

    VkImageMemoryBarrier image_transition_barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    image_transition_barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    image_transition_barrier.newLayout = image_layout;
    image_transition_barrier.image = image;
    image_transition_barrier.subresourceRange.aspectMask = aspect;
    image_transition_barrier.subresourceRange.baseMipLevel = 0;
    image_transition_barrier.subresourceRange.levelCount = num_levels;
    image_transition_barrier.subresourceRange.baseArrayLayer = 0;
    image_transition_barrier.subresourceRange.layerCount = num_layers;

    vk->CmdPipelineBarrier(
        command_buffer,
        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
        VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
        0,
        0, nullptr,
        0, nullptr,
        1, &image_transition_barrier
    );

    result = vk->EndCommandBuffer(command_buffer);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to record command buffer: " + std::to_string(result));
    }

    return command_buffer;
}

VkCommandBuffer record_release_command_buffer(
    VkDevice device,
    VkCommandPool command_pool,
    VkImage image,
    ImageType image_type,
    uint32_t queue_family_index,
    VkImageAspectFlags aspect,
    uint32_t num_levels,
    uint32_t num_layers
) {
    VkResult result{};

    VkCommandBufferAllocateInfo alloc_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    alloc_info.commandPool = command_pool;
    alloc_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    alloc_info.commandBufferCount = 1;

    VkCommandBuffer command_buffer{};
    result = vk->AllocateCommandBuffers(device, &alloc_info, &command_buffer);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to allocate command buffer: " + std::to_string(result));
    }

    VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    result = vk->BeginCommandBuffer(command_buffer, &begin_info);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to begin command buffer: " + std::to_string(result));
    }

    VkImageLayout image_layout;
    if (image_type == ImageType::COLOR) {
        image_layout = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
    }
    else {
        image_layout = VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    }

    VkImageMemoryBarrier image_barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    // transition to TRANSFER_SRC_OPTIMAL
    image_barrier.oldLayout = image_layout;
    image_barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    // release to QUEUE_FAMILY_EXTERNAL
    image_barrier.srcQueueFamilyIndex = queue_family_index;
    image_barrier.dstQueueFamilyIndex = VK_QUEUE_FAMILY_EXTERNAL;
    // applies to all mips and layers, although only first mip is actually used
    image_barrier.image = image;
    image_barrier.subresourceRange.aspectMask = aspect;
    image_barrier.subresourceRange.baseMipLevel = 0;
    image_barrier.subresourceRange.levelCount = num_levels;
    image_barrier.subresourceRange.baseArrayLayer = 0;
    image_barrier.subresourceRange.layerCount = num_layers;

    vk->CmdPipelineBarrier(
        command_buffer,
        VK_PIPELINE_STAGE_ALL_COMMANDS_BIT,
        VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
        0,
        0, nullptr,
        0, nullptr,
        1, &image_barrier
    );

    result = vk->EndCommandBuffer(command_buffer);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to record command buffer: " + std::to_string(result));
    }

    return command_buffer;
}

SwapchainImage create_image(
    const SessionState& session_state,
    const XrSwapchainCreateInfo& xr_create_info,
    const ImageHandles& image_handles,
    uint64_t memory_size,
    uint32_t memory_type_index,
    ImageType image_type
) {
    VkResult vk_result{};

    VkExternalMemoryImageCreateInfo external_create_info{VK_STRUCTURE_TYPE_EXTERNAL_MEMORY_IMAGE_CREATE_INFO};
#ifdef _WIN32
    external_create_info.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT;
#else
    external_create_info.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;
#endif

    auto vk_create_info = create_vk_image_create_info(xr_create_info);
    vk_create_info.pNext = &external_create_info;
    vk_create_info.usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;

    VkImageAspectFlags aspect = get_aspect_from_format(vk_create_info.format);
    uint32_t num_levels = vk_create_info.mipLevels;
    uint32_t num_layers = vk_create_info.arrayLayers;

    VkImage image{};
    vk_result = vk->CreateImage(session_state.graphics_binding.device, &vk_create_info, nullptr, &image);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to create VkImage: " + std::to_string(vk_result));
    }

#ifdef _WIN32
    #error TODO
#else
    VkImportMemoryFdInfoKHR import_info{VK_STRUCTURE_TYPE_IMPORT_MEMORY_FD_INFO_KHR};
    import_info.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;
    import_info.fd = image_handles.memory_handle;
#endif

    VkMemoryAllocateInfo alloc_info{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc_info.pNext = &import_info;
    alloc_info.allocationSize = memory_size;
    alloc_info.memoryTypeIndex = memory_type_index;

    VkDeviceMemory image_memory{};
    vk_result = vk->AllocateMemory(session_state.graphics_binding.device, &alloc_info, nullptr, &image_memory);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to import memory from FD: " + std::to_string(vk_result));
    }

    vk_result = vk->BindImageMemory(session_state.graphics_binding.device, image, image_memory, 0);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to bind memory to image: " + std::to_string(vk_result));
    }

#ifdef _WIN32
    #error Close handle if needed
#else
    // No need to close the FD, the driver closes it upon successful import.
#endif

    VkSemaphore rendering_done = import_semaphore(session_state.graphics_binding.device, image_handles.rendering_done_handle);
    VkSemaphore copying_done = import_semaphore(session_state.graphics_binding.device, image_handles.copying_done_handle);

    VkFenceCreateInfo fence_info{VK_STRUCTURE_TYPE_FENCE_CREATE_INFO};
    // signaled so that the first wait returns immediately
    fence_info.flags = VK_FENCE_CREATE_SIGNALED_BIT;
    VkFence copying_done_fence{};
    vk_result = vk->CreateFence(session_state.graphics_binding.device, &fence_info, nullptr, &copying_done_fence);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Unable to create fence: " + std::to_string(vk_result));
    }

    VkCommandBuffer acquire_command_buffer = record_acquire_command_buffer(
        session_state.graphics_binding.device,
        session_state.command_pool,
        image,
        image_type,
        aspect,
        num_levels,
        num_layers
    );
    VkCommandBuffer release_command_buffer = record_release_command_buffer(
        session_state.graphics_binding.device,
        session_state.command_pool,
        image,
        image_type,
        session_state.graphics_binding.queueFamilyIndex,
        aspect,
        num_levels,
        num_layers
    );

    return SwapchainImage{
        .image = XrSwapchainImageVulkan2KHR{
            .type = XR_TYPE_SWAPCHAIN_IMAGE_VULKAN2_KHR,
            .next = nullptr,
            .image = image
        },
        .memory = image_memory,
        .rendering_done = rendering_done,
        .copying_done = copying_done,
        .copying_done_fence = copying_done_fence,
        .acquire_command_buffer = acquire_command_buffer,
        .release_command_buffer = release_command_buffer,
        .has_been_acquired = false,
        .aspect = aspect,
        .num_levels = num_levels,
        .num_layers = num_layers
    };
}

/**
 * Swapchain creation flow:
 * - client tells server to create swapchain
 * - server creates swapchain with real runtime
 * - server creates buffer images for each swapchain image
 * - server writes a memory handle and two semaphore handles to the handle exchange for each image
 * - server sends back number of images
 * - client imports memory and semaphores from the handles
 * 
 * See synchronization_model.md for how these swapchains are kept in sync and how the semaphores
 * are used.
 */
XrResult xrCreateSwapchainImpl(
    XrSession                                   session,
    const XrSwapchainCreateInfo*                createInfo,
    XrSwapchain*                                swapchain)
try {
    auto opt_session_state = get_session_state(session);
    if (!opt_session_state.has_value()) {
        if (pfn_xrCreateSwapchain_next)
            return pfn_xrCreateSwapchain_next(session, createInfo, swapchain);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SessionState& session_state = opt_session_state.value();

    auto msg_out1 = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN);
    SerializeContext s_ctx(msg_out1.buffer);
    serialize(&session, s_ctx);
    serialize_ptr(createInfo, 1, s_ctx);
    msg_out1.flush();

    XrResult server_result{};
    XrSwapchain handle{};
    uint32_t num_images{};
    uint64_t memory_size{};
    uint32_t memory_type_index{};

    auto msg_in1 = transport->await_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN_RETURN);
    DeserializeContext d_ctx(msg_in1.buffer);
    deserialize(&server_result, d_ctx);
    if (server_result != XR_SUCCESS) {
        // message ends here if result was not success
        // server will not send shared swapchain handles
        return server_result;
    }
    deserialize(&handle, d_ctx);
    deserialize(&num_images, d_ctx);
    deserialize(&memory_size, d_ctx);
    deserialize(&memory_type_index, d_ctx);

    ImageType image_type;
    XrSwapchainUsageFlags both_mask =
        XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT |
        XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
    if ((createInfo->usageFlags & both_mask) == both_mask) {
        // can't have a swapchain be both depth/stencil and color
        return XR_ERROR_VALIDATION_FAILURE;
    }
    else if (createInfo->usageFlags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT) {
        image_type = ImageType::COLOR;
    }
    else if (createInfo->usageFlags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) {
        image_type = ImageType::DEPTH_STENCIL;
    }
    else {
        // must be either depth/stencil or color images
        return XR_ERROR_VALIDATION_FAILURE;
    }

    std::vector<SwapchainImage> images;
    images.reserve(num_images);

    for (uint32_t i = 0; i < num_images; i++) {
        ImageHandles image_handles = read_image_handles();
        images.emplace_back(create_image(
            session_state,
            *createInfo,
            image_handles,
            memory_size,
            memory_type_index,
            image_type
        ));
    }

    uint32_t width = createInfo->width;
    uint32_t height = createInfo->height;
    bool is_static = (createInfo->createFlags & XR_SWAPCHAIN_CREATE_STATIC_IMAGE_BIT) != 0;

    store_swapchain_state(
        handle,
        session,
        std::move(images),
        width,
        height,
        is_static,
        image_type,
        *vk
    );

    session_state.swapchains.emplace(handle);

    *swapchain = handle;
    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrCreateSwapchainImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrDestroySwapchainImpl(
    XrSwapchain                                 swapchain)
try {
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        if (pfn_xrDestroySwapchain_next)
            return pfn_xrDestroySwapchain_next(swapchain);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();
    SessionState& session_state = get_session_state(swapchain_state.parent_handle).value();
    
    vk->QueueWaitIdle(session_state.queue);

    // destroy VkImages
    for (auto& swapchain_image : swapchain_state.get_images()) {
        vk->FreeCommandBuffers(
            session_state.graphics_binding.device,
            session_state.command_pool,
            1,
            &swapchain_image.acquire_command_buffer
        );
        vk->FreeCommandBuffers(
            session_state.graphics_binding.device,
            session_state.command_pool,
            1,
            &swapchain_image.release_command_buffer
        );
        vk->DestroyImage(session_state.graphics_binding.device, swapchain_image.image.image, nullptr);
        vk->FreeMemory(session_state.graphics_binding.device, swapchain_image.memory, nullptr);
        vk->DestroySemaphore(session_state.graphics_binding.device, swapchain_image.rendering_done, nullptr);
        vk->DestroySemaphore(session_state.graphics_binding.device, swapchain_image.copying_done, nullptr);
        vk->DestroyFence(session_state.graphics_binding.device, swapchain_image.copying_done_fence, nullptr);
    }

    session_state.swapchains.erase(swapchain);
    destroy_swapchain_state(swapchain);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_DESTROY_SWAPCHAIN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&swapchain, s_ctx);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_DESTROY_SWAPCHAIN_RETURN);

    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrDestroySwapchainImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrEnumerateSwapchainImagesImpl(
    XrSwapchain                                 swapchain,
    uint32_t                                    imageCapacityInput,
    uint32_t*                                   imageCountOutput,
    XrSwapchainImageBaseHeader*                 images)
{
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrEnumerateSwapchainImages_next)
            return pfn_xrEnumerateSwapchainImages_next(swapchain, imageCapacityInput, imageCountOutput, images);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();
    auto& swapchain_images = swapchain_state.get_images();
    uint32_t num_images = static_cast<uint32_t>(swapchain_images.size());

    if (imageCapacityInput == 0) {
        *imageCountOutput = num_images;
        return XR_SUCCESS;
    }

    if (imageCapacityInput < num_images) {
        return XR_ERROR_SIZE_INSUFFICIENT;
    }

    *imageCountOutput = num_images;
    auto images_out = reinterpret_cast<XrSwapchainImageVulkan2KHR*>(images);
    for (uint32_t i = 0; i < num_images; i++) {
        std::memcpy(&images_out[i], &swapchain_images[i].image, sizeof(XrSwapchainImageVulkan2KHR));
    }

    return XR_SUCCESS;
}

XrResult xrAcquireSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageAcquireInfo*          acquireInfo,
    uint32_t*                                   index)
{
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrAcquireSwapchainImage_next)
            return pfn_xrAcquireSwapchainImage_next(swapchain, acquireInfo, index);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();
    return swapchain_state.acquire(*index);
}

XrResult xrWaitSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageWaitInfo*             waitInfo)
{
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrWaitSwapchainImage_next)
            return pfn_xrWaitSwapchainImage_next(swapchain, waitInfo);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();

    return swapchain_state.wait(waitInfo->timeout);
}

XrResult xrReleaseSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageReleaseInfo*          releaseInfo)
try {
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrReleaseSwapchainImage_next)
            return pfn_xrReleaseSwapchainImage_next(swapchain, releaseInfo);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();
    SessionState& session_state = get_session_state(swapchain_state.parent_handle).value();

    // Release an image and get its index
    uint32_t released_index{};
    XrResult result = swapchain_state.release(released_index);
    if (result != XR_SUCCESS) {
        return result;
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&swapchain, s_ctx);
    serialize(&released_index, s_ctx);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE_RETURN);

    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrReleaseSwapchainImageImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

const XrGraphicsBindingVulkan2KHR* find_graphics_binding(const XrSessionCreateInfo* create_info) {
    const XrBaseInStructure* chain = reinterpret_cast<const XrBaseInStructure*>(create_info);

    while (chain != nullptr && chain->type != XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR) {
        chain = chain->next;
    }

    return reinterpret_cast<const XrGraphicsBindingVulkan2KHR*>(chain);
}

/**
 * session creation flow:
 * - mostly ignore the XrGraphicsBindingVulkan2KHR on the client side, just store it in SessionState
 * - tell the server to create a session, server returns handle which is used on the client
 * - server already stored VkInstance, VkPhysicalDevice, VkDevice, but it needs to pick queue family and
 *   queue for its own XrGraphicsBindingVulkanKHR. Do this here when creating the session.
 */
XrResult xrCreateSessionImpl(
    XrInstance                                  instance,
    const XrSessionCreateInfo*                  createInfo,
    XrSession*                                  session)
try {
    const XrGraphicsBindingVulkan2KHR* p_graphics_binding = find_graphics_binding(createInfo);
    if (!p_graphics_binding) {
        if (pfn_xrCreateSession_next)
            return pfn_xrCreateSession_next(instance, createInfo, session);
        else
            return XR_ERROR_GRAPHICS_DEVICE_INVALID;
    }

    if (instance != saved_xr_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }

    if (!graphics_requirements_called) {
        return XR_ERROR_GRAPHICS_REQUIREMENTS_CALL_MISSING;
    }

    const XrGraphicsBindingVulkan2KHR& graphics_binding = *p_graphics_binding;

    // if we're using XR_KHR_vulkan_enable, this is the first time we've seen the instance
    // so load the functions here for both extensions
    if (!vk->instance) {
        vk->load_post_instance(graphics_binding.instance);
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SESSION);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&createInfo->createFlags, s_ctx);
    msg_out.flush();

    XrSession handle{};

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_CREATE_SESSION_RETURN);
    DeserializeContext d_ctx(msg_in.buffer);
    deserialize(&handle, d_ctx);

    // get VkQueue from provided family index and index
    VkQueue queue{};
    vk->GetDeviceQueue(graphics_binding.device, graphics_binding.queueFamilyIndex, graphics_binding.queueIndex, &queue);

    // Create a CommandPool for this session
    VkCommandPoolCreateInfo pool_info{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pool_info.queueFamilyIndex = graphics_binding.queueFamilyIndex;

    VkCommandPool command_pool{};
    VkResult result = vk->CreateCommandPool(graphics_binding.device, &pool_info, nullptr, &command_pool);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to create command pool: " + std::to_string(result));
    }

    store_session_state(handle, std::move(graphics_binding), queue, command_pool);

    *session = handle;
    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrCreateSessionImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrDestroySessionImpl(
    XrSession                                   session)
try {
    auto opt_session_state = get_session_state(session);
    if (!opt_session_state.has_value()) {
        if (pfn_xrDestroySession_next)
            return pfn_xrDestroySession_next(session);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SessionState& session_state = opt_session_state.value();

    // copy handles into separate container because xrDestroySwapchainImpl modifies
    // session_state.swapchains
    std::vector<XrSwapchain> swapchain_handles(session_state.swapchains.begin(), session_state.swapchains.end());
    for (XrSwapchain swapchain : swapchain_handles) {
        xrDestroySwapchainImpl(swapchain);
    }

    vk->DestroyCommandPool(session_state.graphics_binding.device, session_state.command_pool, nullptr);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_DESTROY_SESSION);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&session, s_ctx);
    msg_out.flush();
    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_DESTROY_SESSION_RETURN);

    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrDestroySessionImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

} // namespace vulkan_core