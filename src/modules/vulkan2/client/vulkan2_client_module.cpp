/**
 * Still to implement:
 * - swapchain creation
 *   - the flow goes like this:
 *   - client tells server to create swapchain
 *   - server creates swapchain
 *   - server sends back number of images
 *   - client creates local swapchain
 *   - client writes dma_buf handles onto the fd exchange socket
 *   - client sends import ready command to server
 *   - server reads fds off of exchange socket and stores them per swapchain
 *   - server responds to client so that it can return from xrCreateSwapchain
 * - session creation
 *   - mostly ignore the XrGraphicsBindingVulkan2KHR on the client side, just store it in SessionState
 *   - tell the server to create a session, server returns handle which is used on the client
 *   - server already stored VkInstance, VkPhysicalDevice, VkDevice, but it needs to pick queue family and
 *     queue for its own XrGraphicsBindingVulkanKHR. Do this here when creating the session.
 * 
 * server and client swapchains are kept in sync entirely through xrEndFrame and the assumption that they
 * will cycle through them. note that we can't control the order of acquiring swapchains on the server, so
 * we'll just use whichever swapchain the server gives us, but cycle through the client FDs as the copy source
 * 
 * on the client, xrEndFrame will do whatever validation it can, and queue up the submission to a dedicated
 * submission thread and return immediately. On the submission thread, it will send a message to the server
 * that tells it to acquire, wait for, and copy onto a server swap chain. Once it has finished copying, it
 * sends a message back to the client that the client can stop waiting and mark the swapchain available.
 * This allows calls after xrEndFrame and before the next xrWaitSwapchainImage (as long as they don't need
 * to lock the transport stream)
 */

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

#include <sys/socket.h>

#include <memory>
#include <cassert>
#include <cstring>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <thread>
#include <tuple>

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

struct VulkanLoader {
    VkInstance instance = VK_NULL_HANDLE;
    PFN_vkGetInstanceProcAddr GetInstanceProcAddr = nullptr;
    PFN_vkCreateInstance CreateInstance = nullptr;
    PFN_vkEnumeratePhysicalDevices EnumeratePhysicalDevices = nullptr;
    PFN_vkGetPhysicalDeviceProperties2 GetPhysicalDeviceProperties2 = nullptr;
    PFN_vkCreateDevice CreateDevice = nullptr;
    PFN_vkCreateImage CreateImage = nullptr;
    PFN_vkGetImageMemoryRequirements GetImageMemoryRequirements = nullptr;
    PFN_vkGetPhysicalDeviceMemoryProperties GetPhysicalDeviceMemoryProperties = nullptr;
    PFN_vkAllocateMemory AllocateMemory = nullptr;
    PFN_vkBindImageMemory BindImageMemory = nullptr;
    PFN_vkGetMemoryFdKHR GetMemoryFdKHR = nullptr;
    PFN_vkDeviceWaitIdle DeviceWaitIdle = nullptr;
    PFN_vkDestroyImage DestroyImage = nullptr;
    PFN_vkFreeMemory FreeMemory = nullptr;

    VulkanLoader(PFN_vkGetInstanceProcAddr GetInstanceProcAddr)
        : GetInstanceProcAddr(GetInstanceProcAddr)
    {
        // Load pre-instance functions
        load_function("vkCreateInstance", CreateInstance);
    }

    void load_post_instance(VkInstance instance) {
        this->instance = instance;
        load_function("vkEnumeratePhysicalDevices", EnumeratePhysicalDevices);
        load_function("vkGetPhysicalDeviceProperties2", GetPhysicalDeviceProperties2);
        load_function("vkCreateDevice", CreateDevice);
        load_function("vkCreateImage", CreateImage);
        load_function("vkGetImageMemoryRequirements", GetImageMemoryRequirements);
        load_function("vkGetPhysicalDeviceMemoryProperties", GetPhysicalDeviceMemoryProperties);
        load_function("vkAllocateMemory", AllocateMemory);
        load_function("vkBindImageMemory", BindImageMemory);
        load_function("vkGetMemoryFdKHR", GetMemoryFdKHR);
        load_function("vkDeviceWaitIdle", DeviceWaitIdle);
        load_function("vkDestroyImage", DestroyImage);
        load_function("vkFreeMemory", FreeMemory);
    }

private:
    template <typename T>
    void load_function(const char* function_name, T& function) {
        function = reinterpret_cast<T>(GetInstanceProcAddr(instance, function_name));
    }
};

