#include "vulkan2_common.h"
#include "image_handles.h"
#include "session_state.h"

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

VkCommandPool saved_vk_command_pool;

uint8_t physical_device_uuid[VK_UUID_SIZE];

PFN_xrGetSystem pfn_xrGetSystem;
PFN_xrGetVulkanGraphicsRequirements2KHR pfn_xrGetVulkanGraphicsRequirements2KHR;
PFN_xrCreateVulkanInstanceKHR pfn_xrCreateVulkanInstanceKHR;
PFN_xrGetVulkanGraphicsDevice2KHR pfn_xrGetVulkanGraphicsDevice2KHR;
PFN_xrCreateVulkanDeviceKHR pfn_xrCreateVulkanDeviceKHR;

void select_queue_family() {
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
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Vulkan error on instance creation: " + std::to_string(vk_result));
    }
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("XR error on Vulkan instance creation: " + std::to_string(xr_result));
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

    // choose queue family
    select_queue_family();

    // Setup VkDevice
    const char* vk_device_extensions[]{
#ifdef _WIN32
        VK_KHR_EXTERNAL_MEMORY_WIN32_EXTENSION_NAME,
        VK_KHR_EXTERNAL_SEMAPHORE_WIN32_EXTENSION_NAME,
#else
        VK_KHR_EXTERNAL_MEMORY_FD_EXTENSION_NAME,
        VK_KHR_EXTERNAL_SEMAPHORE_FD_EXTENSION_NAME,
#endif
    };

    float queue_priority = 1.0;

    VkDeviceQueueCreateInfo vk_queue_info{VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO};
    vk_queue_info.queueFamilyIndex = queue_family_index;
    vk_queue_info.queueCount = 1;
    vk_queue_info.pQueuePriorities = &queue_priority;

    VkDeviceCreateInfo vk_device_create_info{VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO};
    vk_device_create_info.queueCreateInfoCount = 1;
    vk_device_create_info.pQueueCreateInfos = &vk_queue_info;
    vk_device_create_info.enabledExtensionCount = sizeof(vk_device_extensions) / sizeof(const char*);
    vk_device_create_info.ppEnabledExtensionNames = vk_device_extensions;

    XrVulkanDeviceCreateInfoKHR xr_device_create_info{XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR};
    xr_device_create_info.systemId = saved_xr_system_id;
    xr_device_create_info.pfnGetInstanceProcAddr = vkGetInstanceProcAddr;
    xr_device_create_info.vulkanPhysicalDevice = saved_vk_physical_device;
    xr_device_create_info.vulkanCreateInfo = &vk_device_create_info;

    xr_result = pfn_xrCreateVulkanDeviceKHR(saved_xr_instance, &xr_device_create_info, &saved_vk_device, &vk_result);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Vulkan error on device creation: " + std::to_string(vk_result));
    }
    if (xr_result != XR_SUCCESS) {
        throw std::runtime_error("XR error on Vulkan device creation: " + std::to_string(xr_result));
    }

    // Create command pool
    VkCommandPoolCreateInfo pool_create_info{VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO};
    pool_create_info.flags =
        VK_COMMAND_POOL_CREATE_TRANSIENT_BIT |
        VK_COMMAND_POOL_CREATE_RESET_COMMAND_BUFFER_BIT;
    pool_create_info.queueFamilyIndex = queue_family_index;

    vk_result = vkCreateCommandPool(saved_vk_device, &pool_create_info, nullptr, &saved_vk_command_pool);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to create command pool: " + std::to_string(vk_result));
    }
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

std::tuple<VkImage, VkDeviceMemory, xrtp_Handle, uint64_t, uint32_t> create_image(
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

    int32_t memory_type = find_memory_type(memory_properties, memory_requirements.memoryTypeBits, required_flags);
    if (memory_type == -1) {
        throw std::runtime_error("Unable to find memory type with required bits: " + 
            std::to_string(memory_requirements.memoryTypeBits));
    }
    uint32_t memory_type_index = static_cast<uint32_t>(memory_type);

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

    return {image, memory, handle, memory_requirements.size, memory_type_index};
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

VkCommandBuffer create_command_buffer() {
    VkCommandBufferAllocateInfo cmdbuf_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO};
    cmdbuf_info.commandPool = saved_vk_command_pool;
    cmdbuf_info.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY;
    cmdbuf_info.commandBufferCount = 1;

    VkCommandBuffer command_buffer{};
    VkResult result = vkAllocateCommandBuffers(saved_vk_device, &cmdbuf_info, &command_buffer);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Unable to allocate command buffer: " + std::to_string(result));
    }

    return command_buffer;
}

