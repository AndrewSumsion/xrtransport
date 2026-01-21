#include "vulkan_common.h"
#include "vulkan_core.h"

#include "xrtransport/client/module_interface.h"

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

namespace vulkan2 {

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
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrCreateSwapchainImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrCreateSwapchain_next
    },
    {
        .function_name = "xrDestroySwapchain",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrDestroySwapchainImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrDestroySwapchain_next
    },
    {
        .function_name = "xrEnumerateSwapchainImages",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrEnumerateSwapchainImagesImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrEnumerateSwapchainImages_next
    },
    {
        .function_name = "xrAcquireSwapchainImage",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrAcquireSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrAcquireSwapchainImage_next
    },
    {
        .function_name = "xrWaitSwapchainImage",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrWaitSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrWaitSwapchainImage_next
    },
    {
        .function_name = "xrReleaseSwapchainImage",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrReleaseSwapchainImageImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrReleaseSwapchainImage_next
    },
    {
        .function_name = "xrCreateSession",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrCreateSessionImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrCreateSession_next
    },
    {
        .function_name = "xrDestroySession",
        .new_function = (PFN_xrVoidFunction)vulkan_core::xrDestroySessionImpl,
        .old_function = (PFN_xrVoidFunction*)&vulkan_core::pfn_xrDestroySession_next
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

std::unique_ptr<Transport> transport;
XrInstance saved_xr_instance = XR_NULL_HANDLE;
VkInstance saved_vk_instance = VK_NULL_HANDLE;
PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;

// Function implementations

void instance_callback(XrInstance instance, PFN_xrGetInstanceProcAddr pfn) {
    vulkan_core::set_xr_instance(instance);
    saved_xr_instance = instance;
}

void add_string_if_not_present(std::vector<const char*>& strings, const char* string) {
    // return if string is present
    for (const char* e : strings) {
        if (std::strncmp(e, string, VK_MAX_EXTENSION_NAME_SIZE) == 0) {
            return;
        }
    }
    strings.push_back(string);
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

    pfn_vkGetInstanceProcAddr = createInfo->pfnGetInstanceProcAddr;
    vulkan_core::initialize_vulkan(pfn_vkGetInstanceProcAddr);

    auto pfn_vkCreateInstance = 
        reinterpret_cast<PFN_vkCreateInstance>(pfn_vkGetInstanceProcAddr(
            VK_NULL_HANDLE,
            "vkCreateInstance"
        ));
    auto pfn_vkDestroyInstance =
        reinterpret_cast<PFN_vkDestroyInstance>(pfn_vkGetInstanceProcAddr(
            VK_NULL_HANDLE,
            "vkDestroyInstance"
        ));

    if (saved_vk_instance) {
        vkDestroyInstance(saved_vk_instance, nullptr);
        saved_vk_instance = VK_NULL_HANDLE;
    }

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
    // add_string_if_not_present(requested_extensions, "VK_KHR_example_instance_extension");
    vulkan_create_info.enabledExtensionCount = requested_extensions.size();
    vulkan_create_info.ppEnabledExtensionNames = requested_extensions.data();

    std::vector<const char*> requested_layers(
        vulkan_create_info.ppEnabledLayerNames,
        vulkan_create_info.ppEnabledLayerNames + vulkan_create_info.enabledLayerCount
    );
#ifndef NDEBUG
    add_string_if_not_present(requested_layers, "VK_LAYER_KHRONOS_validation");
#endif
    vulkan_create_info.enabledLayerCount = requested_layers.size();
    vulkan_create_info.ppEnabledLayerNames = requested_layers.data();

    *vulkanResult = pfn_vkCreateInstance(&vulkan_create_info, createInfo->vulkanAllocator, vulkanInstance);
    if (*vulkanResult != VK_SUCCESS) {
        return XR_ERROR_VALIDATION_FAILURE; // not obvious from the spec which error I should return here
    }

    saved_vk_instance = *vulkanInstance;

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
    assert(pfn_vkGetInstanceProcAddr == createInfo->pfnGetInstanceProcAddr);

    // it's odd that this function doesn't get passed a VkInstance, or at least it's not expliclty
    // stated that a runtime should hold onto its VkInstance handle for later use.

    VkDeviceCreateInfo vulkan_create_info{};
    std::memcpy(&vulkan_create_info, createInfo->vulkanCreateInfo, sizeof(VkDeviceCreateInfo));

    std::vector<const char*> requested_extensions(
        vulkan_create_info.ppEnabledExtensionNames,
        vulkan_create_info.ppEnabledExtensionNames + vulkan_create_info.enabledExtensionCount
    );
#ifdef _WIN32
    add_string_if_not_present(requested_extensions, VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME);
    add_string_if_not_present(requested_extensions, VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME);
#else
    add_string_if_not_present(requested_extensions, VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME);
    add_string_if_not_present(requested_extensions, VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME);
#endif
    vulkan_create_info.enabledExtensionCount = requested_extensions.size();
    vulkan_create_info.ppEnabledExtensionNames = requested_extensions.data();

    auto pfn_vkCreateDevice =
        reinterpret_cast<PFN_vkCreateDevice>(createInfo->pfnGetInstanceProcAddr(
            saved_vk_instance,
            "vkCreateDevice"
        ));

    *vulkanResult = pfn_vkCreateDevice(createInfo->vulkanPhysicalDevice, &vulkan_create_info, createInfo->vulkanAllocator, vulkanDevice);
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
    assert(getInfo->vulkanInstance == saved_vk_instance);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_GET_PHYSICAL_DEVICE);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_RETURN_PHYSICAL_DEVICE);
    DeserializeContext d_ctx(msg_in.buffer);
    uint8_t target_uuid[VK_UUID_SIZE]{};
    deserialize_array(target_uuid, VK_UUID_SIZE, d_ctx);

    auto pfn_vkEnumeratePhysicalDevices =
        reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(pfn_vkGetInstanceProcAddr(
            saved_vk_instance,
            "vkEnumeratePhysicalDevices"
        ));
    auto pfn_vkGetPhysicalDeviceProperties2 =
        reinterpret_cast<PFN_vkGetPhysicalDeviceProperties2>(pfn_vkGetInstanceProcAddr(
            saved_vk_instance,
            "vkGetPhysicalDeviceProperties2"
        ));

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
    vulkan_core::on_graphics_requirements_called();
    graphicsRequirements->minApiVersionSupported = XR_MAKE_VERSION(1, 1, 0);
    graphicsRequirements->maxApiVersionSupported = XR_MAKE_VERSION(1, 4, 0);

    return XR_SUCCESS;
}

} // namespace vulkan2

// Entry point
XRTP_API_EXPORT void xrtp_get_module_info(
    xrtp_Transport transport_handle,
    const ModuleInfo** info_out)
{
    vulkan2::transport = std::make_unique<Transport>(transport_handle);
    vulkan_core::set_transport(transport_handle);
    *info_out = &vulkan2::module_info;
}