/**
 * TODO:
 * - move image creation to server, import images here
 * - also import one semaphore per image, for which a signal operation is queued up when xrReleaseSwapchainImage is called
 * - do ALL the due dilligence to make sure that exporting and importing images will work
 * - create fence executor on server that sends a swapchain image ready message to the client, which will signal a local fence (binary semaphore)
 *   - this is because sharing memory and semaphores is well-supported, but sharing fences is less well-supported, so we'll just wait on fences via IPC.
 */

#include "vulkan2_common.h"
#include "vulkan_loader.h"
#include "session_state.h"

#include "xrtransport/client/module_interface.h"

#include "xrtransport/handle_exchange.h"
#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <sys/socket.h>

#include <memory>
#include <cassert>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <thread>
#include <tuple>
#include <queue>

using namespace xrtransport;

namespace {

// Instance handler forward declaration
void instance_callback(XrInstance instance, PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr);

// Layer functions
PFN_xrCreateVulkanInstanceKHR pfn_xrCreateVulkanInstanceKHR_next;
XRAPI_ATTR XrResult XRAPI_CALL xrCreateVulkanInstanceKHRImpl(
    XrInstance                                  instance,
    const XrVulkanInstanceCreateInfoKHR*        createInfo,
    VkInstance*                                 vulkanInstance,
    VkResult*                                   vulkanResult);

PFN_xrCreateVulkanDeviceKHR pfn_xrCreateVulkanDeviceKHR_next;
XRAPI_ATTR XrResult XRAPI_CALL xrCreateVulkanDeviceKHRImpl(
    XrInstance                                  instance,
    const XrVulkanDeviceCreateInfoKHR*          createInfo,
    VkDevice*                                   vulkanDevice,
    VkResult*                                   vulkanResult);

PFN_xrGetVulkanGraphicsDevice2KHR pfn_xrGetVulkanGraphicsDevice2KHR_next;
XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanGraphicsDevice2KHRImpl(
    XrInstance                                  instance,
    const XrVulkanGraphicsDeviceGetInfoKHR*     getInfo,
    VkPhysicalDevice*                           vulkanPhysicalDevice);

PFN_xrGetVulkanGraphicsRequirements2KHR pfn_xrGetVulkanGraphicsRequirements2KHR_next;
XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanGraphicsRequirements2KHRImpl(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrGraphicsRequirementsVulkanKHR*            graphicsRequirements);

PFN_xrCreateSwapchain pfn_xrCreateSwapchain_next;
XRAPI_ATTR XrResult XRAPI_CALL xrCreateSwapchainImpl(
    XrSession                                   session,
    const XrSwapchainCreateInfo*                createInfo,
    XrSwapchain*                                swapchain);

PFN_xrDestroySwapchain pfn_xrDestroySwapchain_next;
XRAPI_ATTR XrResult XRAPI_CALL xrDestroySwapchainImpl(
    XrSwapchain                                 swapchain);

PFN_xrEnumerateSwapchainImages pfn_xrEnumerateSwapchainImages_next;
XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainImagesImpl(
    XrSwapchain                                 swapchain,
    uint32_t                                    imageCapacityInput,
    uint32_t*                                   imageCountOutput,
    XrSwapchainImageBaseHeader*                 images);

PFN_xrAcquireSwapchainImage pfn_xrAcquireSwapchainImage_next;
XRAPI_ATTR XrResult XRAPI_CALL xrAcquireSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageAcquireInfo*          acquireInfo,
    uint32_t*                                   index);

PFN_xrWaitSwapchainImage pfn_xrWaitSwapchainImage_next;
XRAPI_ATTR XrResult XRAPI_CALL xrWaitSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageWaitInfo*             waitInfo);

PFN_xrReleaseSwapchainImage pfn_xrReleaseSwapchainImage_next;
XRAPI_ATTR XrResult XRAPI_CALL xrReleaseSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageReleaseInfo*          releaseInfo);

PFN_xrCreateSession pfn_xrCreateSession_next;
XRAPI_ATTR XrResult XRAPI_CALL xrCreateSessionImpl(
    XrInstance                                  instance,
    const XrSessionCreateInfo*                  createInfo,
    XrSession*                                  session);