// TODO: might need to select and format that allows export
SwapchainState& create_swapchain_state(
    SessionState& session_state,
    const XrSwapchainCreateInfo& create_info,
    XrSwapchain handle,
    std::vector<ImageHandles>& handles_out,
    uint64_t& memory_size_out,
    uint32_t& memory_type_index_out
) {
    VkResult vk_result{};
    XrResult xr_result{};

    uint32_t num_images{};
    xr_result = function_loader->pfn_xrEnumerateSwapchainImages(handle, 0, &num_images, nullptr);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("Unable to get swapchain images: " + std::to_string(xr_result));
    }

    std::vector<XrSwapchainImageVulkan2KHR> runtime_image_structs(num_images, {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN2_KHR});
    auto p_runtime_image_structs = reinterpret_cast<XrSwapchainImageBaseHeader*>(runtime_image_structs.data());
    xr_result = function_loader->pfn_xrEnumerateSwapchainImages(handle, num_images, &num_images, p_runtime_image_structs);
    if (!XR_SUCCEEDED(xr_result)) {
        throw std::runtime_error("Unable to get swapchain images: " + std::to_string(xr_result));
    }

    std::vector<SharedImage> shared_images;
    shared_images.reserve(num_images);
    std::vector<RuntimeImage> runtime_images;
    runtime_images.reserve(num_images);
    std::vector<VkCommandBuffer> command_buffers;
    command_buffers.reserve(num_images);

    handles_out.reserve(num_images);

    auto image_create_info = create_vk_image_create_info(create_info);

    VkPhysicalDeviceMemoryProperties memory_properties{};
    vkGetPhysicalDeviceMemoryProperties(saved_vk_physical_device, &memory_properties);

    VkMemoryPropertyFlags required_flags = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
    if (create_info.createFlags & XR_SWAPCHAIN_CREATE_PROTECTED_CONTENT_BIT) {
        required_flags |= VK_MEMORY_PROPERTY_PROTECTED_BIT;
    }

    bool is_static = (create_info.createFlags & XR_SWAPCHAIN_CREATE_STATIC_IMAGE_BIT) != 0;

    for (uint32_t i = 0; i < num_images; i++) {
        auto [shared_image_handle, memory, memory_handle, memory_size, memory_type_index] = create_image(
            image_create_info,
            memory_properties,
            required_flags
        );
        
        auto [rendering_done, rendering_done_handle] = create_shared_semaphore();
        auto [copying_done, copying_done_handle] = create_shared_semaphore();

        auto command_buffer = create_command_buffer();

        auto runtime_image_handle = runtime_image_structs[i].image;

        shared_images.emplace_back(SharedImage{
            shared_image_handle,
            memory,
            rendering_done,
            copying_done
        });

        runtime_images.emplace_back(RuntimeImage{
            runtime_image_handle,
        });

        command_buffers.emplace_back(command_buffer);

        handles_out.emplace_back(ImageHandles{
            memory_handle,
            rendering_done_handle,
            copying_done_handle
        });

        // just overwrite these values for each image because they should be the same 
        memory_size_out = memory_size;
        memory_type_index_out = memory_type_index;
    }

    ImageType image_type;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT) {
        image_type = ImageType::COLOR;
    }
    else if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT) {
        image_type = ImageType::DEPTH_STENCIL;
    }
    else {
        throw std::runtime_error("Images must be either color or depth-stencil images");
    }

    SwapchainState& result = store_swapchain_state(
        handle,
        session_state.handle,
        std::move(shared_images),
        std::move(runtime_images),
        std::move(command_buffers),
        image_type,
        create_info.width,
        create_info.height
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
    
    SessionState& session_state = get_session_state(session_handle).value();

    std::vector<ImageHandles> handles;

    uint64_t memory_size{};
    uint32_t memory_type_index{};

    create_swapchain_state(
        session_state,
        *create_info,
        swapchain_handle,
        handles,
        memory_size,
        memory_type_index
    );

    for (auto image_handles : handles) {
        // xrtp_write_handle should take care of closing our copy of the handle
        write_image_handles(image_handles);
    }

    uint32_t num_images = static_cast<uint32_t>(handles.size());

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SWAPCHAIN_RETURN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&result, s_ctx);
    serialize(&swapchain_handle, s_ctx);
    serialize(&num_images, s_ctx);
    serialize(&memory_size, s_ctx);
    serialize(&memory_type_index, s_ctx);
    msg_out.flush();

    cleanup_ptr(create_info, 1);
}