class SwapchainState {
private:

    std::vector<XrSwapchainImageVulkan2KHR> images;

    // need to track these for cleanup
    std::vector<VkDeviceMemory> image_memory;

    // This mutex guards size, acquire_head, acquire_tail
    std::mutex acquire_mutex;
    
    // keeps track of how many images have been acquired
    uint32_t size = 0;

    // ring buffer heads indicating which images have been acquired
    uint32_t acquire_head = 0, acquire_tail = 0;

    // used to make sure that an image has been waited on before it is released
    uint32_t wait_head = 0;

    // This mutex guards wait_head and available
    std::mutex available_mutex;
    std::condition_variable available_cv;

    // semaphore counter for how many images are available to return from xrWaitSwapchainImage.
    // wait waits until this is > 0 and decrements this, and mark_available increments this.
    // starts at the total number of images, because they are all initially available
    uint32_t available;

    // if true, size is 1 and heads do not loop, i.e. the image can only be used once
    bool is_static;
public:
    XrSwapchain handle;
    XrSession parent_handle;

    SwapchainState(
        XrSwapchain handle,
        XrSession parent_handle,
        std::vector<XrSwapchainImageVulkan2KHR> images,
        std::vector<VkDeviceMemory> image_memory,
        bool is_static
    )
      : handle(handle),
        parent_handle(parent_handle),
        images(std::move(images)),
        image_memory(std::move(image_memory)),
        is_static(is_static)
    {
        // intentionally set after initializer list because images moves
        available = images.size();
    }

    XrResult acquire(uint32_t& index_out) {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        if (size >= images.size()) {
            // all images are already acquired
            return XR_ERROR_CALL_ORDER_INVALID;
        }

        acquire_head = (acquire_head + 1) % images.size();
        size += 1;
        return XR_SUCCESS;
    }

    XrResult release() {
        std::lock_guard<std::mutex> lock(acquire_mutex);
        if (size == 0) {
            // no image to release
            return XR_ERROR_CALL_ORDER_INVALID;
        }
        {
            std::lock_guard<std::mutex> wait_lock(available_mutex);
            if (wait_head == acquire_tail) {
                // the current image has not been waited on
                return XR_ERROR_CALL_ORDER_INVALID;
            }
        }

        acquire_tail = (acquire_tail + 1) % images.size();
        size -= 1;
        return XR_SUCCESS;
    }

    XrResult wait(XrDuration timeout) {
        std::unique_lock<std::mutex> lock(available_mutex);
        if (timeout == XR_INFINITE_DURATION) {
            available_cv.wait(lock, [this]{ return available > 0; });
        }
        else {
            bool completed = available_cv.wait_for(
                lock,
                std::chrono::nanoseconds(timeout),
                [this]{ return available > 0; }
            );
            if (!completed) {
                return XR_TIMEOUT_EXPIRED;
            }
        }
        available -= 1;
    }

    void mark_available() {
        std::lock_guard<std::mutex> lock(available_mutex);
        available += 1;
        available_cv.notify_one();
    }

    const std::vector<XrSwapchainImageVulkan2KHR>& get_images() const {
        return images;
    }

    const std::vector<VkDeviceMemory>& get_image_memory() const {
        return image_memory;
    }
};

struct SessionState {
    XrSession handle;
    XrGraphicsBindingVulkan2KHR graphics_binding;
    std::unordered_set<XrSwapchain> swapchains;
};

std::unordered_map<XrSession, SessionState> sessions;
std::unordered_map<XrSwapchain, SwapchainState> swapchains;

// Static data
std::unique_ptr<xrtransport::Transport> transport;

XrInstance saved_xr_instance;
PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr;

std::unique_ptr<VulkanLoader> vk;

bool graphics_requirements_called = false;

bool formats_filled = false;
std::vector<int64_t> supported_formats;

// Function implementations

int dma_buf_exchange_fd;

