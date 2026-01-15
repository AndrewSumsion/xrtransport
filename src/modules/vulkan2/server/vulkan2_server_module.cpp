#include "vulkan2_common.h"
#include "session_state.h"
#include "timeline_semaphore_executor.h"

#include "xrtransport/server/module_interface.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/handle_exchange.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <string>
#include <memory>
#include <stdexcept>
#include <cstring>
#include <tuple>

using namespace xrtransport;

namespace {

std::unique_ptr<Transport> transport;
const FunctionLoader* function_loader;
XrInstance saved_xr_instance;
XrSystemId saved_xr_system_id;
VkInstance saved_vk_instance;
VkPhysicalDevice saved_vk_physical_device;
VkDevice saved_vk_device;

uint32_t queue_family_index;
uint32_t queue_index;
VkQueue saved_vk_queue;

uint8_t physical_device_uuid[VK_UUID_SIZE];

PFN_xrGetSystem pfn_xrGetSystem;
PFN_xrGetVulkanGraphicsRequirements2KHR pfn_xrGetVulkanGraphicsRequirements2KHR;
PFN_xrCreateVulkanInstanceKHR pfn_xrCreateVulkanInstanceKHR;
PFN_xrGetVulkanGraphicsDevice2KHR pfn_xrGetVulkanGraphicsDevice2KHR;
PFN_xrCreateVulkanDeviceKHR pfn_xrCreateVulkanDeviceKHR;

void setup_vulkan_queue() {
    uint32_t queue_family_count{};
    vkGetPhysicalDeviceQueueFamilyProperties(saved_vk_physical_device, &queue_family_count, nullptr);
    std::vector<VkQueueFamilyProperties> queue_families(queue_family_count);
    vkGetPhysicalDeviceQueueFamilyProperties(saved_vk_physical_device, &queue_family_count, queue_families.data());

    bool queue_family_found = false;
    for (size_t i = 0; i < queue_families.size(); i++) {
        auto& queue_family = queue_families[i];

        // need at least one queue
        if (queue_family.queueCount < 1) {
            continue;
        }

        // need transfer, or graphics (which includes transfer commands)
        if (queue_family.queueFlags & VK_QUEUE_TRANSFER_BIT || queue_family.queueFlags & VK_QUEUE_GRAPHICS_BIT) {
            queue_family_found = true;
            queue_family_index = i;
            queue_index = 0;
        }
    }

    if (!queue_family_found) {
        throw std::runtime_error("Unable to find a queue family with at least one queue "
            "and that supports transfer operations");
    }

    vkGetDeviceQueue(saved_vk_device, queue_family_index, queue_index, &saved_vk_queue);
}

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

    // Save PhysicalDevice UUID to send to client
    VkPhysicalDeviceIDProperties vk_device_id_props{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ID_PROPERTIES};

    VkPhysicalDeviceProperties2 vk_device_props{VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROPERTIES_2};
    vk_device_props.pNext = &vk_device_id_props;

    vkGetPhysicalDeviceProperties2(saved_vk_physical_device, &vk_device_props);

    std::memcpy(physical_device_uuid, vk_device_id_props.deviceUUID, VK_UUID_SIZE);

    // find queue family and get VkQueue handle
    setup_vulkan_queue();
}

int32_t find_memory_type(
    const VkPhysicalDeviceMemoryProperties& memory_properties,
    uint32_t memory_type_bits_requirement,
    VkMemoryPropertyFlags required_flags)
{
    const uint32_t memory_count = memory_properties.memoryTypeCount;
    for (uint32_t memory_index = 0; memory_index < memory_count; memory_index++) {
        if (!(memory_type_bits_requirement & (1 << memory_index)))
            continue;

        VkMemoryPropertyFlags flags = memory_properties.memoryTypes[memory_index].propertyFlags;

        if ((flags & required_flags) == required_flags)
            return static_cast<int64_t>(memory_index);
    }

    // failed to find memory type
    return -1;
}

