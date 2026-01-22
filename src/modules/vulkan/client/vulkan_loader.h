// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_VULKAN2_VULKAN_LOADER
#define XRTRANSPORT_VULKAN2_VULKAN_LOADER

#include <vulkan/vulkan.h>

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
    PFN_vkDeviceWaitIdle DeviceWaitIdle = nullptr;
    PFN_vkDestroyImage DestroyImage = nullptr;
    PFN_vkFreeMemory FreeMemory = nullptr;
    PFN_vkGetDeviceQueue GetDeviceQueue = nullptr;
    PFN_vkQueueSubmit QueueSubmit = nullptr;
    PFN_vkCreateFence CreateFence = nullptr;
    PFN_vkWaitForFences WaitForFences = nullptr;
    PFN_vkResetFences ResetFences = nullptr;
    PFN_vkCreateSemaphore CreateSemaphore = nullptr;
    PFN_vkDestroySemaphore DestroySemaphore = nullptr;
    PFN_vkDestroyFence DestroyFence = nullptr;
    PFN_vkFreeCommandBuffers FreeCommandBuffers = nullptr;
    PFN_vkCreateCommandPool CreateCommandPool = nullptr;
    PFN_vkDestroyCommandPool DestroyCommandPool = nullptr;
    PFN_vkAllocateCommandBuffers AllocateCommandBuffers = nullptr;
    PFN_vkBeginCommandBuffer BeginCommandBuffer = nullptr;
    PFN_vkEndCommandBuffer EndCommandBuffer = nullptr;
    PFN_vkCmdPipelineBarrier CmdPipelineBarrier = nullptr;
    PFN_vkQueueWaitIdle QueueWaitIdle = nullptr;
#ifdef _WIN32

#else
    PFN_vkImportSemaphoreFdKHR ImportSemaphoreFdKHR = nullptr;
#endif

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
        load_function("vkDeviceWaitIdle", DeviceWaitIdle);
        load_function("vkDestroyImage", DestroyImage);
        load_function("vkFreeMemory", FreeMemory);
        load_function("vkGetDeviceQueue", GetDeviceQueue);
        load_function("vkQueueSubmit", QueueSubmit);
        load_function("vkCreateFence", CreateFence);
        load_function("vkWaitForFences", WaitForFences);
        load_function("vkResetFences", ResetFences);
        load_function("vkCreateSemaphore", CreateSemaphore);
        load_function("vkDestroySemaphore", DestroySemaphore);
        load_function("vkDestroyFence", DestroyFence);
        load_function("vkFreeCommandBuffers", FreeCommandBuffers);
        load_function("vkCreateCommandPool", CreateCommandPool);
        load_function("vkDestroyCommandPool", DestroyCommandPool);
        load_function("vkAllocateCommandBuffers", AllocateCommandBuffers);
        load_function("vkBeginCommandBuffer", BeginCommandBuffer);
        load_function("vkEndCommandBuffer", EndCommandBuffer);
        load_function("vkCmdPipelineBarrier", CmdPipelineBarrier);
        load_function("vkQueueWaitIdle", QueueWaitIdle);
#ifdef _WIN32

#else
        load_function("vkImportSemaphoreFdKHR", ImportSemaphoreFdKHR);
#endif
    }

private:
    template <typename T>
    void load_function(const char* function_name, T& function) {
        function = reinterpret_cast<T>(GetInstanceProcAddr(instance, function_name));
    }
};

#endif // XRTRANSPORT_VULKAN2_VULKAN_LOADER