PFN_xrDestroySession pfn_xrDestroySession_next;
XRAPI_ATTR XrResult XRAPI_CALL xrDestroySessionImpl(
    XrSession                                   session);

PFN_xrEndFrame pfn_xrEndFrame_next;
XRAPI_ATTR XrResult XRAPI_CALL xrEndFrameImpl(
    XrSession                                   session,
    const XrFrameEndInfo*                       frameEndInfo);

// Module metadata
const char* vulkan2_function_names[] {
    "xrCreateVulkanInstanceKHR",
    "xrCreateVulkanDeviceKHR",
    "xrGetVulkanGraphicsDevice2KHR",
    "xrGetVulkanGraphicsRequirements2KHR"
};

ModuleExtension extensions[] {
    {
        .extension_name = XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME,
        .extension_version = 2,
        .num_functions = sizeof(vulkan2_function_names) / sizeof(const char*),
        .function_names = vulkan2_function_names
    }
};

ModuleLayerFunction functions[] {
    {
        .function_name = "xrCreateVulkanInstanceKHR",
        .new_function = (PFN_xrVoidFunction)xrCreateVulkanInstanceKHRImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrCreateVulkanInstanceKHR_next
    },
    {
        .function_name = "xrCreateVulkanDeviceKHR",
        .new_function = (PFN_xrVoidFunction)xrCreateVulkanDeviceKHRImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrCreateVulkanDeviceKHR_next
    },
    {
        .function_name = "xrGetVulkanGraphicsDevice2KHR",
        .new_function = (PFN_xrVoidFunction)xrGetVulkanGraphicsDevice2KHRImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrGetVulkanGraphicsDevice2KHR_next
    },
    {
        .function_name = "xrGetVulkanGraphicsRequirements2KHR",
        .new_function = (PFN_xrVoidFunction)xrGetVulkanGraphicsRequirements2KHRImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrGetVulkanGraphicsRequirements2KHR_next
    },
    {
        .function_name = "xrCreateSwapchain",
        .new_function = (PFN_xrVoidFunction)xrCreateSwapchainImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrCreateSwapchain_next
    },
    {
        .function_name = "xrDestroySwapchain",
        .new_function = (PFN_xrVoidFunction)xrDestroySwapchainImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrDestroySwapchain_next
    },
    {
        .function_name = "xrEnumerateSwapchainImages",
        .new_function = (PFN_xrVoidFunction)xrEnumerateSwapchainImagesImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrEnumerateSwapchainImages_next
    },
    {
        .function_name = "xrAcquireSwapchainImage",
        .new_function = (PFN_xrVoidFunction)xrAcquireSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrAcquireSwapchainImage_next
    },
    {
        .function_name = "xrWaitSwapchainImage",
        .new_function = (PFN_xrVoidFunction)xrWaitSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrWaitSwapchainImage_next
    },
    {
        .function_name = "xrReleaseSwapchainImage",
        .new_function = (PFN_xrVoidFunction)xrReleaseSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrReleaseSwapchainImage_next
    },
    {
        .function_name = "xrCreateSession",
        .new_function = (PFN_xrVoidFunction)xrCreateSessionImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrCreateSession_next
    },
    {
        .function_name = "xrDestroySession",
        .new_function = (PFN_xrVoidFunction)xrDestroySessionImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrDestroySession_next
    },
    {
        .function_name = "xrEndFrame",
        .new_function = (PFN_xrVoidFunction)xrEndFrameImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrEndFrame_next
    }
};

ModuleInfo module_info {
    .num_extensions = sizeof(extensions) / sizeof(ModuleExtension),
    .extensions = extensions,
    .num_functions = sizeof(functions) / sizeof(ModuleLayerFunction),
    .functions = functions,
    .instance_callback = instance_callback,
};

// Static data

std::unique_ptr<xrtransport::Transport> transport;

XrInstance saved_xr_instance;
PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr;

std::unique_ptr<VulkanLoader> vk;

bool graphics_requirements_called = false;