std::tuple<VkImage, VkDeviceMemory, xrtp_Handle> create_image(
    const VkImageCreateInfo& image_create_info,
    const VkPhysicalDeviceMemoryProperties& memory_properties,
    VkMemoryPropertyFlags required_flags
) {
    VkResult vk_result{};

    VkImage image{};
    vk_result = vkCreateImage(saved_vk_device, &image_create_info, nullptr, &image);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Unable to create VkImage: " + std::to_string(vk_result));
    }

    VkMemoryRequirements memory_requirements{};
    vkGetImageMemoryRequirements(saved_vk_device, image, &memory_requirements);

    int64_t memory_type = find_memory_type(memory_properties, memory_requirements.memoryTypeBits, required_flags);
    if (memory_type == -1) {
        throw std::runtime_error("Unable to find memory type with required bits: " + 
            std::to_string(memory_requirements.memoryTypeBits));
    }
    uint64_t memory_type_index = static_cast<uint64_t>(memory_type);

    VkExportMemoryAllocateInfo export_alloc_info{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO};
#ifdef _WIN32
    export_alloc_info.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT;
#else
    export_alloc_info.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;
#endif

    VkMemoryAllocateInfo alloc_info{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc_info.pNext = &export_alloc_info;
    alloc_info.allocationSize = memory_requirements.size;
    alloc_info.memoryTypeIndex = memory_type_index;

    VkDeviceMemory memory{};
    vk_result = vkAllocateMemory(saved_vk_device, &alloc_info, nullptr, &memory);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to allocate swapchain memory: " + std::to_string(vk_result));
    }

    vk_result = vkBindImageMemory(saved_vk_device, image, memory, 0);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to bind memory to image: " + std::to_string(vk_result));
    }

    xrtp_Handle handle{};

#ifdef _WIN32
    #error TODO
#else
    VkMemoryGetFdInfoKHR get_fd_info{VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR};
    get_fd_info.memory = memory;
    get_fd_info.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_FD_BIT;

    int fd{};
    vk_result = vkGetMemoryFdKHR(saved_vk_device, &get_fd_info, &fd);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to get memory fd: " + std::to_string(vk_result));
    }

    handle = static_cast<xrtp_Handle>(fd);
#endif

    return {image, memory, handle};
}

std::tuple<VkSemaphore, xrtp_Handle> create_shared_semaphore() {
    VkExportSemaphoreCreateInfo export_info{VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO};
#ifdef _WIN32
    export_info.handleTypes = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT;
#else
    export_info.handleTypes = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT;
#endif

    VkSemaphoreCreateInfo create_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    create_info.pNext = &export_info;

    VkSemaphore semaphore{};
    VkResult result = vkCreateSemaphore(saved_vk_device, &create_info, nullptr, &semaphore);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to create exportable semaphore: " + std::to_string(result));
    }

    xrtp_Handle handle{};

#ifdef _WIN32
    #error TODO
#else
    VkSemaphoreGetFdInfoKHR get_fd_info{VK_STRUCTURE_TYPE_SEMAPHORE_GET_FD_INFO_KHR};
    get_fd_info.semaphore = semaphore;
    get_fd_info.handleType = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_FD_BIT;

    int fd{};
    VkResult result = vkGetSemaphoreFdKHR(saved_vk_device, &get_fd_info, &fd);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to export FD for semaphore: " + std::to_string(result));
    }

    handle = static_cast<xrtp_Handle>(fd);
#endif

    return {semaphore, handle};
}

VkSemaphore create_timeline_semaphore() {
    VkSemaphoreTypeCreateInfo timeline_create_info{VK_STRUCTURE_TYPE_SEMAPHORE_TYPE_CREATE_INFO};
    timeline_create_info.semaphoreType = VK_SEMAPHORE_TYPE_TIMELINE;
    timeline_create_info.initialValue = 0;

    VkSemaphoreCreateInfo create_info{VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO};
    create_info.pNext = &timeline_create_info;

    VkSemaphore semaphore{};
    VkResult result = vkCreateSemaphore(saved_vk_device, &create_info, nullptr, &semaphore);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to create timeline semaphore: " + std::to_string(result));
    }

    return semaphore;
}

