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

#endif // XRTRANSPORT_VULKAN2_VULKAN_LOADER