// TODO: override xrEnumerateEnvironmentBlendModes to set this, and check this in xrEndFrame
bool environment_blend_called = false;

// Function implementations

void instance_callback(XrInstance instance, PFN_xrGetInstanceProcAddr pfn) {
    spdlog::info("Instance callback in Vulkan2 client module called");
    saved_xr_instance = instance;
    pfn_xrGetInstanceProcAddr = pfn;
}

void add_extension_if_not_present(std::vector<const char*>& extensions, const char* extension) {
    // return if extension is present
    for (const char* e : extensions) {
        if (std::strncmp(e, extension, VK_MAX_EXTENSION_NAME_SIZE) == 0) {
            return;
        }
    }
    extensions.push_back(extension);
}

XrResult xrCreateVulkanInstanceKHRImpl(
    XrInstance                                  instance,
    const XrVulkanInstanceCreateInfoKHR*        createInfo,
    VkInstance*                                 vulkanInstance,
    VkResult*                                   vulkanResult)
{
    if (instance != saved_xr_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }

    vk = std::make_unique<VulkanLoader>(createInfo->pfnGetInstanceProcAddr);

    // copy create info so that it can be edited
    VkInstanceCreateInfo vulkan_create_info{};
    std::memcpy(&vulkan_create_info, createInfo->vulkanCreateInfo, sizeof(VkInstanceCreateInfo));

    // copy application info so that it can be edited
    VkApplicationInfo vulkan_application_info{};
    std::memcpy(&vulkan_application_info, vulkan_create_info.pApplicationInfo, sizeof(VkApplicationInfo));
    vulkan_create_info.pApplicationInfo = &vulkan_application_info;

    // update requested API version
    vulkan_application_info.apiVersion = std::max(vulkan_application_info.apiVersion, VK_API_VERSION_1_1);

    std::vector<const char*> requested_extensions(
        vulkan_create_info.ppEnabledExtensionNames,
        vulkan_create_info.ppEnabledExtensionNames + vulkan_create_info.enabledExtensionCount
    );
    // For future use:
    // add_extension_if_not_present(requested_extensions, "VK_KHR_example_instance_extension");
    vulkan_create_info.enabledExtensionCount = requested_extensions.size();
    vulkan_create_info.ppEnabledExtensionNames = requested_extensions.data();

    *vulkanResult = vk->CreateInstance(&vulkan_create_info, createInfo->vulkanAllocator, vulkanInstance);
    if (*vulkanResult != VK_SUCCESS) {
        return XR_ERROR_VALIDATION_FAILURE; // not obvious from the spec which error I should return here
    }

    vk->load_post_instance(*vulkanInstance);

    return XR_SUCCESS;
}