// TODO: might need to select a memory heap and format that allow export
SwapchainState& create_swapchain_state(
    SessionState& session_state,
    const XrSwapchainCreateInfo& create_info,
    XrSwapchain handle,
    uint32_t num_images,
    std::vector<xrtp_Handle>& memory_handles_out,
    std::vector<xrtp_Handle>& semaphore_handles_out
) {
    VkResult vk_result{};

    std::vector<SwapchainImage> images;
    images.reserve(num_images);

    auto image_create_info = create_vk_image_create_info(create_info);
    VkPhysicalDeviceMemoryProperties memory_properties{};
    vkGetPhysicalDeviceMemoryProperties(saved_vk_physical_device, &memory_properties);

    VkMemoryPropertyFlags required_flags = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
    if (create_info.createFlags & XR_SWAPCHAIN_CREATE_PROTECTED_CONTENT_BIT) {
        required_flags |= VK_MEMORY_PROPERTY_PROTECTED_BIT;
    }

    bool is_static = (create_info.createFlags & XR_SWAPCHAIN_CREATE_STATIC_IMAGE_BIT) != 0;

    for (uint32_t i = 0; i < num_images; i++) {
        auto [image, memory, memory_handle] = create_image(
            image_create_info,
            memory_properties,
            required_flags
        );
        
        auto [shared_semaphore, semaphore_handle] = create_shared_semaphore();
        auto timeline_semaphore = create_timeline_semaphore();

        SwapchainImage image_state{
            image,
            memory,
            shared_semaphore,
            timeline_semaphore,
            0
        };

        images.emplace_back(std::move(image_state));
    }

    SwapchainState& result = store_swapchain_state(
        handle,
        session_state.handle,
        std::move(images)
    );

    session_state.swapchains.emplace(handle);
    return result;
}

void handle_get_physical_device(MessageLockIn msg_in) {
    // no data to read
    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_RETURN_PHYSICAL_DEVICE);
    SerializeContext s_ctx(msg_out.buffer);
    serialize_array(physical_device_uuid, VK_UUID_SIZE, s_ctx);
    msg_out.flush();
}

void handle_create_swapchain(MessageLockIn msg_in) {
    XrSession session_handle{};
    XrSwapchainCreateInfo* create_info{};

    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&session_handle, d_ctx);
    deserialize_ptr(&create_info, d_ctx);

    XrSwapchain swapchain_handle{};
    XrResult result = function_loader->pfn_xrCreateSwapchain(session_handle, create_info, &swapchain_handle);

    if (result != XR_SUCCESS) {
        spdlog::error("Failed to create native swapchain: {}", (int)result);
        auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN_RETURN);
        SerializeContext s_ctx(msg_out.buffer);
        serialize(&result, s_ctx);
        msg_out.flush();
        return;
    }

    // Create corresponding swapchain and send memory and semaphore handles over handle exchange
    uint32_t num_images{};
    function_loader->pfn_xrEnumerateSwapchainImages(swapchain_handle, 0, &num_images, nullptr);
    
    SessionState& session_state = get_session_state(session_handle).value();

    std::vector<xrtp_Handle> memory_handles;
    std::vector<xrtp_Handle> semaphore_handles;
    memory_handles.reserve(num_images);
    semaphore_handles.reserve(num_images);

    create_swapchain_state(
        session_state,
        *create_info,
        swapchain_handle,
        num_images,
        memory_handles,
        semaphore_handles
    );

    for (auto handle : memory_handles) {
        // xrtp_write_handle should take care of closing our copy of the handle
        xrtp_write_handle(handle);
    }
    for (auto handle : semaphore_handles) {
        xrtp_write_handle(handle);
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN_RETURN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&result, s_ctx);
    serialize(&swapchain_handle, s_ctx);
    serialize(&num_images, s_ctx);
    msg_out.flush();

    cleanup_ptr(create_info, 1);
}

void destroy_swapchain(XrSwapchain swapchain_handle) {
    SwapchainState& swapchain_state = get_swapchain_state(swapchain_handle).value();
    SessionState& session_state = get_session_state(swapchain_state.parent_handle).value();

    for (auto& image : swapchain_state.images) {
        vkDestroyImage(saved_vk_device, image.image, nullptr);
        vkFreeMemory(saved_vk_device, image.shared_memory, nullptr);
        vkDestroySemaphore(saved_vk_device, image.shared_semaphore, nullptr);
        vkDestroySemaphore(saved_vk_device, image.copy_finished_semaphore, nullptr);
    }

    destroy_swapchain_state(swapchain_handle);
    session_state.swapchains.erase(swapchain_handle);

    function_loader->pfn_xrDestroySwapchain(swapchain_handle);
}

