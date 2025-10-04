

#include "dispatch.h"
#include "runtime.h"

#include "openxr/openxr.h"

#include <stdexcept>

namespace xrtransport {


#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings

XRAPI_ATTR XrResult XRAPI_CALL xrSetAndroidApplicationThreadKHR(XrSession session, XrAndroidThreadTypeKHR threadType, uint32_t threadId) {
    try {
        return runtime.xrSetAndroidApplicationThreadKHR(session, threadType, threadId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSwapchainAndroidSurfaceKHR(XrSession session, const XrSwapchainCreateInfo* info, XrSwapchain* swapchain, jobject* surface) {
    try {
        return runtime.xrCreateSwapchainAndroidSurfaceKHR(session, info, swapchain, surface);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance
#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings

XRAPI_ATTR XrResult XRAPI_CALL xrPerfSettingsSetPerformanceLevelEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsLevelEXT level) {
    try {
        return runtime.xrPerfSettingsSetPerformanceLevelEXT(session, domain, level);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query

XRAPI_ATTR XrResult XRAPI_CALL xrThermalGetTemperatureTrendEXT(XrSession session, XrPerfSettingsDomainEXT domain, XrPerfSettingsNotificationLevelEXT* notificationLevel, float* tempHeadroom, float* tempSlope) {
    try {
        return runtime.xrThermalGetTemperatureTrendEXT(session, domain, notificationLevel, tempHeadroom, tempSlope);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils

XRAPI_ATTR XrResult XRAPI_CALL xrSetDebugUtilsObjectNameEXT(XrInstance instance, const XrDebugUtilsObjectNameInfoEXT* nameInfo) {
    try {
        return runtime.xrSetDebugUtilsObjectNameEXT(instance, nameInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateDebugUtilsMessengerEXT(XrInstance instance, const XrDebugUtilsMessengerCreateInfoEXT* createInfo, XrDebugUtilsMessengerEXT* messenger) {
    try {
        return runtime.xrCreateDebugUtilsMessengerEXT(instance, createInfo, messenger);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyDebugUtilsMessengerEXT(XrDebugUtilsMessengerEXT messenger) {
    try {
        return runtime.xrDestroyDebugUtilsMessengerEXT(messenger);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSubmitDebugUtilsMessageEXT(XrInstance instance, XrDebugUtilsMessageSeverityFlagsEXT messageSeverity, XrDebugUtilsMessageTypeFlagsEXT messageTypes, const XrDebugUtilsMessengerCallbackDataEXT* callbackData) {
    try {
        return runtime.xrSubmitDebugUtilsMessageEXT(instance, messageSeverity, messageTypes, callbackData);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSessionBeginDebugUtilsLabelRegionEXT(XrSession session, const XrDebugUtilsLabelEXT* labelInfo) {
    try {
        return runtime.xrSessionBeginDebugUtilsLabelRegionEXT(session, labelInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSessionEndDebugUtilsLabelRegionEXT(XrSession session) {
    try {
        return runtime.xrSessionEndDebugUtilsLabelRegionEXT(session);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSessionInsertDebugUtilsLabelEXT(XrSession session, const XrDebugUtilsLabelEXT* labelInfo) {
    try {
        return runtime.xrSessionInsertDebugUtilsLabelEXT(session, labelInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetOpenGLGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLKHR* graphicsRequirements) {
    try {
        return runtime.xrGetOpenGLGraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetOpenGLESGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsOpenGLESKHR* graphicsRequirements) {
    try {
        return runtime.xrGetOpenGLESGraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanInstanceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetVulkanInstanceExtensionsKHR(instance, systemId, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanDeviceExtensionsKHR(XrInstance instance, XrSystemId systemId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetVulkanDeviceExtensionsKHR(instance, systemId, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanGraphicsDeviceKHR(XrInstance instance, XrSystemId systemId, VkInstance vkInstance, VkPhysicalDevice* vkPhysicalDevice) {
    try {
        return runtime.xrGetVulkanGraphicsDeviceKHR(instance, systemId, vkInstance, vkPhysicalDevice);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsVulkanKHR* graphicsRequirements) {
    try {
        return runtime.xrGetVulkanGraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetD3D11GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D11KHR* graphicsRequirements) {
    try {
        return runtime.xrGetD3D11GraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetD3D12GraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsD3D12KHR* graphicsRequirements) {
    try {
        return runtime.xrGetD3D12GraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable

XRAPI_ATTR XrResult XRAPI_CALL xrGetMetalGraphicsRequirementsKHR(XrInstance instance, XrSystemId systemId, XrGraphicsRequirementsMetalKHR* graphicsRequirements) {
    try {
        return runtime.xrGetMetalGraphicsRequirementsKHR(instance, systemId, graphicsRequirements);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask

XRAPI_ATTR XrResult XRAPI_CALL xrGetVisibilityMaskKHR(XrSession session, XrViewConfigurationType viewConfigurationType, uint32_t viewIndex, XrVisibilityMaskTypeKHR visibilityMaskType, XrVisibilityMaskKHR* visibilityMask) {
    try {
        return runtime.xrGetVisibilityMaskKHR(session, viewConfigurationType, viewIndex, visibilityMaskType, visibilityMask);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay
#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time

XRAPI_ATTR XrResult XRAPI_CALL xrConvertWin32PerformanceCounterToTimeKHR(XrInstance instance, const LARGE_INTEGER* performanceCounter, XrTime* time) {
    try {
        return runtime.xrConvertWin32PerformanceCounterToTimeKHR(instance, performanceCounter, time);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToWin32PerformanceCounterKHR(XrInstance instance, XrTime time, LARGE_INTEGER* performanceCounter) {
    try {
        return runtime.xrConvertTimeToWin32PerformanceCounterKHR(instance, time, performanceCounter);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time

XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimespecTimeToTimeKHR(XrInstance instance, const struct timespec* timespecTime, XrTime* time) {
    try {
        return runtime.xrConvertTimespecTimeToTimeKHR(instance, timespecTime, time);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrConvertTimeToTimespecTimeKHR(XrInstance instance, XrTime time, struct timespec* timespecTime) {
    try {
        return runtime.xrConvertTimeToTimespecTimeKHR(instance, time, timespecTime);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorMSFT(XrSession session, const XrSpatialAnchorCreateInfoMSFT* createInfo, XrSpatialAnchorMSFT* anchor) {
    try {
        return runtime.xrCreateSpatialAnchorMSFT(session, createInfo, anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorSpaceMSFT(XrSession session, const XrSpatialAnchorSpaceCreateInfoMSFT* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateSpatialAnchorSpaceMSFT(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpatialAnchorMSFT(XrSpatialAnchorMSFT anchor) {
    try {
        return runtime.xrDestroySpatialAnchorMSFT(anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation

XRAPI_ATTR XrResult XRAPI_CALL xrSetInputDeviceActiveEXT(XrSession session, XrPath interactionProfile, XrPath topLevelPath, XrBool32 isActive) {
    try {
        return runtime.xrSetInputDeviceActiveEXT(session, interactionProfile, topLevelPath, isActive);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetInputDeviceStateBoolEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrBool32 state) {
    try {
        return runtime.xrSetInputDeviceStateBoolEXT(session, topLevelPath, inputSourcePath, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetInputDeviceStateFloatEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, float state) {
    try {
        return runtime.xrSetInputDeviceStateFloatEXT(session, topLevelPath, inputSourcePath, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetInputDeviceStateVector2fEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrVector2f state) {
    try {
        return runtime.xrSetInputDeviceStateVector2fEXT(session, topLevelPath, inputSourcePath, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetInputDeviceLocationEXT(XrSession session, XrPath topLevelPath, XrPath inputSourcePath, XrSpace space, XrPosef pose) {
    try {
        return runtime.xrSetInputDeviceLocationEXT(session, topLevelPath, inputSourcePath, space, pose);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable
#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialGraphNodeSpaceMSFT(XrSession session, const XrSpatialGraphNodeSpaceCreateInfoMSFT* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateSpatialGraphNodeSpaceMSFT(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTryCreateSpatialGraphStaticNodeBindingMSFT(XrSession session, const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* createInfo, XrSpatialGraphNodeBindingMSFT* nodeBinding) {
    try {
        return runtime.xrTryCreateSpatialGraphStaticNodeBindingMSFT(session, createInfo, nodeBinding);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpatialGraphNodeBindingMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding) {
    try {
        return runtime.xrDestroySpatialGraphNodeBindingMSFT(nodeBinding);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpatialGraphNodeBindingPropertiesMSFT(XrSpatialGraphNodeBindingMSFT nodeBinding, const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* getInfo, XrSpatialGraphNodeBindingPropertiesMSFT* properties) {
    try {
        return runtime.xrGetSpatialGraphNodeBindingPropertiesMSFT(nodeBinding, getInfo, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateHandTrackerEXT(XrSession session, const XrHandTrackerCreateInfoEXT* createInfo, XrHandTrackerEXT* handTracker) {
    try {
        return runtime.xrCreateHandTrackerEXT(session, createInfo, handTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyHandTrackerEXT(XrHandTrackerEXT handTracker) {
    try {
        return runtime.xrDestroyHandTrackerEXT(handTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateHandJointsEXT(XrHandTrackerEXT handTracker, const XrHandJointsLocateInfoEXT* locateInfo, XrHandJointLocationsEXT* locations) {
    try {
        return runtime.xrLocateHandJointsEXT(handTracker, locateInfo, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh

XRAPI_ATTR XrResult XRAPI_CALL xrCreateHandMeshSpaceMSFT(XrHandTrackerEXT handTracker, const XrHandMeshSpaceCreateInfoMSFT* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateHandMeshSpaceMSFT(handTracker, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUpdateHandMeshMSFT(XrHandTrackerEXT handTracker, const XrHandMeshUpdateInfoMSFT* updateInfo, XrHandMeshMSFT* handMesh) {
    try {
        return runtime.xrUpdateHandMeshMSFT(handTracker, updateInfo, handMesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model

XRAPI_ATTR XrResult XRAPI_CALL xrGetControllerModelKeyMSFT(XrSession session, XrPath topLevelUserPath, XrControllerModelKeyStateMSFT* controllerModelKeyState) {
    try {
        return runtime.xrGetControllerModelKeyMSFT(session, topLevelUserPath, controllerModelKeyState);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLoadControllerModelMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, uint8_t* buffer) {
    try {
        return runtime.xrLoadControllerModelMSFT(session, modelKey, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetControllerModelPropertiesMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelPropertiesMSFT* properties) {
    try {
        return runtime.xrGetControllerModelPropertiesMSFT(session, modelKey, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetControllerModelStateMSFT(XrSession session, XrControllerModelKeyMSFT modelKey, XrControllerModelStateMSFT* state) {
    try {
        return runtime.xrGetControllerModelStateMSFT(session, modelKey, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorFromPerceptionAnchorMSFT(XrSession session, IUnknown* perceptionAnchor, XrSpatialAnchorMSFT* anchor) {
    try {
        return runtime.xrCreateSpatialAnchorFromPerceptionAnchorMSFT(session, perceptionAnchor, anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTryGetPerceptionAnchorFromSpatialAnchorMSFT(XrSession session, XrSpatialAnchorMSFT anchor, IUnknown** perceptionAnchor) {
    try {
        return runtime.xrTryGetPerceptionAnchorFromSpatialAnchorMSFT(session, anchor, perceptionAnchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateReprojectionModesMSFT(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t modeCapacityInput, uint32_t* modeCountOutput, XrReprojectionModeMSFT* modes) {
    try {
        return runtime.xrEnumerateReprojectionModesMSFT(instance, systemId, viewConfigurationType, modeCapacityInput, modeCountOutput, modes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state

XRAPI_ATTR XrResult XRAPI_CALL xrUpdateSwapchainFB(XrSwapchain swapchain, const XrSwapchainStateBaseHeaderFB* state) {
    try {
        return runtime.xrUpdateSwapchainFB(swapchain, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSwapchainStateFB(XrSwapchain swapchain, XrSwapchainStateBaseHeaderFB* state) {
    try {
        return runtime.xrGetSwapchainStateFB(swapchain, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateBodyTrackerFB(XrSession session, const XrBodyTrackerCreateInfoFB* createInfo, XrBodyTrackerFB* bodyTracker) {
    try {
        return runtime.xrCreateBodyTrackerFB(session, createInfo, bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyBodyTrackerFB(XrBodyTrackerFB bodyTracker) {
    try {
        return runtime.xrDestroyBodyTrackerFB(bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateBodyJointsFB(XrBodyTrackerFB bodyTracker, const XrBodyJointsLocateInfoFB* locateInfo, XrBodyJointLocationsFB* locations) {
    try {
        return runtime.xrLocateBodyJointsFB(bodyTracker, locateInfo, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetBodySkeletonFB(XrBodyTrackerFB bodyTracker, XrBodySkeletonFB* skeleton) {
    try {
        return runtime.xrGetBodySkeletonFB(bodyTracker, skeleton);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding
#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init

XRAPI_ATTR XrResult XRAPI_CALL xrInitializeLoaderKHR(const XrLoaderInitInfoBaseHeaderKHR* loaderInitInfo) {
    try {
        return runtime.xrInitializeLoaderKHR(loaderInitInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android
#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2

XRAPI_ATTR XrResult XRAPI_CALL xrCreateVulkanInstanceKHR(XrInstance instance, const XrVulkanInstanceCreateInfoKHR* createInfo, VkInstance* vulkanInstance, VkResult* vulkanResult) {
    try {
        return runtime.xrCreateVulkanInstanceKHR(instance, createInfo, vulkanInstance, vulkanResult);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateVulkanDeviceKHR(XrInstance instance, const XrVulkanDeviceCreateInfoKHR* createInfo, VkDevice* vulkanDevice, VkResult* vulkanResult) {
    try {
        return runtime.xrCreateVulkanDeviceKHR(instance, createInfo, vulkanDevice, vulkanResult);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVulkanGraphicsDevice2KHR(XrInstance instance, const XrVulkanGraphicsDeviceGetInfoKHR* getInfo, VkPhysicalDevice* vulkanPhysicalDevice) {
    try {
        return runtime.xrGetVulkanGraphicsDevice2KHR(instance, getInfo, vulkanPhysicalDevice);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSceneComputeFeaturesMSFT(XrInstance instance, XrSystemId systemId, uint32_t featureCapacityInput, uint32_t* featureCountOutput, XrSceneComputeFeatureMSFT* features) {
    try {
        return runtime.xrEnumerateSceneComputeFeaturesMSFT(instance, systemId, featureCapacityInput, featureCountOutput, features);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSceneObserverMSFT(XrSession session, const XrSceneObserverCreateInfoMSFT* createInfo, XrSceneObserverMSFT* sceneObserver) {
    try {
        return runtime.xrCreateSceneObserverMSFT(session, createInfo, sceneObserver);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySceneObserverMSFT(XrSceneObserverMSFT sceneObserver) {
    try {
        return runtime.xrDestroySceneObserverMSFT(sceneObserver);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneCreateInfoMSFT* createInfo, XrSceneMSFT* scene) {
    try {
        return runtime.xrCreateSceneMSFT(sceneObserver, createInfo, scene);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySceneMSFT(XrSceneMSFT scene) {
    try {
        return runtime.xrDestroySceneMSFT(scene);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrComputeNewSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrNewSceneComputeInfoMSFT* computeInfo) {
    try {
        return runtime.xrComputeNewSceneMSFT(sceneObserver, computeInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSceneComputeStateMSFT(XrSceneObserverMSFT sceneObserver, XrSceneComputeStateMSFT* state) {
    try {
        return runtime.xrGetSceneComputeStateMSFT(sceneObserver, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsGetInfoMSFT* getInfo, XrSceneComponentsMSFT* components) {
    try {
        return runtime.xrGetSceneComponentsMSFT(scene, getInfo, components);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateSceneComponentsMSFT(XrSceneMSFT scene, const XrSceneComponentsLocateInfoMSFT* locateInfo, XrSceneComponentLocationsMSFT* locations) {
    try {
        return runtime.xrLocateSceneComponentsMSFT(scene, locateInfo, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSceneMeshBuffersMSFT(XrSceneMSFT scene, const XrSceneMeshBuffersGetInfoMSFT* getInfo, XrSceneMeshBuffersMSFT* buffers) {
    try {
        return runtime.xrGetSceneMeshBuffersMSFT(scene, getInfo, buffers);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization

XRAPI_ATTR XrResult XRAPI_CALL xrDeserializeSceneMSFT(XrSceneObserverMSFT sceneObserver, const XrSceneDeserializeInfoMSFT* deserializeInfo) {
    try {
        return runtime.xrDeserializeSceneMSFT(sceneObserver, deserializeInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSerializedSceneFragmentDataMSFT(XrSceneMSFT scene, const XrSerializedSceneFragmentDataGetInfoMSFT* getInfo, uint32_t countInput, uint32_t* readOutput, uint8_t* buffer) {
    try {
        return runtime.xrGetSerializedSceneFragmentDataMSFT(scene, getInfo, countInput, readOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateDisplayRefreshRatesFB(XrSession session, uint32_t displayRefreshRateCapacityInput, uint32_t* displayRefreshRateCountOutput, float* displayRefreshRates) {
    try {
        return runtime.xrEnumerateDisplayRefreshRatesFB(session, displayRefreshRateCapacityInput, displayRefreshRateCountOutput, displayRefreshRates);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetDisplayRefreshRateFB(XrSession session, float* displayRefreshRate) {
    try {
        return runtime.xrGetDisplayRefreshRateFB(session, displayRefreshRate);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestDisplayRefreshRateFB(XrSession session, float displayRefreshRate) {
    try {
        return runtime.xrRequestDisplayRefreshRateFB(session, displayRefreshRate);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateViveTrackerPathsHTCX(XrInstance instance, uint32_t pathCapacityInput, uint32_t* pathCountOutput, XrViveTrackerPathsHTCX* paths) {
    try {
        return runtime.xrEnumerateViveTrackerPathsHTCX(instance, pathCapacityInput, pathCountOutput, paths);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateFacialTrackerHTC(XrSession session, const XrFacialTrackerCreateInfoHTC* createInfo, XrFacialTrackerHTC* facialTracker) {
    try {
        return runtime.xrCreateFacialTrackerHTC(session, createInfo, facialTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyFacialTrackerHTC(XrFacialTrackerHTC facialTracker) {
    try {
        return runtime.xrDestroyFacialTrackerHTC(facialTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetFacialExpressionsHTC(XrFacialTrackerHTC facialTracker, XrFacialExpressionsHTC* facialExpressions) {
    try {
        return runtime.xrGetFacialExpressionsHTC(facialTracker, facialExpressions);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateColorSpacesFB(XrSession session, uint32_t colorSpaceCapacityInput, uint32_t* colorSpaceCountOutput, XrColorSpaceFB* colorSpaces) {
    try {
        return runtime.xrEnumerateColorSpacesFB(session, colorSpaceCapacityInput, colorSpaceCountOutput, colorSpaces);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetColorSpaceFB(XrSession session, const XrColorSpaceFB colorSpace) {
    try {
        return runtime.xrSetColorSpaceFB(session, colorSpace);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh

XRAPI_ATTR XrResult XRAPI_CALL xrGetHandMeshFB(XrHandTrackerEXT handTracker, XrHandTrackingMeshFB* mesh) {
    try {
        return runtime.xrGetHandMeshFB(handTracker, mesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorFB(XrSession session, const XrSpatialAnchorCreateInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrCreateSpatialAnchorFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceUuidFB(XrSpace space, XrUuidEXT* uuid) {
    try {
        return runtime.xrGetSpaceUuidFB(space, uuid);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSpaceSupportedComponentsFB(XrSpace space, uint32_t componentTypeCapacityInput, uint32_t* componentTypeCountOutput, XrSpaceComponentTypeFB* componentTypes) {
    try {
        return runtime.xrEnumerateSpaceSupportedComponentsFB(space, componentTypeCapacityInput, componentTypeCountOutput, componentTypes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetSpaceComponentStatusFB(XrSpace space, const XrSpaceComponentStatusSetInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrSetSpaceComponentStatusFB(space, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceComponentStatusFB(XrSpace space, XrSpaceComponentTypeFB componentType, XrSpaceComponentStatusFB* status) {
    try {
        return runtime.xrGetSpaceComponentStatusFB(space, componentType, status);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation

XRAPI_ATTR XrResult XRAPI_CALL xrCreateFoveationProfileFB(XrSession session, const XrFoveationProfileCreateInfoFB* createInfo, XrFoveationProfileFB* profile) {
    try {
        return runtime.xrCreateFoveationProfileFB(session, createInfo, profile);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyFoveationProfileFB(XrFoveationProfileFB profile) {
    try {
        return runtime.xrDestroyFoveationProfileFB(profile);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration
#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrQuerySystemTrackedKeyboardFB(XrSession session, const XrKeyboardTrackingQueryFB* queryInfo, XrKeyboardTrackingDescriptionFB* keyboard) {
    try {
        return runtime.xrQuerySystemTrackedKeyboardFB(session, queryInfo, keyboard);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateKeyboardSpaceFB(XrSession session, const XrKeyboardSpaceCreateInfoFB* createInfo, XrSpace* keyboardSpace) {
    try {
        return runtime.xrCreateKeyboardSpaceFB(session, createInfo, keyboardSpace);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh

XRAPI_ATTR XrResult XRAPI_CALL xrCreateTriangleMeshFB(XrSession session, const XrTriangleMeshCreateInfoFB* createInfo, XrTriangleMeshFB* outTriangleMesh) {
    try {
        return runtime.xrCreateTriangleMeshFB(session, createInfo, outTriangleMesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyTriangleMeshFB(XrTriangleMeshFB mesh) {
    try {
        return runtime.xrDestroyTriangleMeshFB(mesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshGetVertexBufferFB(XrTriangleMeshFB mesh, XrVector3f** outVertexBuffer) {
    try {
        return runtime.xrTriangleMeshGetVertexBufferFB(mesh, outVertexBuffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshGetIndexBufferFB(XrTriangleMeshFB mesh, uint32_t** outIndexBuffer) {
    try {
        return runtime.xrTriangleMeshGetIndexBufferFB(mesh, outIndexBuffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshBeginUpdateFB(XrTriangleMeshFB mesh) {
    try {
        return runtime.xrTriangleMeshBeginUpdateFB(mesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshEndUpdateFB(XrTriangleMeshFB mesh, uint32_t vertexCount, uint32_t triangleCount) {
    try {
        return runtime.xrTriangleMeshEndUpdateFB(mesh, vertexCount, triangleCount);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshBeginVertexBufferUpdateFB(XrTriangleMeshFB mesh, uint32_t* outVertexCount) {
    try {
        return runtime.xrTriangleMeshBeginVertexBufferUpdateFB(mesh, outVertexCount);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrTriangleMeshEndVertexBufferUpdateFB(XrTriangleMeshFB mesh) {
    try {
        return runtime.xrTriangleMeshEndVertexBufferUpdateFB(mesh);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough

XRAPI_ATTR XrResult XRAPI_CALL xrCreatePassthroughFB(XrSession session, const XrPassthroughCreateInfoFB* createInfo, XrPassthroughFB* outPassthrough) {
    try {
        return runtime.xrCreatePassthroughFB(session, createInfo, outPassthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyPassthroughFB(XrPassthroughFB passthrough) {
    try {
        return runtime.xrDestroyPassthroughFB(passthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughStartFB(XrPassthroughFB passthrough) {
    try {
        return runtime.xrPassthroughStartFB(passthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughPauseFB(XrPassthroughFB passthrough) {
    try {
        return runtime.xrPassthroughPauseFB(passthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreatePassthroughLayerFB(XrSession session, const XrPassthroughLayerCreateInfoFB* createInfo, XrPassthroughLayerFB* outLayer) {
    try {
        return runtime.xrCreatePassthroughLayerFB(session, createInfo, outLayer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyPassthroughLayerFB(XrPassthroughLayerFB layer) {
    try {
        return runtime.xrDestroyPassthroughLayerFB(layer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughLayerPauseFB(XrPassthroughLayerFB layer) {
    try {
        return runtime.xrPassthroughLayerPauseFB(layer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughLayerResumeFB(XrPassthroughLayerFB layer) {
    try {
        return runtime.xrPassthroughLayerResumeFB(layer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughLayerSetStyleFB(XrPassthroughLayerFB layer, const XrPassthroughStyleFB* style) {
    try {
        return runtime.xrPassthroughLayerSetStyleFB(layer, style);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateGeometryInstanceFB(XrSession session, const XrGeometryInstanceCreateInfoFB* createInfo, XrGeometryInstanceFB* outGeometryInstance) {
    try {
        return runtime.xrCreateGeometryInstanceFB(session, createInfo, outGeometryInstance);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyGeometryInstanceFB(XrGeometryInstanceFB instance) {
    try {
        return runtime.xrDestroyGeometryInstanceFB(instance);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGeometryInstanceSetTransformFB(XrGeometryInstanceFB instance, const XrGeometryInstanceTransformFB* transformation) {
    try {
        return runtime.xrGeometryInstanceSetTransformFB(instance, transformation);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateRenderModelPathsFB(XrSession session, uint32_t pathCapacityInput, uint32_t* pathCountOutput, XrRenderModelPathInfoFB* paths) {
    try {
        return runtime.xrEnumerateRenderModelPathsFB(session, pathCapacityInput, pathCountOutput, paths);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetRenderModelPropertiesFB(XrSession session, XrPath path, XrRenderModelPropertiesFB* properties) {
    try {
        return runtime.xrGetRenderModelPropertiesFB(session, path, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLoadRenderModelFB(XrSession session, const XrRenderModelLoadInfoFB* info, XrRenderModelBufferFB* buffer) {
    try {
        return runtime.xrLoadRenderModelFB(session, info, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification
#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation

XRAPI_ATTR XrResult XRAPI_CALL xrSetEnvironmentDepthEstimationVARJO(XrSession session, XrBool32 enabled) {
    try {
        return runtime.xrSetEnvironmentDepthEstimationVARJO(session, enabled);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrSetMarkerTrackingVARJO(XrSession session, XrBool32 enabled) {
    try {
        return runtime.xrSetMarkerTrackingVARJO(session, enabled);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetMarkerTrackingTimeoutVARJO(XrSession session, uint64_t markerId, XrDuration timeout) {
    try {
        return runtime.xrSetMarkerTrackingTimeoutVARJO(session, markerId, timeout);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetMarkerTrackingPredictionVARJO(XrSession session, uint64_t markerId, XrBool32 enable) {
    try {
        return runtime.xrSetMarkerTrackingPredictionVARJO(session, markerId, enable);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerSizeVARJO(XrSession session, uint64_t markerId, XrExtent2Df* size) {
    try {
        return runtime.xrGetMarkerSizeVARJO(session, markerId, size);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateMarkerSpaceVARJO(XrSession session, const XrMarkerSpaceCreateInfoVARJO* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateMarkerSpaceVARJO(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset

XRAPI_ATTR XrResult XRAPI_CALL xrSetViewOffsetVARJO(XrSession session, float offset) {
    try {
        return runtime.xrSetViewOffsetVARJO(session, offset);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info
#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer
#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpaceFromCoordinateFrameUIDML(XrSession session, const XrCoordinateSpaceCreateInfoML* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateSpaceFromCoordinateFrameUIDML(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding

XRAPI_ATTR XrResult XRAPI_CALL xrCreateMarkerDetectorML(XrSession session, const XrMarkerDetectorCreateInfoML* createInfo, XrMarkerDetectorML* markerDetector) {
    try {
        return runtime.xrCreateMarkerDetectorML(session, createInfo, markerDetector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyMarkerDetectorML(XrMarkerDetectorML markerDetector) {
    try {
        return runtime.xrDestroyMarkerDetectorML(markerDetector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSnapshotMarkerDetectorML(XrMarkerDetectorML markerDetector, XrMarkerDetectorSnapshotInfoML* snapshotInfo) {
    try {
        return runtime.xrSnapshotMarkerDetectorML(markerDetector, snapshotInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerDetectorStateML(XrMarkerDetectorML markerDetector, XrMarkerDetectorStateML* state) {
    try {
        return runtime.xrGetMarkerDetectorStateML(markerDetector, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkersML(XrMarkerDetectorML markerDetector, uint32_t markerCapacityInput, uint32_t* markerCountOutput, XrMarkerML* markers) {
    try {
        return runtime.xrGetMarkersML(markerDetector, markerCapacityInput, markerCountOutput, markers);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerReprojectionErrorML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float* reprojectionErrorMeters) {
    try {
        return runtime.xrGetMarkerReprojectionErrorML(markerDetector, marker, reprojectionErrorMeters);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerLengthML(XrMarkerDetectorML markerDetector, XrMarkerML marker, float* meters) {
    try {
        return runtime.xrGetMarkerLengthML(markerDetector, marker, meters);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerNumberML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint64_t* number) {
    try {
        return runtime.xrGetMarkerNumberML(markerDetector, marker, number);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetMarkerStringML(XrMarkerDetectorML markerDetector, XrMarkerML marker, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetMarkerStringML(markerDetector, marker, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateMarkerSpaceML(XrSession session, const XrMarkerSpaceCreateInfoML* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateMarkerSpaceML(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map

XRAPI_ATTR XrResult XRAPI_CALL xrEnableLocalizationEventsML(XrSession session, const XrLocalizationEnableEventsInfoML* info) {
    try {
        return runtime.xrEnableLocalizationEventsML(session, info);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQueryLocalizationMapsML(XrSession session, const XrLocalizationMapQueryInfoBaseHeaderML* queryInfo, uint32_t mapCapacityInput, uint32_t* mapCountOutput, XrLocalizationMapML* maps) {
    try {
        return runtime.xrQueryLocalizationMapsML(session, queryInfo, mapCapacityInput, mapCountOutput, maps);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestMapLocalizationML(XrSession session, const XrMapLocalizationRequestInfoML* requestInfo) {
    try {
        return runtime.xrRequestMapLocalizationML(session, requestInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrImportLocalizationMapML(XrSession session, const XrLocalizationMapImportInfoML* importInfo, XrUuidEXT* mapUuid) {
    try {
        return runtime.xrImportLocalizationMapML(session, importInfo, mapUuid);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateExportedLocalizationMapML(XrSession session, const XrUuidEXT* mapUuid, XrExportedLocalizationMapML* map) {
    try {
        return runtime.xrCreateExportedLocalizationMapML(session, mapUuid, map);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyExportedLocalizationMapML(XrExportedLocalizationMapML map) {
    try {
        return runtime.xrDestroyExportedLocalizationMapML(map);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetExportedLocalizationMapDataML(XrExportedLocalizationMapML map, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetExportedLocalizationMapDataML(map, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorsAsyncML(XrSession session, const XrSpatialAnchorsCreateInfoBaseHeaderML* createInfo, XrFutureEXT* future) {
    try {
        return runtime.xrCreateSpatialAnchorsAsyncML(session, createInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorsCompleteML(XrSession session, XrFutureEXT future, XrCreateSpatialAnchorsCompletionML* completion) {
    try {
        return runtime.xrCreateSpatialAnchorsCompleteML(session, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpatialAnchorStateML(XrSpace anchor, XrSpatialAnchorStateML* state) {
    try {
        return runtime.xrGetSpatialAnchorStateML(anchor, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorsStorageML(XrSession session, const XrSpatialAnchorsCreateStorageInfoML* createInfo, XrSpatialAnchorsStorageML* storage) {
    try {
        return runtime.xrCreateSpatialAnchorsStorageML(session, createInfo, storage);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpatialAnchorsStorageML(XrSpatialAnchorsStorageML storage) {
    try {
        return runtime.xrDestroySpatialAnchorsStorageML(storage);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQuerySpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsQueryInfoBaseHeaderML* queryInfo, XrFutureEXT* future) {
    try {
        return runtime.xrQuerySpatialAnchorsAsyncML(storage, queryInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQuerySpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsQueryCompletionML* completion) {
    try {
        return runtime.xrQuerySpatialAnchorsCompleteML(storage, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPublishSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsPublishInfoML* publishInfo, XrFutureEXT* future) {
    try {
        return runtime.xrPublishSpatialAnchorsAsyncML(storage, publishInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPublishSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsPublishCompletionML* completion) {
    try {
        return runtime.xrPublishSpatialAnchorsCompleteML(storage, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDeleteSpatialAnchorsAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsDeleteInfoML* deleteInfo, XrFutureEXT* future) {
    try {
        return runtime.xrDeleteSpatialAnchorsAsyncML(storage, deleteInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDeleteSpatialAnchorsCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsDeleteCompletionML* completion) {
    try {
        return runtime.xrDeleteSpatialAnchorsCompleteML(storage, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUpdateSpatialAnchorsExpirationAsyncML(XrSpatialAnchorsStorageML storage, const XrSpatialAnchorsUpdateExpirationInfoML* updateInfo, XrFutureEXT* future) {
    try {
        return runtime.xrUpdateSpatialAnchorsExpirationAsyncML(storage, updateInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUpdateSpatialAnchorsExpirationCompleteML(XrSpatialAnchorsStorageML storage, XrFutureEXT future, XrSpatialAnchorsUpdateExpirationCompletionML* completion) {
    try {
        return runtime.xrUpdateSpatialAnchorsExpirationCompleteML(storage, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration

XRAPI_ATTR XrResult XRAPI_CALL xrEnableUserCalibrationEventsML(XrInstance instance, const XrUserCalibrationEnableEventsInfoML* enableInfo) {
    try {
        return runtime.xrEnableUserCalibrationEventsML(instance, enableInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorStoreConnectionMSFT(XrSession session, XrSpatialAnchorStoreConnectionMSFT* spatialAnchorStore) {
    try {
        return runtime.xrCreateSpatialAnchorStoreConnectionMSFT(session, spatialAnchorStore);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpatialAnchorStoreConnectionMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore) {
    try {
        return runtime.xrDestroySpatialAnchorStoreConnectionMSFT(spatialAnchorStore);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceInfoMSFT* spatialAnchorPersistenceInfo) {
    try {
        return runtime.xrPersistSpatialAnchorMSFT(spatialAnchorStore, spatialAnchorPersistenceInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumeratePersistedSpatialAnchorNamesMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, uint32_t spatialAnchorNameCapacityInput, uint32_t* spatialAnchorNameCountOutput, XrSpatialAnchorPersistenceNameMSFT* spatialAnchorNames) {
    try {
        return runtime.xrEnumeratePersistedSpatialAnchorNamesMSFT(spatialAnchorStore, spatialAnchorNameCapacityInput, spatialAnchorNameCountOutput, spatialAnchorNames);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorFromPersistedNameMSFT(XrSession session, const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* spatialAnchorCreateInfo, XrSpatialAnchorMSFT* spatialAnchor) {
    try {
        return runtime.xrCreateSpatialAnchorFromPersistedNameMSFT(session, spatialAnchorCreateInfo, spatialAnchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUnpersistSpatialAnchorMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore, const XrSpatialAnchorPersistenceNameMSFT* spatialAnchorPersistenceName) {
    try {
        return runtime.xrUnpersistSpatialAnchorMSFT(spatialAnchorStore, spatialAnchorPersistenceName);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrClearSpatialAnchorStoreMSFT(XrSpatialAnchorStoreConnectionMSFT spatialAnchorStore) {
    try {
        return runtime.xrClearSpatialAnchorStoreMSFT(spatialAnchorStore);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker

XRAPI_ATTR XrResult XRAPI_CALL xrGetSceneMarkerRawDataMSFT(XrSceneMSFT scene, const XrUuidMSFT* markerId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, uint8_t* buffer) {
    try {
        return runtime.xrGetSceneMarkerRawDataMSFT(scene, markerId, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSceneMarkerDecodedStringMSFT(XrSceneMSFT scene, const XrUuidMSFT* markerId, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetSceneMarkerDecodedStringMSFT(scene, markerId, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths

XRAPI_ATTR XrResult XRAPI_CALL xrStructureTypeToString2KHR(XrInstance instance, XrStructureType value, char buffer[XR_MAX_STRUCTURE_NAME_SIZE_EXTENDED_KHR]) {
    try {
        return runtime.xrStructureTypeToString2KHR(instance, value, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query

XRAPI_ATTR XrResult XRAPI_CALL xrQuerySpacesFB(XrSession session, const XrSpaceQueryInfoBaseHeaderFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrQuerySpacesFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRetrieveSpaceQueryResultsFB(XrSession session, XrAsyncRequestIdFB requestId, XrSpaceQueryResultsFB* results) {
    try {
        return runtime.xrRetrieveSpaceQueryResultsFB(session, requestId, results);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage

XRAPI_ATTR XrResult XRAPI_CALL xrSaveSpaceFB(XrSession session, const XrSpaceSaveInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrSaveSpaceFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEraseSpaceFB(XrSession session, const XrSpaceEraseInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrEraseSpaceFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid

XRAPI_ATTR XrResult XRAPI_CALL xrGetAudioOutputDeviceGuidOculus(XrInstance instance, wchar_t buffer[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS]) {
    try {
        return runtime.xrGetAudioOutputDeviceGuidOculus(instance, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetAudioInputDeviceGuidOculus(XrInstance instance, wchar_t buffer[XR_MAX_AUDIO_DEVICE_STR_SIZE_OCULUS]) {
    try {
        return runtime.xrGetAudioInputDeviceGuidOculus(instance, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing

XRAPI_ATTR XrResult XRAPI_CALL xrShareSpacesFB(XrSession session, const XrSpaceShareInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrShareSpacesFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp
#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene

XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceBoundingBox2DFB(XrSession session, XrSpace space, XrRect2Df* boundingBox2DOutput) {
    try {
        return runtime.xrGetSpaceBoundingBox2DFB(session, space, boundingBox2DOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceBoundingBox3DFB(XrSession session, XrSpace space, XrRect3DfFB* boundingBox3DOutput) {
    try {
        return runtime.xrGetSpaceBoundingBox3DFB(session, space, boundingBox3DOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceSemanticLabelsFB(XrSession session, XrSpace space, XrSemanticLabelsFB* semanticLabelsOutput) {
    try {
        return runtime.xrGetSpaceSemanticLabelsFB(session, space, semanticLabelsOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceBoundary2DFB(XrSession session, XrSpace space, XrBoundary2DFB* boundary2DOutput) {
    try {
        return runtime.xrGetSpaceBoundary2DFB(session, space, boundary2DOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceRoomLayoutFB(XrSession session, XrSpace space, XrRoomLayoutFB* roomLayoutOutput) {
    try {
        return runtime.xrGetSpaceRoomLayoutFB(session, space, roomLayoutOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control

XRAPI_ATTR XrResult XRAPI_CALL xrSetDigitalLensControlALMALENCE(XrSession session, const XrDigitalLensControlALMALENCE* digitalLensControl) {
    try {
        return runtime.xrSetDigitalLensControlALMALENCE(session, digitalLensControl);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture

XRAPI_ATTR XrResult XRAPI_CALL xrRequestSceneCaptureFB(XrSession session, const XrSceneCaptureRequestInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrRequestSceneCaptureFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container

XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceContainerFB(XrSession session, XrSpace space, XrSpaceContainerFB* spaceContainerOutput) {
    try {
        return runtime.xrGetSpaceContainerFB(session, space, spaceContainerOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked

XRAPI_ATTR XrResult XRAPI_CALL xrGetFoveationEyeTrackedStateMETA(XrSession session, XrFoveationEyeTrackedStateMETA* foveationState) {
    try {
        return runtime.xrGetFoveationEyeTrackedStateMETA(session, foveationState);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateFaceTrackerFB(XrSession session, const XrFaceTrackerCreateInfoFB* createInfo, XrFaceTrackerFB* faceTracker) {
    try {
        return runtime.xrCreateFaceTrackerFB(session, createInfo, faceTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyFaceTrackerFB(XrFaceTrackerFB faceTracker) {
    try {
        return runtime.xrDestroyFaceTrackerFB(faceTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetFaceExpressionWeightsFB(XrFaceTrackerFB faceTracker, const XrFaceExpressionInfoFB* expressionInfo, XrFaceExpressionWeightsFB* expressionWeights) {
    try {
        return runtime.xrGetFaceExpressionWeightsFB(faceTracker, expressionInfo, expressionWeights);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social

XRAPI_ATTR XrResult XRAPI_CALL xrCreateEyeTrackerFB(XrSession session, const XrEyeTrackerCreateInfoFB* createInfo, XrEyeTrackerFB* eyeTracker) {
    try {
        return runtime.xrCreateEyeTrackerFB(session, createInfo, eyeTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyEyeTrackerFB(XrEyeTrackerFB eyeTracker) {
    try {
        return runtime.xrDestroyEyeTrackerFB(eyeTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetEyeGazesFB(XrEyeTrackerFB eyeTracker, const XrEyeGazesInfoFB* gazeInfo, XrEyeGazesFB* eyeGazes) {
    try {
        return runtime.xrGetEyeGazesFB(eyeTracker, gazeInfo, eyeGazes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands

XRAPI_ATTR XrResult XRAPI_CALL xrPassthroughLayerSetKeyboardHandsIntensityFB(XrPassthroughLayerFB layer, const XrPassthroughKeyboardHandsIntensityFB* intensity) {
    try {
        return runtime.xrPassthroughLayerSetKeyboardHandsIntensityFB(layer, intensity);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm

XRAPI_ATTR XrResult XRAPI_CALL xrGetDeviceSampleRateFB(XrSession session, const XrHapticActionInfo* hapticActionInfo, XrDevicePcmSampleRateGetInfoFB* deviceSampleRate) {
    try {
        return runtime.xrGetDeviceSampleRateFB(session, hapticActionInfo, deviceSampleRate);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming
#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences

XRAPI_ATTR XrResult XRAPI_CALL xrGetPassthroughPreferencesMETA(XrSession session, XrPassthroughPreferencesMETA* preferences) {
    try {
        return runtime.xrGetPassthroughPreferencesMETA(session, preferences);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard

XRAPI_ATTR XrResult XRAPI_CALL xrCreateVirtualKeyboardMETA(XrSession session, const XrVirtualKeyboardCreateInfoMETA* createInfo, XrVirtualKeyboardMETA* keyboard) {
    try {
        return runtime.xrCreateVirtualKeyboardMETA(session, createInfo, keyboard);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyVirtualKeyboardMETA(XrVirtualKeyboardMETA keyboard) {
    try {
        return runtime.xrDestroyVirtualKeyboardMETA(keyboard);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateVirtualKeyboardSpaceMETA(XrSession session, XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardSpaceCreateInfoMETA* createInfo, XrSpace* keyboardSpace) {
    try {
        return runtime.xrCreateVirtualKeyboardSpaceMETA(session, keyboard, createInfo, keyboardSpace);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSuggestVirtualKeyboardLocationMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardLocationInfoMETA* locationInfo) {
    try {
        return runtime.xrSuggestVirtualKeyboardLocationMETA(keyboard, locationInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVirtualKeyboardScaleMETA(XrVirtualKeyboardMETA keyboard, float* scale) {
    try {
        return runtime.xrGetVirtualKeyboardScaleMETA(keyboard, scale);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetVirtualKeyboardModelVisibilityMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardModelVisibilitySetInfoMETA* modelVisibility) {
    try {
        return runtime.xrSetVirtualKeyboardModelVisibilityMETA(keyboard, modelVisibility);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVirtualKeyboardModelAnimationStatesMETA(XrVirtualKeyboardMETA keyboard, XrVirtualKeyboardModelAnimationStatesMETA* animationStates) {
    try {
        return runtime.xrGetVirtualKeyboardModelAnimationStatesMETA(keyboard, animationStates);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVirtualKeyboardDirtyTexturesMETA(XrVirtualKeyboardMETA keyboard, uint32_t textureIdCapacityInput, uint32_t* textureIdCountOutput, uint64_t* textureIds) {
    try {
        return runtime.xrGetVirtualKeyboardDirtyTexturesMETA(keyboard, textureIdCapacityInput, textureIdCountOutput, textureIds);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetVirtualKeyboardTextureDataMETA(XrVirtualKeyboardMETA keyboard, uint64_t textureId, XrVirtualKeyboardTextureDataMETA* textureData) {
    try {
        return runtime.xrGetVirtualKeyboardTextureDataMETA(keyboard, textureId, textureData);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSendVirtualKeyboardInputMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardInputInfoMETA* info, XrPosef* interactorRootPose) {
    try {
        return runtime.xrSendVirtualKeyboardInputMETA(keyboard, info, interactorRootPose);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrChangeVirtualKeyboardTextContextMETA(XrVirtualKeyboardMETA keyboard, const XrVirtualKeyboardTextContextChangeInfoMETA* changeInfo) {
    try {
        return runtime.xrChangeVirtualKeyboardTextContextMETA(keyboard, changeInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateExternalCamerasOCULUS(XrSession session, uint32_t cameraCapacityInput, uint32_t* cameraCountOutput, XrExternalCameraOCULUS* cameras) {
    try {
        return runtime.xrEnumerateExternalCamerasOCULUS(session, cameraCapacityInput, cameraCountOutput, cameras);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics

XRAPI_ATTR XrResult XRAPI_CALL xrEnumeratePerformanceMetricsCounterPathsMETA(XrInstance instance, uint32_t counterPathCapacityInput, uint32_t* counterPathCountOutput, XrPath* counterPaths) {
    try {
        return runtime.xrEnumeratePerformanceMetricsCounterPathsMETA(instance, counterPathCapacityInput, counterPathCountOutput, counterPaths);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetPerformanceMetricsStateMETA(XrSession session, const XrPerformanceMetricsStateMETA* state) {
    try {
        return runtime.xrSetPerformanceMetricsStateMETA(session, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetPerformanceMetricsStateMETA(XrSession session, XrPerformanceMetricsStateMETA* state) {
    try {
        return runtime.xrGetPerformanceMetricsStateMETA(session, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQueryPerformanceMetricsCounterMETA(XrSession session, XrPath counterPath, XrPerformanceMetricsCounterMETA* counter) {
    try {
        return runtime.xrQueryPerformanceMetricsCounterMETA(session, counterPath, counter);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch

XRAPI_ATTR XrResult XRAPI_CALL xrSaveSpaceListFB(XrSession session, const XrSpaceListSaveInfoFB* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrSaveSpaceListFB(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpaceUserFB(XrSession session, const XrSpaceUserCreateInfoFB* info, XrSpaceUserFB* user) {
    try {
        return runtime.xrCreateSpaceUserFB(session, info, user);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceUserIdFB(XrSpaceUserFB user, XrSpaceUserIdFB* userId) {
    try {
        return runtime.xrGetSpaceUserIdFB(user, userId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpaceUserFB(XrSpaceUserFB user) {
    try {
        return runtime.xrDestroySpaceUserFB(user);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id
#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution

XRAPI_ATTR XrResult XRAPI_CALL xrGetRecommendedLayerResolutionMETA(XrSession session, const XrRecommendedLayerResolutionGetInfoMETA* info, XrRecommendedLayerResolutionMETA* resolution) {
    try {
        return runtime.xrGetRecommendedLayerResolutionMETA(session, info, resolution);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut

XRAPI_ATTR XrResult XRAPI_CALL xrCreatePassthroughColorLutMETA(XrPassthroughFB passthrough, const XrPassthroughColorLutCreateInfoMETA* createInfo, XrPassthroughColorLutMETA* colorLut) {
    try {
        return runtime.xrCreatePassthroughColorLutMETA(passthrough, createInfo, colorLut);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyPassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut) {
    try {
        return runtime.xrDestroyPassthroughColorLutMETA(colorLut);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUpdatePassthroughColorLutMETA(XrPassthroughColorLutMETA colorLut, const XrPassthroughColorLutUpdateInfoMETA* updateInfo) {
    try {
        return runtime.xrUpdatePassthroughColorLutMETA(colorLut, updateInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh

XRAPI_ATTR XrResult XRAPI_CALL xrGetSpaceTriangleMeshMETA(XrSpace space, const XrSpaceTriangleMeshGetInfoMETA* getInfo, XrSpaceTriangleMeshMETA* triangleMeshOutput) {
    try {
        return runtime.xrGetSpaceTriangleMeshMETA(space, getInfo, triangleMeshOutput);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2

XRAPI_ATTR XrResult XRAPI_CALL xrCreateFaceTracker2FB(XrSession session, const XrFaceTrackerCreateInfo2FB* createInfo, XrFaceTracker2FB* faceTracker) {
    try {
        return runtime.xrCreateFaceTracker2FB(session, createInfo, faceTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyFaceTracker2FB(XrFaceTracker2FB faceTracker) {
    try {
        return runtime.xrDestroyFaceTracker2FB(faceTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetFaceExpressionWeights2FB(XrFaceTracker2FB faceTracker, const XrFaceExpressionInfo2FB* expressionInfo, XrFaceExpressionWeights2FB* expressionWeights) {
    try {
        return runtime.xrGetFaceExpressionWeights2FB(faceTracker, expressionInfo, expressionWeights);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing

XRAPI_ATTR XrResult XRAPI_CALL xrShareSpacesMETA(XrSession session, const XrShareSpacesInfoMETA* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrShareSpacesMETA(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth

XRAPI_ATTR XrResult XRAPI_CALL xrCreateEnvironmentDepthProviderMETA(XrSession session, const XrEnvironmentDepthProviderCreateInfoMETA* createInfo, XrEnvironmentDepthProviderMETA* environmentDepthProvider) {
    try {
        return runtime.xrCreateEnvironmentDepthProviderMETA(session, createInfo, environmentDepthProvider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider) {
    try {
        return runtime.xrDestroyEnvironmentDepthProviderMETA(environmentDepthProvider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStartEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider) {
    try {
        return runtime.xrStartEnvironmentDepthProviderMETA(environmentDepthProvider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStopEnvironmentDepthProviderMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider) {
    try {
        return runtime.xrStopEnvironmentDepthProviderMETA(environmentDepthProvider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateEnvironmentDepthSwapchainMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthSwapchainCreateInfoMETA* createInfo, XrEnvironmentDepthSwapchainMETA* swapchain) {
    try {
        return runtime.xrCreateEnvironmentDepthSwapchainMETA(environmentDepthProvider, createInfo, swapchain);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyEnvironmentDepthSwapchainMETA(XrEnvironmentDepthSwapchainMETA swapchain) {
    try {
        return runtime.xrDestroyEnvironmentDepthSwapchainMETA(swapchain);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateEnvironmentDepthSwapchainImagesMETA(XrEnvironmentDepthSwapchainMETA swapchain, uint32_t imageCapacityInput, uint32_t* imageCountOutput, XrSwapchainImageBaseHeader* images) {
    try {
        return runtime.xrEnumerateEnvironmentDepthSwapchainImagesMETA(swapchain, imageCapacityInput, imageCountOutput, images);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetEnvironmentDepthSwapchainStateMETA(XrEnvironmentDepthSwapchainMETA swapchain, XrEnvironmentDepthSwapchainStateMETA* state) {
    try {
        return runtime.xrGetEnvironmentDepthSwapchainStateMETA(swapchain, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrAcquireEnvironmentDepthImageMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthImageAcquireInfoMETA* acquireInfo, XrEnvironmentDepthImageMETA* environmentDepthImage) {
    try {
        return runtime.xrAcquireEnvironmentDepthImageMETA(environmentDepthProvider, acquireInfo, environmentDepthImage);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSetEnvironmentDepthHandRemovalMETA(XrEnvironmentDepthProviderMETA environmentDepthProvider, const XrEnvironmentDepthHandRemovalSetInfoMETA* setInfo) {
    try {
        return runtime.xrSetEnvironmentDepthHandRemovalMETA(environmentDepthProvider, setInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings

XRAPI_ATTR XrResult XRAPI_CALL xrSetTrackingOptimizationSettingsHintQCOM(XrSession session, XrTrackingOptimizationSettingsDomainQCOM domain, XrTrackingOptimizationSettingsHintQCOM hint) {
    try {
        return runtime.xrSetTrackingOptimizationSettingsHintQCOM(session, domain, hint);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough

XRAPI_ATTR XrResult XRAPI_CALL xrCreatePassthroughHTC(XrSession session, const XrPassthroughCreateInfoHTC* createInfo, XrPassthroughHTC* passthrough) {
    try {
        return runtime.xrCreatePassthroughHTC(session, createInfo, passthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyPassthroughHTC(XrPassthroughHTC passthrough) {
    try {
        return runtime.xrDestroyPassthroughHTC(passthrough);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation

XRAPI_ATTR XrResult XRAPI_CALL xrApplyFoveationHTC(XrSession session, const XrFoveationApplyInfoHTC* applyInfo) {
    try {
        return runtime.xrApplyFoveationHTC(session, applyInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorHTC(XrSession session, const XrSpatialAnchorCreateInfoHTC* createInfo, XrSpace* anchor) {
    try {
        return runtime.xrCreateSpatialAnchorHTC(session, createInfo, anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpatialAnchorNameHTC(XrSpace anchor, XrSpatialAnchorNameHTC* name) {
    try {
        return runtime.xrGetSpatialAnchorNameHTC(anchor, name);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateBodyTrackerHTC(XrSession session, const XrBodyTrackerCreateInfoHTC* createInfo, XrBodyTrackerHTC* bodyTracker) {
    try {
        return runtime.xrCreateBodyTrackerHTC(session, createInfo, bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyBodyTrackerHTC(XrBodyTrackerHTC bodyTracker) {
    try {
        return runtime.xrDestroyBodyTrackerHTC(bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateBodyJointsHTC(XrBodyTrackerHTC bodyTracker, const XrBodyJointsLocateInfoHTC* locateInfo, XrBodyJointLocationsHTC* locations) {
    try {
        return runtime.xrLocateBodyJointsHTC(bodyTracker, locateInfo, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetBodySkeletonHTC(XrBodyTrackerHTC bodyTracker, XrSpace baseSpace, uint32_t skeletonGenerationId, XrBodySkeletonHTC* skeleton) {
    try {
        return runtime.xrGetBodySkeletonHTC(bodyTracker, baseSpace, skeletonGenerationId, skeleton);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl

XRAPI_ATTR XrResult XRAPI_CALL xrApplyForceFeedbackCurlMNDX(XrHandTrackerEXT handTracker, const XrForceFeedbackCurlApplyLocationsMNDX* locations) {
    try {
        return runtime.xrApplyForceFeedbackCurlMNDX(handTracker, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking

XRAPI_ATTR XrResult XRAPI_CALL xrCreateBodyTrackerBD(XrSession session, const XrBodyTrackerCreateInfoBD* createInfo, XrBodyTrackerBD* bodyTracker) {
    try {
        return runtime.xrCreateBodyTrackerBD(session, createInfo, bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyBodyTrackerBD(XrBodyTrackerBD bodyTracker) {
    try {
        return runtime.xrDestroyBodyTrackerBD(bodyTracker);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateBodyJointsBD(XrBodyTrackerBD bodyTracker, const XrBodyJointsLocateInfoBD* locateInfo, XrBodyJointLocationsBD* locations) {
    try {
        return runtime.xrLocateBodyJointsBD(bodyTracker, locateInfo, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing

XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSpatialEntityComponentTypesBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, uint32_t componentTypeCapacityInput, uint32_t* componentTypeCountOutput, XrSpatialEntityComponentTypeBD* componentTypes) {
    try {
        return runtime.xrEnumerateSpatialEntityComponentTypesBD(snapshot, entityId, componentTypeCapacityInput, componentTypeCountOutput, componentTypes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpatialEntityUuidBD(XrSenseDataSnapshotBD snapshot, XrSpatialEntityIdBD entityId, XrUuidEXT* uuid) {
    try {
        return runtime.xrGetSpatialEntityUuidBD(snapshot, entityId, uuid);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSpatialEntityComponentDataBD(XrSenseDataSnapshotBD snapshot, const XrSpatialEntityComponentGetInfoBD* getInfo, XrSpatialEntityComponentDataBaseHeaderBD* componentData) {
    try {
        return runtime.xrGetSpatialEntityComponentDataBD(snapshot, getInfo, componentData);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSenseDataProviderBD(XrSession session, const XrSenseDataProviderCreateInfoBD* createInfo, XrSenseDataProviderBD* provider) {
    try {
        return runtime.xrCreateSenseDataProviderBD(session, createInfo, provider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStartSenseDataProviderAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataProviderStartInfoBD* startInfo, XrFutureEXT* future) {
    try {
        return runtime.xrStartSenseDataProviderAsyncBD(provider, startInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStartSenseDataProviderCompleteBD(XrSession session, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrStartSenseDataProviderCompleteBD(session, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSenseDataProviderStateBD(XrSenseDataProviderBD provider, XrSenseDataProviderStateBD* state) {
    try {
        return runtime.xrGetSenseDataProviderStateBD(provider, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQuerySenseDataAsyncBD(XrSenseDataProviderBD provider, const XrSenseDataQueryInfoBD* queryInfo, XrFutureEXT* future) {
    try {
        return runtime.xrQuerySenseDataAsyncBD(provider, queryInfo, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrQuerySenseDataCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSenseDataQueryCompletionBD* completion) {
    try {
        return runtime.xrQuerySenseDataCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySenseDataSnapshotBD(XrSenseDataSnapshotBD snapshot) {
    try {
        return runtime.xrDestroySenseDataSnapshotBD(snapshot);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetQueriedSenseDataBD(XrSenseDataSnapshotBD snapshot, XrQueriedSenseDataGetInfoBD* getInfo, XrQueriedSenseDataBD* queriedSenseData) {
    try {
        return runtime.xrGetQueriedSenseDataBD(snapshot, getInfo, queriedSenseData);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStopSenseDataProviderBD(XrSenseDataProviderBD provider) {
    try {
        return runtime.xrStopSenseDataProviderBD(provider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySenseDataProviderBD(XrSenseDataProviderBD provider) {
    try {
        return runtime.xrDestroySenseDataProviderBD(provider);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialEntityAnchorBD(XrSenseDataProviderBD provider, const XrSpatialEntityAnchorCreateInfoBD* createInfo, XrAnchorBD* anchor) {
    try {
        return runtime.xrCreateSpatialEntityAnchorBD(provider, createInfo, anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyAnchorBD(XrAnchorBD anchor) {
    try {
        return runtime.xrDestroyAnchorBD(anchor);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetAnchorUuidBD(XrAnchorBD anchor, XrUuidEXT* uuid) {
    try {
        return runtime.xrGetAnchorUuidBD(anchor, uuid);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateAnchorSpaceBD(XrSession session, const XrAnchorSpaceCreateInfoBD* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateAnchorSpaceBD(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor

XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorCreateInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrCreateSpatialAnchorAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrSpatialAnchorCreateCompletionBD* completion) {
    try {
        return runtime.xrCreateSpatialAnchorCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorPersistInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrPersistSpatialAnchorAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrPersistSpatialAnchorCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUnpersistSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorUnpersistInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrUnpersistSpatialAnchorAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrUnpersistSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrUnpersistSpatialAnchorCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing

XRAPI_ATTR XrResult XRAPI_CALL xrShareSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSpatialAnchorShareInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrShareSpatialAnchorAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrShareSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrShareSpatialAnchorCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDownloadSharedSpatialAnchorAsyncBD(XrSenseDataProviderBD provider, const XrSharedSpatialAnchorDownloadInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrDownloadSharedSpatialAnchorAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDownloadSharedSpatialAnchorCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrDownloadSharedSpatialAnchorCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene

XRAPI_ATTR XrResult XRAPI_CALL xrCaptureSceneAsyncBD(XrSenseDataProviderBD provider, const XrSceneCaptureInfoBD* info, XrFutureEXT* future) {
    try {
        return runtime.xrCaptureSceneAsyncBD(provider, info, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCaptureSceneCompleteBD(XrSenseDataProviderBD provider, XrFutureEXT future, XrFutureCompletionEXT* completion) {
    try {
        return runtime.xrCaptureSceneCompleteBD(provider, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh
#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress
#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection

XRAPI_ATTR XrResult XRAPI_CALL xrCreatePlaneDetectorEXT(XrSession session, const XrPlaneDetectorCreateInfoEXT* createInfo, XrPlaneDetectorEXT* planeDetector) {
    try {
        return runtime.xrCreatePlaneDetectorEXT(session, createInfo, planeDetector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyPlaneDetectorEXT(XrPlaneDetectorEXT planeDetector) {
    try {
        return runtime.xrDestroyPlaneDetectorEXT(planeDetector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrBeginPlaneDetectionEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorBeginInfoEXT* beginInfo) {
    try {
        return runtime.xrBeginPlaneDetectionEXT(planeDetector, beginInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetPlaneDetectionStateEXT(XrPlaneDetectorEXT planeDetector, XrPlaneDetectionStateEXT* state) {
    try {
        return runtime.xrGetPlaneDetectionStateEXT(planeDetector, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetPlaneDetectionsEXT(XrPlaneDetectorEXT planeDetector, const XrPlaneDetectorGetInfoEXT* info, XrPlaneDetectorLocationsEXT* locations) {
    try {
        return runtime.xrGetPlaneDetectionsEXT(planeDetector, info, locations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetPlanePolygonBufferEXT(XrPlaneDetectorEXT planeDetector, uint64_t planeId, uint32_t polygonBufferIndex, XrPlaneDetectorPolygonBufferEXT* polygonBuffer) {
    try {
        return runtime.xrGetPlanePolygonBufferEXT(planeDetector, planeId, polygonBufferIndex, polygonBuffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future

XRAPI_ATTR XrResult XRAPI_CALL xrPollFutureEXT(XrInstance instance, const XrFuturePollInfoEXT* pollInfo, XrFuturePollResultEXT* pollResult) {
    try {
        return runtime.xrPollFutureEXT(instance, pollInfo, pollResult);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCancelFutureEXT(XrInstance instance, const XrFutureCancelInfoEXT* cancelInfo) {
    try {
        return runtime.xrCancelFutureEXT(instance, cancelInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence
#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications

XRAPI_ATTR XrResult XRAPI_CALL xrSetSystemNotificationsML(XrInstance instance, const XrSystemNotificationsSetInfoML* info) {
    try {
        return runtime.xrSetSystemNotificationsML(instance, info);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection

XRAPI_ATTR XrResult XRAPI_CALL xrCreateWorldMeshDetectorML(XrSession session, const XrWorldMeshDetectorCreateInfoML* createInfo, XrWorldMeshDetectorML* detector) {
    try {
        return runtime.xrCreateWorldMeshDetectorML(session, createInfo, detector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyWorldMeshDetectorML(XrWorldMeshDetectorML detector) {
    try {
        return runtime.xrDestroyWorldMeshDetectorML(detector);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestWorldMeshStateAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshStateRequestInfoML* stateRequest, XrFutureEXT* future) {
    try {
        return runtime.xrRequestWorldMeshStateAsyncML(detector, stateRequest, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestWorldMeshStateCompleteML(XrWorldMeshDetectorML detector, XrFutureEXT future, XrWorldMeshStateRequestCompletionML* completion) {
    try {
        return runtime.xrRequestWorldMeshStateCompleteML(detector, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetWorldMeshBufferRecommendSizeML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferRecommendedSizeInfoML* sizeInfo, XrWorldMeshBufferSizeML* size) {
    try {
        return runtime.xrGetWorldMeshBufferRecommendSizeML(detector, sizeInfo, size);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrAllocateWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferSizeML* size, XrWorldMeshBufferML* buffer) {
    try {
        return runtime.xrAllocateWorldMeshBufferML(detector, size, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrFreeWorldMeshBufferML(XrWorldMeshDetectorML detector, const XrWorldMeshBufferML* buffer) {
    try {
        return runtime.xrFreeWorldMeshBufferML(detector, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestWorldMeshAsyncML(XrWorldMeshDetectorML detector, const XrWorldMeshGetInfoML* getInfo, XrWorldMeshBufferML* buffer, XrFutureEXT* future) {
    try {
        return runtime.xrRequestWorldMeshAsyncML(detector, getInfo, buffer, future);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestWorldMeshCompleteML(XrWorldMeshDetectorML detector, const XrWorldMeshRequestCompletionInfoML* completionInfo, XrFutureEXT future, XrWorldMeshRequestCompletionML* completion) {
    try {
        return runtime.xrRequestWorldMeshCompleteML(detector, completionInfo, future, completion);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression

XRAPI_ATTR XrResult XRAPI_CALL xrCreateFacialExpressionClientML(XrSession session, const XrFacialExpressionClientCreateInfoML* createInfo, XrFacialExpressionClientML* facialExpressionClient) {
    try {
        return runtime.xrCreateFacialExpressionClientML(session, createInfo, facialExpressionClient);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyFacialExpressionClientML(XrFacialExpressionClientML facialExpressionClient) {
    try {
        return runtime.xrDestroyFacialExpressionClientML(facialExpressionClient);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetFacialExpressionBlendShapePropertiesML(XrFacialExpressionClientML facialExpressionClient, const XrFacialExpressionBlendShapeGetInfoML* blendShapeGetInfo, uint32_t blendShapeCount, XrFacialExpressionBlendShapePropertiesML* blendShapes) {
    try {
        return runtime.xrGetFacialExpressionBlendShapePropertiesML(facialExpressionClient, blendShapeGetInfo, blendShapeCount, blendShapes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers

XRAPI_ATTR XrResult XRAPI_CALL xrResumeSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* resumeInfo) {
    try {
        return runtime.xrResumeSimultaneousHandsAndControllersTrackingMETA(session, resumeInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPauseSimultaneousHandsAndControllersTrackingMETA(XrSession session, const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* pauseInfo) {
    try {
        return runtime.xrPauseSimultaneousHandsAndControllersTrackingMETA(session, pauseInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery

XRAPI_ATTR XrResult XRAPI_CALL xrStartColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStartInfoMETA* info, XrAsyncRequestIdFB* discoveryRequestId) {
    try {
        return runtime.xrStartColocationDiscoveryMETA(session, info, discoveryRequestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStopColocationDiscoveryMETA(XrSession session, const XrColocationDiscoveryStopInfoMETA* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrStopColocationDiscoveryMETA(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStartColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStartInfoMETA* info, XrAsyncRequestIdFB* advertisementRequestId) {
    try {
        return runtime.xrStartColocationAdvertisementMETA(session, info, advertisementRequestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStopColocationAdvertisementMETA(XrSession session, const XrColocationAdvertisementStopInfoMETA* info, XrAsyncRequestIdFB* requestId) {
    try {
        return runtime.xrStopColocationAdvertisementMETA(session, info, requestId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing
#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

XRAPI_ATTR XrResult XRAPI_CALL xrAcquireSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageAcquireInfo* acquireInfo, uint32_t* index) {
    try {
        return runtime.xrAcquireSwapchainImage(swapchain, acquireInfo, index);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrApplyHapticFeedback(XrSession session, const XrHapticActionInfo* hapticActionInfo, const XrHapticBaseHeader* hapticFeedback) {
    try {
        return runtime.xrApplyHapticFeedback(session, hapticActionInfo, hapticFeedback);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrAttachSessionActionSets(XrSession session, const XrSessionActionSetsAttachInfo* attachInfo) {
    try {
        return runtime.xrAttachSessionActionSets(session, attachInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrBeginFrame(XrSession session, const XrFrameBeginInfo* frameBeginInfo) {
    try {
        return runtime.xrBeginFrame(session, frameBeginInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrBeginSession(XrSession session, const XrSessionBeginInfo* beginInfo) {
    try {
        return runtime.xrBeginSession(session, beginInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateAction(XrActionSet actionSet, const XrActionCreateInfo* createInfo, XrAction* action) {
    try {
        return runtime.xrCreateAction(actionSet, createInfo, action);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateActionSet(XrInstance instance, const XrActionSetCreateInfo* createInfo, XrActionSet* actionSet) {
    try {
        return runtime.xrCreateActionSet(instance, createInfo, actionSet);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateActionSpace(XrSession session, const XrActionSpaceCreateInfo* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateActionSpace(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateInstance(const XrInstanceCreateInfo* createInfo, XrInstance* instance) {
    try {
        return runtime.xrCreateInstance(createInfo, instance);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateReferenceSpace(XrSession session, const XrReferenceSpaceCreateInfo* createInfo, XrSpace* space) {
    try {
        return runtime.xrCreateReferenceSpace(session, createInfo, space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSession(XrInstance instance, const XrSessionCreateInfo* createInfo, XrSession* session) {
    try {
        return runtime.xrCreateSession(instance, createInfo, session);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrCreateSwapchain(XrSession session, const XrSwapchainCreateInfo* createInfo, XrSwapchain* swapchain) {
    try {
        return runtime.xrCreateSwapchain(session, createInfo, swapchain);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyAction(XrAction action) {
    try {
        return runtime.xrDestroyAction(action);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyActionSet(XrActionSet actionSet) {
    try {
        return runtime.xrDestroyActionSet(actionSet);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroyInstance(XrInstance instance) {
    try {
        return runtime.xrDestroyInstance(instance);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySession(XrSession session) {
    try {
        return runtime.xrDestroySession(session);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySpace(XrSpace space) {
    try {
        return runtime.xrDestroySpace(space);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrDestroySwapchain(XrSwapchain swapchain) {
    try {
        return runtime.xrDestroySwapchain(swapchain);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEndFrame(XrSession session, const XrFrameEndInfo* frameEndInfo) {
    try {
        return runtime.xrEndFrame(session, frameEndInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEndSession(XrSession session) {
    try {
        return runtime.xrEndSession(session);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateApiLayerProperties(uint32_t propertyCapacityInput, uint32_t* propertyCountOutput, XrApiLayerProperties* properties) {
    try {
        return runtime.xrEnumerateApiLayerProperties(propertyCapacityInput, propertyCountOutput, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateBoundSourcesForAction(XrSession session, const XrBoundSourcesForActionEnumerateInfo* enumerateInfo, uint32_t sourceCapacityInput, uint32_t* sourceCountOutput, XrPath* sources) {
    try {
        return runtime.xrEnumerateBoundSourcesForAction(session, enumerateInfo, sourceCapacityInput, sourceCountOutput, sources);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateEnvironmentBlendModes(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t environmentBlendModeCapacityInput, uint32_t* environmentBlendModeCountOutput, XrEnvironmentBlendMode* environmentBlendModes) {
    try {
        return runtime.xrEnumerateEnvironmentBlendModes(instance, systemId, viewConfigurationType, environmentBlendModeCapacityInput, environmentBlendModeCountOutput, environmentBlendModes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateInstanceExtensionProperties(const char* layerName, uint32_t propertyCapacityInput, uint32_t* propertyCountOutput, XrExtensionProperties* properties) {
    try {
        return runtime.xrEnumerateInstanceExtensionProperties(layerName, propertyCapacityInput, propertyCountOutput, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateReferenceSpaces(XrSession session, uint32_t spaceCapacityInput, uint32_t* spaceCountOutput, XrReferenceSpaceType* spaces) {
    try {
        return runtime.xrEnumerateReferenceSpaces(session, spaceCapacityInput, spaceCountOutput, spaces);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainFormats(XrSession session, uint32_t formatCapacityInput, uint32_t* formatCountOutput, int64_t* formats) {
    try {
        return runtime.xrEnumerateSwapchainFormats(session, formatCapacityInput, formatCountOutput, formats);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateSwapchainImages(XrSwapchain swapchain, uint32_t imageCapacityInput, uint32_t* imageCountOutput, XrSwapchainImageBaseHeader* images) {
    try {
        return runtime.xrEnumerateSwapchainImages(swapchain, imageCapacityInput, imageCountOutput, images);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateViewConfigurationViews(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, uint32_t viewCapacityInput, uint32_t* viewCountOutput, XrViewConfigurationView* views) {
    try {
        return runtime.xrEnumerateViewConfigurationViews(instance, systemId, viewConfigurationType, viewCapacityInput, viewCountOutput, views);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrEnumerateViewConfigurations(XrInstance instance, XrSystemId systemId, uint32_t viewConfigurationTypeCapacityInput, uint32_t* viewConfigurationTypeCountOutput, XrViewConfigurationType* viewConfigurationTypes) {
    try {
        return runtime.xrEnumerateViewConfigurations(instance, systemId, viewConfigurationTypeCapacityInput, viewConfigurationTypeCountOutput, viewConfigurationTypes);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateBoolean(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateBoolean* state) {
    try {
        return runtime.xrGetActionStateBoolean(session, getInfo, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateFloat(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateFloat* state) {
    try {
        return runtime.xrGetActionStateFloat(session, getInfo, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStatePose(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStatePose* state) {
    try {
        return runtime.xrGetActionStatePose(session, getInfo, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetActionStateVector2f(XrSession session, const XrActionStateGetInfo* getInfo, XrActionStateVector2f* state) {
    try {
        return runtime.xrGetActionStateVector2f(session, getInfo, state);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetCurrentInteractionProfile(XrSession session, XrPath topLevelUserPath, XrInteractionProfileState* interactionProfile) {
    try {
        return runtime.xrGetCurrentInteractionProfile(session, topLevelUserPath, interactionProfile);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetInputSourceLocalizedName(XrSession session, const XrInputSourceLocalizedNameGetInfo* getInfo, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrGetInputSourceLocalizedName(session, getInfo, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProcAddr(XrInstance instance, const char* name, PFN_xrVoidFunction* function) {
    try {
        return runtime.xrGetInstanceProcAddr(instance, name, function);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetInstanceProperties(XrInstance instance, XrInstanceProperties* instanceProperties) {
    try {
        return runtime.xrGetInstanceProperties(instance, instanceProperties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetReferenceSpaceBoundsRect(XrSession session, XrReferenceSpaceType referenceSpaceType, XrExtent2Df* bounds) {
    try {
        return runtime.xrGetReferenceSpaceBoundsRect(session, referenceSpaceType, bounds);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSystem(XrInstance instance, const XrSystemGetInfo* getInfo, XrSystemId* systemId) {
    try {
        return runtime.xrGetSystem(instance, getInfo, systemId);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetSystemProperties(XrInstance instance, XrSystemId systemId, XrSystemProperties* properties) {
    try {
        return runtime.xrGetSystemProperties(instance, systemId, properties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrGetViewConfigurationProperties(XrInstance instance, XrSystemId systemId, XrViewConfigurationType viewConfigurationType, XrViewConfigurationProperties* configurationProperties) {
    try {
        return runtime.xrGetViewConfigurationProperties(instance, systemId, viewConfigurationType, configurationProperties);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateSpace(XrSpace space, XrSpace baseSpace, XrTime time, XrSpaceLocation* location) {
    try {
        return runtime.xrLocateSpace(space, baseSpace, time, location);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateSpaces(XrSession session, const XrSpacesLocateInfo* locateInfo, XrSpaceLocations* spaceLocations) {
    try {
        return runtime.xrLocateSpaces(session, locateInfo, spaceLocations);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrLocateViews(XrSession session, const XrViewLocateInfo* viewLocateInfo, XrViewState* viewState, uint32_t viewCapacityInput, uint32_t* viewCountOutput, XrView* views) {
    try {
        return runtime.xrLocateViews(session, viewLocateInfo, viewState, viewCapacityInput, viewCountOutput, views);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPathToString(XrInstance instance, XrPath path, uint32_t bufferCapacityInput, uint32_t* bufferCountOutput, char* buffer) {
    try {
        return runtime.xrPathToString(instance, path, bufferCapacityInput, bufferCountOutput, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrPollEvent(XrInstance instance, XrEventDataBuffer* eventData) {
    try {
        return runtime.xrPollEvent(instance, eventData);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrReleaseSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageReleaseInfo* releaseInfo) {
    try {
        return runtime.xrReleaseSwapchainImage(swapchain, releaseInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrRequestExitSession(XrSession session) {
    try {
        return runtime.xrRequestExitSession(session);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrResultToString(XrInstance instance, XrResult value, char buffer[XR_MAX_RESULT_STRING_SIZE]) {
    try {
        return runtime.xrResultToString(instance, value, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStopHapticFeedback(XrSession session, const XrHapticActionInfo* hapticActionInfo) {
    try {
        return runtime.xrStopHapticFeedback(session, hapticActionInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStringToPath(XrInstance instance, const char* pathString, XrPath* path) {
    try {
        return runtime.xrStringToPath(instance, pathString, path);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrStructureTypeToString(XrInstance instance, XrStructureType value, char buffer[XR_MAX_STRUCTURE_NAME_SIZE]) {
    try {
        return runtime.xrStructureTypeToString(instance, value, buffer);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSuggestInteractionProfileBindings(XrInstance instance, const XrInteractionProfileSuggestedBinding* suggestedBindings) {
    try {
        return runtime.xrSuggestInteractionProfileBindings(instance, suggestedBindings);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrSyncActions(XrSession session, const XrActionsSyncInfo* syncInfo) {
    try {
        return runtime.xrSyncActions(session, syncInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrWaitFrame(XrSession session, const XrFrameWaitInfo* frameWaitInfo, XrFrameState* frameState) {
    try {
        return runtime.xrWaitFrame(session, frameWaitInfo, frameState);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}


XRAPI_ATTR XrResult XRAPI_CALL xrWaitSwapchainImage(XrSwapchain swapchain, const XrSwapchainImageWaitInfo* waitInfo) {
    try {
        return runtime.xrWaitSwapchainImage(swapchain, waitInfo);
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}



}