#include "vulkan2_common.h"

#include "xrtransport/server/module_interface.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <string>
#include <memory>
#include <stdexcept>
#include <cstring>

using namespace xrtransport;

namespace {

std::unique_ptr<Transport> transport;
const FunctionLoader* function_loader;
XrInstance saved_xr_instance;
XrSystemId saved_xr_system_id;
XrSession saved_xr_session;
VkInstance saved_vk_instance;
VkPhysicalDevice saved_vk_physical_device;
VkDevice saved_vk_device;

uint8_t physical_device_uuid[VK_UUID_SIZE];

PFN_xrGetSystem pfn_xrGetSystem;
PFN_xrGetVulkanGraphicsRequirements2KHR pfn_xrGetVulkanGraphicsRequirements2KHR;
PFN_xrCreateVulkanInstanceKHR pfn_xrCreateVulkanInstanceKHR;
PFN_xrGetVulkanGraphicsDevice2KHR pfn_xrGetVulkanGraphicsDevice2KHR;
PFN_xrCreateVulkanDeviceKHR pfn_xrCreateVulkanDeviceKHR;

void setup_vulkan_instance() {
    XrResult xr_result{};
    VkResult vk_result{};

    XrSystemGetInfo system_get_info{XR_TYPE_SYSTEM_GET_INFO};
    system_get_info.formFactor = XR_FORM_FACTOR_HEAD_MOUNTED_DISPLAY;

    xr_result = pfn_xrGetSystem(saved_xr_instance, &system_get_info, &saved_xr_system_id);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("Failed to get HMD system id: " + std::to_string(xr_result));
    }

    // unused but required by spec
    XrGraphicsRequirementsVulkan2KHR graphics_requirements{XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN2_KHR};

    xr_result = pfn_xrGetVulkanGraphicsRequirements2KHR(saved_xr_instance, saved_xr_system_id, &graphics_requirements);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("Failed to get Vulkan graphics requirements: " + std::to_string(xr_result));
    }

    VkApplicationInfo vk_application_info{VK_STRUCTURE_TYPE_APPLICATION_INFO};
    vk_application_info.pApplicationName = "xrtransport server";
    vk_application_info.applicationVersion = 1;
    vk_application_info.apiVersion = VK_API_VERSION_1_1;

    VkInstanceCreateInfo vk_create_info{VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO};
    vk_create_info.pApplicationInfo = &vk_application_info;

    XrVulkanInstanceCreateInfoKHR xr_create_info{XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR};
    xr_create_info.systemId = saved_xr_system_id;
    xr_create_info.pfnGetInstanceProcAddr = vkGetInstanceProcAddr;
    xr_create_info.vulkanCreateInfo = &vk_create_info;

    xr_result = pfn_xrCreateVulkanInstanceKHR(saved_xr_instance, &xr_create_info, &saved_vk_instance, &vk_result);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("XR error on Vulkan instance creation: " + std::to_string(xr_result));
    }
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Vulkan error on instance creation: " + std::to_string(vk_result));
    }

    XrVulkanGraphicsDeviceGetInfoKHR xr_device_get_info{XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR};
    xr_device_get_info.systemId = saved_xr_system_id;
    xr_device_get_info.vulkanInstance = saved_vk_instance;

    xr_result = pfn_xrGetVulkanGraphicsDevice2KHR(saved_xr_instance, &xr_device_get_info, &saved_vk_physical_device);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("Failed to get Vulkan graphics device: " + std::to_string(xr_result));
    }

    VkPhysicalDeviceIDProperties vk_device_id_props{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES};

    VkPhysicalDeviceProperties2 vk_device_props{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};
    vk_device_props.pNext = &vk_device_id_props;

    vkGetPhysicalDeviceProperties2(saved_vk_physical_device, &vk_device_props);

    std::memcpy(physical_device_uuid, vk_device_id_props.deviceUUID, VK_UUID_SIZE);
}

void handle_get_physical_device(MessageLockIn msg_in) {
    // no data to read
    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_RETURN_PHYSICAL_DEVICE);
    SerializeContext s_ctx(msg_out.buffer);
    serialize_array(physical_device_uuid, VK_UUID_SIZE, s_ctx);
    msg_out.flush();
}

} // namespace

bool on_init(
    xrtp_Transport _transport,
    const FunctionLoader* _function_loader,
    uint32_t num_extensions,
    const XrExtensionProperties* extensions)
{
    bool vulkan2_found = false;
    for (uint32_t i = 0; i < num_extensions; i++) {
        const auto& extension = extensions[i];
        if (extension.extensionName == std::string(XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME)) {
            vulkan2_found = true;
        }
    }

    if (!vulkan2_found) {
        return false; // don't enable if runtime doesn't support XR_KHR_vulkan_enable2
    }

    transport = std::make_unique<Transport>(_transport);
    function_loader = _function_loader;

    transport->register_handler(XRTP_MSG_VULKAN2_GET_PHYSICAL_DEVICE, handle_get_physical_device);

    return true;
}

void get_required_extensions(
    uint32_t* num_extensions_out,
    const char** extensions_out)
{
    *num_extensions_out = 1;
    if (extensions_out) {
        extensions_out[0] = XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME;
    }
}

void on_instance(
    xrtp_Transport transport,
    const FunctionLoader* function_loader,
    XrInstance instance)
{
    saved_xr_instance = instance;

    function_loader->ensure_function_loaded("xrGetSystem", pfn_xrGetSystem);
    function_loader->ensure_function_loaded("xrGetVulkanGraphicsRequirements2KHR", pfn_xrGetVulkanGraphicsRequirements2KHR);
    function_loader->ensure_function_loaded("xrCreateVulkanInstanceKHR", pfn_xrCreateVulkanInstanceKHR);
    function_loader->ensure_function_loaded("xrGetVulkanGraphicsDevice2KHR", pfn_xrGetVulkanGraphicsDevice2KHR);
    function_loader->ensure_function_loaded("xrCreateVulkanDeviceKHR", pfn_xrCreateVulkanDeviceKHR);

    setup_vulkan_instance();
}

void on_shutdown() {
    // no-op
}