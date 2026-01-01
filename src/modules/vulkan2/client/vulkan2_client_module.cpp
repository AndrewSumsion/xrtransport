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
#include <vector>
#include <thread>

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

class SwapchainState {
private:
    std::vector<XrSwapchainImageVulkan2KHR> images;

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

    SwapchainState(std::vector<XrSwapchainImageVulkan2KHR> images, bool is_static)
        : images(std::move(images)), is_static(is_static)
    {}

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
};

struct SessionState {
    XrSession handle;
    XrGraphicsBindingVulkan2KHR graphics_binding;
    std::unordered_map<XrSwapchain, SwapchainState> swapchains;
};

std::unordered_map<XrSession, SessionState> sessions;
std::unordered_map<XrSwapchain, SwapchainState> swapchains;

// Static data
std::unique_ptr<xrtransport::Transport> transport;

XrInstance saved_xr_instance;
PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr;

VkInstance saved_vk_instance;
PFN_vkGetInstanceProcAddr pfn_vkGetInstanceProcAddr;
PFN_vkCreateInstance pfn_vkCreateInstance;
PFN_vkEnumeratePhysicalDevices pfn_vkEnumeratePhysicalDevices;
PFN_vkGetPhysicalDeviceProperties2 pfn_vkGetPhysicalDeviceProperties2;
PFN_vkCreateDevice pfn_vkCreateDevice;

bool graphics_requirements_called = false;

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

    return XR_SUCCESS;
}

XrResult xrGetVulkanGraphicsDevice2KHRImpl(
    XrInstance                                  instance,
    const XrVulkanGraphicsDeviceGetInfoKHR*     getInfo,
    VkPhysicalDevice*                           vulkanPhysicalDevice)
try {
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
    assert(instance == saved_xr_instance);
    graphics_requirements_called = true;
    graphicsRequirements->minApiVersionSupported = XR_MAKE_VERSION(1, 1, 0);
    graphicsRequirements->maxApiVersionSupported = XR_MAKE_VERSION(1, 4, 0);

    return XR_SUCCESS;
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