void open_dma_buf_exchange() {
    char* dma_buf_exchange_path{};

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_GET_DMA_BUF_EXCHANGE_PATH);
    msg_out.flush();

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_RETURN_DMA_BUF_EXCHANGE_PATH);
    DeserializeContext d_ctx(msg_in.stream);
    deserialize_ptr(&dma_buf_exchange_path, d_ctx);

    dma_buf_exchange_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (dma_buf_exchange_fd < 0) {
        throw std::runtime_error("Failed to create DMA BUF exchange socket");
    }

    sockaddr_un addr{};
    addr.sun_family = AF_UNIX;
    std::strncpy(addr.sun_path, dma_buf_exchange_path, sizeof(addr.sun_path - 1));

    if (connect(dma_buf_exchange_fd, (sockaddr*)&addr, sizeof(addr)) < 0) {
        throw std::runtime_error("Failed to connect DMA BUF exchange socket to path: " + std::string(dma_buf_exchange_path));
    }
}

void write_to_dma_buf_exchange(int fd) {
    msghdr msg{};
    char buf[CMSG_SPACE(sizeof(fd))]{};

    // one byte of dummy data to send with FD
    uint8_t dummy = 0;
    iovec io = {
        .iov_base = &dummy,
        .iov_len = 1
    };

    msg.msg_iov = &io;
    msg.msg_iovlen = 1;

    msg.msg_control = buf;
    msg.msg_controllen = sizeof(buf);

    cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
    cmsg->cmsg_level = SOL_SOCKET;
    cmsg->cmsg_type = SCM_RIGHTS;
    cmsg->cmsg_len = CMSG_LEN(sizeof(fd));

    std::memcpy(CMSG_DATA(cmsg), &fd, sizeof(fd));

    if (sendmsg(dma_buf_exchange_fd, &msg, 0) == -1) {
        throw std::runtime_error("Failed to send FD via SCM_RIGHTS");
    }
}

void instance_callback(XrInstance instance, PFN_xrGetInstanceProcAddr pfn) {
    spdlog::info("Instance callback in Vulkan2 client module called");
    saved_xr_instance = instance;
    pfn_xrGetInstanceProcAddr = pfn;

    open_dma_buf_exchange();
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

VkImageCreateInfo create_vk_image_create_info(const XrSwapchainCreateInfo& create_info) {
    VkImageCreateInfo image_create_info{VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO};
    image_create_info.imageType = VK_IMAGE_TYPE_2D;
    image_create_info.format = static_cast<VkFormat>(create_info.format);
    image_create_info.extent = {create_info.width, create_info.height, 1};
    image_create_info.mipLevels = create_info.mipCount;
    image_create_info.arrayLayers = create_info.arraySize * create_info.faceCount;
    image_create_info.tiling = VK_IMAGE_TILING_OPTIMAL;
    // works as long as sampleCount is a power of 2 up to 64
    image_create_info.samples = static_cast<VkSampleCountFlagBits>(create_info.sampleCount);
    image_create_info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    image_create_info.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_COLOR_ATTACHMENT_BIT)
        image_create_info.usage |= VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT)
        image_create_info.usage |= VK_IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_UNORDERED_ACCESS_BIT); // TODO: ignoring for now
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_TRANSFER_SRC_BIT)
        image_create_info.usage |= VK_IMAGE_USAGE_TRANSFER_SRC_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_TRANSFER_DST_BIT)
        image_create_info.usage |= VK_IMAGE_USAGE_TRANSFER_DST_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_SAMPLED_BIT)
        image_create_info.usage |= VK_IMAGE_USAGE_SAMPLED_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_MUTABLE_FORMAT_BIT)
        image_create_info.flags |= VK_IMAGE_CREATE_MUTABLE_FORMAT_BIT;
    if (create_info.usageFlags & XR_SWAPCHAIN_USAGE_INPUT_ATTACHMENT_BIT_KHR)
        image_create_info.usage |= VK_IMAGE_USAGE_INPUT_ATTACHMENT_BIT;
    if (create_info.faceCount == 6)
        image_create_info.flags |= VK_IMAGE_CREATE_CUBE_COMPATIBLE_BIT;
    
    return image_create_info;
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