XrResult xrCreateVulkanDeviceKHRImpl(
    XrInstance                                  instance,
    const XrVulkanDeviceCreateInfoKHR*          createInfo,
    VkDevice*                                   vulkanDevice,
    VkResult*                                   vulkanResult)
{
    if (instance != saved_xr_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    assert(vk->GetInstanceProcAddr == createInfo->pfnGetInstanceProcAddr);

    // it's odd that this function doesn't get passed a VkInstance, or at least it's not expliclty
    // stated that a runtime should hold onto its VkInstance handle for later use.

    VkDeviceCreateInfo vulkan_create_info{};
    std::memcpy(&vulkan_create_info, createInfo->vulkanCreateInfo, sizeof(VkDeviceCreateInfo));

    std::vector<const char*> requested_extensions(
        vulkan_create_info.ppEnabledExtensionNames,
        vulkan_create_info.ppEnabledExtensionNames + vulkan_create_info.enabledExtensionCount
    );
    add_extension_if_not_present(requested_extensions, VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME);
    add_extension_if_not_present(requested_extensions, VK_EXT_EXTERNAL_MEMORY_DMA_BUF_EXTENSION_NAME);
    vulkan_create_info.enabledExtensionCount = requested_extensions.size();
    vulkan_create_info.ppEnabledExtensionNames = requested_extensions.data();

    *vulkanResult = vk->CreateDevice(createInfo->vulkanPhysicalDevice, &vulkan_create_info, createInfo->vulkanAllocator, vulkanDevice);
    if (*vulkanResult != VK_SUCCESS) {
        return XR_ERROR_VALIDATION_FAILURE;
    }

    return XR_SUCCESS;
}

XrResult xrGetVulkanGraphicsDevice2KHRImpl(
    XrInstance                                  instance,
    const XrVulkanGraphicsDeviceGetInfoKHR*     getInfo,
    VkPhysicalDevice*                           vulkanPhysicalDevice)
try {
    if (instance != saved_xr_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    assert(getInfo->vulkanInstance == vk->instance);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_GET_PHYSICAL_DEVICE);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_RETURN_PHYSICAL_DEVICE);
    DeserializeContext d_ctx(msg_in.stream);
    uint8_t target_uuid[VK_UUID_SIZE]{};
    deserialize_array(target_uuid, VK_UUID_SIZE, d_ctx);

    uint32_t device_count{};
    vk->EnumeratePhysicalDevices(vk->instance, &device_count, nullptr);
    std::vector<VkPhysicalDevice> devices(device_count);
    vk->EnumeratePhysicalDevices(vk->instance, &device_count, devices.data());

    VkPhysicalDevice found_device = VK_NULL_HANDLE;

    for (VkPhysicalDevice phys : devices) {
        VkPhysicalDeviceIDProperties id_props{};
        id_props.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;

        VkPhysicalDeviceProperties2 props2{};
        props2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
        props2.pNext = &id_props;

        vk->GetPhysicalDeviceProperties2(phys, &props2);

        if (std::memcmp(id_props.deviceUUID, target_uuid, VK_UUID_SIZE) == 0) {
            found_device = phys;
            break;
        }
    }

    if (!found_device) {
        spdlog::error("Did not find any devices with UUID supplied by server");
        return XR_ERROR_RUNTIME_FAILURE;
    }

    *vulkanPhysicalDevice = found_device;

    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrGetVulkanGraphicsDevice2KHRImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrGetVulkanGraphicsRequirements2KHRImpl(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrGraphicsRequirementsVulkanKHR*            graphicsRequirements)
{
    if (instance != saved_xr_instance) {
        return XR_ERROR_HANDLE_INVALID;
    }
    graphics_requirements_called = true;
    graphicsRequirements->minApiVersionSupported = XR_MAKE_VERSION(1, 1, 0);
    graphicsRequirements->maxApiVersionSupported = XR_MAKE_VERSION(1, 4, 0);

    return XR_SUCCESS;
}

/**
 * Swapchain creation flow:
 * - client tells server to create swapchain
 * - server creates swapchain
 * - server sends back number of images
 * - client creates local swapchain
 * - client writes dma_buf handles onto the fd exchange socket
 * - client sends import ready command to server
 * - server reads fds off of exchange socket, imports them, and stores the images
 * - server responds to client so that it can free its fds and return from xrCreateSwapchain
 * 
 * Server and client swapchains are kept in sync via xrReleaseSwapchainImage. When an image is released, a
 * fence is inserted onto the Vulkan queue to capture all of the operations that may write to the image.
 * Then, a job is submitted to the swapchain's worker thread, which waits until this fence has been
 * signaled (it is done being written to), and notifies the server, which calls xrAcquireSwapchainImage,
 * xrWaitSwapchainImage, then copies the image onto the server swapchain image it just acquired, and then
 * calls xrReleaseSwapchainImage on it.
 * 
 * When xrEndFrame is called, the client simply validates the input, sends the input to the server, and
 * returns immediately. The server has a per-swapchain (not per-image) fence that is initially set as
 * signaled, and before it starts copying it resets it. When the server receives the XrFrameEndInfo, it
 * collects a deduplicated list of swapchains mentioned by it, and then waits for the fences of each of
 * them to be signaled (done copying) before forwarding onto the real runtime.
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

    auto msg_in1 = transport->await_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN_RETURN);
    DeserializeContext d_ctx(msg_in1.stream);
    deserialize(&server_result, d_ctx);
    if (server_result != XR_SUCCESS) {
        // message ends here if result was not success
        // server will not be expecting local swapchain handles
        return server_result;
    }
    deserialize(&handle, d_ctx);
    deserialize(&num_images, d_ctx);

    std::vector<int> dma_buf_fds;
    dma_buf_fds.reserve(num_images);
    auto& swapchain_state = create_local_swapchain(session_state, *createInfo, handle, num_images, dma_buf_fds);

    // Send FDs
    for (int fd : dma_buf_fds) {
        write_to_dma_buf_exchange(fd);
    }

    auto msg_out2 = transport->start_message(XRTP_MSG_VULKAN2_SWAPCHAIN_IMPORT_READY);
    msg_out2.flush();
    auto msg_in2 = transport->await_message(XRTP_MSG_VULKAN2_SWAPCHAIN_IMPORT_COMPLETE);

    // server has signaled that it finished importing, now we can close our FDs
    for (int fd : dma_buf_fds) {
        close(fd);
    }

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
    
    vk->DeviceWaitIdle(session_state.graphics_binding.device);

    // destroy VkImages
    for (auto& swapchain_image : swapchain_state.get_images()) {
        vk->DestroyImage(session_state.graphics_binding.device, swapchain_image->image.image, nullptr);
        vk->FreeMemory(session_state.graphics_binding.device, swapchain_image->memory, nullptr);
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
    uint32_t num_images = (uint32_t)swapchain_state.get_images().size();

    if (imageCapacityInput == 0) {
        *imageCountOutput = num_images;
        return XR_SUCCESS;
    }

    if (imageCapacityInput < num_images) {
        return XR_ERROR_SIZE_INSUFFICIENT;
    }

    *imageCountOutput = num_images;
    std::memcpy(images, swapchain_state.get_images().data(), num_images * sizeof(XrSwapchainImageVulkan2KHR));

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
{
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

    // Submit a no-op with a fence to the VkQueue to allow the worker thread to wait for all of the work
    // that has been submitted up to this point.
    VkResult vk_result = vk->QueueSubmit(
        session_state.queue,
        0,
        nullptr,
        swapchain_state.get_images()[released_index]->fence
    );
    if (vk_result != VK_SUCCESS) {
        spdlog::error("Failed to add fence to queue: {}", (int)vk_result);
    }

    // submit a job and wait until the worker thread has finished reading releaseInfo
    ReleaseImageJob job{releaseInfo, released_index};
    auto can_return_future = job.can_return.get_future();
    swapchain_state.submit_release_job(std::move(job));
    can_return_future.get();

    return XR_SUCCESS;
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

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SESSION);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&createInfo->createFlags, s_ctx);
    msg_out.flush();

    XrSession handle{};

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_CREATE_SESSION_RETURN);
    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&handle, d_ctx);

    // get VkQueue from provided family index and index
    VkQueue queue{};
    vk->GetDeviceQueue(graphics_binding.device, graphics_binding.queueFamilyIndex, graphics_binding.queueIndex, &queue);

    store_session_state(handle, std::move(graphics_binding), queue);

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
    for (XrSwapchain swapchain : session_state.swapchains) {
        xrDestroySwapchainImpl(swapchain);
    }

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

XrResult xrEndFrameImpl(
    XrSession                                   session,
    const XrFrameEndInfo*                       frameEndInfo)
try {
    auto opt_session_state = get_session_state(session);
    if (!opt_session_state.has_value()) {
        if (pfn_xrEndFrame_next)
            return pfn_xrEndFrame_next(session, frameEndInfo);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SessionState& session_state = opt_session_state.value();

    XrResult result = validate_frame_end(frameEndInfo);
    if (result != XR_SUCCESS) {
        return result;
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_END_FRAME);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&session, s_ctx);
    serialize_ptr(frameEndInfo, 1, s_ctx);
    msg_out.flush();

    // no need to wait for a response

    return XR_SUCCESS;
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrEndFrameImpl: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

} // namespace

// Entry point
XRTP_API_EXPORT void module_get_info(
    xrtp_Transport transport_handle,
    const ModuleInfo** info_out)
{
    transport = std::make_unique<xrtransport::Transport>(transport_handle);
    *info_out = &module_info;
}