void destroy_swapchain(XrSwapchain swapchain_handle) {
    SwapchainState& swapchain_state = get_swapchain_state(swapchain_handle).value();
    SessionState& session_state = get_session_state(swapchain_state.parent_handle).value();

    for (auto& image : swapchain_state.shared_images) {
        vkDestroyImage(saved_vk_device, image.image, nullptr);
        vkFreeMemory(saved_vk_device, image.shared_memory, nullptr);
        vkDestroySemaphore(saved_vk_device, image.rendering_done, nullptr);
        vkDestroySemaphore(saved_vk_device, image.copying_done, nullptr);
    }

    vkFreeCommandBuffers(
        saved_vk_device,
        saved_vk_command_pool,
        static_cast<uint32_t>(swapchain_state.command_buffers.size()),
        swapchain_state.command_buffers.data()
    );

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
    XrResult xr_result{};
    VkResult vk_result{};

    XrSwapchain swapchain_handle{};
    uint32_t src_index{};

    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&swapchain_handle, d_ctx);
    deserialize(&src_index, d_ctx);

    SwapchainState& swapchain_state = get_swapchain_state(swapchain_handle).value();

    uint32_t dest_index{};
    xr_result = function_loader->pfn_xrAcquireSwapchainImage(swapchain_handle, nullptr, &dest_index);

    auto& shared_image = swapchain_state.shared_images.at(src_index);
    auto& runtime_image = swapchain_state.shared_images.at(dest_index);

    VkImage src_image = shared_image.image;
    VkImage dest_image = runtime_image.image;
    VkSemaphore rendering_done = shared_image.rendering_done;
    VkSemaphore copying_done = shared_image.copying_done;
    VkCommandBuffer command_buffer = swapchain_state.command_buffers.at(src_index);

    // record command buffer with these source and destination images

    VkCommandBufferBeginInfo begin_info{VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO};
    begin_info.flags = VK_COMMAND_BUFFER_USAGE_ONE_TIME_SUBMIT_BIT;

    vk_result = vkBeginCommandBuffer(command_buffer, &begin_info);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to begin command buffer: " + std::to_string(vk_result));
    }

    // initialize these values that will be reused later. represents the first mip and all layers
    // and the color/depth-stencil aspect for images.
    VkImageAspectFlags image_aspect_flags;
    if (swapchain_state.image_type == ImageType::COLOR) {
        image_aspect_flags = VK_IMAGE_ASPECT_COLOR_BIT;
    }
    else if (swapchain_state.image_type == ImageType::DEPTH_STENCIL) {
        image_aspect_flags = VK_IMAGE_ASPECT_DEPTH_BIT | VK_IMAGE_ASPECT_STENCIL_BIT;
    }

    VkImageSubresourceRange image_subresource_range{};
    image_subresource_range.aspectMask = image_aspect_flags;
    image_subresource_range.baseMipLevel = 0;
    image_subresource_range.levelCount = 1;
    image_subresource_range.baseArrayLayer = 0;
    image_subresource_range.layerCount = VK_REMAINING_ARRAY_LAYERS;

    VkImageSubresourceLayers image_subresource_layers{};
    image_subresource_layers.aspectMask = image_aspect_flags;
    image_subresource_layers.mipLevel = 0;
    image_subresource_layers.baseArrayLayer = 0;
    image_subresource_layers.layerCount = VK_REMAINING_ARRAY_LAYERS;

    std::array<VkImageMemoryBarrier, 2> image_barriers{{
        {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER},
        {VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER}
    }};

    auto& src_acquire_barrier = image_barriers[0];
    src_acquire_barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    src_acquire_barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL;
    src_acquire_barrier.srcQueueFamilyIndex = VK_QUEUE_FAMILY_EXTERNAL;
    src_acquire_barrier.dstQueueFamilyIndex = queue_family_index;
    src_acquire_barrier.image = src_image;
    src_acquire_barrier.subresourceRange = image_subresource_range;

    auto& dest_transition_barrier = image_barriers[1];
    dest_transition_barrier.dstAccessMask = VK_ACCESS_TRANSFER_READ_BIT;
    dest_transition_barrier.oldLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    dest_transition_barrier.newLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    dest_transition_barrier.image = dest_image;
    dest_transition_barrier.subresourceRange = image_subresource_range;

    vkCmdPipelineBarrier(
        command_buffer,
        VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,
        VK_PIPELINE_STAGE_TRANSFER_BIT,
        0,
        0, nullptr,
        0, nullptr,
        2, image_barriers.data()
    );

    VkImageCopy image_copy{};
    image_copy.srcSubresource = image_subresource_layers; // first mip and all layers
    image_copy.dstSubresource = image_subresource_layers;
    image_copy.srcOffset = {0, 0, 0};
    image_copy.dstOffset = {0, 0, 0};
    // TODO: it's not clear if the depth value of this extent applies to image layers. If only one
    // eye ends up displaying, this would be a good place to look.
    image_copy.extent = {swapchain_state.width, swapchain_state.height, 1};

    vkCmdCopyImage(
        command_buffer,
        src_image, VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,
        dest_image, VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,
        1, &image_copy
    );

    VkImageMemoryBarrier dest_transition_back_barrier{VK_STRUCTURE_TYPE_IMAGE_MEMORY_BARRIER};
    dest_transition_back_barrier.oldLayout = VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL;
    dest_transition_back_barrier.newLayout =
        swapchain_state.image_type == ImageType::COLOR ?
        VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL :
        VK_IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL;
    dest_transition_back_barrier.image = dest_image;
    dest_transition_back_barrier.subresourceRange = image_subresource_range;

    vkCmdPipelineBarrier(
        command_buffer,
        VK_PIPELINE_STAGE_TRANSFER_BIT,
        VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,
        0,
        0, nullptr,
        0, nullptr,
        1, &dest_transition_back_barrier
    );

    vk_result = vkEndCommandBuffer(command_buffer);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to end command buffer: " + std::to_string(vk_result));
    }

    // command buffer recorded, now use it

    XrSwapchainImageWaitInfo wait_info{XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO};
    wait_info.timeout = XR_INFINITE_DURATION;
    xr_result = function_loader->pfn_xrWaitSwapchainImage(swapchain_handle, &wait_info);
    if (xr_result != XR_SUCCESS) {
        throw std::runtime_error("Failed to wait for swapchain image: " + std::to_string(xr_result));
    }

    VkPipelineStageFlags all_commands_stage = VK_PIPELINE_STAGE_ALL_COMMANDS_BIT;
    VkSubmitInfo submit_info{VK_STRUCTURE_TYPE_SUBMIT_INFO};
    submit_info.waitSemaphoreCount = 1;
    submit_info.pWaitSemaphores = &rendering_done;
    submit_info.pWaitDstStageMask = &all_commands_stage;
    submit_info.commandBufferCount = 1;
    submit_info.pCommandBuffers = &command_buffer;
    submit_info.signalSemaphoreCount = 1;
    submit_info.pSignalSemaphores = &copying_done;

    vk_result = vkQueueSubmit(saved_vk_queue, 1, &submit_info, VK_NULL_HANDLE);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to submit copy operation to queue: " + std::to_string(vk_result));
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_RELEASE_SWAPCHAIN_IMAGE_RETURN);
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
    function_loader->ensure_function_loaded("xrAcquireSwapchainImage", function_loader->pfn_xrAcquireSwapchainImage);
    function_loader->ensure_function_loaded("xrWaitSwapchainImage", function_loader->pfn_xrWaitSwapchainImage);
    function_loader->ensure_function_loaded("xrReleaseSwapchainImage", function_loader->pfn_xrReleaseSwapchainImage);

    setup_vulkan_instance();
}

void on_shutdown() {
    // no-op
}