std::tuple<VkImage, VkDeviceMemory, int> create_image(
    const VkImageCreateInfo& image_create_info,
    const XrGraphicsBindingVulkan2KHR& graphics_binding,
    const VkPhysicalDeviceMemoryProperties& memory_properties,
    VkMemoryPropertyFlags required_flags)
{
    VkResult vk_result{};

    VkImage image{};
    vk_result = vk->CreateImage(graphics_binding.device, &image_create_info, nullptr, &image);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Unable to create VkImage: " + std::to_string(vk_result));
    }

    VkMemoryRequirements memory_requirements{};
    vk->GetImageMemoryRequirements(graphics_binding.device, image, &memory_requirements);

    int64_t memory_type = find_memory_type(memory_properties, memory_requirements.memoryTypeBits, required_flags);
    if (memory_type == -1) {
        throw std::runtime_error("Unable to find memory type with required bits: " + 
            std::to_string(memory_requirements.memoryTypeBits));
    }
    uint64_t memory_type_index = static_cast<uint64_t>(memory_type);

    VkExportMemoryAllocateInfo export_alloc_info{VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO};
    export_alloc_info.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT;

    VkMemoryAllocateInfo alloc_info{VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO};
    alloc_info.pNext = &export_alloc_info;
    alloc_info.allocationSize = memory_requirements.size;
    alloc_info.memoryTypeIndex = memory_type_index;

    VkDeviceMemory memory{};
    vk_result = vk->AllocateMemory(graphics_binding.device, &alloc_info, nullptr, &memory);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to allocate swapchain memory: " + std::to_string(vk_result));
    }

    vk_result = vk->BindImageMemory(graphics_binding.device, image, memory, 0);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to bind memory to image: " + std::to_string(vk_result));
    }

    VkMemoryGetFdInfoKHR get_fd_info{VK_STRUCTURE_TYPE_MEMORY_GET_FD_INFO_KHR};
    get_fd_info.memory = memory;
    get_fd_info.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_DMA_BUF_BIT_EXT;

    int dma_buf_fd = -1;
    vk_result = vk->GetMemoryFdKHR(graphics_binding.device, &get_fd_info, &dma_buf_fd);
    if (vk_result != VK_SUCCESS) {
        throw std::runtime_error("Failed to get memory DMA BUF fd: " + std::to_string(vk_result));
    }

    return {image, memory, dma_buf_fd};
}

