#include "vulkan2_common.h"

#include "xrtransport/client/module_interface.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <memory>
#include <cassert>
#include <cstring>

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

PFN_xrEnumerateSwapchainFormats pfn_xrEnumerateSwapchainFormats_next;
XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainFormatsImpl(
    XrSession                                   session,
    uint32_t                                    formatCapacityInput,
    uint32_t*                                   formatCountOutput,
    int64_t*                                    formats);

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
        .function_name = "xrEnumerateSwapchainFormats",
        .new_function = (PFN_xrVoidFunction)xrEnumerateSwapchainFormatsImpl,
        .old_function = (PFN_xrVoidFunction*)&pfn_xrEnumerateSwapchainFormats_next
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

VkInstance saved_vk_instance;
VkPhysicalDevice saved_vk_physical_device;
VkDevice saved_vk_device;
PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;
PFN_vkCreateInstance pfn_vkCreateInstance;
PFN_vkEnumeratePhysicalDevices pfn_vkEnumeratePhysicalDevices;
PFN_vkGetPhysicalDeviceProperties2 pfn_vkGetPhysicalDeviceProperties2;
PFN_vkCreateDevice pfn_vkCreateDevice;

bool graphics_requirements_called = false;

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
    assert(instance == saved_xr_instance);

    pfn_vkGetInstanceProcAddr = createInfo->pfnGetInstanceProcAddr;
    pfn_vkCreateInstance = reinterpret_cast<PFN_vkCreateInstance>(pfn_vkGetInstanceProcAddr(VK_NULL_HANDLE, "vkCreateInstance"));

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

    *vulkanResult = pfn_vkCreateInstance(&vulkan_create_info, createInfo->vulkanAllocator, vulkanInstance);
    if (*vulkanResult != VK_SUCCESS) {
        return XR_ERROR_VALIDATION_FAILURE; // not obvious from the spec which error I should return here
    }

    saved_vk_instance = *vulkanInstance;
    pfn_vkEnumeratePhysicalDevices = reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(pfn_vkGetInstanceProcAddr(saved_vk_instance, "vkEnumeratePhysicalDevices"));
    pfn_vkGetPhysicalDeviceProperties2 = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(pfn_vkGetInstanceProcAddr(saved_vk_instance, "vkGetPhysicalDeviceProperties2"));
    pfn_vkCreateDevice = reinterpret_cast<PFN_vkCreateDevice>(pfn_vkGetInstanceProcAddr(saved_vk_instance, "vkCreateDevice"));

    return XR_SUCCESS;
}

XrResult xrCreateVulkanDeviceKHRImpl(
    XrInstance                                  instance,
    const XrVulkanDeviceCreateInfoKHR*          createInfo,
    VkDevice*                                   vulkanDevice,
    VkResult*                                   vulkanResult)
{
    assert(instance == saved_xr_instance);
    assert(createInfo->vulkanPhysicalDevice == saved_vk_physical_device);
    assert(pfn_vkGetInstanceProcAddr == createInfo->pfnGetInstanceProcAddr);

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

    *vulkanResult = pfn_vkCreateDevice(createInfo->vulkanPhysicalDevice, &vulkan_create_info, createInfo->vulkanAllocator, vulkanDevice);
    if (*vulkanResult != VK_SUCCESS) {
        return XR_ERROR_VALIDATION_FAILURE;
    }

    saved_vk_device = *vulkanDevice;
    return XR_SUCCESS;
}

XrResult xrGetVulkanGraphicsDevice2KHRImpl(
    XrInstance                                  instance,
    const XrVulkanGraphicsDeviceGetInfoKHR*     getInfo,
    VkPhysicalDevice*                           vulkanPhysicalDevice)
{
    assert(instance == saved_xr_instance);
    assert(getInfo->vulkanInstance == saved_vk_instance);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_GET_PHYSICAL_DEVICE);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_RETURN_PHYSICAL_DEVICE);
    DeserializeContext d_ctx(msg_in.stream);
    uint8_t target_uuid[VK_UUID_SIZE]{};
    deserialize_array(target_uuid, VK_UUID_SIZE, d_ctx);

    uint32_t device_count{};
    pfn_vkEnumeratePhysicalDevices(saved_vk_instance, &device_count, nullptr);
    std::vector<VkPhysicalDevice> devices(device_count);
    pfn_vkEnumeratePhysicalDevices(saved_vk_instance, &device_count, devices.data());

    VkPhysicalDevice found_device = VK_NULL_HANDLE;

    for (VkPhysicalDevice phys : devices) {
        VkPhysicalDeviceIDProperties id_props{};
        id_props.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES;

        VkPhysicalDeviceProperties2 props2{};
        props2.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2;
        props2.pNext = &id_props;

        pfn_vkGetPhysicalDeviceProperties2(phys, &props2);

        if (std::memcmp(id_props.deviceUUID, target_uuid, VK_UUID_SIZE) == 0) {
            found_device = phys;
            break;
        }
    }

    if (!found_device) {
        spdlog::error("Did not find any devices with UUID supplied by server");
        return XR_ERROR_RUNTIME_FAILURE;
    }

    saved_vk_physical_device = found_device;
    *vulkanPhysicalDevice = found_device;

    return XR_SUCCESS;
}

XrResult xrGetVulkanGraphicsRequirements2KHRImpl(
    XrInstance                                  instance,
    XrSystemId                                  systemId,
    XrGraphicsRequirementsVulkanKHR*            graphicsRequirements)
{
    assert(instance == saved_xr_instance);
    graphics_requirements_called = true;
    graphicsRequirements->minApiVersionSupported = XR_MAKE_VERSION(1, 1, 0);
    graphicsRequirements->maxApiVersionSupported = XR_MAKE_VERSION(1, 4, 0);

    return XR_SUCCESS;
}

XrResult xrEnumerateSwapchainFormatsImpl(
    XrSession                                   session,
    uint32_t                                    formatCapacityInput,
    uint32_t*                                   formatCountOutput,
    int64_t*                                    formats)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrCreateSwapchainImpl(
    XrSession                                   session,
    const XrSwapchainCreateInfo*                createInfo,
    XrSwapchain*                                swapchain)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrDestroySwapchainImpl(
    XrSwapchain                                 swapchain)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrEnumerateSwapchainImagesImpl(
    XrSwapchain                                 swapchain,
    uint32_t                                    imageCapacityInput,
    uint32_t*                                   imageCountOutput,
    XrSwapchainImageBaseHeader*                 images)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrAcquireSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageAcquireInfo*          acquireInfo,
    uint32_t*                                   index)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrWaitSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageWaitInfo*             waitInfo)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrReleaseSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageReleaseInfo*          releaseInfo)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrCreateSessionImpl(
    XrInstance                                  instance,
    const XrSessionCreateInfo*                  createInfo,
    XrSession*                                  session)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrDestroySessionImpl(
    XrSession                                   session)
{
    return XR_ERROR_RUNTIME_FAILURE;
}

XrResult xrEndFrameImpl(
    XrSession                                   session,
    const XrFrameEndInfo*                       frameEndInfo)
{
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