void handle_destroy_swapchain(MessageLockIn msg_in) {
    XrSwapchain swapchain_handle{};

    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&swapchain_handle, d_ctx);

    destroy_swapchain(swapchain_handle);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_DESTROY_SWAPCHAIN_RETURN);
    msg_out.flush();
}

void handle_create_session(MessageLockIn msg_in) {
    // We don't need the client's graphics binding, and we're only using the HMD system id, so
    // we only need to get the create flags from the client.
    XrSessionCreateFlags flags{};
    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&flags, d_ctx);

    XrGraphicsBindingVulkan2KHR graphics_binding{XR_TYPE_GRAPHICS_BINDING_VULKAN2_KHR};
    graphics_binding.instance = saved_vk_instance;
    graphics_binding.physicalDevice = saved_vk_physical_device;
    graphics_binding.device = saved_vk_device;
    graphics_binding.queueFamilyIndex = queue_family_index;
    graphics_binding.queueIndex = queue_index;

    XrSessionCreateInfo create_info{XR_TYPE_SESSION_CREATE_INFO};
    create_info.next = &graphics_binding;
    create_info.createFlags = flags;
    create_info.systemId = saved_xr_system_id;

    XrSession session_handle{};
    XrResult result = function_loader->pfn_xrCreateSession(saved_xr_instance, &create_info, &session_handle);
    if (!XR_SUCCEEDED(result)) {
        throw std::runtime_error("Failed to create XR session: " + std::to_string(result));
    }

    store_session_state(session_handle);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SESSION_RETURN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&session_handle, s_ctx);
    msg_out.flush();
}

void handle_destroy_session(MessageLockIn msg_in) {
    XrSession session_handle{};

    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&session_handle, d_ctx);

    SessionState& session_state = get_session_state(session_handle).value();

    for (XrSwapchain swapchain_handle : session_state.swapchains) {
        // destroys extra images and semaphores along with the XR swapchain
        destroy_swapchain(swapchain_handle);
    }

    function_loader->pfn_xrDestroySession(session_handle);

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_DESTROY_SESSION_RETURN);
    msg_out.flush();
}

void handle_release_swapchain_image(MessageLockIn msg_in) {
    
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
        spdlog::warn("XR_KHR_vulkan_enable2 extension not found on host runtime, not enabling Vulkan2 module");
        return false; // don't enable if runtime doesn't support XR_KHR_vulkan_enable2
    }

    transport = std::make_unique<Transport>(_transport);
    function_loader = _function_loader;

    transport->register_handler(XRTP_MSG_VULKAN2_GET_PHYSICAL_DEVICE, handle_get_physical_device);
    transport->register_handler(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN, handle_create_swapchain);
    transport->register_handler(XRTP_MSG_VULKAN2_DESTROY_SWAPCHAIN, handle_destroy_swapchain);
    transport->register_handler(XRTP_MSG_VULKAN2_CREATE_SESSION, handle_create_session);
    transport->register_handler(XRTP_MSG_VULKAN2_DESTROY_SESSION, handle_destroy_session);
    transport->register_handler(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE, handle_release_swapchain_image);

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

    function_loader->ensure_function_loaded("xrCreateSwapchain", function_loader->pfn_xrCreateSwapchain);
    function_loader->ensure_function_loaded("xrEnumerateSwapchainImages", function_loader->pfn_xrEnumerateSwapchainImages);
    function_loader->ensure_function_loaded("xrDestroySwapchain", function_loader->pfn_xrDestroySwapchain);
    function_loader->ensure_function_loaded("xrCreateSession", function_loader->pfn_xrCreateSession);
    function_loader->ensure_function_loaded("xrDestroySession", function_loader->pfn_xrDestroySession);

    setup_vulkan_instance();
}

void on_shutdown() {
    // no-op
}