// TODO: might need to select a memory heap and format that allow export
SwapchainState& create_local_swapchain(
    SessionState& session_state,
    const XrSwapchainCreateInfo& create_info,
    XrSwapchain handle,
    uint32_t num_images,
    std::vector<int>& fds_out)
{
    VkResult vk_result{};

    std::vector<XrSwapchainImageVulkan2KHR> images;
    std::vector<VkDeviceMemory> image_memory;
    images.reserve(num_images);
    image_memory.reserve(num_images);

    auto image_create_info = create_vk_image_create_info(create_info);
    VkPhysicalDeviceMemoryProperties memory_properties{};
    vk->GetPhysicalDeviceMemoryProperties(session_state.graphics_binding.physicalDevice, &memory_properties);

    VkMemoryPropertyFlags required_flags = VK_MEMORY_PROPERTY_DEVICE_LOCAL_BIT;
    if (create_info.createFlags & XR_SWAPCHAIN_CREATE_PROTECTED_CONTENT_BIT) {
        required_flags |= VK_MEMORY_PROPERTY_PROTECTED_BIT;
    }

    bool is_static = (create_info.createFlags & XR_SWAPCHAIN_CREATE_STATIC_IMAGE_BIT) != 0;

    for (uint32_t i = 0; i < num_images; i++) {
        auto [image, memory, dma_buf_fd] = create_image(
            image_create_info,
            session_state.graphics_binding,
            memory_properties,
            required_flags);
        images.push_back({
            XR_TYPE_SWAPCHAIN_IMAGE_VULKAN2_KHR,
            nullptr,
            image
        });
        image_memory.push_back(memory);
        fds_out.push_back(dma_buf_fd);
    }
    
    SwapchainState result(handle, session_state.handle, std::move(images), std::move(image_memory), is_static);
    SwapchainState& moved_reference = swapchains.emplace(handle, std::move(result)).first->second;
    session_state.swapchains.emplace(moved_reference);
    return moved_reference;
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
 * server and client swapchains are kept in sync entirely through xrEndFrame and the assumption that they
 * will cycle through them. note that we can't control the order of acquiring swapchains on the server, so
 * we'll just use whichever swapchain the server gives us, but cycle through the client images as the copy
 * source.
 * 
 * on the client, xrEndFrame will do whatever validation it can, and queue up the submission to a dedicated
 * submission thread and return immediately. On the submission thread, it will send a message to the server
 * that tells it to acquire, wait for, and copy onto a server swap chain. Once the server has has finished
 * copying (waiting on a fence), it sends a message back to the client that the client can stop waiting and
 * mark the swapchain available. This allows calls after xrEndFrame and before the next xrWaitSwapchainImage
 * to occur (as long as they don't need to lock the transport stream).
 */
XrResult xrCreateSwapchainImpl(
    XrSession                                   session,
    const XrSwapchainCreateInfo*                createInfo,
    XrSwapchain*                                swapchain)
try {
    auto it = sessions.find(session);
    if (it == sessions.end()) {
        if (pfn_xrCreateSwapchain_next)
            return pfn_xrCreateSwapchain_next(session, createInfo, swapchain);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SessionState& session_state = it->second;

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
    auto it = swapchains.find(swapchain);
    if (it == swapchains.end()) {
        if (pfn_xrDestroySwapchain_next)
            return pfn_xrDestroySwapchain_next(swapchain);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = it->second;
    SessionState& session_state = sessions.at(swapchain_state.parent_handle);
    
    vk->DeviceWaitIdle(session_state.graphics_binding.device);

    // destroy VkImages
    for (auto& swapchain_image : swapchain_state.get_images()) {
        vk->DestroyImage(session_state.graphics_binding.device, swapchain_image.image, nullptr);
    }

    // free memory
    for (VkDeviceMemory memory : swapchain_state.get_image_memory()) {
        vk->FreeMemory(session_state.graphics_binding.device, memory, nullptr);
    }

    session_state.swapchains.erase(swapchain);
    swapchains.erase(swapchain);

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
    auto it = swapchains.find(swapchain);
    if (it == swapchains.end()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrEnumerateSwapchainImages_next)
            return pfn_xrEnumerateSwapchainImages_next(swapchain, imageCapacityInput, imageCountOutput, images);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = it->second;
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
    auto it = swapchains.find(swapchain);
    if (it == swapchains.end()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrAcquireSwapchainImage_next)
            return pfn_xrAcquireSwapchainImage_next(swapchain, acquireInfo, index);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = it->second;
    return swapchain_state.acquire(*index);
}

XrResult xrWaitSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageWaitInfo*             waitInfo)
{
    auto it = swapchains.find(swapchain);
    if (it == swapchains.end()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrWaitSwapchainImage_next)
            return pfn_xrWaitSwapchainImage_next(swapchain, waitInfo);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = it->second;

    return swapchain_state.wait(waitInfo->timeout);
}

XrResult xrReleaseSwapchainImageImpl(
    XrSwapchain                                 swapchain,
    const XrSwapchainImageReleaseInfo*          releaseInfo)
{
    auto it = swapchains.find(swapchain);
    if (it == swapchains.end()) {
        // forward to next layer in case there's another layer that implements this
        if (pfn_xrReleaseSwapchainImage_next)
            return pfn_xrReleaseSwapchainImage_next(swapchain, releaseInfo);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = it->second;

    return swapchain_state.release();
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

    const XrGraphicsBindingVulkan2KHR& graphics_binding = *p_graphics_binding;

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_CREATE_SESSION);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&createInfo->createFlags, s_ctx);
    msg_out.flush();

    XrSession handle{};

    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_CREATE_SESSION_RETURN);
    DeserializeContext d_ctx(msg_in.stream);
    deserialize(&handle, d_ctx);

    sessions.emplace(handle, SessionState{handle, graphics_binding, {}});

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
    auto it = sessions.find(session);
    if (it == sessions.end()) {
        if (pfn_xrDestroySession_next)
            return pfn_xrDestroySession_next(session);
        else
            return XR_ERROR_HANDLE_INVALID;
    }

    SessionState& session_state = it->second;
    for (XrSwapchain swapchain : session_state.swapchains) {
        xrDestroySwapchainImpl(swapchain);
    }

    auto msg_out = transport->start_message(XRTP_MSG_VULKAN2_DESTROY_SESSION);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&session, s_ctx);
    msg_out.flush();
    auto msg_in = transport->await_message(XRTP_MSG_VULKAN2_DESTROY_SESSION_RETURN);
}
catch (const std::exception& e) {
    spdlog::error("Exception thrown in xrDestroySessionImpl: {}", e.what());
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