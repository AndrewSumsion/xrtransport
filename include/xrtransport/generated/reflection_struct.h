#ifndef XRT_REFLECTION_STRUCT_H
#define XRT_REFLECTION_STRUCT_H





// Toggleable lists of structs for each extension
#define XRT_STRUCT_LIST_XR_KHR_android_thread_settings(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_thread_settings(_)
#define XRT_STRUCT_LIST_XR_KHR_android_surface_swapchain(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_surface_swapchain(_)
#ifdef XRT_ENABLE_XR_KHR_composition_layer_cube
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_cube(_) \
    _(XrCompositionLayerCubeKHR, XR, XR_TYPE_COMPOSITION_LAYER_CUBE_KHR) \
    _(XrCompositionLayerCubeKHR, XR, XR_TYPE_COMPOSITION_LAYER_CUBE_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cube(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_cube(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cube(_) \
    _(XrCompositionLayerCubeKHR) \
    _(XrCompositionLayerCubeKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_android_create_instance
#define XRT_STRUCT_LIST_XR_KHR_android_create_instance(_) \
    _(XrInstanceCreateInfoAndroidKHR, XR, XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR) \
    _(XrInstanceCreateInfoAndroidKHR, XR, XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_create_instance(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_android_create_instance(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_create_instance(_) \
    _(XrInstanceCreateInfoAndroidKHR) \
    _(XrInstanceCreateInfoAndroidKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_composition_layer_depth
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_depth(_) \
    _(XrCompositionLayerDepthInfoKHR, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR) \
    _(XrCompositionLayerDepthInfoKHR, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_depth(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_depth(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_depth(_) \
    _(XrCompositionLayerDepthInfoKHR) \
    _(XrCompositionLayerDepthInfoKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_vulkan_swapchain_format_list
#define XRT_STRUCT_LIST_XR_KHR_vulkan_swapchain_format_list(_) \
    _(XrVulkanSwapchainFormatListCreateInfoKHR, XR, XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR) \
    _(XrVulkanSwapchainFormatListCreateInfoKHR, XR, XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_swapchain_format_list(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_vulkan_swapchain_format_list(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_swapchain_format_list(_) \
    _(XrVulkanSwapchainFormatListCreateInfoKHR) \
    _(XrVulkanSwapchainFormatListCreateInfoKHR) 
#endif
#ifdef XRT_ENABLE_XR_EXT_performance_settings
#define XRT_STRUCT_LIST_XR_EXT_performance_settings(_) \
    _(XrEventDataPerfSettingsEXT, XR, XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT) \
    _(XrEventDataPerfSettingsEXT, XR, XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_performance_settings(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_performance_settings(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_performance_settings(_) \
    _(XrEventDataPerfSettingsEXT) \
    _(XrEventDataPerfSettingsEXT) 
#endif
#define XRT_STRUCT_LIST_XR_EXT_thermal_query(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_thermal_query(_)
#ifdef XRT_ENABLE_XR_KHR_composition_layer_cylinder
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_cylinder(_) \
    _(XrCompositionLayerCylinderKHR, XR, XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR) \
    _(XrCompositionLayerCylinderKHR, XR, XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cylinder(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_cylinder(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cylinder(_) \
    _(XrCompositionLayerCylinderKHR) \
    _(XrCompositionLayerCylinderKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_composition_layer_equirect
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect(_) \
    _(XrCompositionLayerEquirectKHR, XR, XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR) \
    _(XrCompositionLayerEquirectKHR, XR, XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect(_) \
    _(XrCompositionLayerEquirectKHR) \
    _(XrCompositionLayerEquirectKHR) 
#endif
#ifdef XRT_ENABLE_XR_EXT_debug_utils
#define XRT_STRUCT_LIST_XR_EXT_debug_utils(_) \
    _(XrDebugUtilsObjectNameInfoEXT, XR, XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT) \
    _(XrDebugUtilsLabelEXT, XR, XR_TYPE_DEBUG_UTILS_LABEL_EXT) \
    _(XrDebugUtilsMessengerCallbackDataEXT, XR, XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT) \
    _(XrDebugUtilsMessengerCreateInfoEXT, XR, XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT) \
    _(XrDebugUtilsObjectNameInfoEXT, XR, XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT) \
    _(XrDebugUtilsMessengerCallbackDataEXT, XR, XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT) \
    _(XrDebugUtilsMessengerCreateInfoEXT, XR, XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT) \
    _(XrDebugUtilsLabelEXT, XR, XR_TYPE_DEBUG_UTILS_LABEL_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_debug_utils(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_debug_utils(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_debug_utils(_) \
    _(XrDebugUtilsObjectNameInfoEXT) \
    _(XrDebugUtilsLabelEXT) \
    _(XrDebugUtilsMessengerCallbackDataEXT) \
    _(XrDebugUtilsMessengerCreateInfoEXT) \
    _(XrDebugUtilsObjectNameInfoEXT) \
    _(XrDebugUtilsMessengerCallbackDataEXT) \
    _(XrDebugUtilsMessengerCreateInfoEXT) \
    _(XrDebugUtilsLabelEXT) 
#endif
#ifdef XRT_ENABLE_XR_KHR_opengl_enable
#define XRT_STRUCT_LIST_XR_KHR_opengl_enable(_) \
    _(XrGraphicsBindingOpenGLWin32KHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR) \
    _(XrGraphicsBindingOpenGLXlibKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR) \
    _(XrGraphicsBindingOpenGLXcbKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR) \
    _(XrGraphicsBindingOpenGLWaylandKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR) \
    _(XrSwapchainImageOpenGLKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR) \
    _(XrGraphicsRequirementsOpenGLKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR) \
    _(XrGraphicsBindingOpenGLWin32KHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR) \
    _(XrGraphicsBindingOpenGLXlibKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR) \
    _(XrGraphicsBindingOpenGLXcbKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR) \
    _(XrGraphicsBindingOpenGLWaylandKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR) \
    _(XrSwapchainImageOpenGLKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR) \
    _(XrGraphicsRequirementsOpenGLKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_opengl_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_) \
    _(XrGraphicsBindingOpenGLWin32KHR) \
    _(XrGraphicsBindingOpenGLXlibKHR) \
    _(XrGraphicsBindingOpenGLXcbKHR) \
    _(XrGraphicsBindingOpenGLWaylandKHR) \
    _(XrSwapchainImageOpenGLKHR) \
    _(XrGraphicsRequirementsOpenGLKHR) \
    _(XrGraphicsBindingOpenGLWin32KHR) \
    _(XrGraphicsBindingOpenGLXlibKHR) \
    _(XrGraphicsBindingOpenGLXcbKHR) \
    _(XrGraphicsBindingOpenGLWaylandKHR) \
    _(XrSwapchainImageOpenGLKHR) \
    _(XrGraphicsRequirementsOpenGLKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_opengl_es_enable
#define XRT_STRUCT_LIST_XR_KHR_opengl_es_enable(_) \
    _(XrGraphicsBindingOpenGLESAndroidKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR) \
    _(XrSwapchainImageOpenGLESKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR) \
    _(XrGraphicsRequirementsOpenGLESKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR) \
    _(XrGraphicsBindingOpenGLESAndroidKHR, XR, XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR) \
    _(XrSwapchainImageOpenGLESKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR) \
    _(XrGraphicsRequirementsOpenGLESKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_opengl_es_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_) \
    _(XrGraphicsBindingOpenGLESAndroidKHR) \
    _(XrSwapchainImageOpenGLESKHR) \
    _(XrGraphicsRequirementsOpenGLESKHR) \
    _(XrGraphicsBindingOpenGLESAndroidKHR) \
    _(XrSwapchainImageOpenGLESKHR) \
    _(XrGraphicsRequirementsOpenGLESKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_vulkan_enable
#define XRT_STRUCT_LIST_XR_KHR_vulkan_enable(_) \
    _(XrGraphicsBindingVulkanKHR, XR, XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR) \
    _(XrSwapchainImageVulkanKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR) \
    _(XrGraphicsRequirementsVulkanKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR) \
    _(XrGraphicsBindingVulkanKHR, XR, XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR) \
    _(XrSwapchainImageVulkanKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR) \
    _(XrGraphicsRequirementsVulkanKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_vulkan_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_) \
    _(XrGraphicsBindingVulkanKHR) \
    _(XrSwapchainImageVulkanKHR) \
    _(XrGraphicsRequirementsVulkanKHR) \
    _(XrGraphicsBindingVulkanKHR) \
    _(XrSwapchainImageVulkanKHR) \
    _(XrGraphicsRequirementsVulkanKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_D3D11_enable
#define XRT_STRUCT_LIST_XR_KHR_D3D11_enable(_) \
    _(XrGraphicsBindingD3D11KHR, XR, XR_TYPE_GRAPHICS_BINDING_D3D11_KHR) \
    _(XrSwapchainImageD3D11KHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR) \
    _(XrGraphicsRequirementsD3D11KHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR) \
    _(XrGraphicsBindingD3D11KHR, XR, XR_TYPE_GRAPHICS_BINDING_D3D11_KHR) \
    _(XrSwapchainImageD3D11KHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR) \
    _(XrGraphicsRequirementsD3D11KHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_D3D11_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_) \
    _(XrGraphicsBindingD3D11KHR) \
    _(XrSwapchainImageD3D11KHR) \
    _(XrGraphicsRequirementsD3D11KHR) \
    _(XrGraphicsBindingD3D11KHR) \
    _(XrSwapchainImageD3D11KHR) \
    _(XrGraphicsRequirementsD3D11KHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_D3D12_enable
#define XRT_STRUCT_LIST_XR_KHR_D3D12_enable(_) \
    _(XrGraphicsBindingD3D12KHR, XR, XR_TYPE_GRAPHICS_BINDING_D3D12_KHR) \
    _(XrSwapchainImageD3D12KHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR) \
    _(XrGraphicsRequirementsD3D12KHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR) \
    _(XrGraphicsBindingD3D12KHR, XR, XR_TYPE_GRAPHICS_BINDING_D3D12_KHR) \
    _(XrSwapchainImageD3D12KHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR) \
    _(XrGraphicsRequirementsD3D12KHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_D3D12_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_) \
    _(XrGraphicsBindingD3D12KHR) \
    _(XrSwapchainImageD3D12KHR) \
    _(XrGraphicsRequirementsD3D12KHR) \
    _(XrGraphicsBindingD3D12KHR) \
    _(XrSwapchainImageD3D12KHR) \
    _(XrGraphicsRequirementsD3D12KHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_metal_enable
#define XRT_STRUCT_LIST_XR_KHR_metal_enable(_) \
    _(XrGraphicsBindingMetalKHR, XR, XR_TYPE_GRAPHICS_BINDING_METAL_KHR) \
    _(XrSwapchainImageMetalKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR) \
    _(XrGraphicsRequirementsMetalKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR) \
    _(XrGraphicsBindingMetalKHR, XR, XR_TYPE_GRAPHICS_BINDING_METAL_KHR) \
    _(XrSwapchainImageMetalKHR, XR, XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR) \
    _(XrGraphicsRequirementsMetalKHR, XR, XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_metal_enable(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_metal_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_metal_enable(_) \
    _(XrGraphicsBindingMetalKHR) \
    _(XrSwapchainImageMetalKHR) \
    _(XrGraphicsRequirementsMetalKHR) \
    _(XrGraphicsBindingMetalKHR) \
    _(XrSwapchainImageMetalKHR) \
    _(XrGraphicsRequirementsMetalKHR) 
#endif
#ifdef XRT_ENABLE_XR_EXT_eye_gaze_interaction
#define XRT_STRUCT_LIST_XR_EXT_eye_gaze_interaction(_) \
    _(XrSystemEyeGazeInteractionPropertiesEXT, XR, XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT) \
    _(XrEyeGazeSampleTimeEXT, XR, XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT) \
    _(XrSystemEyeGazeInteractionPropertiesEXT, XR, XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT) \
    _(XrEyeGazeSampleTimeEXT, XR, XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_eye_gaze_interaction(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_eye_gaze_interaction(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_eye_gaze_interaction(_) \
    _(XrSystemEyeGazeInteractionPropertiesEXT) \
    _(XrEyeGazeSampleTimeEXT) \
    _(XrSystemEyeGazeInteractionPropertiesEXT) \
    _(XrEyeGazeSampleTimeEXT) 
#endif
#ifdef XRT_ENABLE_XR_KHR_visibility_mask
#define XRT_STRUCT_LIST_XR_KHR_visibility_mask(_) \
    _(XrVisibilityMaskKHR, XR, XR_TYPE_VISIBILITY_MASK_KHR) \
    _(XrEventDataVisibilityMaskChangedKHR, XR, XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR) \
    _(XrVisibilityMaskKHR, XR, XR_TYPE_VISIBILITY_MASK_KHR) \
    _(XrEventDataVisibilityMaskChangedKHR, XR, XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_visibility_mask(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_) \
    _(XrVisibilityMaskKHR) \
    _(XrEventDataVisibilityMaskChangedKHR) \
    _(XrVisibilityMaskKHR) \
    _(XrEventDataVisibilityMaskChangedKHR) 
#endif
#ifdef XRT_ENABLE_XR_EXTX_overlay
#define XRT_STRUCT_LIST_XR_EXTX_overlay(_) \
    _(XrSessionCreateInfoOverlayEXTX, XR, XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX) \
    _(XrEventDataMainSessionVisibilityChangedEXTX, XR, XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX) \
    _(XrSessionCreateInfoOverlayEXTX, XR, XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX) \
    _(XrEventDataMainSessionVisibilityChangedEXTX, XR, XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXTX_overlay(_)
#else
#define XRT_STRUCT_LIST_XR_EXTX_overlay(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXTX_overlay(_) \
    _(XrSessionCreateInfoOverlayEXTX) \
    _(XrEventDataMainSessionVisibilityChangedEXTX) \
    _(XrSessionCreateInfoOverlayEXTX) \
    _(XrEventDataMainSessionVisibilityChangedEXTX) 
#endif
#ifdef XRT_ENABLE_XR_KHR_composition_layer_color_scale_bias
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_color_scale_bias(_) \
    _(XrCompositionLayerColorScaleBiasKHR, XR, XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR) \
    _(XrCompositionLayerColorScaleBiasKHR, XR, XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_color_scale_bias(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_color_scale_bias(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_color_scale_bias(_) \
    _(XrCompositionLayerColorScaleBiasKHR) \
    _(XrCompositionLayerColorScaleBiasKHR) 
#endif
#define XRT_STRUCT_LIST_XR_KHR_win32_convert_performance_counter_time(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_win32_convert_performance_counter_time(_)
#define XRT_STRUCT_LIST_XR_KHR_convert_timespec_time(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_convert_timespec_time(_)
#ifdef XRT_ENABLE_XR_MSFT_spatial_anchor
#define XRT_STRUCT_LIST_XR_MSFT_spatial_anchor(_) \
    _(XrSpatialAnchorCreateInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT) \
    _(XrSpatialAnchorSpaceCreateInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_spatial_anchor(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_) \
    _(XrSpatialAnchorCreateInfoMSFT) \
    _(XrSpatialAnchorSpaceCreateInfoMSFT) 
#endif
#ifdef XRT_ENABLE_XR_FB_composition_layer_image_layout
#define XRT_STRUCT_LIST_XR_FB_composition_layer_image_layout(_) \
    _(XrCompositionLayerImageLayoutFB, XR, XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB) \
    _(XrCompositionLayerImageLayoutFB, XR, XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_image_layout(_)
#else
#define XRT_STRUCT_LIST_XR_FB_composition_layer_image_layout(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_image_layout(_) \
    _(XrCompositionLayerImageLayoutFB) \
    _(XrCompositionLayerImageLayoutFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_composition_layer_alpha_blend
#define XRT_STRUCT_LIST_XR_FB_composition_layer_alpha_blend(_) \
    _(XrCompositionLayerAlphaBlendFB, XR, XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB) \
    _(XrCompositionLayerAlphaBlendFB, XR, XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_alpha_blend(_)
#else
#define XRT_STRUCT_LIST_XR_FB_composition_layer_alpha_blend(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_alpha_blend(_) \
    _(XrCompositionLayerAlphaBlendFB) \
    _(XrCompositionLayerAlphaBlendFB) 
#endif
#ifdef XRT_ENABLE_XR_EXT_view_configuration_depth_range
#define XRT_STRUCT_LIST_XR_EXT_view_configuration_depth_range(_) \
    _(XrViewConfigurationDepthRangeEXT, XR, XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT) \
    _(XrViewConfigurationDepthRangeEXT, XR, XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_view_configuration_depth_range(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_view_configuration_depth_range(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_view_configuration_depth_range(_) \
    _(XrViewConfigurationDepthRangeEXT) \
    _(XrViewConfigurationDepthRangeEXT) 
#endif
#define XRT_STRUCT_LIST_XR_EXT_conformance_automation(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_conformance_automation(_)
#ifdef XRT_ENABLE_XR_MNDX_egl_enable
#define XRT_STRUCT_LIST_XR_MNDX_egl_enable(_) \
    _(XrGraphicsBindingEGLMNDX, XR, XR_TYPE_GRAPHICS_BINDING_EGL_MNDX) \
    _(XrGraphicsBindingEGLMNDX, XR, XR_TYPE_GRAPHICS_BINDING_EGL_MNDX) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_egl_enable(_)
#else
#define XRT_STRUCT_LIST_XR_MNDX_egl_enable(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_egl_enable(_) \
    _(XrGraphicsBindingEGLMNDX) \
    _(XrGraphicsBindingEGLMNDX) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_spatial_graph_bridge
#define XRT_STRUCT_LIST_XR_MSFT_spatial_graph_bridge(_) \
    _(XrSpatialGraphNodeSpaceCreateInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT) \
    _(XrSpatialGraphStaticNodeBindingCreateInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT) \
    _(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT) \
    _(XrSpatialGraphNodeBindingPropertiesMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT) \
    _(XrSpatialGraphNodeSpaceCreateInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT) \
    _(XrSpatialGraphStaticNodeBindingCreateInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT) \
    _(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT) \
    _(XrSpatialGraphNodeBindingPropertiesMSFT, XR, XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_spatial_graph_bridge(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_) \
    _(XrSpatialGraphNodeSpaceCreateInfoMSFT) \
    _(XrSpatialGraphStaticNodeBindingCreateInfoMSFT) \
    _(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT) \
    _(XrSpatialGraphNodeBindingPropertiesMSFT) \
    _(XrSpatialGraphNodeSpaceCreateInfoMSFT) \
    _(XrSpatialGraphStaticNodeBindingCreateInfoMSFT) \
    _(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT) \
    _(XrSpatialGraphNodeBindingPropertiesMSFT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_hand_tracking
#define XRT_STRUCT_LIST_XR_EXT_hand_tracking(_) \
    _(XrSystemHandTrackingPropertiesEXT, XR, XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT) \
    _(XrHandTrackerCreateInfoEXT, XR, XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT) \
    _(XrHandJointsLocateInfoEXT, XR, XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT) \
    _(XrHandJointLocationEXT, PLAIN) \
    _(XrHandJointVelocityEXT, PLAIN) \
    _(XrHandJointLocationsEXT, XR, XR_TYPE_HAND_JOINT_LOCATIONS_EXT) \
    _(XrHandJointVelocitiesEXT, XR, XR_TYPE_HAND_JOINT_VELOCITIES_EXT) \
    _(XrSystemHandTrackingPropertiesEXT, XR, XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT) \
    _(XrHandTrackerCreateInfoEXT, XR, XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT) \
    _(XrHandJointsLocateInfoEXT, XR, XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT) \
    _(XrHandJointLocationsEXT, XR, XR_TYPE_HAND_JOINT_LOCATIONS_EXT) \
    _(XrHandJointVelocitiesEXT, XR, XR_TYPE_HAND_JOINT_VELOCITIES_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_hand_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_) \
    _(XrSystemHandTrackingPropertiesEXT) \
    _(XrHandTrackerCreateInfoEXT) \
    _(XrHandJointsLocateInfoEXT) \
    _(XrHandJointLocationEXT) \
    _(XrHandJointVelocityEXT) \
    _(XrHandJointLocationsEXT) \
    _(XrHandJointVelocitiesEXT) \
    _(XrSystemHandTrackingPropertiesEXT) \
    _(XrHandTrackerCreateInfoEXT) \
    _(XrHandJointsLocateInfoEXT) \
    _(XrHandJointLocationsEXT) \
    _(XrHandJointVelocitiesEXT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_hand_tracking_mesh
#define XRT_STRUCT_LIST_XR_MSFT_hand_tracking_mesh(_) \
    _(XrSystemHandTrackingMeshPropertiesMSFT, XR, XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT) \
    _(XrHandMeshSpaceCreateInfoMSFT, XR, XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT) \
    _(XrHandMeshUpdateInfoMSFT, XR, XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT) \
    _(XrHandMeshMSFT, XR, XR_TYPE_HAND_MESH_MSFT) \
    _(XrHandMeshIndexBufferMSFT, PLAIN) \
    _(XrHandMeshVertexBufferMSFT, PLAIN) \
    _(XrHandMeshVertexMSFT, PLAIN) \
    _(XrHandPoseTypeInfoMSFT, XR, XR_TYPE_HAND_POSE_TYPE_INFO_MSFT) \
    _(XrSystemHandTrackingMeshPropertiesMSFT, XR, XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT) \
    _(XrHandMeshSpaceCreateInfoMSFT, XR, XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT) \
    _(XrHandMeshUpdateInfoMSFT, XR, XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT) \
    _(XrHandMeshMSFT, XR, XR_TYPE_HAND_MESH_MSFT) \
    _(XrHandPoseTypeInfoMSFT, XR, XR_TYPE_HAND_POSE_TYPE_INFO_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_hand_tracking_mesh(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_) \
    _(XrSystemHandTrackingMeshPropertiesMSFT) \
    _(XrHandMeshSpaceCreateInfoMSFT) \
    _(XrHandMeshUpdateInfoMSFT) \
    _(XrHandMeshMSFT) \
    _(XrHandMeshIndexBufferMSFT) \
    _(XrHandMeshVertexBufferMSFT) \
    _(XrHandMeshVertexMSFT) \
    _(XrHandPoseTypeInfoMSFT) \
    _(XrSystemHandTrackingMeshPropertiesMSFT) \
    _(XrHandMeshSpaceCreateInfoMSFT) \
    _(XrHandMeshUpdateInfoMSFT) \
    _(XrHandMeshMSFT) \
    _(XrHandPoseTypeInfoMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_secondary_view_configuration
#define XRT_STRUCT_LIST_XR_MSFT_secondary_view_configuration(_) \
    _(XrSecondaryViewConfigurationSessionBeginInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT) \
    _(XrSecondaryViewConfigurationStateMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT) \
    _(XrSecondaryViewConfigurationFrameStateMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT) \
    _(XrSecondaryViewConfigurationFrameEndInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT) \
    _(XrSecondaryViewConfigurationLayerInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT) \
    _(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT) \
    _(XrSecondaryViewConfigurationSessionBeginInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT) \
    _(XrSecondaryViewConfigurationStateMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT) \
    _(XrSecondaryViewConfigurationFrameStateMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT) \
    _(XrSecondaryViewConfigurationFrameEndInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT) \
    _(XrSecondaryViewConfigurationLayerInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT) \
    _(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT, XR, XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_secondary_view_configuration(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_secondary_view_configuration(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_secondary_view_configuration(_) \
    _(XrSecondaryViewConfigurationSessionBeginInfoMSFT) \
    _(XrSecondaryViewConfigurationStateMSFT) \
    _(XrSecondaryViewConfigurationFrameStateMSFT) \
    _(XrSecondaryViewConfigurationFrameEndInfoMSFT) \
    _(XrSecondaryViewConfigurationLayerInfoMSFT) \
    _(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT) \
    _(XrSecondaryViewConfigurationSessionBeginInfoMSFT) \
    _(XrSecondaryViewConfigurationStateMSFT) \
    _(XrSecondaryViewConfigurationFrameStateMSFT) \
    _(XrSecondaryViewConfigurationFrameEndInfoMSFT) \
    _(XrSecondaryViewConfigurationLayerInfoMSFT) \
    _(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_controller_model
#define XRT_STRUCT_LIST_XR_MSFT_controller_model(_) \
    _(XrControllerModelKeyStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT) \
    _(XrControllerModelNodePropertiesMSFT, XR, XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT) \
    _(XrControllerModelPropertiesMSFT, XR, XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT) \
    _(XrControllerModelNodeStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT) \
    _(XrControllerModelStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_STATE_MSFT) \
    _(XrControllerModelKeyStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT) \
    _(XrControllerModelNodePropertiesMSFT, XR, XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT) \
    _(XrControllerModelPropertiesMSFT, XR, XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT) \
    _(XrControllerModelNodeStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT) \
    _(XrControllerModelStateMSFT, XR, XR_TYPE_CONTROLLER_MODEL_STATE_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_controller_model(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_controller_model(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_controller_model(_) \
    _(XrControllerModelKeyStateMSFT) \
    _(XrControllerModelNodePropertiesMSFT) \
    _(XrControllerModelPropertiesMSFT) \
    _(XrControllerModelNodeStateMSFT) \
    _(XrControllerModelStateMSFT) \
    _(XrControllerModelKeyStateMSFT) \
    _(XrControllerModelNodePropertiesMSFT) \
    _(XrControllerModelPropertiesMSFT) \
    _(XrControllerModelNodeStateMSFT) \
    _(XrControllerModelStateMSFT) 
#endif
#define XRT_STRUCT_LIST_XR_MSFT_perception_anchor_interop(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_perception_anchor_interop(_)
#ifdef XRT_ENABLE_XR_EPIC_view_configuration_fov
#define XRT_STRUCT_LIST_XR_EPIC_view_configuration_fov(_) \
    _(XrViewConfigurationViewFovEPIC, XR, XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC) \
    _(XrViewConfigurationViewFovEPIC, XR, XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EPIC_view_configuration_fov(_)
#else
#define XRT_STRUCT_LIST_XR_EPIC_view_configuration_fov(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EPIC_view_configuration_fov(_) \
    _(XrViewConfigurationViewFovEPIC) \
    _(XrViewConfigurationViewFovEPIC) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_holographic_window_attachment
#define XRT_STRUCT_LIST_XR_MSFT_holographic_window_attachment(_) \
    _(XrHolographicWindowAttachmentMSFT, XR, XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT) \
    _(XrHolographicWindowAttachmentMSFT, XR, XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_holographic_window_attachment(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_holographic_window_attachment(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_holographic_window_attachment(_) \
    _(XrHolographicWindowAttachmentMSFT) \
    _(XrHolographicWindowAttachmentMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_composition_layer_reprojection
#define XRT_STRUCT_LIST_XR_MSFT_composition_layer_reprojection(_) \
    _(XrCompositionLayerReprojectionInfoMSFT, XR, XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT) \
    _(XrCompositionLayerReprojectionPlaneOverrideMSFT, XR, XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT) \
    _(XrCompositionLayerReprojectionInfoMSFT, XR, XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT) \
    _(XrCompositionLayerReprojectionPlaneOverrideMSFT, XR, XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_composition_layer_reprojection(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_) \
    _(XrCompositionLayerReprojectionInfoMSFT) \
    _(XrCompositionLayerReprojectionPlaneOverrideMSFT) \
    _(XrCompositionLayerReprojectionInfoMSFT) \
    _(XrCompositionLayerReprojectionPlaneOverrideMSFT) 
#endif
#ifdef XRT_ENABLE_XR_FB_android_surface_swapchain_create
#define XRT_STRUCT_LIST_XR_FB_android_surface_swapchain_create(_) \
    _(XrAndroidSurfaceSwapchainCreateInfoFB, XR, XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB) \
    _(XrAndroidSurfaceSwapchainCreateInfoFB, XR, XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_android_surface_swapchain_create(_)
#else
#define XRT_STRUCT_LIST_XR_FB_android_surface_swapchain_create(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_android_surface_swapchain_create(_) \
    _(XrAndroidSurfaceSwapchainCreateInfoFB) \
    _(XrAndroidSurfaceSwapchainCreateInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_swapchain_update_state
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state(_) \
    _(XrSwapchainStateBaseHeaderFB, XR_HEADER) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_)
#else
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_) \
    _(XrSwapchainStateBaseHeaderFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_composition_layer_secure_content
#define XRT_STRUCT_LIST_XR_FB_composition_layer_secure_content(_) \
    _(XrCompositionLayerSecureContentFB, XR, XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB) \
    _(XrCompositionLayerSecureContentFB, XR, XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_secure_content(_)
#else
#define XRT_STRUCT_LIST_XR_FB_composition_layer_secure_content(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_secure_content(_) \
    _(XrCompositionLayerSecureContentFB) \
    _(XrCompositionLayerSecureContentFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_body_tracking
#define XRT_STRUCT_LIST_XR_FB_body_tracking(_) \
    _(XrBodyJointLocationFB, PLAIN) \
    _(XrSystemBodyTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB) \
    _(XrBodyTrackerCreateInfoFB, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_FB) \
    _(XrBodySkeletonJointFB, PLAIN) \
    _(XrBodySkeletonFB, XR, XR_TYPE_BODY_SKELETON_FB) \
    _(XrBodyJointsLocateInfoFB, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB) \
    _(XrBodyJointLocationsFB, XR, XR_TYPE_BODY_JOINT_LOCATIONS_FB) \
    _(XrBodyTrackerCreateInfoFB, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_FB) \
    _(XrBodyJointsLocateInfoFB, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB) \
    _(XrSystemBodyTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB) \
    _(XrBodyJointLocationsFB, XR, XR_TYPE_BODY_JOINT_LOCATIONS_FB) \
    _(XrBodySkeletonFB, XR, XR_TYPE_BODY_SKELETON_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_body_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_FB_body_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_body_tracking(_) \
    _(XrBodyJointLocationFB) \
    _(XrSystemBodyTrackingPropertiesFB) \
    _(XrBodyTrackerCreateInfoFB) \
    _(XrBodySkeletonJointFB) \
    _(XrBodySkeletonFB) \
    _(XrBodyJointsLocateInfoFB) \
    _(XrBodyJointLocationsFB) \
    _(XrBodyTrackerCreateInfoFB) \
    _(XrBodyJointsLocateInfoFB) \
    _(XrSystemBodyTrackingPropertiesFB) \
    _(XrBodyJointLocationsFB) \
    _(XrBodySkeletonFB) 
#endif
#ifdef XRT_ENABLE_XR_EXT_dpad_binding
#define XRT_STRUCT_LIST_XR_EXT_dpad_binding(_) \
    _(XrInteractionProfileDpadBindingEXT, XR, XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT) \
    _(XrInteractionProfileDpadBindingEXT, XR, XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_dpad_binding(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_dpad_binding(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_dpad_binding(_) \
    _(XrInteractionProfileDpadBindingEXT) \
    _(XrInteractionProfileDpadBindingEXT) 
#endif
#ifdef XRT_ENABLE_XR_VALVE_analog_threshold
#define XRT_STRUCT_LIST_XR_VALVE_analog_threshold(_) \
    _(XrInteractionProfileAnalogThresholdVALVE, XR, XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE) \
    _(XrInteractionProfileAnalogThresholdVALVE, XR, XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VALVE_analog_threshold(_)
#else
#define XRT_STRUCT_LIST_XR_VALVE_analog_threshold(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VALVE_analog_threshold(_) \
    _(XrInteractionProfileAnalogThresholdVALVE) \
    _(XrInteractionProfileAnalogThresholdVALVE) 
#endif
#ifdef XRT_ENABLE_XR_EXT_hand_joints_motion_range
#define XRT_STRUCT_LIST_XR_EXT_hand_joints_motion_range(_) \
    _(XrHandJointsMotionRangeInfoEXT, XR, XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT) \
    _(XrHandJointsMotionRangeInfoEXT, XR, XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_joints_motion_range(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_hand_joints_motion_range(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_joints_motion_range(_) \
    _(XrHandJointsMotionRangeInfoEXT) \
    _(XrHandJointsMotionRangeInfoEXT) 
#endif
#ifdef XRT_ENABLE_XR_KHR_loader_init
#define XRT_STRUCT_LIST_XR_KHR_loader_init(_) \
    _(XrLoaderInitInfoBaseHeaderKHR, XR_HEADER) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_loader_init(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init(_) \
    _(XrLoaderInitInfoBaseHeaderKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_loader_init_android
#define XRT_STRUCT_LIST_XR_KHR_loader_init_android(_) \
    _(XrLoaderInitInfoAndroidKHR, XR, XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR) \
    _(XrLoaderInitInfoAndroidKHR, XR, XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init_android(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_loader_init_android(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init_android(_) \
    _(XrLoaderInitInfoAndroidKHR) \
    _(XrLoaderInitInfoAndroidKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_vulkan_enable2
#define XRT_STRUCT_LIST_XR_KHR_vulkan_enable2(_) \
    _(XrVulkanInstanceCreateInfoKHR, XR, XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR) \
    _(XrVulkanDeviceCreateInfoKHR, XR, XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR) \
    _(XrVulkanGraphicsDeviceGetInfoKHR, XR, XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR) \
    _(XrVulkanInstanceCreateInfoKHR, XR, XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR) \
    _(XrVulkanDeviceCreateInfoKHR, XR, XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR) \
    _(XrVulkanGraphicsDeviceGetInfoKHR, XR, XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_vulkan_enable2(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_) \
    _(XrVulkanInstanceCreateInfoKHR) \
    _(XrVulkanDeviceCreateInfoKHR) \
    _(XrVulkanGraphicsDeviceGetInfoKHR) \
    _(XrVulkanInstanceCreateInfoKHR) \
    _(XrVulkanDeviceCreateInfoKHR) \
    _(XrVulkanGraphicsDeviceGetInfoKHR) 
#endif
#ifdef XRT_ENABLE_XR_KHR_composition_layer_equirect2
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect2(_) \
    _(XrCompositionLayerEquirect2KHR, XR, XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR) \
    _(XrCompositionLayerEquirect2KHR, XR, XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect2(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect2(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect2(_) \
    _(XrCompositionLayerEquirect2KHR) \
    _(XrCompositionLayerEquirect2KHR) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_scene_understanding
#define XRT_STRUCT_LIST_XR_MSFT_scene_understanding(_) \
    _(XrUuidMSFT, PLAIN) \
    _(XrSceneObserverCreateInfoMSFT, XR, XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT) \
    _(XrSceneCreateInfoMSFT, XR, XR_TYPE_SCENE_CREATE_INFO_MSFT) \
    _(XrNewSceneComputeInfoMSFT, XR, XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT) \
    _(XrVisualMeshComputeLodInfoMSFT, XR, XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT) \
    _(XrSceneSphereBoundMSFT, PLAIN) \
    _(XrSceneOrientedBoxBoundMSFT, PLAIN) \
    _(XrSceneFrustumBoundMSFT, PLAIN) \
    _(XrSceneBoundsMSFT, PLAIN) \
    _(XrSceneComponentMSFT, PLAIN) \
    _(XrSceneComponentsMSFT, XR, XR_TYPE_SCENE_COMPONENTS_MSFT) \
    _(XrSceneComponentsGetInfoMSFT, XR, XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT) \
    _(XrSceneComponentLocationMSFT, PLAIN) \
    _(XrSceneComponentLocationsMSFT, XR, XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT) \
    _(XrSceneComponentsLocateInfoMSFT, XR, XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT) \
    _(XrSceneObjectMSFT, PLAIN) \
    _(XrSceneObjectsMSFT, XR, XR_TYPE_SCENE_OBJECTS_MSFT) \
    _(XrSceneComponentParentFilterInfoMSFT, XR, XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT) \
    _(XrSceneObjectTypesFilterInfoMSFT, XR, XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT) \
    _(XrScenePlaneMSFT, PLAIN) \
    _(XrScenePlanesMSFT, XR, XR_TYPE_SCENE_PLANES_MSFT) \
    _(XrScenePlaneAlignmentFilterInfoMSFT, XR, XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT) \
    _(XrSceneMeshMSFT, PLAIN) \
    _(XrSceneMeshesMSFT, XR, XR_TYPE_SCENE_MESHES_MSFT) \
    _(XrSceneMeshBuffersGetInfoMSFT, XR, XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT) \
    _(XrSceneMeshBuffersMSFT, XR, XR_TYPE_SCENE_MESH_BUFFERS_MSFT) \
    _(XrSceneMeshVertexBufferMSFT, XR, XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT) \
    _(XrSceneMeshIndicesUint32MSFT, XR, XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT) \
    _(XrSceneMeshIndicesUint16MSFT, XR, XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT) \
    _(XrSceneObserverCreateInfoMSFT, XR, XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT) \
    _(XrSceneCreateInfoMSFT, XR, XR_TYPE_SCENE_CREATE_INFO_MSFT) \
    _(XrNewSceneComputeInfoMSFT, XR, XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT) \
    _(XrVisualMeshComputeLodInfoMSFT, XR, XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT) \
    _(XrSceneComponentsMSFT, XR, XR_TYPE_SCENE_COMPONENTS_MSFT) \
    _(XrSceneComponentsGetInfoMSFT, XR, XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT) \
    _(XrSceneComponentLocationsMSFT, XR, XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT) \
    _(XrSceneComponentsLocateInfoMSFT, XR, XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT) \
    _(XrSceneObjectsMSFT, XR, XR_TYPE_SCENE_OBJECTS_MSFT) \
    _(XrSceneComponentParentFilterInfoMSFT, XR, XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT) \
    _(XrSceneObjectTypesFilterInfoMSFT, XR, XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT) \
    _(XrScenePlanesMSFT, XR, XR_TYPE_SCENE_PLANES_MSFT) \
    _(XrScenePlaneAlignmentFilterInfoMSFT, XR, XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT) \
    _(XrSceneMeshesMSFT, XR, XR_TYPE_SCENE_MESHES_MSFT) \
    _(XrSceneMeshBuffersGetInfoMSFT, XR, XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT) \
    _(XrSceneMeshBuffersMSFT, XR, XR_TYPE_SCENE_MESH_BUFFERS_MSFT) \
    _(XrSceneMeshVertexBufferMSFT, XR, XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT) \
    _(XrSceneMeshIndicesUint32MSFT, XR, XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT) \
    _(XrSceneMeshIndicesUint16MSFT, XR, XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_scene_understanding(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_) \
    _(XrUuidMSFT) \
    _(XrSceneObserverCreateInfoMSFT) \
    _(XrSceneCreateInfoMSFT) \
    _(XrNewSceneComputeInfoMSFT) \
    _(XrVisualMeshComputeLodInfoMSFT) \
    _(XrSceneSphereBoundMSFT) \
    _(XrSceneOrientedBoxBoundMSFT) \
    _(XrSceneFrustumBoundMSFT) \
    _(XrSceneBoundsMSFT) \
    _(XrSceneComponentMSFT) \
    _(XrSceneComponentsMSFT) \
    _(XrSceneComponentsGetInfoMSFT) \
    _(XrSceneComponentLocationMSFT) \
    _(XrSceneComponentLocationsMSFT) \
    _(XrSceneComponentsLocateInfoMSFT) \
    _(XrSceneObjectMSFT) \
    _(XrSceneObjectsMSFT) \
    _(XrSceneComponentParentFilterInfoMSFT) \
    _(XrSceneObjectTypesFilterInfoMSFT) \
    _(XrScenePlaneMSFT) \
    _(XrScenePlanesMSFT) \
    _(XrScenePlaneAlignmentFilterInfoMSFT) \
    _(XrSceneMeshMSFT) \
    _(XrSceneMeshesMSFT) \
    _(XrSceneMeshBuffersGetInfoMSFT) \
    _(XrSceneMeshBuffersMSFT) \
    _(XrSceneMeshVertexBufferMSFT) \
    _(XrSceneMeshIndicesUint32MSFT) \
    _(XrSceneMeshIndicesUint16MSFT) \
    _(XrSceneObserverCreateInfoMSFT) \
    _(XrSceneCreateInfoMSFT) \
    _(XrNewSceneComputeInfoMSFT) \
    _(XrVisualMeshComputeLodInfoMSFT) \
    _(XrSceneComponentsMSFT) \
    _(XrSceneComponentsGetInfoMSFT) \
    _(XrSceneComponentLocationsMSFT) \
    _(XrSceneComponentsLocateInfoMSFT) \
    _(XrSceneObjectsMSFT) \
    _(XrSceneComponentParentFilterInfoMSFT) \
    _(XrSceneObjectTypesFilterInfoMSFT) \
    _(XrScenePlanesMSFT) \
    _(XrScenePlaneAlignmentFilterInfoMSFT) \
    _(XrSceneMeshesMSFT) \
    _(XrSceneMeshBuffersGetInfoMSFT) \
    _(XrSceneMeshBuffersMSFT) \
    _(XrSceneMeshVertexBufferMSFT) \
    _(XrSceneMeshIndicesUint32MSFT) \
    _(XrSceneMeshIndicesUint16MSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_scene_understanding_serialization
#define XRT_STRUCT_LIST_XR_MSFT_scene_understanding_serialization(_) \
    _(XrSerializedSceneFragmentDataGetInfoMSFT, XR, XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT) \
    _(XrDeserializeSceneFragmentMSFT, PLAIN) \
    _(XrSceneDeserializeInfoMSFT, XR, XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT) \
    _(XrSerializedSceneFragmentDataGetInfoMSFT, XR, XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT) \
    _(XrSceneDeserializeInfoMSFT, XR, XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_scene_understanding_serialization(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_) \
    _(XrSerializedSceneFragmentDataGetInfoMSFT) \
    _(XrDeserializeSceneFragmentMSFT) \
    _(XrSceneDeserializeInfoMSFT) \
    _(XrSerializedSceneFragmentDataGetInfoMSFT) \
    _(XrSceneDeserializeInfoMSFT) 
#endif
#ifdef XRT_ENABLE_XR_FB_display_refresh_rate
#define XRT_STRUCT_LIST_XR_FB_display_refresh_rate(_) \
    _(XrEventDataDisplayRefreshRateChangedFB, XR, XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB) \
    _(XrEventDataDisplayRefreshRateChangedFB, XR, XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_)
#else
#define XRT_STRUCT_LIST_XR_FB_display_refresh_rate(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_) \
    _(XrEventDataDisplayRefreshRateChangedFB) \
    _(XrEventDataDisplayRefreshRateChangedFB) 
#endif
#ifdef XRT_ENABLE_XR_HTCX_vive_tracker_interaction
#define XRT_STRUCT_LIST_XR_HTCX_vive_tracker_interaction(_) \
    _(XrViveTrackerPathsHTCX, XR, XR_TYPE_VIVE_TRACKER_PATHS_HTCX) \
    _(XrEventDataViveTrackerConnectedHTCX, XR, XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX) \
    _(XrViveTrackerPathsHTCX, XR, XR_TYPE_VIVE_TRACKER_PATHS_HTCX) \
    _(XrEventDataViveTrackerConnectedHTCX, XR, XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_)
#else
#define XRT_STRUCT_LIST_XR_HTCX_vive_tracker_interaction(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_) \
    _(XrViveTrackerPathsHTCX) \
    _(XrEventDataViveTrackerConnectedHTCX) \
    _(XrViveTrackerPathsHTCX) \
    _(XrEventDataViveTrackerConnectedHTCX) 
#endif
#ifdef XRT_ENABLE_XR_HTC_facial_tracking
#define XRT_STRUCT_LIST_XR_HTC_facial_tracking(_) \
    _(XrSystemFacialTrackingPropertiesHTC, XR, XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC) \
    _(XrFacialExpressionsHTC, XR, XR_TYPE_FACIAL_EXPRESSIONS_HTC) \
    _(XrFacialTrackerCreateInfoHTC, XR, XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC) \
    _(XrSystemFacialTrackingPropertiesHTC, XR, XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC) \
    _(XrFacialTrackerCreateInfoHTC, XR, XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC) \
    _(XrFacialExpressionsHTC, XR, XR_TYPE_FACIAL_EXPRESSIONS_HTC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_HTC_facial_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_) \
    _(XrSystemFacialTrackingPropertiesHTC) \
    _(XrFacialExpressionsHTC) \
    _(XrFacialTrackerCreateInfoHTC) \
    _(XrSystemFacialTrackingPropertiesHTC) \
    _(XrFacialTrackerCreateInfoHTC) \
    _(XrFacialExpressionsHTC) 
#endif
#ifdef XRT_ENABLE_XR_FB_color_space
#define XRT_STRUCT_LIST_XR_FB_color_space(_) \
    _(XrSystemColorSpacePropertiesFB, XR, XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB) \
    _(XrSystemColorSpacePropertiesFB, XR, XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_color_space(_)
#else
#define XRT_STRUCT_LIST_XR_FB_color_space(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_color_space(_) \
    _(XrSystemColorSpacePropertiesFB) \
    _(XrSystemColorSpacePropertiesFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_hand_tracking_mesh
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_mesh(_) \
    _(XrVector4sFB, PLAIN) \
    _(XrHandTrackingMeshFB, XR, XR_TYPE_HAND_TRACKING_MESH_FB) \
    _(XrHandTrackingScaleFB, XR, XR_TYPE_HAND_TRACKING_SCALE_FB) \
    _(XrHandTrackingMeshFB, XR, XR_TYPE_HAND_TRACKING_MESH_FB) \
    _(XrHandTrackingScaleFB, XR, XR_TYPE_HAND_TRACKING_SCALE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_)
#else
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_mesh(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_) \
    _(XrVector4sFB) \
    _(XrHandTrackingMeshFB) \
    _(XrHandTrackingScaleFB) \
    _(XrHandTrackingMeshFB) \
    _(XrHandTrackingScaleFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_hand_tracking_aim
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_aim(_) \
    _(XrHandTrackingAimStateFB, XR, XR_TYPE_HAND_TRACKING_AIM_STATE_FB) \
    _(XrHandTrackingAimStateFB, XR, XR_TYPE_HAND_TRACKING_AIM_STATE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_aim(_)
#else
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_aim(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_aim(_) \
    _(XrHandTrackingAimStateFB) \
    _(XrHandTrackingAimStateFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_hand_tracking_capsules
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_capsules(_) \
    _(XrHandCapsuleFB, PLAIN) \
    _(XrHandTrackingCapsulesStateFB, XR, XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB) \
    _(XrHandTrackingCapsulesStateFB, XR, XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_capsules(_)
#else
#define XRT_STRUCT_LIST_XR_FB_hand_tracking_capsules(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_capsules(_) \
    _(XrHandCapsuleFB) \
    _(XrHandTrackingCapsulesStateFB) \
    _(XrHandTrackingCapsulesStateFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity
#define XRT_STRUCT_LIST_XR_FB_spatial_entity(_) \
    _(XrSystemSpatialEntityPropertiesFB, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB) \
    _(XrSpatialAnchorCreateInfoFB, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB) \
    _(XrSpaceComponentStatusSetInfoFB, XR, XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB) \
    _(XrSpaceComponentStatusFB, XR, XR_TYPE_SPACE_COMPONENT_STATUS_FB) \
    _(XrEventDataSpatialAnchorCreateCompleteFB, XR, XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB) \
    _(XrEventDataSpaceSetStatusCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB) \
    _(XrSystemSpatialEntityPropertiesFB, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB) \
    _(XrSpatialAnchorCreateInfoFB, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB) \
    _(XrSpaceComponentStatusSetInfoFB, XR, XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB) \
    _(XrSpaceComponentStatusFB, XR, XR_TYPE_SPACE_COMPONENT_STATUS_FB) \
    _(XrEventDataSpatialAnchorCreateCompleteFB, XR, XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB) \
    _(XrEventDataSpaceSetStatusCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity(_) \
    _(XrSystemSpatialEntityPropertiesFB) \
    _(XrSpatialAnchorCreateInfoFB) \
    _(XrSpaceComponentStatusSetInfoFB) \
    _(XrSpaceComponentStatusFB) \
    _(XrEventDataSpatialAnchorCreateCompleteFB) \
    _(XrEventDataSpaceSetStatusCompleteFB) \
    _(XrSystemSpatialEntityPropertiesFB) \
    _(XrSpatialAnchorCreateInfoFB) \
    _(XrSpaceComponentStatusSetInfoFB) \
    _(XrSpaceComponentStatusFB) \
    _(XrEventDataSpatialAnchorCreateCompleteFB) \
    _(XrEventDataSpaceSetStatusCompleteFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_foveation
#define XRT_STRUCT_LIST_XR_FB_foveation(_) \
    _(XrFoveationProfileCreateInfoFB, XR, XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB) \
    _(XrSwapchainCreateInfoFoveationFB, XR, XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB) \
    _(XrSwapchainStateFoveationFB, XR, XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB) \
    _(XrFoveationProfileCreateInfoFB, XR, XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB) \
    _(XrSwapchainCreateInfoFoveationFB, XR, XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB) \
    _(XrSwapchainStateFoveationFB, XR, XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation(_)
#else
#define XRT_STRUCT_LIST_XR_FB_foveation(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation(_) \
    _(XrFoveationProfileCreateInfoFB) \
    _(XrSwapchainCreateInfoFoveationFB) \
    _(XrSwapchainStateFoveationFB) \
    _(XrFoveationProfileCreateInfoFB) \
    _(XrSwapchainCreateInfoFoveationFB) \
    _(XrSwapchainStateFoveationFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_foveation_configuration
#define XRT_STRUCT_LIST_XR_FB_foveation_configuration(_) \
    _(XrFoveationLevelProfileCreateInfoFB, XR, XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB) \
    _(XrFoveationLevelProfileCreateInfoFB, XR, XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_configuration(_)
#else
#define XRT_STRUCT_LIST_XR_FB_foveation_configuration(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_configuration(_) \
    _(XrFoveationLevelProfileCreateInfoFB) \
    _(XrFoveationLevelProfileCreateInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_keyboard_tracking
#define XRT_STRUCT_LIST_XR_FB_keyboard_tracking(_) \
    _(XrSystemKeyboardTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB) \
    _(XrKeyboardTrackingDescriptionFB, PLAIN) \
    _(XrKeyboardSpaceCreateInfoFB, XR, XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB) \
    _(XrKeyboardTrackingQueryFB, XR, XR_TYPE_KEYBOARD_TRACKING_QUERY_FB) \
    _(XrKeyboardSpaceCreateInfoFB, XR, XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB) \
    _(XrKeyboardTrackingQueryFB, XR, XR_TYPE_KEYBOARD_TRACKING_QUERY_FB) \
    _(XrSystemKeyboardTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_FB_keyboard_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_) \
    _(XrSystemKeyboardTrackingPropertiesFB) \
    _(XrKeyboardTrackingDescriptionFB) \
    _(XrKeyboardSpaceCreateInfoFB) \
    _(XrKeyboardTrackingQueryFB) \
    _(XrKeyboardSpaceCreateInfoFB) \
    _(XrKeyboardTrackingQueryFB) \
    _(XrSystemKeyboardTrackingPropertiesFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_triangle_mesh
#define XRT_STRUCT_LIST_XR_FB_triangle_mesh(_) \
    _(XrTriangleMeshCreateInfoFB, XR, XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB) \
    _(XrTriangleMeshCreateInfoFB, XR, XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_)
#else
#define XRT_STRUCT_LIST_XR_FB_triangle_mesh(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_) \
    _(XrTriangleMeshCreateInfoFB) \
    _(XrTriangleMeshCreateInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_passthrough
#define XRT_STRUCT_LIST_XR_FB_passthrough(_) \
    _(XrSystemPassthroughPropertiesFB, XR, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB) \
    _(XrSystemPassthroughProperties2FB, XR, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB) \
    _(XrPassthroughCreateInfoFB, XR, XR_TYPE_PASSTHROUGH_CREATE_INFO_FB) \
    _(XrPassthroughLayerCreateInfoFB, XR, XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB) \
    _(XrCompositionLayerPassthroughFB, XR, XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB) \
    _(XrGeometryInstanceCreateInfoFB, XR, XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB) \
    _(XrGeometryInstanceTransformFB, XR, XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB) \
    _(XrPassthroughStyleFB, XR, XR_TYPE_PASSTHROUGH_STYLE_FB) \
    _(XrPassthroughColorMapMonoToRgbaFB, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB) \
    _(XrPassthroughColorMapMonoToMonoFB, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB) \
    _(XrPassthroughBrightnessContrastSaturationFB, XR, XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB) \
    _(XrEventDataPassthroughStateChangedFB, XR, XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB) \
    _(XrSystemPassthroughPropertiesFB, XR, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB) \
    _(XrPassthroughCreateInfoFB, XR, XR_TYPE_PASSTHROUGH_CREATE_INFO_FB) \
    _(XrPassthroughLayerCreateInfoFB, XR, XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB) \
    _(XrCompositionLayerPassthroughFB, XR, XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB) \
    _(XrGeometryInstanceCreateInfoFB, XR, XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB) \
    _(XrGeometryInstanceTransformFB, XR, XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB) \
    _(XrSystemPassthroughProperties2FB, XR, XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB) \
    _(XrPassthroughStyleFB, XR, XR_TYPE_PASSTHROUGH_STYLE_FB) \
    _(XrPassthroughColorMapMonoToRgbaFB, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB) \
    _(XrPassthroughColorMapMonoToMonoFB, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB) \
    _(XrPassthroughBrightnessContrastSaturationFB, XR, XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB) \
    _(XrEventDataPassthroughStateChangedFB, XR, XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough(_)
#else
#define XRT_STRUCT_LIST_XR_FB_passthrough(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough(_) \
    _(XrSystemPassthroughPropertiesFB) \
    _(XrSystemPassthroughProperties2FB) \
    _(XrPassthroughCreateInfoFB) \
    _(XrPassthroughLayerCreateInfoFB) \
    _(XrCompositionLayerPassthroughFB) \
    _(XrGeometryInstanceCreateInfoFB) \
    _(XrGeometryInstanceTransformFB) \
    _(XrPassthroughStyleFB) \
    _(XrPassthroughColorMapMonoToRgbaFB) \
    _(XrPassthroughColorMapMonoToMonoFB) \
    _(XrPassthroughBrightnessContrastSaturationFB) \
    _(XrEventDataPassthroughStateChangedFB) \
    _(XrSystemPassthroughPropertiesFB) \
    _(XrPassthroughCreateInfoFB) \
    _(XrPassthroughLayerCreateInfoFB) \
    _(XrCompositionLayerPassthroughFB) \
    _(XrGeometryInstanceCreateInfoFB) \
    _(XrGeometryInstanceTransformFB) \
    _(XrSystemPassthroughProperties2FB) \
    _(XrPassthroughStyleFB) \
    _(XrPassthroughColorMapMonoToRgbaFB) \
    _(XrPassthroughColorMapMonoToMonoFB) \
    _(XrPassthroughBrightnessContrastSaturationFB) \
    _(XrEventDataPassthroughStateChangedFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_render_model
#define XRT_STRUCT_LIST_XR_FB_render_model(_) \
    _(XrRenderModelPathInfoFB, XR, XR_TYPE_RENDER_MODEL_PATH_INFO_FB) \
    _(XrRenderModelPropertiesFB, XR, XR_TYPE_RENDER_MODEL_PROPERTIES_FB) \
    _(XrRenderModelBufferFB, XR, XR_TYPE_RENDER_MODEL_BUFFER_FB) \
    _(XrRenderModelLoadInfoFB, XR, XR_TYPE_RENDER_MODEL_LOAD_INFO_FB) \
    _(XrSystemRenderModelPropertiesFB, XR, XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB) \
    _(XrRenderModelCapabilitiesRequestFB, XR, XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB) \
    _(XrRenderModelPathInfoFB, XR, XR_TYPE_RENDER_MODEL_PATH_INFO_FB) \
    _(XrRenderModelPropertiesFB, XR, XR_TYPE_RENDER_MODEL_PROPERTIES_FB) \
    _(XrRenderModelBufferFB, XR, XR_TYPE_RENDER_MODEL_BUFFER_FB) \
    _(XrRenderModelLoadInfoFB, XR, XR_TYPE_RENDER_MODEL_LOAD_INFO_FB) \
    _(XrSystemRenderModelPropertiesFB, XR, XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB) \
    _(XrRenderModelCapabilitiesRequestFB, XR, XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_render_model(_)
#else
#define XRT_STRUCT_LIST_XR_FB_render_model(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_render_model(_) \
    _(XrRenderModelPathInfoFB) \
    _(XrRenderModelPropertiesFB) \
    _(XrRenderModelBufferFB) \
    _(XrRenderModelLoadInfoFB) \
    _(XrSystemRenderModelPropertiesFB) \
    _(XrRenderModelCapabilitiesRequestFB) \
    _(XrRenderModelPathInfoFB) \
    _(XrRenderModelPropertiesFB) \
    _(XrRenderModelBufferFB) \
    _(XrRenderModelLoadInfoFB) \
    _(XrSystemRenderModelPropertiesFB) \
    _(XrRenderModelCapabilitiesRequestFB) 
#endif
#ifdef XRT_ENABLE_XR_KHR_binding_modification
#define XRT_STRUCT_LIST_XR_KHR_binding_modification(_) \
    _(XrBindingModificationsKHR, XR, XR_TYPE_BINDING_MODIFICATIONS_KHR) \
    _(XrBindingModificationBaseHeaderKHR, XR_HEADER) \
    _(XrBindingModificationsKHR, XR, XR_TYPE_BINDING_MODIFICATIONS_KHR) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_binding_modification(_)
#else
#define XRT_STRUCT_LIST_XR_KHR_binding_modification(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_binding_modification(_) \
    _(XrBindingModificationsKHR) \
    _(XrBindingModificationBaseHeaderKHR) \
    _(XrBindingModificationsKHR) 
#endif
#ifdef XRT_ENABLE_XR_VARJO_foveated_rendering
#define XRT_STRUCT_LIST_XR_VARJO_foveated_rendering(_) \
    _(XrViewLocateFoveatedRenderingVARJO, XR, XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO) \
    _(XrFoveatedViewConfigurationViewVARJO, XR, XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO) \
    _(XrSystemFoveatedRenderingPropertiesVARJO, XR, XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO) \
    _(XrViewLocateFoveatedRenderingVARJO, XR, XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO) \
    _(XrFoveatedViewConfigurationViewVARJO, XR, XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO) \
    _(XrSystemFoveatedRenderingPropertiesVARJO, XR, XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_foveated_rendering(_)
#else
#define XRT_STRUCT_LIST_XR_VARJO_foveated_rendering(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_foveated_rendering(_) \
    _(XrViewLocateFoveatedRenderingVARJO) \
    _(XrFoveatedViewConfigurationViewVARJO) \
    _(XrSystemFoveatedRenderingPropertiesVARJO) \
    _(XrViewLocateFoveatedRenderingVARJO) \
    _(XrFoveatedViewConfigurationViewVARJO) \
    _(XrSystemFoveatedRenderingPropertiesVARJO) 
#endif
#ifdef XRT_ENABLE_XR_VARJO_composition_layer_depth_test
#define XRT_STRUCT_LIST_XR_VARJO_composition_layer_depth_test(_) \
    _(XrCompositionLayerDepthTestVARJO, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO) \
    _(XrCompositionLayerDepthTestVARJO, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_composition_layer_depth_test(_)
#else
#define XRT_STRUCT_LIST_XR_VARJO_composition_layer_depth_test(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_composition_layer_depth_test(_) \
    _(XrCompositionLayerDepthTestVARJO) \
    _(XrCompositionLayerDepthTestVARJO) 
#endif
#define XRT_STRUCT_LIST_XR_VARJO_environment_depth_estimation(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_environment_depth_estimation(_)
#ifdef XRT_ENABLE_XR_VARJO_marker_tracking
#define XRT_STRUCT_LIST_XR_VARJO_marker_tracking(_) \
    _(XrSystemMarkerTrackingPropertiesVARJO, XR, XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO) \
    _(XrEventDataMarkerTrackingUpdateVARJO, XR, XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO) \
    _(XrMarkerSpaceCreateInfoVARJO, XR, XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO) \
    _(XrSystemMarkerTrackingPropertiesVARJO, XR, XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO) \
    _(XrEventDataMarkerTrackingUpdateVARJO, XR, XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO) \
    _(XrMarkerSpaceCreateInfoVARJO, XR, XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_VARJO_marker_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_) \
    _(XrSystemMarkerTrackingPropertiesVARJO) \
    _(XrEventDataMarkerTrackingUpdateVARJO) \
    _(XrMarkerSpaceCreateInfoVARJO) \
    _(XrSystemMarkerTrackingPropertiesVARJO) \
    _(XrEventDataMarkerTrackingUpdateVARJO) \
    _(XrMarkerSpaceCreateInfoVARJO) 
#endif
#define XRT_STRUCT_LIST_XR_VARJO_view_offset(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_view_offset(_)
#ifdef XRT_ENABLE_XR_ML_frame_end_info
#define XRT_STRUCT_LIST_XR_ML_frame_end_info(_) \
    _(XrFrameEndInfoML, XR, XR_TYPE_FRAME_END_INFO_ML) \
    _(XrFrameEndInfoML, XR, XR_TYPE_FRAME_END_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_frame_end_info(_)
#else
#define XRT_STRUCT_LIST_XR_ML_frame_end_info(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_frame_end_info(_) \
    _(XrFrameEndInfoML) \
    _(XrFrameEndInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_global_dimmer
#define XRT_STRUCT_LIST_XR_ML_global_dimmer(_) \
    _(XrGlobalDimmerFrameEndInfoML, XR, XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML) \
    _(XrGlobalDimmerFrameEndInfoML, XR, XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_global_dimmer(_)
#else
#define XRT_STRUCT_LIST_XR_ML_global_dimmer(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_global_dimmer(_) \
    _(XrGlobalDimmerFrameEndInfoML) \
    _(XrGlobalDimmerFrameEndInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_compat
#define XRT_STRUCT_LIST_XR_ML_compat(_) \
    _(XrCoordinateSpaceCreateInfoML, XR, XR_TYPE_COORDINATE_SPACE_CREATE_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_compat(_)
#else
#define XRT_STRUCT_LIST_XR_ML_compat(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_compat(_) \
    _(XrCoordinateSpaceCreateInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_marker_understanding
#define XRT_STRUCT_LIST_XR_ML_marker_understanding(_) \
    _(XrSystemMarkerUnderstandingPropertiesML, XR, XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML) \
    _(XrMarkerDetectorCreateInfoML, XR, XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML) \
    _(XrMarkerDetectorArucoInfoML, XR, XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML) \
    _(XrMarkerDetectorSizeInfoML, XR, XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML) \
    _(XrMarkerDetectorAprilTagInfoML, XR, XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML) \
    _(XrMarkerDetectorCustomProfileInfoML, XR, XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML) \
    _(XrMarkerDetectorSnapshotInfoML, XR, XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML) \
    _(XrMarkerDetectorStateML, XR, XR_TYPE_MARKER_DETECTOR_STATE_ML) \
    _(XrMarkerSpaceCreateInfoML, XR, XR_TYPE_MARKER_SPACE_CREATE_INFO_ML) \
    _(XrSystemMarkerUnderstandingPropertiesML, XR, XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML) \
    _(XrMarkerDetectorCreateInfoML, XR, XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML) \
    _(XrMarkerDetectorArucoInfoML, XR, XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML) \
    _(XrMarkerDetectorSizeInfoML, XR, XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML) \
    _(XrMarkerDetectorAprilTagInfoML, XR, XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML) \
    _(XrMarkerDetectorCustomProfileInfoML, XR, XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML) \
    _(XrMarkerDetectorSnapshotInfoML, XR, XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML) \
    _(XrMarkerDetectorStateML, XR, XR_TYPE_MARKER_DETECTOR_STATE_ML) \
    _(XrMarkerSpaceCreateInfoML, XR, XR_TYPE_MARKER_SPACE_CREATE_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_marker_understanding(_)
#else
#define XRT_STRUCT_LIST_XR_ML_marker_understanding(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_marker_understanding(_) \
    _(XrSystemMarkerUnderstandingPropertiesML) \
    _(XrMarkerDetectorCreateInfoML) \
    _(XrMarkerDetectorArucoInfoML) \
    _(XrMarkerDetectorSizeInfoML) \
    _(XrMarkerDetectorAprilTagInfoML) \
    _(XrMarkerDetectorCustomProfileInfoML) \
    _(XrMarkerDetectorSnapshotInfoML) \
    _(XrMarkerDetectorStateML) \
    _(XrMarkerSpaceCreateInfoML) \
    _(XrSystemMarkerUnderstandingPropertiesML) \
    _(XrMarkerDetectorCreateInfoML) \
    _(XrMarkerDetectorArucoInfoML) \
    _(XrMarkerDetectorSizeInfoML) \
    _(XrMarkerDetectorAprilTagInfoML) \
    _(XrMarkerDetectorCustomProfileInfoML) \
    _(XrMarkerDetectorSnapshotInfoML) \
    _(XrMarkerDetectorStateML) \
    _(XrMarkerSpaceCreateInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_localization_map
#define XRT_STRUCT_LIST_XR_ML_localization_map(_) \
    _(XrLocalizationMapML, XR, XR_TYPE_LOCALIZATION_MAP_ML) \
    _(XrEventDataLocalizationChangedML, XR, XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML) \
    _(XrLocalizationMapQueryInfoBaseHeaderML, XR_HEADER) \
    _(XrMapLocalizationRequestInfoML, XR, XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML) \
    _(XrLocalizationMapImportInfoML, XR, XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML) \
    _(XrLocalizationEnableEventsInfoML, XR, XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML) \
    _(XrLocalizationMapML, XR, XR_TYPE_LOCALIZATION_MAP_ML) \
    _(XrEventDataLocalizationChangedML, XR, XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML) \
    _(XrMapLocalizationRequestInfoML, XR, XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML) \
    _(XrLocalizationMapImportInfoML, XR, XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML) \
    _(XrLocalizationEnableEventsInfoML, XR, XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_localization_map(_)
#else
#define XRT_STRUCT_LIST_XR_ML_localization_map(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_localization_map(_) \
    _(XrLocalizationMapML) \
    _(XrEventDataLocalizationChangedML) \
    _(XrLocalizationMapQueryInfoBaseHeaderML) \
    _(XrMapLocalizationRequestInfoML) \
    _(XrLocalizationMapImportInfoML) \
    _(XrLocalizationEnableEventsInfoML) \
    _(XrLocalizationMapML) \
    _(XrEventDataLocalizationChangedML) \
    _(XrMapLocalizationRequestInfoML) \
    _(XrLocalizationMapImportInfoML) \
    _(XrLocalizationEnableEventsInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_spatial_anchors
#define XRT_STRUCT_LIST_XR_ML_spatial_anchors(_) \
    _(XrSpatialAnchorsCreateInfoBaseHeaderML, XR_HEADER) \
    _(XrSpatialAnchorsCreateInfoFromPoseML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML) \
    _(XrCreateSpatialAnchorsCompletionML, XR, XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML) \
    _(XrSpatialAnchorStateML, XR, XR_TYPE_SPATIAL_ANCHOR_STATE_ML) \
    _(XrSpatialAnchorsCreateInfoFromPoseML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML) \
    _(XrCreateSpatialAnchorsCompletionML, XR, XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML) \
    _(XrSpatialAnchorStateML, XR, XR_TYPE_SPATIAL_ANCHOR_STATE_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_)
#else
#define XRT_STRUCT_LIST_XR_ML_spatial_anchors(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_) \
    _(XrSpatialAnchorsCreateInfoBaseHeaderML) \
    _(XrSpatialAnchorsCreateInfoFromPoseML) \
    _(XrCreateSpatialAnchorsCompletionML) \
    _(XrSpatialAnchorStateML) \
    _(XrSpatialAnchorsCreateInfoFromPoseML) \
    _(XrCreateSpatialAnchorsCompletionML) \
    _(XrSpatialAnchorStateML) 
#endif
#ifdef XRT_ENABLE_XR_ML_spatial_anchors_storage
#define XRT_STRUCT_LIST_XR_ML_spatial_anchors_storage(_) \
    _(XrSpatialAnchorsCreateStorageInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML) \
    _(XrSpatialAnchorsQueryInfoBaseHeaderML, XR_HEADER) \
    _(XrSpatialAnchorsQueryInfoRadiusML, XR, XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML) \
    _(XrSpatialAnchorsQueryCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML) \
    _(XrSpatialAnchorsCreateInfoFromUuidsML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML) \
    _(XrSpatialAnchorsPublishInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML) \
    _(XrSpatialAnchorsPublishCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML) \
    _(XrSpatialAnchorsDeleteInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML) \
    _(XrSpatialAnchorsDeleteCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML) \
    _(XrSpatialAnchorsUpdateExpirationInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML) \
    _(XrSpatialAnchorsPublishCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML) \
    _(XrSpatialAnchorsDeleteCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML) \
    _(XrSpatialAnchorCompletionResultML, PLAIN) \
    _(XrSpatialAnchorsCreateStorageInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML) \
    _(XrSpatialAnchorsQueryInfoRadiusML, XR, XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML) \
    _(XrSpatialAnchorsQueryCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML) \
    _(XrSpatialAnchorsCreateInfoFromUuidsML, XR, XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML) \
    _(XrSpatialAnchorsPublishInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML) \
    _(XrSpatialAnchorsPublishCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML) \
    _(XrSpatialAnchorsDeleteInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML) \
    _(XrSpatialAnchorsDeleteCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML) \
    _(XrSpatialAnchorsUpdateExpirationInfoML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML) \
    _(XrSpatialAnchorsPublishCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML) \
    _(XrSpatialAnchorsDeleteCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionDetailsML, XR, XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_)
#else
#define XRT_STRUCT_LIST_XR_ML_spatial_anchors_storage(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_) \
    _(XrSpatialAnchorsCreateStorageInfoML) \
    _(XrSpatialAnchorsQueryInfoBaseHeaderML) \
    _(XrSpatialAnchorsQueryInfoRadiusML) \
    _(XrSpatialAnchorsQueryCompletionML) \
    _(XrSpatialAnchorsCreateInfoFromUuidsML) \
    _(XrSpatialAnchorsPublishInfoML) \
    _(XrSpatialAnchorsPublishCompletionML) \
    _(XrSpatialAnchorsDeleteInfoML) \
    _(XrSpatialAnchorsDeleteCompletionML) \
    _(XrSpatialAnchorsUpdateExpirationInfoML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionML) \
    _(XrSpatialAnchorsPublishCompletionDetailsML) \
    _(XrSpatialAnchorsDeleteCompletionDetailsML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionDetailsML) \
    _(XrSpatialAnchorCompletionResultML) \
    _(XrSpatialAnchorsCreateStorageInfoML) \
    _(XrSpatialAnchorsQueryInfoRadiusML) \
    _(XrSpatialAnchorsQueryCompletionML) \
    _(XrSpatialAnchorsCreateInfoFromUuidsML) \
    _(XrSpatialAnchorsPublishInfoML) \
    _(XrSpatialAnchorsPublishCompletionML) \
    _(XrSpatialAnchorsDeleteInfoML) \
    _(XrSpatialAnchorsDeleteCompletionML) \
    _(XrSpatialAnchorsUpdateExpirationInfoML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionML) \
    _(XrSpatialAnchorsPublishCompletionDetailsML) \
    _(XrSpatialAnchorsDeleteCompletionDetailsML) \
    _(XrSpatialAnchorsUpdateExpirationCompletionDetailsML) 
#endif
#ifdef XRT_ENABLE_XR_ML_user_calibration
#define XRT_STRUCT_LIST_XR_ML_user_calibration(_) \
    _(XrEventDataHeadsetFitChangedML, XR, XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML) \
    _(XrEventDataEyeCalibrationChangedML, XR, XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML) \
    _(XrUserCalibrationEnableEventsInfoML, XR, XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML) \
    _(XrEventDataHeadsetFitChangedML, XR, XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML) \
    _(XrEventDataEyeCalibrationChangedML, XR, XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML) \
    _(XrUserCalibrationEnableEventsInfoML, XR, XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_user_calibration(_)
#else
#define XRT_STRUCT_LIST_XR_ML_user_calibration(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_user_calibration(_) \
    _(XrEventDataHeadsetFitChangedML) \
    _(XrEventDataEyeCalibrationChangedML) \
    _(XrUserCalibrationEnableEventsInfoML) \
    _(XrEventDataHeadsetFitChangedML) \
    _(XrEventDataEyeCalibrationChangedML) \
    _(XrUserCalibrationEnableEventsInfoML) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_spatial_anchor_persistence
#define XRT_STRUCT_LIST_XR_MSFT_spatial_anchor_persistence(_) \
    _(XrSpatialAnchorPersistenceNameMSFT, PLAIN) \
    _(XrSpatialAnchorPersistenceInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT) \
    _(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT) \
    _(XrSpatialAnchorPersistenceInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT) \
    _(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT, XR, XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_spatial_anchor_persistence(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_) \
    _(XrSpatialAnchorPersistenceNameMSFT) \
    _(XrSpatialAnchorPersistenceInfoMSFT) \
    _(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT) \
    _(XrSpatialAnchorPersistenceInfoMSFT) \
    _(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT) 
#endif
#ifdef XRT_ENABLE_XR_MSFT_scene_marker
#define XRT_STRUCT_LIST_XR_MSFT_scene_marker(_) \
    _(XrSceneMarkerMSFT, PLAIN) \
    _(XrSceneMarkersMSFT, XR, XR_TYPE_SCENE_MARKERS_MSFT) \
    _(XrSceneMarkerTypeFilterMSFT, XR, XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT) \
    _(XrSceneMarkerQRCodeMSFT, PLAIN) \
    _(XrSceneMarkerQRCodesMSFT, XR, XR_TYPE_SCENE_MARKER_QR_CODES_MSFT) \
    _(XrSceneMarkersMSFT, XR, XR_TYPE_SCENE_MARKERS_MSFT) \
    _(XrSceneMarkerTypeFilterMSFT, XR, XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT) \
    _(XrSceneMarkerQRCodesMSFT, XR, XR_TYPE_SCENE_MARKER_QR_CODES_MSFT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_)
#else
#define XRT_STRUCT_LIST_XR_MSFT_scene_marker(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_) \
    _(XrSceneMarkerMSFT) \
    _(XrSceneMarkersMSFT) \
    _(XrSceneMarkerTypeFilterMSFT) \
    _(XrSceneMarkerQRCodeMSFT) \
    _(XrSceneMarkerQRCodesMSFT) \
    _(XrSceneMarkersMSFT) \
    _(XrSceneMarkerTypeFilterMSFT) \
    _(XrSceneMarkerQRCodesMSFT) 
#endif
#define XRT_STRUCT_LIST_XR_KHR_extended_struct_name_lengths(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_extended_struct_name_lengths(_)
#ifdef XRT_ENABLE_XR_FB_spatial_entity_query
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_query(_) \
    _(XrSpaceQueryInfoBaseHeaderFB, XR_HEADER) \
    _(XrSpaceFilterInfoBaseHeaderFB, XR_HEADER) \
    _(XrSpaceQueryInfoFB, XR, XR_TYPE_SPACE_QUERY_INFO_FB) \
    _(XrSpaceStorageLocationFilterInfoFB, XR, XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB) \
    _(XrSpaceUuidFilterInfoFB, XR, XR_TYPE_SPACE_UUID_FILTER_INFO_FB) \
    _(XrSpaceComponentFilterInfoFB, XR, XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB) \
    _(XrSpaceQueryResultFB, PLAIN) \
    _(XrSpaceQueryResultsFB, XR, XR_TYPE_SPACE_QUERY_RESULTS_FB) \
    _(XrEventDataSpaceQueryResultsAvailableFB, XR, XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB) \
    _(XrEventDataSpaceQueryCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB) \
    _(XrSpaceQueryInfoFB, XR, XR_TYPE_SPACE_QUERY_INFO_FB) \
    _(XrSpaceQueryResultsFB, XR, XR_TYPE_SPACE_QUERY_RESULTS_FB) \
    _(XrSpaceStorageLocationFilterInfoFB, XR, XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB) \
    _(XrSpaceUuidFilterInfoFB, XR, XR_TYPE_SPACE_UUID_FILTER_INFO_FB) \
    _(XrSpaceComponentFilterInfoFB, XR, XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB) \
    _(XrEventDataSpaceQueryResultsAvailableFB, XR, XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB) \
    _(XrEventDataSpaceQueryCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_query(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_) \
    _(XrSpaceQueryInfoBaseHeaderFB) \
    _(XrSpaceFilterInfoBaseHeaderFB) \
    _(XrSpaceQueryInfoFB) \
    _(XrSpaceStorageLocationFilterInfoFB) \
    _(XrSpaceUuidFilterInfoFB) \
    _(XrSpaceComponentFilterInfoFB) \
    _(XrSpaceQueryResultFB) \
    _(XrSpaceQueryResultsFB) \
    _(XrEventDataSpaceQueryResultsAvailableFB) \
    _(XrEventDataSpaceQueryCompleteFB) \
    _(XrSpaceQueryInfoFB) \
    _(XrSpaceQueryResultsFB) \
    _(XrSpaceStorageLocationFilterInfoFB) \
    _(XrSpaceUuidFilterInfoFB) \
    _(XrSpaceComponentFilterInfoFB) \
    _(XrEventDataSpaceQueryResultsAvailableFB) \
    _(XrEventDataSpaceQueryCompleteFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_storage
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_storage(_) \
    _(XrSpaceSaveInfoFB, XR, XR_TYPE_SPACE_SAVE_INFO_FB) \
    _(XrSpaceEraseInfoFB, XR, XR_TYPE_SPACE_ERASE_INFO_FB) \
    _(XrEventDataSpaceSaveCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB) \
    _(XrEventDataSpaceEraseCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB) \
    _(XrSpaceSaveInfoFB, XR, XR_TYPE_SPACE_SAVE_INFO_FB) \
    _(XrSpaceEraseInfoFB, XR, XR_TYPE_SPACE_ERASE_INFO_FB) \
    _(XrEventDataSpaceSaveCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB) \
    _(XrEventDataSpaceEraseCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_storage(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_) \
    _(XrSpaceSaveInfoFB) \
    _(XrSpaceEraseInfoFB) \
    _(XrEventDataSpaceSaveCompleteFB) \
    _(XrEventDataSpaceEraseCompleteFB) \
    _(XrSpaceSaveInfoFB) \
    _(XrSpaceEraseInfoFB) \
    _(XrEventDataSpaceSaveCompleteFB) \
    _(XrEventDataSpaceEraseCompleteFB) 
#endif
#define XRT_STRUCT_LIST_XR_OCULUS_audio_device_guid(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_OCULUS_audio_device_guid(_)
#ifdef XRT_ENABLE_XR_FB_foveation_vulkan
#define XRT_STRUCT_LIST_XR_FB_foveation_vulkan(_) \
    _(XrSwapchainImageFoveationVulkanFB, XR, XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB) \
    _(XrSwapchainImageFoveationVulkanFB, XR, XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_vulkan(_)
#else
#define XRT_STRUCT_LIST_XR_FB_foveation_vulkan(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_vulkan(_) \
    _(XrSwapchainImageFoveationVulkanFB) \
    _(XrSwapchainImageFoveationVulkanFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_swapchain_update_state_android_surface
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_android_surface(_) \
    _(XrSwapchainStateAndroidSurfaceDimensionsFB, XR, XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB) \
    _(XrSwapchainStateAndroidSurfaceDimensionsFB, XR, XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_android_surface(_)
#else
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_android_surface(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_android_surface(_) \
    _(XrSwapchainStateAndroidSurfaceDimensionsFB) \
    _(XrSwapchainStateAndroidSurfaceDimensionsFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_swapchain_update_state_opengl_es
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_opengl_es(_) \
    _(XrSwapchainStateSamplerOpenGLESFB, XR, XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB) \
    _(XrSwapchainStateSamplerOpenGLESFB, XR, XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_opengl_es(_)
#else
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_opengl_es(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_opengl_es(_) \
    _(XrSwapchainStateSamplerOpenGLESFB) \
    _(XrSwapchainStateSamplerOpenGLESFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_swapchain_update_state_vulkan
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_vulkan(_) \
    _(XrSwapchainStateSamplerVulkanFB, XR, XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB) \
    _(XrSwapchainStateSamplerVulkanFB, XR, XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_vulkan(_)
#else
#define XRT_STRUCT_LIST_XR_FB_swapchain_update_state_vulkan(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_vulkan(_) \
    _(XrSwapchainStateSamplerVulkanFB) \
    _(XrSwapchainStateSamplerVulkanFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_sharing
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_sharing(_) \
    _(XrSpaceShareInfoFB, XR, XR_TYPE_SPACE_SHARE_INFO_FB) \
    _(XrEventDataSpaceShareCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB) \
    _(XrSpaceShareInfoFB, XR, XR_TYPE_SPACE_SHARE_INFO_FB) \
    _(XrEventDataSpaceShareCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_sharing(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_) \
    _(XrSpaceShareInfoFB) \
    _(XrEventDataSpaceShareCompleteFB) \
    _(XrSpaceShareInfoFB) \
    _(XrEventDataSpaceShareCompleteFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_space_warp
#define XRT_STRUCT_LIST_XR_FB_space_warp(_) \
    _(XrCompositionLayerSpaceWarpInfoFB, XR, XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB) \
    _(XrSystemSpaceWarpPropertiesFB, XR, XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB) \
    _(XrCompositionLayerSpaceWarpInfoFB, XR, XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB) \
    _(XrSystemSpaceWarpPropertiesFB, XR, XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_space_warp(_)
#else
#define XRT_STRUCT_LIST_XR_FB_space_warp(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_space_warp(_) \
    _(XrCompositionLayerSpaceWarpInfoFB) \
    _(XrSystemSpaceWarpPropertiesFB) \
    _(XrCompositionLayerSpaceWarpInfoFB) \
    _(XrSystemSpaceWarpPropertiesFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_haptic_amplitude_envelope
#define XRT_STRUCT_LIST_XR_FB_haptic_amplitude_envelope(_) \
    _(XrHapticAmplitudeEnvelopeVibrationFB, XR, XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB) \
    _(XrHapticAmplitudeEnvelopeVibrationFB, XR, XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_amplitude_envelope(_)
#else
#define XRT_STRUCT_LIST_XR_FB_haptic_amplitude_envelope(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_amplitude_envelope(_) \
    _(XrHapticAmplitudeEnvelopeVibrationFB) \
    _(XrHapticAmplitudeEnvelopeVibrationFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_scene
#define XRT_STRUCT_LIST_XR_FB_scene(_) \
    _(XrOffset3DfFB, PLAIN) \
    _(XrRect3DfFB, PLAIN) \
    _(XrSemanticLabelsFB, XR, XR_TYPE_SEMANTIC_LABELS_FB) \
    _(XrRoomLayoutFB, XR, XR_TYPE_ROOM_LAYOUT_FB) \
    _(XrBoundary2DFB, XR, XR_TYPE_BOUNDARY_2D_FB) \
    _(XrSemanticLabelsSupportInfoFB, XR, XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB) \
    _(XrSemanticLabelsFB, XR, XR_TYPE_SEMANTIC_LABELS_FB) \
    _(XrRoomLayoutFB, XR, XR_TYPE_ROOM_LAYOUT_FB) \
    _(XrBoundary2DFB, XR, XR_TYPE_BOUNDARY_2D_FB) \
    _(XrSemanticLabelsSupportInfoFB, XR, XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene(_)
#else
#define XRT_STRUCT_LIST_XR_FB_scene(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene(_) \
    _(XrOffset3DfFB) \
    _(XrRect3DfFB) \
    _(XrSemanticLabelsFB) \
    _(XrRoomLayoutFB) \
    _(XrBoundary2DFB) \
    _(XrSemanticLabelsSupportInfoFB) \
    _(XrSemanticLabelsFB) \
    _(XrRoomLayoutFB) \
    _(XrBoundary2DFB) \
    _(XrSemanticLabelsSupportInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_ALMALENCE_digital_lens_control
#define XRT_STRUCT_LIST_XR_ALMALENCE_digital_lens_control(_) \
    _(XrDigitalLensControlALMALENCE, XR, XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_)
#else
#define XRT_STRUCT_LIST_XR_ALMALENCE_digital_lens_control(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_) \
    _(XrDigitalLensControlALMALENCE) 
#endif
#ifdef XRT_ENABLE_XR_FB_scene_capture
#define XRT_STRUCT_LIST_XR_FB_scene_capture(_) \
    _(XrEventDataSceneCaptureCompleteFB, XR, XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB) \
    _(XrSceneCaptureRequestInfoFB, XR, XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB) \
    _(XrEventDataSceneCaptureCompleteFB, XR, XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB) \
    _(XrSceneCaptureRequestInfoFB, XR, XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene_capture(_)
#else
#define XRT_STRUCT_LIST_XR_FB_scene_capture(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene_capture(_) \
    _(XrEventDataSceneCaptureCompleteFB) \
    _(XrSceneCaptureRequestInfoFB) \
    _(XrEventDataSceneCaptureCompleteFB) \
    _(XrSceneCaptureRequestInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_container
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_container(_) \
    _(XrSpaceContainerFB, XR, XR_TYPE_SPACE_CONTAINER_FB) \
    _(XrSpaceContainerFB, XR, XR_TYPE_SPACE_CONTAINER_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_container(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_) \
    _(XrSpaceContainerFB) \
    _(XrSpaceContainerFB) 
#endif
#ifdef XRT_ENABLE_XR_META_foveation_eye_tracked
#define XRT_STRUCT_LIST_XR_META_foveation_eye_tracked(_) \
    _(XrFoveationEyeTrackedProfileCreateInfoMETA, XR, XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META) \
    _(XrFoveationEyeTrackedStateMETA, XR, XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META) \
    _(XrSystemFoveationEyeTrackedPropertiesMETA, XR, XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META) \
    _(XrFoveationEyeTrackedProfileCreateInfoMETA, XR, XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META) \
    _(XrFoveationEyeTrackedStateMETA, XR, XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META) \
    _(XrSystemFoveationEyeTrackedPropertiesMETA, XR, XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_)
#else
#define XRT_STRUCT_LIST_XR_META_foveation_eye_tracked(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_) \
    _(XrFoveationEyeTrackedProfileCreateInfoMETA) \
    _(XrFoveationEyeTrackedStateMETA) \
    _(XrSystemFoveationEyeTrackedPropertiesMETA) \
    _(XrFoveationEyeTrackedProfileCreateInfoMETA) \
    _(XrFoveationEyeTrackedStateMETA) \
    _(XrSystemFoveationEyeTrackedPropertiesMETA) 
#endif
#ifdef XRT_ENABLE_XR_FB_face_tracking
#define XRT_STRUCT_LIST_XR_FB_face_tracking(_) \
    _(XrSystemFaceTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB) \
    _(XrFaceTrackerCreateInfoFB, XR, XR_TYPE_FACE_TRACKER_CREATE_INFO_FB) \
    _(XrFaceExpressionInfoFB, XR, XR_TYPE_FACE_EXPRESSION_INFO_FB) \
    _(XrFaceExpressionStatusFB, PLAIN) \
    _(XrFaceExpressionWeightsFB, XR, XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB) \
    _(XrSystemFaceTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB) \
    _(XrFaceTrackerCreateInfoFB, XR, XR_TYPE_FACE_TRACKER_CREATE_INFO_FB) \
    _(XrFaceExpressionInfoFB, XR, XR_TYPE_FACE_EXPRESSION_INFO_FB) \
    _(XrFaceExpressionWeightsFB, XR, XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_FB_face_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking(_) \
    _(XrSystemFaceTrackingPropertiesFB) \
    _(XrFaceTrackerCreateInfoFB) \
    _(XrFaceExpressionInfoFB) \
    _(XrFaceExpressionStatusFB) \
    _(XrFaceExpressionWeightsFB) \
    _(XrSystemFaceTrackingPropertiesFB) \
    _(XrFaceTrackerCreateInfoFB) \
    _(XrFaceExpressionInfoFB) \
    _(XrFaceExpressionWeightsFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_eye_tracking_social
#define XRT_STRUCT_LIST_XR_FB_eye_tracking_social(_) \
    _(XrEyeGazeFB, PLAIN) \
    _(XrEyeTrackerCreateInfoFB, XR, XR_TYPE_EYE_TRACKER_CREATE_INFO_FB) \
    _(XrEyeGazesInfoFB, XR, XR_TYPE_EYE_GAZES_INFO_FB) \
    _(XrSystemEyeTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB) \
    _(XrEyeGazesFB, XR, XR_TYPE_EYE_GAZES_FB) \
    _(XrEyeTrackerCreateInfoFB, XR, XR_TYPE_EYE_TRACKER_CREATE_INFO_FB) \
    _(XrEyeGazesInfoFB, XR, XR_TYPE_EYE_GAZES_INFO_FB) \
    _(XrEyeGazesFB, XR, XR_TYPE_EYE_GAZES_FB) \
    _(XrSystemEyeTrackingPropertiesFB, XR, XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_)
#else
#define XRT_STRUCT_LIST_XR_FB_eye_tracking_social(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_) \
    _(XrEyeGazeFB) \
    _(XrEyeTrackerCreateInfoFB) \
    _(XrEyeGazesInfoFB) \
    _(XrSystemEyeTrackingPropertiesFB) \
    _(XrEyeGazesFB) \
    _(XrEyeTrackerCreateInfoFB) \
    _(XrEyeGazesInfoFB) \
    _(XrEyeGazesFB) \
    _(XrSystemEyeTrackingPropertiesFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_passthrough_keyboard_hands
#define XRT_STRUCT_LIST_XR_FB_passthrough_keyboard_hands(_) \
    _(XrPassthroughKeyboardHandsIntensityFB, XR, XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB) \
    _(XrPassthroughKeyboardHandsIntensityFB, XR, XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_)
#else
#define XRT_STRUCT_LIST_XR_FB_passthrough_keyboard_hands(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_) \
    _(XrPassthroughKeyboardHandsIntensityFB) \
    _(XrPassthroughKeyboardHandsIntensityFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_composition_layer_settings
#define XRT_STRUCT_LIST_XR_FB_composition_layer_settings(_) \
    _(XrCompositionLayerSettingsFB, XR, XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB) \
    _(XrCompositionLayerSettingsFB, XR, XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_settings(_)
#else
#define XRT_STRUCT_LIST_XR_FB_composition_layer_settings(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_settings(_) \
    _(XrCompositionLayerSettingsFB) \
    _(XrCompositionLayerSettingsFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_haptic_pcm
#define XRT_STRUCT_LIST_XR_FB_haptic_pcm(_) \
    _(XrHapticPcmVibrationFB, XR, XR_TYPE_HAPTIC_PCM_VIBRATION_FB) \
    _(XrDevicePcmSampleRateStateFB, XR, XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB) \
    _(XrHapticPcmVibrationFB, XR, XR_TYPE_HAPTIC_PCM_VIBRATION_FB) \
    _(XrDevicePcmSampleRateStateFB, XR, XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_)
#else
#define XRT_STRUCT_LIST_XR_FB_haptic_pcm(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_) \
    _(XrHapticPcmVibrationFB) \
    _(XrDevicePcmSampleRateStateFB) \
    _(XrHapticPcmVibrationFB) \
    _(XrDevicePcmSampleRateStateFB) 
#endif
#ifdef XRT_ENABLE_XR_EXT_frame_synthesis
#define XRT_STRUCT_LIST_XR_EXT_frame_synthesis(_) \
    _(XrFrameSynthesisInfoEXT, XR, XR_TYPE_FRAME_SYNTHESIS_INFO_EXT) \
    _(XrFrameSynthesisConfigViewEXT, XR, XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT) \
    _(XrFrameSynthesisInfoEXT, XR, XR_TYPE_FRAME_SYNTHESIS_INFO_EXT) \
    _(XrFrameSynthesisConfigViewEXT, XR, XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_frame_synthesis(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_frame_synthesis(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_frame_synthesis(_) \
    _(XrFrameSynthesisInfoEXT) \
    _(XrFrameSynthesisConfigViewEXT) \
    _(XrFrameSynthesisInfoEXT) \
    _(XrFrameSynthesisConfigViewEXT) 
#endif
#ifdef XRT_ENABLE_XR_FB_composition_layer_depth_test
#define XRT_STRUCT_LIST_XR_FB_composition_layer_depth_test(_) \
    _(XrCompositionLayerDepthTestFB, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB) \
    _(XrCompositionLayerDepthTestFB, XR, XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_depth_test(_)
#else
#define XRT_STRUCT_LIST_XR_FB_composition_layer_depth_test(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_depth_test(_) \
    _(XrCompositionLayerDepthTestFB) \
    _(XrCompositionLayerDepthTestFB) 
#endif
#ifdef XRT_ENABLE_XR_META_local_dimming
#define XRT_STRUCT_LIST_XR_META_local_dimming(_) \
    _(XrLocalDimmingFrameEndInfoMETA, XR, XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META) \
    _(XrLocalDimmingFrameEndInfoMETA, XR, XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_local_dimming(_)
#else
#define XRT_STRUCT_LIST_XR_META_local_dimming(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_local_dimming(_) \
    _(XrLocalDimmingFrameEndInfoMETA) \
    _(XrLocalDimmingFrameEndInfoMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_passthrough_preferences
#define XRT_STRUCT_LIST_XR_META_passthrough_preferences(_) \
    _(XrPassthroughPreferencesMETA, XR, XR_TYPE_PASSTHROUGH_PREFERENCES_META) \
    _(XrPassthroughPreferencesMETA, XR, XR_TYPE_PASSTHROUGH_PREFERENCES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_)
#else
#define XRT_STRUCT_LIST_XR_META_passthrough_preferences(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_) \
    _(XrPassthroughPreferencesMETA) \
    _(XrPassthroughPreferencesMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_virtual_keyboard
#define XRT_STRUCT_LIST_XR_META_virtual_keyboard(_) \
    _(XrSystemVirtualKeyboardPropertiesMETA, XR, XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META) \
    _(XrVirtualKeyboardCreateInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META) \
    _(XrVirtualKeyboardSpaceCreateInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META) \
    _(XrVirtualKeyboardLocationInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META) \
    _(XrVirtualKeyboardModelVisibilitySetInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META) \
    _(XrVirtualKeyboardAnimationStateMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META) \
    _(XrVirtualKeyboardModelAnimationStatesMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META) \
    _(XrVirtualKeyboardTextureDataMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META) \
    _(XrVirtualKeyboardInputInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META) \
    _(XrVirtualKeyboardTextContextChangeInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META) \
    _(XrEventDataVirtualKeyboardCommitTextMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META) \
    _(XrEventDataVirtualKeyboardBackspaceMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META) \
    _(XrEventDataVirtualKeyboardEnterMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META) \
    _(XrEventDataVirtualKeyboardShownMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META) \
    _(XrEventDataVirtualKeyboardHiddenMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META) \
    _(XrSystemVirtualKeyboardPropertiesMETA, XR, XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META) \
    _(XrVirtualKeyboardCreateInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META) \
    _(XrVirtualKeyboardSpaceCreateInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META) \
    _(XrVirtualKeyboardLocationInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META) \
    _(XrVirtualKeyboardModelVisibilitySetInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META) \
    _(XrVirtualKeyboardAnimationStateMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META) \
    _(XrVirtualKeyboardModelAnimationStatesMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META) \
    _(XrVirtualKeyboardTextureDataMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META) \
    _(XrVirtualKeyboardInputInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META) \
    _(XrVirtualKeyboardTextContextChangeInfoMETA, XR, XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META) \
    _(XrEventDataVirtualKeyboardCommitTextMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META) \
    _(XrEventDataVirtualKeyboardBackspaceMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META) \
    _(XrEventDataVirtualKeyboardEnterMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META) \
    _(XrEventDataVirtualKeyboardShownMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META) \
    _(XrEventDataVirtualKeyboardHiddenMETA, XR, XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_)
#else
#define XRT_STRUCT_LIST_XR_META_virtual_keyboard(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_) \
    _(XrSystemVirtualKeyboardPropertiesMETA) \
    _(XrVirtualKeyboardCreateInfoMETA) \
    _(XrVirtualKeyboardSpaceCreateInfoMETA) \
    _(XrVirtualKeyboardLocationInfoMETA) \
    _(XrVirtualKeyboardModelVisibilitySetInfoMETA) \
    _(XrVirtualKeyboardAnimationStateMETA) \
    _(XrVirtualKeyboardModelAnimationStatesMETA) \
    _(XrVirtualKeyboardTextureDataMETA) \
    _(XrVirtualKeyboardInputInfoMETA) \
    _(XrVirtualKeyboardTextContextChangeInfoMETA) \
    _(XrEventDataVirtualKeyboardCommitTextMETA) \
    _(XrEventDataVirtualKeyboardBackspaceMETA) \
    _(XrEventDataVirtualKeyboardEnterMETA) \
    _(XrEventDataVirtualKeyboardShownMETA) \
    _(XrEventDataVirtualKeyboardHiddenMETA) \
    _(XrSystemVirtualKeyboardPropertiesMETA) \
    _(XrVirtualKeyboardCreateInfoMETA) \
    _(XrVirtualKeyboardSpaceCreateInfoMETA) \
    _(XrVirtualKeyboardLocationInfoMETA) \
    _(XrVirtualKeyboardModelVisibilitySetInfoMETA) \
    _(XrVirtualKeyboardAnimationStateMETA) \
    _(XrVirtualKeyboardModelAnimationStatesMETA) \
    _(XrVirtualKeyboardTextureDataMETA) \
    _(XrVirtualKeyboardInputInfoMETA) \
    _(XrVirtualKeyboardTextContextChangeInfoMETA) \
    _(XrEventDataVirtualKeyboardCommitTextMETA) \
    _(XrEventDataVirtualKeyboardBackspaceMETA) \
    _(XrEventDataVirtualKeyboardEnterMETA) \
    _(XrEventDataVirtualKeyboardShownMETA) \
    _(XrEventDataVirtualKeyboardHiddenMETA) 
#endif
#ifdef XRT_ENABLE_XR_OCULUS_external_camera
#define XRT_STRUCT_LIST_XR_OCULUS_external_camera(_) \
    _(XrExternalCameraIntrinsicsOCULUS, PLAIN) \
    _(XrExternalCameraExtrinsicsOCULUS, PLAIN) \
    _(XrExternalCameraOCULUS, XR, XR_TYPE_EXTERNAL_CAMERA_OCULUS) \
    _(XrExternalCameraOCULUS, XR, XR_TYPE_EXTERNAL_CAMERA_OCULUS) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_)
#else
#define XRT_STRUCT_LIST_XR_OCULUS_external_camera(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_) \
    _(XrExternalCameraIntrinsicsOCULUS) \
    _(XrExternalCameraExtrinsicsOCULUS) \
    _(XrExternalCameraOCULUS) \
    _(XrExternalCameraOCULUS) 
#endif
#ifdef XRT_ENABLE_XR_META_vulkan_swapchain_create_info
#define XRT_STRUCT_LIST_XR_META_vulkan_swapchain_create_info(_) \
    _(XrVulkanSwapchainCreateInfoMETA, XR, XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META) \
    _(XrVulkanSwapchainCreateInfoMETA, XR, XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_vulkan_swapchain_create_info(_)
#else
#define XRT_STRUCT_LIST_XR_META_vulkan_swapchain_create_info(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_vulkan_swapchain_create_info(_) \
    _(XrVulkanSwapchainCreateInfoMETA) \
    _(XrVulkanSwapchainCreateInfoMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_performance_metrics
#define XRT_STRUCT_LIST_XR_META_performance_metrics(_) \
    _(XrPerformanceMetricsStateMETA, XR, XR_TYPE_PERFORMANCE_METRICS_STATE_META) \
    _(XrPerformanceMetricsCounterMETA, XR, XR_TYPE_PERFORMANCE_METRICS_COUNTER_META) \
    _(XrPerformanceMetricsStateMETA, XR, XR_TYPE_PERFORMANCE_METRICS_STATE_META) \
    _(XrPerformanceMetricsCounterMETA, XR, XR_TYPE_PERFORMANCE_METRICS_COUNTER_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_performance_metrics(_)
#else
#define XRT_STRUCT_LIST_XR_META_performance_metrics(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_performance_metrics(_) \
    _(XrPerformanceMetricsStateMETA) \
    _(XrPerformanceMetricsCounterMETA) \
    _(XrPerformanceMetricsStateMETA) \
    _(XrPerformanceMetricsCounterMETA) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_storage_batch
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_storage_batch(_) \
    _(XrSpaceListSaveInfoFB, XR, XR_TYPE_SPACE_LIST_SAVE_INFO_FB) \
    _(XrEventDataSpaceListSaveCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB) \
    _(XrSpaceListSaveInfoFB, XR, XR_TYPE_SPACE_LIST_SAVE_INFO_FB) \
    _(XrEventDataSpaceListSaveCompleteFB, XR, XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_storage_batch(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_) \
    _(XrSpaceListSaveInfoFB) \
    _(XrEventDataSpaceListSaveCompleteFB) \
    _(XrSpaceListSaveInfoFB) \
    _(XrEventDataSpaceListSaveCompleteFB) 
#endif
#ifdef XRT_ENABLE_XR_FB_spatial_entity_user
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_user(_) \
    _(XrSpaceUserCreateInfoFB, XR, XR_TYPE_SPACE_USER_CREATE_INFO_FB) \
    _(XrSpaceUserCreateInfoFB, XR, XR_TYPE_SPACE_USER_CREATE_INFO_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_)
#else
#define XRT_STRUCT_LIST_XR_FB_spatial_entity_user(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_) \
    _(XrSpaceUserCreateInfoFB) \
    _(XrSpaceUserCreateInfoFB) 
#endif
#ifdef XRT_ENABLE_XR_META_headset_id
#define XRT_STRUCT_LIST_XR_META_headset_id(_) \
    _(XrSystemHeadsetIdPropertiesMETA, XR, XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META) \
    _(XrSystemHeadsetIdPropertiesMETA, XR, XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_headset_id(_)
#else
#define XRT_STRUCT_LIST_XR_META_headset_id(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_headset_id(_) \
    _(XrSystemHeadsetIdPropertiesMETA) \
    _(XrSystemHeadsetIdPropertiesMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_recommended_layer_resolution
#define XRT_STRUCT_LIST_XR_META_recommended_layer_resolution(_) \
    _(XrRecommendedLayerResolutionMETA, XR, XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META) \
    _(XrRecommendedLayerResolutionGetInfoMETA, XR, XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META) \
    _(XrRecommendedLayerResolutionMETA, XR, XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META) \
    _(XrRecommendedLayerResolutionGetInfoMETA, XR, XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_)
#else
#define XRT_STRUCT_LIST_XR_META_recommended_layer_resolution(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_) \
    _(XrRecommendedLayerResolutionMETA) \
    _(XrRecommendedLayerResolutionGetInfoMETA) \
    _(XrRecommendedLayerResolutionMETA) \
    _(XrRecommendedLayerResolutionGetInfoMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_passthrough_color_lut
#define XRT_STRUCT_LIST_XR_META_passthrough_color_lut(_) \
    _(XrPassthroughColorLutDataMETA, PLAIN) \
    _(XrPassthroughColorLutCreateInfoMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META) \
    _(XrPassthroughColorLutUpdateInfoMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META) \
    _(XrPassthroughColorMapLutMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META) \
    _(XrPassthroughColorMapInterpolatedLutMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META) \
    _(XrSystemPassthroughColorLutPropertiesMETA, XR, XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META) \
    _(XrSystemPassthroughColorLutPropertiesMETA, XR, XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META) \
    _(XrPassthroughColorLutCreateInfoMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META) \
    _(XrPassthroughColorLutUpdateInfoMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META) \
    _(XrPassthroughColorMapLutMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META) \
    _(XrPassthroughColorMapInterpolatedLutMETA, XR, XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_)
#else
#define XRT_STRUCT_LIST_XR_META_passthrough_color_lut(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_) \
    _(XrPassthroughColorLutDataMETA) \
    _(XrPassthroughColorLutCreateInfoMETA) \
    _(XrPassthroughColorLutUpdateInfoMETA) \
    _(XrPassthroughColorMapLutMETA) \
    _(XrPassthroughColorMapInterpolatedLutMETA) \
    _(XrSystemPassthroughColorLutPropertiesMETA) \
    _(XrSystemPassthroughColorLutPropertiesMETA) \
    _(XrPassthroughColorLutCreateInfoMETA) \
    _(XrPassthroughColorLutUpdateInfoMETA) \
    _(XrPassthroughColorMapLutMETA) \
    _(XrPassthroughColorMapInterpolatedLutMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_spatial_entity_mesh
#define XRT_STRUCT_LIST_XR_META_spatial_entity_mesh(_) \
    _(XrSpaceTriangleMeshGetInfoMETA, XR, XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META) \
    _(XrSpaceTriangleMeshMETA, XR, XR_TYPE_SPACE_TRIANGLE_MESH_META) \
    _(XrSpaceTriangleMeshGetInfoMETA, XR, XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META) \
    _(XrSpaceTriangleMeshMETA, XR, XR_TYPE_SPACE_TRIANGLE_MESH_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_)
#else
#define XRT_STRUCT_LIST_XR_META_spatial_entity_mesh(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_) \
    _(XrSpaceTriangleMeshGetInfoMETA) \
    _(XrSpaceTriangleMeshMETA) \
    _(XrSpaceTriangleMeshGetInfoMETA) \
    _(XrSpaceTriangleMeshMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_body_tracking_full_body
#define XRT_STRUCT_LIST_XR_META_body_tracking_full_body(_) \
    _(XrSystemPropertiesBodyTrackingFullBodyMETA, XR, XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META) \
    _(XrSystemPropertiesBodyTrackingFullBodyMETA, XR, XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_body_tracking_full_body(_)
#else
#define XRT_STRUCT_LIST_XR_META_body_tracking_full_body(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_body_tracking_full_body(_) \
    _(XrSystemPropertiesBodyTrackingFullBodyMETA) \
    _(XrSystemPropertiesBodyTrackingFullBodyMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_passthrough_layer_resumed_event
#define XRT_STRUCT_LIST_XR_META_passthrough_layer_resumed_event(_) \
    _(XrEventDataPassthroughLayerResumedMETA, XR, XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META) \
    _(XrEventDataPassthroughLayerResumedMETA, XR, XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_layer_resumed_event(_)
#else
#define XRT_STRUCT_LIST_XR_META_passthrough_layer_resumed_event(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_layer_resumed_event(_) \
    _(XrEventDataPassthroughLayerResumedMETA) \
    _(XrEventDataPassthroughLayerResumedMETA) 
#endif
#ifdef XRT_ENABLE_XR_FB_face_tracking2
#define XRT_STRUCT_LIST_XR_FB_face_tracking2(_) \
    _(XrSystemFaceTrackingProperties2FB, XR, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB) \
    _(XrFaceTrackerCreateInfo2FB, XR, XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB) \
    _(XrFaceExpressionInfo2FB, XR, XR_TYPE_FACE_EXPRESSION_INFO2_FB) \
    _(XrFaceExpressionWeights2FB, XR, XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB) \
    _(XrSystemFaceTrackingProperties2FB, XR, XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB) \
    _(XrFaceTrackerCreateInfo2FB, XR, XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB) \
    _(XrFaceExpressionInfo2FB, XR, XR_TYPE_FACE_EXPRESSION_INFO2_FB) \
    _(XrFaceExpressionWeights2FB, XR, XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking2(_)
#else
#define XRT_STRUCT_LIST_XR_FB_face_tracking2(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking2(_) \
    _(XrSystemFaceTrackingProperties2FB) \
    _(XrFaceTrackerCreateInfo2FB) \
    _(XrFaceExpressionInfo2FB) \
    _(XrFaceExpressionWeights2FB) \
    _(XrSystemFaceTrackingProperties2FB) \
    _(XrFaceTrackerCreateInfo2FB) \
    _(XrFaceExpressionInfo2FB) \
    _(XrFaceExpressionWeights2FB) 
#endif
#ifdef XRT_ENABLE_XR_META_spatial_entity_sharing
#define XRT_STRUCT_LIST_XR_META_spatial_entity_sharing(_) \
    _(XrSystemSpatialEntitySharingPropertiesMETA, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META) \
    _(XrShareSpacesRecipientBaseHeaderMETA, XR_HEADER) \
    _(XrShareSpacesInfoMETA, XR, XR_TYPE_SHARE_SPACES_INFO_META) \
    _(XrEventDataShareSpacesCompleteMETA, XR, XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META) \
    _(XrSystemSpatialEntitySharingPropertiesMETA, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META) \
    _(XrShareSpacesInfoMETA, XR, XR_TYPE_SHARE_SPACES_INFO_META) \
    _(XrEventDataShareSpacesCompleteMETA, XR, XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_)
#else
#define XRT_STRUCT_LIST_XR_META_spatial_entity_sharing(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_) \
    _(XrSystemSpatialEntitySharingPropertiesMETA) \
    _(XrShareSpacesRecipientBaseHeaderMETA) \
    _(XrShareSpacesInfoMETA) \
    _(XrEventDataShareSpacesCompleteMETA) \
    _(XrSystemSpatialEntitySharingPropertiesMETA) \
    _(XrShareSpacesInfoMETA) \
    _(XrEventDataShareSpacesCompleteMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_environment_depth
#define XRT_STRUCT_LIST_XR_META_environment_depth(_) \
    _(XrEnvironmentDepthProviderCreateInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META) \
    _(XrEnvironmentDepthSwapchainCreateInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META) \
    _(XrEnvironmentDepthSwapchainStateMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META) \
    _(XrEnvironmentDepthImageAcquireInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META) \
    _(XrEnvironmentDepthImageViewMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META) \
    _(XrEnvironmentDepthImageMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META) \
    _(XrEnvironmentDepthHandRemovalSetInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META) \
    _(XrSystemEnvironmentDepthPropertiesMETA, XR, XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META) \
    _(XrEnvironmentDepthProviderCreateInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META) \
    _(XrEnvironmentDepthSwapchainCreateInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META) \
    _(XrEnvironmentDepthSwapchainStateMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META) \
    _(XrEnvironmentDepthImageAcquireInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META) \
    _(XrEnvironmentDepthImageViewMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META) \
    _(XrEnvironmentDepthImageMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META) \
    _(XrEnvironmentDepthHandRemovalSetInfoMETA, XR, XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META) \
    _(XrSystemEnvironmentDepthPropertiesMETA, XR, XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_environment_depth(_)
#else
#define XRT_STRUCT_LIST_XR_META_environment_depth(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_environment_depth(_) \
    _(XrEnvironmentDepthProviderCreateInfoMETA) \
    _(XrEnvironmentDepthSwapchainCreateInfoMETA) \
    _(XrEnvironmentDepthSwapchainStateMETA) \
    _(XrEnvironmentDepthImageAcquireInfoMETA) \
    _(XrEnvironmentDepthImageViewMETA) \
    _(XrEnvironmentDepthImageMETA) \
    _(XrEnvironmentDepthHandRemovalSetInfoMETA) \
    _(XrSystemEnvironmentDepthPropertiesMETA) \
    _(XrEnvironmentDepthProviderCreateInfoMETA) \
    _(XrEnvironmentDepthSwapchainCreateInfoMETA) \
    _(XrEnvironmentDepthSwapchainStateMETA) \
    _(XrEnvironmentDepthImageAcquireInfoMETA) \
    _(XrEnvironmentDepthImageViewMETA) \
    _(XrEnvironmentDepthImageMETA) \
    _(XrEnvironmentDepthHandRemovalSetInfoMETA) \
    _(XrSystemEnvironmentDepthPropertiesMETA) 
#endif
#define XRT_STRUCT_LIST_XR_QCOM_tracking_optimization_settings(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_QCOM_tracking_optimization_settings(_)
#ifdef XRT_ENABLE_XR_HTC_passthrough
#define XRT_STRUCT_LIST_XR_HTC_passthrough(_) \
    _(XrPassthroughCreateInfoHTC, XR, XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC) \
    _(XrPassthroughColorHTC, XR, XR_TYPE_PASSTHROUGH_COLOR_HTC) \
    _(XrPassthroughMeshTransformInfoHTC, XR, XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC) \
    _(XrCompositionLayerPassthroughHTC, XR, XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC) \
    _(XrPassthroughCreateInfoHTC, XR, XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC) \
    _(XrPassthroughColorHTC, XR, XR_TYPE_PASSTHROUGH_COLOR_HTC) \
    _(XrPassthroughMeshTransformInfoHTC, XR, XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC) \
    _(XrCompositionLayerPassthroughHTC, XR, XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_passthrough(_)
#else
#define XRT_STRUCT_LIST_XR_HTC_passthrough(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_passthrough(_) \
    _(XrPassthroughCreateInfoHTC) \
    _(XrPassthroughColorHTC) \
    _(XrPassthroughMeshTransformInfoHTC) \
    _(XrCompositionLayerPassthroughHTC) \
    _(XrPassthroughCreateInfoHTC) \
    _(XrPassthroughColorHTC) \
    _(XrPassthroughMeshTransformInfoHTC) \
    _(XrCompositionLayerPassthroughHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_foveation
#define XRT_STRUCT_LIST_XR_HTC_foveation(_) \
    _(XrFoveationApplyInfoHTC, XR, XR_TYPE_FOVEATION_APPLY_INFO_HTC) \
    _(XrFoveationConfigurationHTC, PLAIN) \
    _(XrFoveationDynamicModeInfoHTC, XR, XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC) \
    _(XrFoveationCustomModeInfoHTC, XR, XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC) \
    _(XrFoveationApplyInfoHTC, XR, XR_TYPE_FOVEATION_APPLY_INFO_HTC) \
    _(XrFoveationDynamicModeInfoHTC, XR, XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC) \
    _(XrFoveationCustomModeInfoHTC, XR, XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_foveation(_)
#else
#define XRT_STRUCT_LIST_XR_HTC_foveation(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_foveation(_) \
    _(XrFoveationApplyInfoHTC) \
    _(XrFoveationConfigurationHTC) \
    _(XrFoveationDynamicModeInfoHTC) \
    _(XrFoveationCustomModeInfoHTC) \
    _(XrFoveationApplyInfoHTC) \
    _(XrFoveationDynamicModeInfoHTC) \
    _(XrFoveationCustomModeInfoHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_anchor
#define XRT_STRUCT_LIST_XR_HTC_anchor(_) \
    _(XrSystemAnchorPropertiesHTC, XR, XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC) \
    _(XrSpatialAnchorCreateInfoHTC, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC) \
    _(XrSpatialAnchorNameHTC, PLAIN) \
    _(XrSystemAnchorPropertiesHTC, XR, XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC) \
    _(XrSpatialAnchorCreateInfoHTC, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_anchor(_)
#else
#define XRT_STRUCT_LIST_XR_HTC_anchor(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_anchor(_) \
    _(XrSystemAnchorPropertiesHTC) \
    _(XrSpatialAnchorCreateInfoHTC) \
    _(XrSpatialAnchorNameHTC) \
    _(XrSystemAnchorPropertiesHTC) \
    _(XrSpatialAnchorCreateInfoHTC) 
#endif
#ifdef XRT_ENABLE_XR_HTC_body_tracking
#define XRT_STRUCT_LIST_XR_HTC_body_tracking(_) \
    _(XrSystemBodyTrackingPropertiesHTC, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC) \
    _(XrBodyTrackerCreateInfoHTC, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC) \
    _(XrBodyJointsLocateInfoHTC, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC) \
    _(XrBodyJointLocationsHTC, XR, XR_TYPE_BODY_JOINT_LOCATIONS_HTC) \
    _(XrBodyJointLocationHTC, PLAIN) \
    _(XrBodySkeletonHTC, XR, XR_TYPE_BODY_SKELETON_HTC) \
    _(XrSystemBodyTrackingPropertiesHTC, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC) \
    _(XrBodyTrackerCreateInfoHTC, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC) \
    _(XrBodyJointsLocateInfoHTC, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC) \
    _(XrBodyJointLocationsHTC, XR, XR_TYPE_BODY_JOINT_LOCATIONS_HTC) \
    _(XrBodySkeletonHTC, XR, XR_TYPE_BODY_SKELETON_HTC) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_body_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_HTC_body_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_body_tracking(_) \
    _(XrSystemBodyTrackingPropertiesHTC) \
    _(XrBodyTrackerCreateInfoHTC) \
    _(XrBodyJointsLocateInfoHTC) \
    _(XrBodyJointLocationsHTC) \
    _(XrBodyJointLocationHTC) \
    _(XrBodySkeletonHTC) \
    _(XrSystemBodyTrackingPropertiesHTC) \
    _(XrBodyTrackerCreateInfoHTC) \
    _(XrBodyJointsLocateInfoHTC) \
    _(XrBodyJointLocationsHTC) \
    _(XrBodySkeletonHTC) 
#endif
#ifdef XRT_ENABLE_XR_EXT_active_action_set_priority
#define XRT_STRUCT_LIST_XR_EXT_active_action_set_priority(_) \
    _(XrActiveActionSetPrioritiesEXT, XR, XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT) \
    _(XrActiveActionSetPriorityEXT, PLAIN) \
    _(XrActiveActionSetPrioritiesEXT, XR, XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_active_action_set_priority(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_active_action_set_priority(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_active_action_set_priority(_) \
    _(XrActiveActionSetPrioritiesEXT) \
    _(XrActiveActionSetPriorityEXT) \
    _(XrActiveActionSetPrioritiesEXT) 
#endif
#ifdef XRT_ENABLE_XR_MNDX_force_feedback_curl
#define XRT_STRUCT_LIST_XR_MNDX_force_feedback_curl(_) \
    _(XrSystemForceFeedbackCurlPropertiesMNDX, XR, XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX) \
    _(XrForceFeedbackCurlApplyLocationsMNDX, XR, XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX) \
    _(XrForceFeedbackCurlApplyLocationMNDX, PLAIN) \
    _(XrSystemForceFeedbackCurlPropertiesMNDX, XR, XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX) \
    _(XrForceFeedbackCurlApplyLocationsMNDX, XR, XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_)
#else
#define XRT_STRUCT_LIST_XR_MNDX_force_feedback_curl(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_) \
    _(XrSystemForceFeedbackCurlPropertiesMNDX) \
    _(XrForceFeedbackCurlApplyLocationsMNDX) \
    _(XrForceFeedbackCurlApplyLocationMNDX) \
    _(XrSystemForceFeedbackCurlPropertiesMNDX) \
    _(XrForceFeedbackCurlApplyLocationsMNDX) 
#endif
#ifdef XRT_ENABLE_XR_BD_body_tracking
#define XRT_STRUCT_LIST_XR_BD_body_tracking(_) \
    _(XrSystemBodyTrackingPropertiesBD, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD) \
    _(XrBodyTrackerCreateInfoBD, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_BD) \
    _(XrBodyJointsLocateInfoBD, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD) \
    _(XrBodyJointLocationsBD, XR, XR_TYPE_BODY_JOINT_LOCATIONS_BD) \
    _(XrBodyJointLocationBD, PLAIN) \
    _(XrBodyTrackerCreateInfoBD, XR, XR_TYPE_BODY_TRACKER_CREATE_INFO_BD) \
    _(XrBodyJointsLocateInfoBD, XR, XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD) \
    _(XrBodyJointLocationsBD, XR, XR_TYPE_BODY_JOINT_LOCATIONS_BD) \
    _(XrSystemBodyTrackingPropertiesBD, XR, XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_body_tracking(_)
#else
#define XRT_STRUCT_LIST_XR_BD_body_tracking(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_body_tracking(_) \
    _(XrSystemBodyTrackingPropertiesBD) \
    _(XrBodyTrackerCreateInfoBD) \
    _(XrBodyJointsLocateInfoBD) \
    _(XrBodyJointLocationsBD) \
    _(XrBodyJointLocationBD) \
    _(XrBodyTrackerCreateInfoBD) \
    _(XrBodyJointsLocateInfoBD) \
    _(XrBodyJointLocationsBD) \
    _(XrSystemBodyTrackingPropertiesBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_sensing
#define XRT_STRUCT_LIST_XR_BD_spatial_sensing(_) \
    _(XrSystemSpatialSensingPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD) \
    _(XrSpatialEntityComponentGetInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD) \
    _(XrSpatialEntityComponentDataBaseHeaderBD, XR_HEADER) \
    _(XrSpatialEntityLocationGetInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD) \
    _(XrSpatialEntityComponentDataLocationBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD) \
    _(XrSpatialEntityComponentDataSemanticBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD) \
    _(XrSpatialEntityComponentDataBoundingBox2DBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD) \
    _(XrSpatialEntityComponentDataPolygonBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD) \
    _(XrSpatialEntityComponentDataBoundingBox3DBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD) \
    _(XrSpatialEntityComponentDataTriangleMeshBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD) \
    _(XrSenseDataProviderCreateInfoBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD) \
    _(XrSenseDataProviderStartInfoBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD) \
    _(XrEventDataSenseDataProviderStateChangedBD, XR, XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD) \
    _(XrEventDataSenseDataUpdatedBD, XR, XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD) \
    _(XrSenseDataQueryInfoBD, XR, XR_TYPE_SENSE_DATA_QUERY_INFO_BD) \
    _(XrSenseDataQueryCompletionBD, XR, XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD) \
    _(XrQueriedSenseDataGetInfoBD, XR, XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD) \
    _(XrQueriedSenseDataBD, XR, XR_TYPE_QUERIED_SENSE_DATA_BD) \
    _(XrSpatialEntityStateBD, XR, XR_TYPE_SPATIAL_ENTITY_STATE_BD) \
    _(XrSenseDataFilterUuidBD, XR, XR_TYPE_SENSE_DATA_FILTER_UUID_BD) \
    _(XrSenseDataFilterSemanticBD, XR, XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD) \
    _(XrSpatialEntityAnchorCreateInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD) \
    _(XrAnchorSpaceCreateInfoBD, XR, XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD) \
    _(XrSystemSpatialSensingPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD) \
    _(XrSpatialEntityComponentGetInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD) \
    _(XrSpatialEntityLocationGetInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD) \
    _(XrSpatialEntityComponentDataLocationBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD) \
    _(XrSpatialEntityComponentDataSemanticBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD) \
    _(XrSpatialEntityComponentDataBoundingBox2DBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD) \
    _(XrSpatialEntityComponentDataPolygonBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD) \
    _(XrSpatialEntityComponentDataBoundingBox3DBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD) \
    _(XrSpatialEntityComponentDataTriangleMeshBD, XR, XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD) \
    _(XrSenseDataProviderCreateInfoBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD) \
    _(XrSenseDataProviderStartInfoBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD) \
    _(XrEventDataSenseDataProviderStateChangedBD, XR, XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD) \
    _(XrEventDataSenseDataUpdatedBD, XR, XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD) \
    _(XrSenseDataQueryInfoBD, XR, XR_TYPE_SENSE_DATA_QUERY_INFO_BD) \
    _(XrSenseDataQueryCompletionBD, XR, XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD) \
    _(XrSenseDataFilterUuidBD, XR, XR_TYPE_SENSE_DATA_FILTER_UUID_BD) \
    _(XrSenseDataFilterSemanticBD, XR, XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD) \
    _(XrQueriedSenseDataGetInfoBD, XR, XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD) \
    _(XrQueriedSenseDataBD, XR, XR_TYPE_QUERIED_SENSE_DATA_BD) \
    _(XrSpatialEntityStateBD, XR, XR_TYPE_SPATIAL_ENTITY_STATE_BD) \
    _(XrSpatialEntityAnchorCreateInfoBD, XR, XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD) \
    _(XrAnchorSpaceCreateInfoBD, XR, XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_)
#else
#define XRT_STRUCT_LIST_XR_BD_spatial_sensing(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_) \
    _(XrSystemSpatialSensingPropertiesBD) \
    _(XrSpatialEntityComponentGetInfoBD) \
    _(XrSpatialEntityComponentDataBaseHeaderBD) \
    _(XrSpatialEntityLocationGetInfoBD) \
    _(XrSpatialEntityComponentDataLocationBD) \
    _(XrSpatialEntityComponentDataSemanticBD) \
    _(XrSpatialEntityComponentDataBoundingBox2DBD) \
    _(XrSpatialEntityComponentDataPolygonBD) \
    _(XrSpatialEntityComponentDataBoundingBox3DBD) \
    _(XrSpatialEntityComponentDataTriangleMeshBD) \
    _(XrSenseDataProviderCreateInfoBD) \
    _(XrSenseDataProviderStartInfoBD) \
    _(XrEventDataSenseDataProviderStateChangedBD) \
    _(XrEventDataSenseDataUpdatedBD) \
    _(XrSenseDataQueryInfoBD) \
    _(XrSenseDataQueryCompletionBD) \
    _(XrQueriedSenseDataGetInfoBD) \
    _(XrQueriedSenseDataBD) \
    _(XrSpatialEntityStateBD) \
    _(XrSenseDataFilterUuidBD) \
    _(XrSenseDataFilterSemanticBD) \
    _(XrSpatialEntityAnchorCreateInfoBD) \
    _(XrAnchorSpaceCreateInfoBD) \
    _(XrSystemSpatialSensingPropertiesBD) \
    _(XrSpatialEntityComponentGetInfoBD) \
    _(XrSpatialEntityLocationGetInfoBD) \
    _(XrSpatialEntityComponentDataLocationBD) \
    _(XrSpatialEntityComponentDataSemanticBD) \
    _(XrSpatialEntityComponentDataBoundingBox2DBD) \
    _(XrSpatialEntityComponentDataPolygonBD) \
    _(XrSpatialEntityComponentDataBoundingBox3DBD) \
    _(XrSpatialEntityComponentDataTriangleMeshBD) \
    _(XrSenseDataProviderCreateInfoBD) \
    _(XrSenseDataProviderStartInfoBD) \
    _(XrEventDataSenseDataProviderStateChangedBD) \
    _(XrEventDataSenseDataUpdatedBD) \
    _(XrSenseDataQueryInfoBD) \
    _(XrSenseDataQueryCompletionBD) \
    _(XrSenseDataFilterUuidBD) \
    _(XrSenseDataFilterSemanticBD) \
    _(XrQueriedSenseDataGetInfoBD) \
    _(XrQueriedSenseDataBD) \
    _(XrSpatialEntityStateBD) \
    _(XrSpatialEntityAnchorCreateInfoBD) \
    _(XrAnchorSpaceCreateInfoBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_anchor
#define XRT_STRUCT_LIST_XR_BD_spatial_anchor(_) \
    _(XrSystemSpatialAnchorPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD) \
    _(XrSpatialAnchorCreateInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD) \
    _(XrSpatialAnchorCreateCompletionBD, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD) \
    _(XrSpatialAnchorPersistInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD) \
    _(XrSpatialAnchorUnpersistInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD) \
    _(XrSystemSpatialAnchorPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD) \
    _(XrSpatialAnchorCreateInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD) \
    _(XrSpatialAnchorCreateCompletionBD, XR, XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD) \
    _(XrSpatialAnchorPersistInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD) \
    _(XrSpatialAnchorUnpersistInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_)
#else
#define XRT_STRUCT_LIST_XR_BD_spatial_anchor(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_) \
    _(XrSystemSpatialAnchorPropertiesBD) \
    _(XrSpatialAnchorCreateInfoBD) \
    _(XrSpatialAnchorCreateCompletionBD) \
    _(XrSpatialAnchorPersistInfoBD) \
    _(XrSpatialAnchorUnpersistInfoBD) \
    _(XrSystemSpatialAnchorPropertiesBD) \
    _(XrSpatialAnchorCreateInfoBD) \
    _(XrSpatialAnchorCreateCompletionBD) \
    _(XrSpatialAnchorPersistInfoBD) \
    _(XrSpatialAnchorUnpersistInfoBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_anchor_sharing
#define XRT_STRUCT_LIST_XR_BD_spatial_anchor_sharing(_) \
    _(XrSystemSpatialAnchorSharingPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD) \
    _(XrSpatialAnchorShareInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD) \
    _(XrSharedSpatialAnchorDownloadInfoBD, XR, XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD) \
    _(XrSystemSpatialAnchorSharingPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD) \
    _(XrSpatialAnchorShareInfoBD, XR, XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD) \
    _(XrSharedSpatialAnchorDownloadInfoBD, XR, XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_)
#else
#define XRT_STRUCT_LIST_XR_BD_spatial_anchor_sharing(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_) \
    _(XrSystemSpatialAnchorSharingPropertiesBD) \
    _(XrSpatialAnchorShareInfoBD) \
    _(XrSharedSpatialAnchorDownloadInfoBD) \
    _(XrSystemSpatialAnchorSharingPropertiesBD) \
    _(XrSpatialAnchorShareInfoBD) \
    _(XrSharedSpatialAnchorDownloadInfoBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_scene
#define XRT_STRUCT_LIST_XR_BD_spatial_scene(_) \
    _(XrSystemSpatialScenePropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD) \
    _(XrSceneCaptureInfoBD, XR, XR_TYPE_SCENE_CAPTURE_INFO_BD) \
    _(XrSystemSpatialScenePropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD) \
    _(XrSceneCaptureInfoBD, XR, XR_TYPE_SCENE_CAPTURE_INFO_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_scene(_)
#else
#define XRT_STRUCT_LIST_XR_BD_spatial_scene(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_scene(_) \
    _(XrSystemSpatialScenePropertiesBD) \
    _(XrSceneCaptureInfoBD) \
    _(XrSystemSpatialScenePropertiesBD) \
    _(XrSceneCaptureInfoBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_spatial_mesh
#define XRT_STRUCT_LIST_XR_BD_spatial_mesh(_) \
    _(XrSystemSpatialMeshPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD) \
    _(XrSenseDataProviderCreateInfoSpatialMeshBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD) \
    _(XrSystemSpatialMeshPropertiesBD, XR, XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD) \
    _(XrSenseDataProviderCreateInfoSpatialMeshBD, XR, XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_mesh(_)
#else
#define XRT_STRUCT_LIST_XR_BD_spatial_mesh(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_mesh(_) \
    _(XrSystemSpatialMeshPropertiesBD) \
    _(XrSenseDataProviderCreateInfoSpatialMeshBD) \
    _(XrSystemSpatialMeshPropertiesBD) \
    _(XrSenseDataProviderCreateInfoSpatialMeshBD) 
#endif
#ifdef XRT_ENABLE_XR_BD_future_progress
#define XRT_STRUCT_LIST_XR_BD_future_progress(_) \
    _(XrFuturePollResultProgressBD, XR, XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD) \
    _(XrFuturePollResultProgressBD, XR, XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_future_progress(_)
#else
#define XRT_STRUCT_LIST_XR_BD_future_progress(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_future_progress(_) \
    _(XrFuturePollResultProgressBD) \
    _(XrFuturePollResultProgressBD) 
#endif
#ifdef XRT_ENABLE_XR_EXT_hand_tracking_data_source
#define XRT_STRUCT_LIST_XR_EXT_hand_tracking_data_source(_) \
    _(XrHandTrackingDataSourceInfoEXT, XR, XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT) \
    _(XrHandTrackingDataSourceStateEXT, XR, XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT) \
    _(XrHandTrackingDataSourceInfoEXT, XR, XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT) \
    _(XrHandTrackingDataSourceStateEXT, XR, XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking_data_source(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_hand_tracking_data_source(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking_data_source(_) \
    _(XrHandTrackingDataSourceInfoEXT) \
    _(XrHandTrackingDataSourceStateEXT) \
    _(XrHandTrackingDataSourceInfoEXT) \
    _(XrHandTrackingDataSourceStateEXT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_plane_detection
#define XRT_STRUCT_LIST_XR_EXT_plane_detection(_) \
    _(XrSystemPlaneDetectionPropertiesEXT, XR, XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT) \
    _(XrPlaneDetectorCreateInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT) \
    _(XrPlaneDetectorBeginInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT) \
    _(XrPlaneDetectorGetInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT) \
    _(XrPlaneDetectorLocationEXT, XR, XR_TYPE_PLANE_DETECTOR_LOCATION_EXT) \
    _(XrPlaneDetectorLocationsEXT, XR, XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT) \
    _(XrPlaneDetectorPolygonBufferEXT, XR, XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT) \
    _(XrPlaneDetectorCreateInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT) \
    _(XrPlaneDetectorBeginInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT) \
    _(XrPlaneDetectorGetInfoEXT, XR, XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT) \
    _(XrPlaneDetectorLocationsEXT, XR, XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT) \
    _(XrPlaneDetectorLocationEXT, XR, XR_TYPE_PLANE_DETECTOR_LOCATION_EXT) \
    _(XrPlaneDetectorPolygonBufferEXT, XR, XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT) \
    _(XrSystemPlaneDetectionPropertiesEXT, XR, XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_plane_detection(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_plane_detection(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_plane_detection(_) \
    _(XrSystemPlaneDetectionPropertiesEXT) \
    _(XrPlaneDetectorCreateInfoEXT) \
    _(XrPlaneDetectorBeginInfoEXT) \
    _(XrPlaneDetectorGetInfoEXT) \
    _(XrPlaneDetectorLocationEXT) \
    _(XrPlaneDetectorLocationsEXT) \
    _(XrPlaneDetectorPolygonBufferEXT) \
    _(XrPlaneDetectorCreateInfoEXT) \
    _(XrPlaneDetectorBeginInfoEXT) \
    _(XrPlaneDetectorGetInfoEXT) \
    _(XrPlaneDetectorLocationsEXT) \
    _(XrPlaneDetectorLocationEXT) \
    _(XrPlaneDetectorPolygonBufferEXT) \
    _(XrSystemPlaneDetectionPropertiesEXT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_future
#define XRT_STRUCT_LIST_XR_EXT_future(_) \
    _(XrFutureCancelInfoEXT, XR, XR_TYPE_FUTURE_CANCEL_INFO_EXT) \
    _(XrFuturePollInfoEXT, XR, XR_TYPE_FUTURE_POLL_INFO_EXT) \
    _(XrFutureCompletionBaseHeaderEXT, XR_HEADER) \
    _(XrFutureCompletionEXT, XR, XR_TYPE_FUTURE_COMPLETION_EXT) \
    _(XrFuturePollResultEXT, XR, XR_TYPE_FUTURE_POLL_RESULT_EXT) \
    _(XrFutureCancelInfoEXT, XR, XR_TYPE_FUTURE_CANCEL_INFO_EXT) \
    _(XrFuturePollInfoEXT, XR, XR_TYPE_FUTURE_POLL_INFO_EXT) \
    _(XrFutureCompletionEXT, XR, XR_TYPE_FUTURE_COMPLETION_EXT) \
    _(XrFuturePollResultEXT, XR, XR_TYPE_FUTURE_POLL_RESULT_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_future(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_future(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_future(_) \
    _(XrFutureCancelInfoEXT) \
    _(XrFuturePollInfoEXT) \
    _(XrFutureCompletionBaseHeaderEXT) \
    _(XrFutureCompletionEXT) \
    _(XrFuturePollResultEXT) \
    _(XrFutureCancelInfoEXT) \
    _(XrFuturePollInfoEXT) \
    _(XrFutureCompletionEXT) \
    _(XrFuturePollResultEXT) 
#endif
#ifdef XRT_ENABLE_XR_EXT_user_presence
#define XRT_STRUCT_LIST_XR_EXT_user_presence(_) \
    _(XrEventDataUserPresenceChangedEXT, XR, XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT) \
    _(XrSystemUserPresencePropertiesEXT, XR, XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT) \
    _(XrEventDataUserPresenceChangedEXT, XR, XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT) \
    _(XrSystemUserPresencePropertiesEXT, XR, XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_user_presence(_)
#else
#define XRT_STRUCT_LIST_XR_EXT_user_presence(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_user_presence(_) \
    _(XrEventDataUserPresenceChangedEXT) \
    _(XrSystemUserPresencePropertiesEXT) \
    _(XrEventDataUserPresenceChangedEXT) \
    _(XrSystemUserPresencePropertiesEXT) 
#endif
#ifdef XRT_ENABLE_XR_ML_system_notifications
#define XRT_STRUCT_LIST_XR_ML_system_notifications(_) \
    _(XrSystemNotificationsSetInfoML, XR, XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML) \
    _(XrSystemNotificationsSetInfoML, XR, XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_system_notifications(_)
#else
#define XRT_STRUCT_LIST_XR_ML_system_notifications(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_system_notifications(_) \
    _(XrSystemNotificationsSetInfoML) \
    _(XrSystemNotificationsSetInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_world_mesh_detection
#define XRT_STRUCT_LIST_XR_ML_world_mesh_detection(_) \
    _(XrWorldMeshDetectorCreateInfoML, XR, XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML) \
    _(XrWorldMeshBlockStateML, XR, XR_TYPE_WORLD_MESH_BLOCK_STATE_ML) \
    _(XrWorldMeshStateRequestInfoML, XR, XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML) \
    _(XrWorldMeshStateRequestCompletionML, XR, XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML) \
    _(XrWorldMeshBufferRecommendedSizeInfoML, XR, XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML) \
    _(XrWorldMeshBufferSizeML, XR, XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML) \
    _(XrWorldMeshBufferML, XR, XR_TYPE_WORLD_MESH_BUFFER_ML) \
    _(XrWorldMeshBlockRequestML, XR, XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML) \
    _(XrWorldMeshGetInfoML, XR, XR_TYPE_WORLD_MESH_GET_INFO_ML) \
    _(XrWorldMeshBlockML, XR, XR_TYPE_WORLD_MESH_BLOCK_ML) \
    _(XrWorldMeshRequestCompletionInfoML, XR, XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML) \
    _(XrWorldMeshRequestCompletionML, XR, XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML) \
    _(XrWorldMeshDetectorCreateInfoML, XR, XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML) \
    _(XrWorldMeshStateRequestInfoML, XR, XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML) \
    _(XrWorldMeshBlockStateML, XR, XR_TYPE_WORLD_MESH_BLOCK_STATE_ML) \
    _(XrWorldMeshStateRequestCompletionML, XR, XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML) \
    _(XrWorldMeshBufferRecommendedSizeInfoML, XR, XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML) \
    _(XrWorldMeshBufferSizeML, XR, XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML) \
    _(XrWorldMeshBufferML, XR, XR_TYPE_WORLD_MESH_BUFFER_ML) \
    _(XrWorldMeshBlockRequestML, XR, XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML) \
    _(XrWorldMeshGetInfoML, XR, XR_TYPE_WORLD_MESH_GET_INFO_ML) \
    _(XrWorldMeshBlockML, XR, XR_TYPE_WORLD_MESH_BLOCK_ML) \
    _(XrWorldMeshRequestCompletionML, XR, XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML) \
    _(XrWorldMeshRequestCompletionInfoML, XR, XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_)
#else
#define XRT_STRUCT_LIST_XR_ML_world_mesh_detection(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_) \
    _(XrWorldMeshDetectorCreateInfoML) \
    _(XrWorldMeshBlockStateML) \
    _(XrWorldMeshStateRequestInfoML) \
    _(XrWorldMeshStateRequestCompletionML) \
    _(XrWorldMeshBufferRecommendedSizeInfoML) \
    _(XrWorldMeshBufferSizeML) \
    _(XrWorldMeshBufferML) \
    _(XrWorldMeshBlockRequestML) \
    _(XrWorldMeshGetInfoML) \
    _(XrWorldMeshBlockML) \
    _(XrWorldMeshRequestCompletionInfoML) \
    _(XrWorldMeshRequestCompletionML) \
    _(XrWorldMeshDetectorCreateInfoML) \
    _(XrWorldMeshStateRequestInfoML) \
    _(XrWorldMeshBlockStateML) \
    _(XrWorldMeshStateRequestCompletionML) \
    _(XrWorldMeshBufferRecommendedSizeInfoML) \
    _(XrWorldMeshBufferSizeML) \
    _(XrWorldMeshBufferML) \
    _(XrWorldMeshBlockRequestML) \
    _(XrWorldMeshGetInfoML) \
    _(XrWorldMeshBlockML) \
    _(XrWorldMeshRequestCompletionML) \
    _(XrWorldMeshRequestCompletionInfoML) 
#endif
#ifdef XRT_ENABLE_XR_ML_facial_expression
#define XRT_STRUCT_LIST_XR_ML_facial_expression(_) \
    _(XrSystemFacialExpressionPropertiesML, XR, XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML) \
    _(XrFacialExpressionClientCreateInfoML, XR, XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML) \
    _(XrFacialExpressionBlendShapeGetInfoML, XR, XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML) \
    _(XrFacialExpressionBlendShapePropertiesML, XR, XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML) \
    _(XrSystemFacialExpressionPropertiesML, XR, XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML) \
    _(XrFacialExpressionClientCreateInfoML, XR, XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML) \
    _(XrFacialExpressionBlendShapeGetInfoML, XR, XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML) \
    _(XrFacialExpressionBlendShapePropertiesML, XR, XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_facial_expression(_)
#else
#define XRT_STRUCT_LIST_XR_ML_facial_expression(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_facial_expression(_) \
    _(XrSystemFacialExpressionPropertiesML) \
    _(XrFacialExpressionClientCreateInfoML) \
    _(XrFacialExpressionBlendShapeGetInfoML) \
    _(XrFacialExpressionBlendShapePropertiesML) \
    _(XrSystemFacialExpressionPropertiesML) \
    _(XrFacialExpressionClientCreateInfoML) \
    _(XrFacialExpressionBlendShapeGetInfoML) \
    _(XrFacialExpressionBlendShapePropertiesML) 
#endif
#ifdef XRT_ENABLE_XR_META_simultaneous_hands_and_controllers
#define XRT_STRUCT_LIST_XR_META_simultaneous_hands_and_controllers(_) \
    _(XrSystemSimultaneousHandsAndControllersPropertiesMETA, XR, XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META) \
    _(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA, XR, XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META) \
    _(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA, XR, XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META) \
    _(XrSystemSimultaneousHandsAndControllersPropertiesMETA, XR, XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META) \
    _(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA, XR, XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META) \
    _(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA, XR, XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_)
#else
#define XRT_STRUCT_LIST_XR_META_simultaneous_hands_and_controllers(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_) \
    _(XrSystemSimultaneousHandsAndControllersPropertiesMETA) \
    _(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA) \
    _(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA) \
    _(XrSystemSimultaneousHandsAndControllersPropertiesMETA) \
    _(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA) \
    _(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_colocation_discovery
#define XRT_STRUCT_LIST_XR_META_colocation_discovery(_) \
    _(XrColocationDiscoveryStartInfoMETA, XR, XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META) \
    _(XrColocationDiscoveryStopInfoMETA, XR, XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META) \
    _(XrColocationAdvertisementStartInfoMETA, XR, XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META) \
    _(XrColocationAdvertisementStopInfoMETA, XR, XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META) \
    _(XrEventDataStartColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataStopColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataStartColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrEventDataColocationDiscoveryResultMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META) \
    _(XrEventDataColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrEventDataStopColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrSystemColocationDiscoveryPropertiesMETA, XR, XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META) \
    _(XrColocationDiscoveryStartInfoMETA, XR, XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META) \
    _(XrColocationDiscoveryStopInfoMETA, XR, XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META) \
    _(XrColocationAdvertisementStartInfoMETA, XR, XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META) \
    _(XrColocationAdvertisementStopInfoMETA, XR, XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META) \
    _(XrEventDataStartColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataStopColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataColocationAdvertisementCompleteMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META) \
    _(XrEventDataStartColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrEventDataColocationDiscoveryResultMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META) \
    _(XrEventDataColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrEventDataStopColocationDiscoveryCompleteMETA, XR, XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META) \
    _(XrSystemColocationDiscoveryPropertiesMETA, XR, XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_colocation_discovery(_)
#else
#define XRT_STRUCT_LIST_XR_META_colocation_discovery(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_colocation_discovery(_) \
    _(XrColocationDiscoveryStartInfoMETA) \
    _(XrColocationDiscoveryStopInfoMETA) \
    _(XrColocationAdvertisementStartInfoMETA) \
    _(XrColocationAdvertisementStopInfoMETA) \
    _(XrEventDataStartColocationAdvertisementCompleteMETA) \
    _(XrEventDataStopColocationAdvertisementCompleteMETA) \
    _(XrEventDataColocationAdvertisementCompleteMETA) \
    _(XrEventDataStartColocationDiscoveryCompleteMETA) \
    _(XrEventDataColocationDiscoveryResultMETA) \
    _(XrEventDataColocationDiscoveryCompleteMETA) \
    _(XrEventDataStopColocationDiscoveryCompleteMETA) \
    _(XrSystemColocationDiscoveryPropertiesMETA) \
    _(XrColocationDiscoveryStartInfoMETA) \
    _(XrColocationDiscoveryStopInfoMETA) \
    _(XrColocationAdvertisementStartInfoMETA) \
    _(XrColocationAdvertisementStopInfoMETA) \
    _(XrEventDataStartColocationAdvertisementCompleteMETA) \
    _(XrEventDataStopColocationAdvertisementCompleteMETA) \
    _(XrEventDataColocationAdvertisementCompleteMETA) \
    _(XrEventDataStartColocationDiscoveryCompleteMETA) \
    _(XrEventDataColocationDiscoveryResultMETA) \
    _(XrEventDataColocationDiscoveryCompleteMETA) \
    _(XrEventDataStopColocationDiscoveryCompleteMETA) \
    _(XrSystemColocationDiscoveryPropertiesMETA) 
#endif
#ifdef XRT_ENABLE_XR_META_spatial_entity_group_sharing
#define XRT_STRUCT_LIST_XR_META_spatial_entity_group_sharing(_) \
    _(XrSystemSpatialEntityGroupSharingPropertiesMETA, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META) \
    _(XrShareSpacesRecipientGroupsMETA, XR, XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META) \
    _(XrSpaceGroupUuidFilterInfoMETA, XR, XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META) \
    _(XrShareSpacesRecipientGroupsMETA, XR, XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META) \
    _(XrSpaceGroupUuidFilterInfoMETA, XR, XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META) \
    _(XrSystemSpatialEntityGroupSharingPropertiesMETA, XR, XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META) 
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_group_sharing(_)
#else
#define XRT_STRUCT_LIST_XR_META_spatial_entity_group_sharing(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_group_sharing(_) \
    _(XrSystemSpatialEntityGroupSharingPropertiesMETA) \
    _(XrShareSpacesRecipientGroupsMETA) \
    _(XrSpaceGroupUuidFilterInfoMETA) \
    _(XrShareSpacesRecipientGroupsMETA) \
    _(XrSpaceGroupUuidFilterInfoMETA) \
    _(XrSystemSpatialEntityGroupSharingPropertiesMETA) 
#endif

// List of base structs and all enabled extension structs
#define XRT_STRUCT_LIST_ALL(_) \
    _(XrActionCreateInfo, XR, XR_TYPE_ACTION_CREATE_INFO) \
    _(XrActionSetCreateInfo, XR, XR_TYPE_ACTION_SET_CREATE_INFO) \
    _(XrActionSpaceCreateInfo, XR, XR_TYPE_ACTION_SPACE_CREATE_INFO) \
    _(XrActionStateBoolean, XR, XR_TYPE_ACTION_STATE_BOOLEAN) \
    _(XrActionStateFloat, XR, XR_TYPE_ACTION_STATE_FLOAT) \
    _(XrActionStateGetInfo, XR, XR_TYPE_ACTION_STATE_GET_INFO) \
    _(XrActionStatePose, XR, XR_TYPE_ACTION_STATE_POSE) \
    _(XrActionStateVector2f, XR, XR_TYPE_ACTION_STATE_VECTOR2F) \
    _(XrActionSuggestedBinding, PLAIN) \
    _(XrActionsSyncInfo, XR, XR_TYPE_ACTIONS_SYNC_INFO) \
    _(XrActiveActionSet, PLAIN) \
    _(XrApiLayerProperties, XR, XR_TYPE_API_LAYER_PROPERTIES) \
    _(XrApplicationInfo, PLAIN) \
    _(XrBodySkeletonJointHTC, PLAIN) \
    _(XrBoundSourcesForActionEnumerateInfo, XR, XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO) \
    _(XrBoxf, PLAIN) \
    _(XrColor3f, PLAIN) \
    _(XrColor4f, PLAIN) \
    _(XrCompositionLayerBaseHeader, XR_HEADER) \
    _(XrCompositionLayerProjection, XR, XR_TYPE_COMPOSITION_LAYER_PROJECTION) \
    _(XrCompositionLayerProjectionView, XR, XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW) \
    _(XrCompositionLayerQuad, XR, XR_TYPE_COMPOSITION_LAYER_QUAD) \
    _(XrEventDataBaseHeader, XR_HEADER) \
    _(XrEventDataBuffer, XR, XR_TYPE_EVENT_DATA_BUFFER) \
    _(XrEventDataEventsLost, XR, XR_TYPE_EVENT_DATA_EVENTS_LOST) \
    _(XrEventDataInstanceLossPending, XR, XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING) \
    _(XrEventDataInteractionProfileChanged, XR, XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED) \
    _(XrEventDataReferenceSpaceChangePending, XR, XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING) \
    _(XrEventDataSessionStateChanged, XR, XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED) \
    _(XrExtensionProperties, XR, XR_TYPE_EXTENSION_PROPERTIES) \
    _(XrExtent2Df, PLAIN) \
    _(XrExtent2Di, PLAIN) \
    _(XrExtent3Df, PLAIN) \
    _(XrFovf, PLAIN) \
    _(XrFrameBeginInfo, XR, XR_TYPE_FRAME_BEGIN_INFO) \
    _(XrFrameEndInfo, XR_CUSTOM, XR_TYPE_FRAME_END_INFO) \
    _(XrFrameState, XR, XR_TYPE_FRAME_STATE) \
    _(XrFrameWaitInfo, XR, XR_TYPE_FRAME_WAIT_INFO) \
    _(XrFrustumf, PLAIN) \
    _(XrHapticActionInfo, XR, XR_TYPE_HAPTIC_ACTION_INFO) \
    _(XrHapticBaseHeader, XR_HEADER) \
    _(XrHapticVibration, XR, XR_TYPE_HAPTIC_VIBRATION) \
    _(XrInputSourceLocalizedNameGetInfo, XR, XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO) \
    _(XrInstanceCreateInfo, XR_CUSTOM, XR_TYPE_INSTANCE_CREATE_INFO) \
    _(XrInstanceProperties, XR, XR_TYPE_INSTANCE_PROPERTIES) \
    _(XrInteractionProfileState, XR, XR_TYPE_INTERACTION_PROFILE_STATE) \
    _(XrInteractionProfileSuggestedBinding, XR, XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING) \
    _(XrOffset2Df, PLAIN) \
    _(XrOffset2Di, PLAIN) \
    _(XrPosef, PLAIN) \
    _(XrQuaternionf, PLAIN) \
    _(XrRect2Df, PLAIN) \
    _(XrRect2Di, PLAIN) \
    _(XrReferenceSpaceCreateInfo, XR, XR_TYPE_REFERENCE_SPACE_CREATE_INFO) \
    _(XrSessionActionSetsAttachInfo, XR, XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO) \
    _(XrSessionBeginInfo, XR, XR_TYPE_SESSION_BEGIN_INFO) \
    _(XrSessionCreateInfo, XR, XR_TYPE_SESSION_CREATE_INFO) \
    _(XrSpaceLocation, XR, XR_TYPE_SPACE_LOCATION) \
    _(XrSpaceLocationData, PLAIN) \
    _(XrSpaceLocations, XR, XR_TYPE_SPACE_LOCATIONS) \
    _(XrSpaceVelocities, XR, XR_TYPE_SPACE_VELOCITIES) \
    _(XrSpaceVelocity, XR, XR_TYPE_SPACE_VELOCITY) \
    _(XrSpaceVelocityData, PLAIN) \
    _(XrSpacesLocateInfo, XR, XR_TYPE_SPACES_LOCATE_INFO) \
    _(XrSpheref, PLAIN) \
    _(XrSwapchainCreateInfo, XR, XR_TYPE_SWAPCHAIN_CREATE_INFO) \
    _(XrSwapchainImageAcquireInfo, XR, XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO) \
    _(XrSwapchainImageBaseHeader, XR_HEADER) \
    _(XrSwapchainImageReleaseInfo, XR, XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO) \
    _(XrSwapchainImageWaitInfo, XR, XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO) \
    _(XrSwapchainSubImage, PLAIN) \
    _(XrSystemGetInfo, XR, XR_TYPE_SYSTEM_GET_INFO) \
    _(XrSystemGraphicsProperties, PLAIN) \
    _(XrSystemProperties, XR, XR_TYPE_SYSTEM_PROPERTIES) \
    _(XrSystemTrackingProperties, PLAIN) \
    _(XrUuid, PLAIN) \
    _(XrVector2f, PLAIN) \
    _(XrVector3f, PLAIN) \
    _(XrVector4f, PLAIN) \
    _(XrView, XR, XR_TYPE_VIEW) \
    _(XrViewConfigurationProperties, XR, XR_TYPE_VIEW_CONFIGURATION_PROPERTIES) \
    _(XrViewConfigurationView, XR, XR_TYPE_VIEW_CONFIGURATION_VIEW) \
    _(XrViewLocateInfo, XR, XR_TYPE_VIEW_LOCATE_INFO) \
    _(XrViewState, XR, XR_TYPE_VIEW_STATE) \
    XRT_STRUCT_LIST_XR_KHR_android_thread_settings(_) \
    XRT_STRUCT_LIST_XR_KHR_android_surface_swapchain(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_cube(_) \
    XRT_STRUCT_LIST_XR_KHR_android_create_instance(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_depth(_) \
    XRT_STRUCT_LIST_XR_KHR_vulkan_swapchain_format_list(_) \
    XRT_STRUCT_LIST_XR_EXT_performance_settings(_) \
    XRT_STRUCT_LIST_XR_EXT_thermal_query(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_cylinder(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect(_) \
    XRT_STRUCT_LIST_XR_EXT_debug_utils(_) \
    XRT_STRUCT_LIST_XR_KHR_opengl_enable(_) \
    XRT_STRUCT_LIST_XR_KHR_opengl_es_enable(_) \
    XRT_STRUCT_LIST_XR_KHR_vulkan_enable(_) \
    XRT_STRUCT_LIST_XR_KHR_D3D11_enable(_) \
    XRT_STRUCT_LIST_XR_KHR_D3D12_enable(_) \
    XRT_STRUCT_LIST_XR_KHR_metal_enable(_) \
    XRT_STRUCT_LIST_XR_EXT_eye_gaze_interaction(_) \
    XRT_STRUCT_LIST_XR_KHR_visibility_mask(_) \
    XRT_STRUCT_LIST_XR_EXTX_overlay(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_color_scale_bias(_) \
    XRT_STRUCT_LIST_XR_KHR_win32_convert_performance_counter_time(_) \
    XRT_STRUCT_LIST_XR_KHR_convert_timespec_time(_) \
    XRT_STRUCT_LIST_XR_MSFT_spatial_anchor(_) \
    XRT_STRUCT_LIST_XR_FB_composition_layer_image_layout(_) \
    XRT_STRUCT_LIST_XR_FB_composition_layer_alpha_blend(_) \
    XRT_STRUCT_LIST_XR_EXT_view_configuration_depth_range(_) \
    XRT_STRUCT_LIST_XR_EXT_conformance_automation(_) \
    XRT_STRUCT_LIST_XR_MNDX_egl_enable(_) \
    XRT_STRUCT_LIST_XR_MSFT_spatial_graph_bridge(_) \
    XRT_STRUCT_LIST_XR_EXT_hand_tracking(_) \
    XRT_STRUCT_LIST_XR_MSFT_hand_tracking_mesh(_) \
    XRT_STRUCT_LIST_XR_MSFT_secondary_view_configuration(_) \
    XRT_STRUCT_LIST_XR_MSFT_controller_model(_) \
    XRT_STRUCT_LIST_XR_MSFT_perception_anchor_interop(_) \
    XRT_STRUCT_LIST_XR_EPIC_view_configuration_fov(_) \
    XRT_STRUCT_LIST_XR_MSFT_holographic_window_attachment(_) \
    XRT_STRUCT_LIST_XR_MSFT_composition_layer_reprojection(_) \
    XRT_STRUCT_LIST_XR_FB_android_surface_swapchain_create(_) \
    XRT_STRUCT_LIST_XR_FB_swapchain_update_state(_) \
    XRT_STRUCT_LIST_XR_FB_composition_layer_secure_content(_) \
    XRT_STRUCT_LIST_XR_FB_body_tracking(_) \
    XRT_STRUCT_LIST_XR_EXT_dpad_binding(_) \
    XRT_STRUCT_LIST_XR_VALVE_analog_threshold(_) \
    XRT_STRUCT_LIST_XR_EXT_hand_joints_motion_range(_) \
    XRT_STRUCT_LIST_XR_KHR_loader_init(_) \
    XRT_STRUCT_LIST_XR_KHR_loader_init_android(_) \
    XRT_STRUCT_LIST_XR_KHR_vulkan_enable2(_) \
    XRT_STRUCT_LIST_XR_KHR_composition_layer_equirect2(_) \
    XRT_STRUCT_LIST_XR_MSFT_scene_understanding(_) \
    XRT_STRUCT_LIST_XR_MSFT_scene_understanding_serialization(_) \
    XRT_STRUCT_LIST_XR_FB_display_refresh_rate(_) \
    XRT_STRUCT_LIST_XR_HTCX_vive_tracker_interaction(_) \
    XRT_STRUCT_LIST_XR_HTC_facial_tracking(_) \
    XRT_STRUCT_LIST_XR_FB_color_space(_) \
    XRT_STRUCT_LIST_XR_FB_hand_tracking_mesh(_) \
    XRT_STRUCT_LIST_XR_FB_hand_tracking_aim(_) \
    XRT_STRUCT_LIST_XR_FB_hand_tracking_capsules(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity(_) \
    XRT_STRUCT_LIST_XR_FB_foveation(_) \
    XRT_STRUCT_LIST_XR_FB_foveation_configuration(_) \
    XRT_STRUCT_LIST_XR_FB_keyboard_tracking(_) \
    XRT_STRUCT_LIST_XR_FB_triangle_mesh(_) \
    XRT_STRUCT_LIST_XR_FB_passthrough(_) \
    XRT_STRUCT_LIST_XR_FB_render_model(_) \
    XRT_STRUCT_LIST_XR_KHR_binding_modification(_) \
    XRT_STRUCT_LIST_XR_VARJO_foveated_rendering(_) \
    XRT_STRUCT_LIST_XR_VARJO_composition_layer_depth_test(_) \
    XRT_STRUCT_LIST_XR_VARJO_environment_depth_estimation(_) \
    XRT_STRUCT_LIST_XR_VARJO_marker_tracking(_) \
    XRT_STRUCT_LIST_XR_VARJO_view_offset(_) \
    XRT_STRUCT_LIST_XR_ML_frame_end_info(_) \
    XRT_STRUCT_LIST_XR_ML_global_dimmer(_) \
    XRT_STRUCT_LIST_XR_ML_compat(_) \
    XRT_STRUCT_LIST_XR_ML_marker_understanding(_) \
    XRT_STRUCT_LIST_XR_ML_localization_map(_) \
    XRT_STRUCT_LIST_XR_ML_spatial_anchors(_) \
    XRT_STRUCT_LIST_XR_ML_spatial_anchors_storage(_) \
    XRT_STRUCT_LIST_XR_ML_user_calibration(_) \
    XRT_STRUCT_LIST_XR_MSFT_spatial_anchor_persistence(_) \
    XRT_STRUCT_LIST_XR_MSFT_scene_marker(_) \
    XRT_STRUCT_LIST_XR_KHR_extended_struct_name_lengths(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_query(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_storage(_) \
    XRT_STRUCT_LIST_XR_OCULUS_audio_device_guid(_) \
    XRT_STRUCT_LIST_XR_FB_foveation_vulkan(_) \
    XRT_STRUCT_LIST_XR_FB_swapchain_update_state_android_surface(_) \
    XRT_STRUCT_LIST_XR_FB_swapchain_update_state_opengl_es(_) \
    XRT_STRUCT_LIST_XR_FB_swapchain_update_state_vulkan(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_sharing(_) \
    XRT_STRUCT_LIST_XR_FB_space_warp(_) \
    XRT_STRUCT_LIST_XR_FB_haptic_amplitude_envelope(_) \
    XRT_STRUCT_LIST_XR_FB_scene(_) \
    XRT_STRUCT_LIST_XR_ALMALENCE_digital_lens_control(_) \
    XRT_STRUCT_LIST_XR_FB_scene_capture(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_container(_) \
    XRT_STRUCT_LIST_XR_META_foveation_eye_tracked(_) \
    XRT_STRUCT_LIST_XR_FB_face_tracking(_) \
    XRT_STRUCT_LIST_XR_FB_eye_tracking_social(_) \
    XRT_STRUCT_LIST_XR_FB_passthrough_keyboard_hands(_) \
    XRT_STRUCT_LIST_XR_FB_composition_layer_settings(_) \
    XRT_STRUCT_LIST_XR_FB_haptic_pcm(_) \
    XRT_STRUCT_LIST_XR_EXT_frame_synthesis(_) \
    XRT_STRUCT_LIST_XR_FB_composition_layer_depth_test(_) \
    XRT_STRUCT_LIST_XR_META_local_dimming(_) \
    XRT_STRUCT_LIST_XR_META_passthrough_preferences(_) \
    XRT_STRUCT_LIST_XR_META_virtual_keyboard(_) \
    XRT_STRUCT_LIST_XR_OCULUS_external_camera(_) \
    XRT_STRUCT_LIST_XR_META_vulkan_swapchain_create_info(_) \
    XRT_STRUCT_LIST_XR_META_performance_metrics(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_storage_batch(_) \
    XRT_STRUCT_LIST_XR_FB_spatial_entity_user(_) \
    XRT_STRUCT_LIST_XR_META_headset_id(_) \
    XRT_STRUCT_LIST_XR_META_recommended_layer_resolution(_) \
    XRT_STRUCT_LIST_XR_META_passthrough_color_lut(_) \
    XRT_STRUCT_LIST_XR_META_spatial_entity_mesh(_) \
    XRT_STRUCT_LIST_XR_META_body_tracking_full_body(_) \
    XRT_STRUCT_LIST_XR_META_passthrough_layer_resumed_event(_) \
    XRT_STRUCT_LIST_XR_FB_face_tracking2(_) \
    XRT_STRUCT_LIST_XR_META_spatial_entity_sharing(_) \
    XRT_STRUCT_LIST_XR_META_environment_depth(_) \
    XRT_STRUCT_LIST_XR_QCOM_tracking_optimization_settings(_) \
    XRT_STRUCT_LIST_XR_HTC_passthrough(_) \
    XRT_STRUCT_LIST_XR_HTC_foveation(_) \
    XRT_STRUCT_LIST_XR_HTC_anchor(_) \
    XRT_STRUCT_LIST_XR_HTC_body_tracking(_) \
    XRT_STRUCT_LIST_XR_EXT_active_action_set_priority(_) \
    XRT_STRUCT_LIST_XR_MNDX_force_feedback_curl(_) \
    XRT_STRUCT_LIST_XR_BD_body_tracking(_) \
    XRT_STRUCT_LIST_XR_BD_spatial_sensing(_) \
    XRT_STRUCT_LIST_XR_BD_spatial_anchor(_) \
    XRT_STRUCT_LIST_XR_BD_spatial_anchor_sharing(_) \
    XRT_STRUCT_LIST_XR_BD_spatial_scene(_) \
    XRT_STRUCT_LIST_XR_BD_spatial_mesh(_) \
    XRT_STRUCT_LIST_XR_BD_future_progress(_) \
    XRT_STRUCT_LIST_XR_EXT_hand_tracking_data_source(_) \
    XRT_STRUCT_LIST_XR_EXT_plane_detection(_) \
    XRT_STRUCT_LIST_XR_EXT_future(_) \
    XRT_STRUCT_LIST_XR_EXT_user_presence(_) \
    XRT_STRUCT_LIST_XR_ML_system_notifications(_) \
    XRT_STRUCT_LIST_XR_ML_world_mesh_detection(_) \
    XRT_STRUCT_LIST_XR_ML_facial_expression(_) \
    XRT_STRUCT_LIST_XR_META_simultaneous_hands_and_controllers(_) \
    XRT_STRUCT_LIST_XR_META_colocation_discovery(_) \
    XRT_STRUCT_LIST_XR_META_spatial_entity_group_sharing(_) \

// List of all non-enabled extension structs
#define XRT_STRUCT_LIST_UNAVAILABLE(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_thread_settings(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_surface_swapchain(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cube(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_android_create_instance(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_depth(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_swapchain_format_list(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_performance_settings(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_thermal_query(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_cylinder(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_debug_utils(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_opengl_es_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D11_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_D3D12_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_metal_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_eye_gaze_interaction(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_visibility_mask(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXTX_overlay(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_color_scale_bias(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_win32_convert_performance_counter_time(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_convert_timespec_time(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_image_layout(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_alpha_blend(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_view_configuration_depth_range(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_conformance_automation(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_egl_enable(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_graph_bridge(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_hand_tracking_mesh(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_secondary_view_configuration(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_controller_model(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_perception_anchor_interop(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EPIC_view_configuration_fov(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_holographic_window_attachment(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_composition_layer_reprojection(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_android_surface_swapchain_create(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_secure_content(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_body_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_dpad_binding(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VALVE_analog_threshold(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_joints_motion_range(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_loader_init_android(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_vulkan_enable2(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_composition_layer_equirect2(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_understanding_serialization(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_display_refresh_rate(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTCX_vive_tracker_interaction(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_facial_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_color_space(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_mesh(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_aim(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_hand_tracking_capsules(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_configuration(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_keyboard_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_triangle_mesh(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_render_model(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_binding_modification(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_foveated_rendering(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_composition_layer_depth_test(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_environment_depth_estimation(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_marker_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_VARJO_view_offset(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_frame_end_info(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_global_dimmer(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_compat(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_marker_understanding(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_localization_map(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_spatial_anchors_storage(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_user_calibration(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_spatial_anchor_persistence(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MSFT_scene_marker(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_KHR_extended_struct_name_lengths(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_query(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_OCULUS_audio_device_guid(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_foveation_vulkan(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_android_surface(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_opengl_es(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_swapchain_update_state_vulkan(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_sharing(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_space_warp(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_amplitude_envelope(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ALMALENCE_digital_lens_control(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_scene_capture(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_container(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_foveation_eye_tracked(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_eye_tracking_social(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_passthrough_keyboard_hands(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_settings(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_haptic_pcm(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_frame_synthesis(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_composition_layer_depth_test(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_local_dimming(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_preferences(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_virtual_keyboard(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_OCULUS_external_camera(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_vulkan_swapchain_create_info(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_performance_metrics(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_storage_batch(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_spatial_entity_user(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_headset_id(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_recommended_layer_resolution(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_color_lut(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_mesh(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_body_tracking_full_body(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_passthrough_layer_resumed_event(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_FB_face_tracking2(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_sharing(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_environment_depth(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_QCOM_tracking_optimization_settings(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_passthrough(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_foveation(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_anchor(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_HTC_body_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_active_action_set_priority(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_MNDX_force_feedback_curl(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_body_tracking(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_sensing(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_anchor_sharing(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_scene(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_spatial_mesh(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_BD_future_progress(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_hand_tracking_data_source(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_plane_detection(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_future(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_EXT_user_presence(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_system_notifications(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_world_mesh_detection(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_ML_facial_expression(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_simultaneous_hands_and_controllers(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_colocation_discovery(_) \
    XRT_STRUCT_LIST_UNAVAILABLE_XR_META_spatial_entity_group_sharing(_) \

#define XRT_ENUMERATE_XrCompositionLayerCubeKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(swapchain, XrSwapchain, PLAIN) \
    _(imageArrayIndex, uint32_t, PLAIN) \
    _(orientation, XrQuaternionf, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerCubeKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(swapchain, XrSwapchain, PLAIN) \
    _(imageArrayIndex, uint32_t, PLAIN) \
    _(orientation, XrQuaternionf, PLAIN) 
#define XRT_ENUMERATE_XrInstanceCreateInfoAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(applicationVM, void*, POINTER, false, 1) \
    _(applicationActivity, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrInstanceCreateInfoAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(applicationVM, void*, POINTER, false, 1) \
    _(applicationActivity, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrCompositionLayerDepthInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerDepthInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrVulkanSwapchainFormatListCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewFormatCount, uint32_t, PLAIN) \
    _(viewFormats, const VkFormat*, POINTER, true, s->viewFormatCount) 
#define XRT_ENUMERATE_XrVulkanSwapchainFormatListCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewFormatCount, uint32_t, PLAIN) \
    _(viewFormats, const VkFormat*, POINTER, true, s->viewFormatCount) 
#define XRT_ENUMERATE_XrEventDataPerfSettingsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(domain, XrPerfSettingsDomainEXT, PLAIN) \
    _(subDomain, XrPerfSettingsSubDomainEXT, PLAIN) \
    _(fromLevel, XrPerfSettingsNotificationLevelEXT, PLAIN) \
    _(toLevel, XrPerfSettingsNotificationLevelEXT, PLAIN) 
#define XRT_ENUMERATE_XrEventDataPerfSettingsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(domain, XrPerfSettingsDomainEXT, PLAIN) \
    _(subDomain, XrPerfSettingsSubDomainEXT, PLAIN) \
    _(fromLevel, XrPerfSettingsNotificationLevelEXT, PLAIN) \
    _(toLevel, XrPerfSettingsNotificationLevelEXT, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerCylinderKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(centralAngle, float, PLAIN) \
    _(aspectRatio, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerCylinderKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(centralAngle, float, PLAIN) \
    _(aspectRatio, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerEquirectKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(scale, XrVector2f, PLAIN) \
    _(bias, XrVector2f, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerEquirectKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(scale, XrVector2f, PLAIN) \
    _(bias, XrVector2f, PLAIN) 
#define XRT_ENUMERATE_XrDebugUtilsObjectNameInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(objectType, XrObjectType, PLAIN) \
    _(objectHandle, uint64_t, PLAIN) \
    _(objectName, const char*, POINTER, true, count_null_terminated(s->objectName)) 
#define XRT_ENUMERATE_XrDebugUtilsLabelEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(labelName, const char*, POINTER, true, count_null_terminated(s->labelName)) 
#define XRT_ENUMERATE_XrDebugUtilsMessengerCallbackDataEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(messageId, const char*, POINTER, true, count_null_terminated(s->messageId)) \
    _(functionName, const char*, POINTER, true, count_null_terminated(s->functionName)) \
    _(message, const char*, POINTER, true, count_null_terminated(s->message)) \
    _(objectCount, uint32_t, PLAIN) \
    _(objects, XrDebugUtilsObjectNameInfoEXT*, POINTER, false, s->objectCount) \
    _(sessionLabelCount, uint32_t, PLAIN) \
    _(sessionLabels, XrDebugUtilsLabelEXT*, POINTER, false, s->sessionLabelCount) 
#define XRT_ENUMERATE_XrDebugUtilsMessengerCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(messageSeverities, XrDebugUtilsMessageSeverityFlagsEXT, PLAIN) \
    _(messageTypes, XrDebugUtilsMessageTypeFlagsEXT, PLAIN) \
    _(userCallback, PFN_xrDebugUtilsMessengerCallbackEXT, PLAIN) \
    _(userData, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrDebugUtilsObjectNameInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(objectType, XrObjectType, PLAIN) \
    _(objectHandle, uint64_t, PLAIN) \
    _(objectName, const char*, POINTER, true, count_null_terminated(s->objectName)) 
#define XRT_ENUMERATE_XrDebugUtilsMessengerCallbackDataEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(messageId, const char*, POINTER, true, count_null_terminated(s->messageId)) \
    _(functionName, const char*, POINTER, true, count_null_terminated(s->functionName)) \
    _(message, const char*, POINTER, true, count_null_terminated(s->message)) \
    _(objectCount, uint32_t, PLAIN) \
    _(objects, XrDebugUtilsObjectNameInfoEXT*, POINTER, false, s->objectCount) \
    _(sessionLabelCount, uint32_t, PLAIN) \
    _(sessionLabels, XrDebugUtilsLabelEXT*, POINTER, false, s->sessionLabelCount) 
#define XRT_ENUMERATE_XrDebugUtilsMessengerCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(messageSeverities, XrDebugUtilsMessageSeverityFlagsEXT, PLAIN) \
    _(messageTypes, XrDebugUtilsMessageTypeFlagsEXT, PLAIN) \
    _(userCallback, PFN_xrDebugUtilsMessengerCallbackEXT, PLAIN) \
    _(userData, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrDebugUtilsLabelEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(labelName, const char*, POINTER, true, count_null_terminated(s->labelName)) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLWin32KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(hDC, HDC, PLAIN) \
    _(hGLRC, HGLRC, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLXlibKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(xDisplay, Display*, POINTER, false, 1) \
    _(visualid, uint32_t, PLAIN) \
    _(glxFBConfig, GLXFBConfig, PLAIN) \
    _(glxDrawable, GLXDrawable, PLAIN) \
    _(glxContext, GLXContext, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLXcbKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(connection, xcb_connection_t*, POINTER, false, 1) \
    _(screenNumber, uint32_t, PLAIN) \
    _(fbconfigid, xcb_glx_fbconfig_t, PLAIN) \
    _(visualid, xcb_visualid_t, PLAIN) \
    _(glxDrawable, xcb_glx_drawable_t, PLAIN) \
    _(glxContext, xcb_glx_context_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLWaylandKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(display, struct wl_display*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageOpenGLKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsOpenGLKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLWin32KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(hDC, HDC, PLAIN) \
    _(hGLRC, HGLRC, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLXlibKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(xDisplay, Display*, POINTER, false, 1) \
    _(visualid, uint32_t, PLAIN) \
    _(glxFBConfig, GLXFBConfig, PLAIN) \
    _(glxDrawable, GLXDrawable, PLAIN) \
    _(glxContext, GLXContext, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLXcbKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(connection, xcb_connection_t*, POINTER, false, 1) \
    _(screenNumber, uint32_t, PLAIN) \
    _(fbconfigid, xcb_glx_fbconfig_t, PLAIN) \
    _(visualid, xcb_visualid_t, PLAIN) \
    _(glxDrawable, xcb_glx_drawable_t, PLAIN) \
    _(glxContext, xcb_glx_context_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLWaylandKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(display, struct wl_display*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageOpenGLKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsOpenGLKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLESAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(display, EGLDisplay, PLAIN) \
    _(config, EGLConfig, PLAIN) \
    _(context, EGLContext, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageOpenGLESKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsOpenGLESKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingOpenGLESAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(display, EGLDisplay, PLAIN) \
    _(config, EGLConfig, PLAIN) \
    _(context, EGLContext, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageOpenGLESKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsOpenGLESKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(instance, VkInstance, PLAIN) \
    _(physicalDevice, VkPhysicalDevice, PLAIN) \
    _(device, VkDevice, PLAIN) \
    _(queueFamilyIndex, uint32_t, PLAIN) \
    _(queueIndex, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, VkImage, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(instance, VkInstance, PLAIN) \
    _(physicalDevice, VkPhysicalDevice, PLAIN) \
    _(device, VkDevice, PLAIN) \
    _(queueFamilyIndex, uint32_t, PLAIN) \
    _(queueIndex, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, VkImage, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsRequirementsVulkanKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minApiVersionSupported, XrVersion, PLAIN) \
    _(maxApiVersionSupported, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(device, ID3D11Device*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(texture, ID3D11Texture2D*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(adapterLuid, LUID, PLAIN) \
    _(minFeatureLevel, D3D_FEATURE_LEVEL, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(device, ID3D11Device*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(texture, ID3D11Texture2D*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsD3D11KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(adapterLuid, LUID, PLAIN) \
    _(minFeatureLevel, D3D_FEATURE_LEVEL, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(device, ID3D12Device*, POINTER, false, 1) \
    _(queue, ID3D12CommandQueue*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(texture, ID3D12Resource*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(adapterLuid, LUID, PLAIN) \
    _(minFeatureLevel, D3D_FEATURE_LEVEL, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(device, ID3D12Device*, POINTER, false, 1) \
    _(queue, ID3D12CommandQueue*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(texture, ID3D12Resource*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsD3D12KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(adapterLuid, LUID, PLAIN) \
    _(minFeatureLevel, D3D_FEATURE_LEVEL, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(commandQueue, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(texture, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(metalDevice, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsBindingMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(commandQueue, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSwapchainImageMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(texture, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrGraphicsRequirementsMetalKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(metalDevice, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSystemEyeGazeInteractionPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEyeGazeInteraction, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEyeGazeSampleTimeEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemEyeGazeInteractionPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEyeGazeInteraction, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEyeGazeSampleTimeEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrVisibilityMaskKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrEventDataVisibilityMaskChangedKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(viewIndex, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrVisibilityMaskKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrEventDataVisibilityMaskChangedKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(viewIndex, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSessionCreateInfoOverlayEXTX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrOverlaySessionCreateFlagsEXTX, PLAIN) \
    _(sessionLayersPlacement, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrEventDataMainSessionVisibilityChangedEXTX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(visible, XrBool32, PLAIN) \
    _(flags, XrOverlayMainSessionFlagsEXTX, PLAIN) 
#define XRT_ENUMERATE_XrSessionCreateInfoOverlayEXTX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrOverlaySessionCreateFlagsEXTX, PLAIN) \
    _(sessionLayersPlacement, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrEventDataMainSessionVisibilityChangedEXTX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(visible, XrBool32, PLAIN) \
    _(flags, XrOverlayMainSessionFlagsEXTX, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerColorScaleBiasKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(colorScale, XrColor4f, PLAIN) \
    _(colorBias, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerColorScaleBiasKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(colorScale, XrColor4f, PLAIN) \
    _(colorBias, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorSpaceCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchor, XrSpatialAnchorMSFT, PLAIN) \
    _(poseInAnchorSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerImageLayoutFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrCompositionLayerImageLayoutFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerImageLayoutFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrCompositionLayerImageLayoutFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerAlphaBlendFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(srcFactorColor, XrBlendFactorFB, PLAIN) \
    _(dstFactorColor, XrBlendFactorFB, PLAIN) \
    _(srcFactorAlpha, XrBlendFactorFB, PLAIN) \
    _(dstFactorAlpha, XrBlendFactorFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerAlphaBlendFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(srcFactorColor, XrBlendFactorFB, PLAIN) \
    _(dstFactorColor, XrBlendFactorFB, PLAIN) \
    _(srcFactorAlpha, XrBlendFactorFB, PLAIN) \
    _(dstFactorAlpha, XrBlendFactorFB, PLAIN) 
#define XRT_ENUMERATE_XrViewConfigurationDepthRangeEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedNearZ, float, PLAIN) \
    _(minNearZ, float, PLAIN) \
    _(recommendedFarZ, float, PLAIN) \
    _(maxFarZ, float, PLAIN) 
#define XRT_ENUMERATE_XrViewConfigurationDepthRangeEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedNearZ, float, PLAIN) \
    _(minNearZ, float, PLAIN) \
    _(recommendedFarZ, float, PLAIN) \
    _(maxFarZ, float, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingEGLMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(getProcAddress, PFN_xrEglGetProcAddressMNDX, PLAIN) \
    _(display, EGLDisplay, PLAIN) \
    _(config, EGLConfig, PLAIN) \
    _(context, EGLContext, PLAIN) 
#define XRT_ENUMERATE_XrGraphicsBindingEGLMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(getProcAddress, PFN_xrEglGetProcAddressMNDX, PLAIN) \
    _(display, EGLDisplay, PLAIN) \
    _(config, EGLConfig, PLAIN) \
    _(context, EGLContext, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphNodeSpaceCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(nodeType, XrSpatialGraphNodeTypeMSFT, PLAIN) \
    _(nodeId, uint8_t[XR_GUID_SIZE_MSFT], ARRAY, XR_GUID_SIZE_MSFT) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphStaticNodeBindingCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphNodeBindingPropertiesGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialGraphNodeBindingPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeId, uint8_t[XR_GUID_SIZE_MSFT], ARRAY, XR_GUID_SIZE_MSFT) \
    _(poseInNodeSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphNodeSpaceCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(nodeType, XrSpatialGraphNodeTypeMSFT, PLAIN) \
    _(nodeId, uint8_t[XR_GUID_SIZE_MSFT], ARRAY, XR_GUID_SIZE_MSFT) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphStaticNodeBindingCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpatialGraphNodeBindingPropertiesGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialGraphNodeBindingPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeId, uint8_t[XR_GUID_SIZE_MSFT], ARRAY, XR_GUID_SIZE_MSFT) \
    _(poseInNodeSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemHandTrackingPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsHandTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackerCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(hand, XrHandEXT, PLAIN) \
    _(handJointSet, XrHandJointSetEXT, PLAIN) 
#define XRT_ENUMERATE_XrHandJointsLocateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrHandJointLocationEXT(_) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) 
#define XRT_ENUMERATE_XrHandJointVelocityEXT(_) \
    _(velocityFlags, XrSpaceVelocityFlags, PLAIN) \
    _(linearVelocity, XrVector3f, PLAIN) \
    _(angularVelocity, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrHandJointLocationsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointLocations, XrHandJointLocationEXT*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrHandJointVelocitiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointVelocities, XrHandJointVelocityEXT*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrSystemHandTrackingPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsHandTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackerCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(hand, XrHandEXT, PLAIN) \
    _(handJointSet, XrHandJointSetEXT, PLAIN) 
#define XRT_ENUMERATE_XrHandJointsLocateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrHandJointLocationsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointLocations, XrHandJointLocationEXT*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrHandJointVelocitiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointVelocities, XrHandJointVelocityEXT*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrSystemHandTrackingMeshPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsHandTrackingMesh, XrBool32, PLAIN) \
    _(maxHandMeshIndexCount, uint32_t, PLAIN) \
    _(maxHandMeshVertexCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshSpaceCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) \
    _(poseInHandMeshSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshUpdateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(indexBufferChanged, XrBool32, PLAIN) \
    _(vertexBufferChanged, XrBool32, PLAIN) \
    _(indexBuffer, XrHandMeshIndexBufferMSFT, PLAIN) \
    _(vertexBuffer, XrHandMeshVertexBufferMSFT, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshIndexBufferMSFT(_) \
    _(indexBufferKey, uint32_t, PLAIN) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrHandMeshVertexBufferMSFT(_) \
    _(vertexUpdateTime, XrTime, PLAIN) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrHandMeshVertexMSFT*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrHandMeshVertexMSFT(_) \
    _(position, XrVector3f, PLAIN) \
    _(normal, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrHandPoseTypeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSystemHandTrackingMeshPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsHandTrackingMesh, XrBool32, PLAIN) \
    _(maxHandMeshIndexCount, uint32_t, PLAIN) \
    _(maxHandMeshVertexCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshSpaceCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) \
    _(poseInHandMeshSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshUpdateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrHandMeshMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(indexBufferChanged, XrBool32, PLAIN) \
    _(vertexBufferChanged, XrBool32, PLAIN) \
    _(indexBuffer, XrHandMeshIndexBufferMSFT, PLAIN) \
    _(vertexBuffer, XrHandMeshVertexBufferMSFT, PLAIN) 
#define XRT_ENUMERATE_XrHandPoseTypeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handPoseType, XrHandPoseTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationSessionBeginInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(enabledViewConfigurationTypes, const XrViewConfigurationType*, POINTER, true, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(active, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationFrameStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(viewConfigurationStates, XrSecondaryViewConfigurationStateMSFT*, POINTER, false, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationFrameEndInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(viewConfigurationLayersInfo, const XrSecondaryViewConfigurationLayerInfoMSFT*, POINTER, true, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationLayerInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(environmentBlendMode, XrEnvironmentBlendMode, PLAIN) \
    _(layerCount, uint32_t, PLAIN) \
    _(layers, const XrCompositionLayerBaseHeader* const*, XR) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationSwapchainCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationSessionBeginInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(enabledViewConfigurationTypes, const XrViewConfigurationType*, POINTER, true, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(active, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationFrameStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(viewConfigurationStates, XrSecondaryViewConfigurationStateMSFT*, POINTER, false, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationFrameEndInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationCount, uint32_t, PLAIN) \
    _(viewConfigurationLayersInfo, const XrSecondaryViewConfigurationLayerInfoMSFT*, POINTER, true, s->viewConfigurationCount) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationLayerInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(environmentBlendMode, XrEnvironmentBlendMode, PLAIN) \
    _(layerCount, uint32_t, PLAIN) \
    _(layers, const XrCompositionLayerBaseHeader* const*, XR) 
#define XRT_ENUMERATE_XrSecondaryViewConfigurationSwapchainCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) 
#define XRT_ENUMERATE_XrControllerModelKeyStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(modelKey, XrControllerModelKeyMSFT, PLAIN) 
#define XRT_ENUMERATE_XrControllerModelNodePropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(parentNodeName, char[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT], ARRAY, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT) \
    _(nodeName, char[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT], ARRAY, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT) 
#define XRT_ENUMERATE_XrControllerModelPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeCapacityInput, uint32_t, PLAIN) \
    _(nodeCountOutput, uint32_t, PLAIN) \
    _(nodeProperties, XrControllerModelNodePropertiesMSFT*, POINTER, false, s->nodeCapacityInput) 
#define XRT_ENUMERATE_XrControllerModelNodeStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodePose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrControllerModelStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeCapacityInput, uint32_t, PLAIN) \
    _(nodeCountOutput, uint32_t, PLAIN) \
    _(nodeStates, XrControllerModelNodeStateMSFT*, POINTER, false, s->nodeCapacityInput) 
#define XRT_ENUMERATE_XrControllerModelKeyStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(modelKey, XrControllerModelKeyMSFT, PLAIN) 
#define XRT_ENUMERATE_XrControllerModelNodePropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(parentNodeName, char[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT], ARRAY, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT) \
    _(nodeName, char[XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT], ARRAY, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT) 
#define XRT_ENUMERATE_XrControllerModelPropertiesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeCapacityInput, uint32_t, PLAIN) \
    _(nodeCountOutput, uint32_t, PLAIN) \
    _(nodeProperties, XrControllerModelNodePropertiesMSFT*, POINTER, false, s->nodeCapacityInput) 
#define XRT_ENUMERATE_XrControllerModelNodeStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodePose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrControllerModelStateMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(nodeCapacityInput, uint32_t, PLAIN) \
    _(nodeCountOutput, uint32_t, PLAIN) \
    _(nodeStates, XrControllerModelNodeStateMSFT*, POINTER, false, s->nodeCapacityInput) 
#define XRT_ENUMERATE_XrViewConfigurationViewFovEPIC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(recommendedFov, XrFovf, PLAIN) \
    _(maxMutableFov, XrFovf, PLAIN) 
#define XRT_ENUMERATE_XrViewConfigurationViewFovEPIC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(recommendedFov, XrFovf, PLAIN) \
    _(maxMutableFov, XrFovf, PLAIN) 
#define XRT_ENUMERATE_XrHolographicWindowAttachmentMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(holographicSpace, IUnknown*, POINTER, false, 1) \
    _(coreWindow, IUnknown*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrHolographicWindowAttachmentMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(holographicSpace, IUnknown*, POINTER, false, 1) \
    _(coreWindow, IUnknown*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrCompositionLayerReprojectionInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(reprojectionMode, XrReprojectionModeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerReprojectionPlaneOverrideMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(position, XrVector3f, PLAIN) \
    _(normal, XrVector3f, PLAIN) \
    _(velocity, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerReprojectionInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(reprojectionMode, XrReprojectionModeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerReprojectionPlaneOverrideMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(position, XrVector3f, PLAIN) \
    _(normal, XrVector3f, PLAIN) \
    _(velocity, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrAndroidSurfaceSwapchainCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrAndroidSurfaceSwapchainFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrAndroidSurfaceSwapchainCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrAndroidSurfaceSwapchainFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateBaseHeaderFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrCompositionLayerSecureContentFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrCompositionLayerSecureContentFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerSecureContentFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrCompositionLayerSecureContentFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationFB(_) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bodyJointSet, XrBodyJointSetFB, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonJointFB(_) \
    _(joint, int32_t, PLAIN) \
    _(parentJoint, int32_t, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(joints, XrBodySkeletonJointFB*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(confidence, float, PLAIN) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationFB*, POINTER, false, s->jointCount) \
    _(skeletonChangedCount, uint32_t, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bodyJointSet, XrBodyJointSetFB, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(confidence, float, PLAIN) \
    _(jointCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationFB*, POINTER, false, s->jointCount) \
    _(skeletonChangedCount, uint32_t, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(joints, XrBodySkeletonJointFB*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrInteractionProfileDpadBindingEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(binding, XrPath, PLAIN) \
    _(actionSet, XrActionSet, PLAIN) \
    _(forceThreshold, float, PLAIN) \
    _(forceThresholdReleased, float, PLAIN) \
    _(centerRegion, float, PLAIN) \
    _(wedgeAngle, float, PLAIN) \
    _(isSticky, XrBool32, PLAIN) \
    _(onHaptic, const XrHapticBaseHeader*, XR) \
    _(offHaptic, const XrHapticBaseHeader*, XR) 
#define XRT_ENUMERATE_XrInteractionProfileDpadBindingEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(binding, XrPath, PLAIN) \
    _(actionSet, XrActionSet, PLAIN) \
    _(forceThreshold, float, PLAIN) \
    _(forceThresholdReleased, float, PLAIN) \
    _(centerRegion, float, PLAIN) \
    _(wedgeAngle, float, PLAIN) \
    _(isSticky, XrBool32, PLAIN) \
    _(onHaptic, const XrHapticBaseHeader*, XR) \
    _(offHaptic, const XrHapticBaseHeader*, XR) 
#define XRT_ENUMERATE_XrInteractionProfileAnalogThresholdVALVE(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) \
    _(binding, XrPath, PLAIN) \
    _(onThreshold, float, PLAIN) \
    _(offThreshold, float, PLAIN) \
    _(onHaptic, const XrHapticBaseHeader*, XR) \
    _(offHaptic, const XrHapticBaseHeader*, XR) 
#define XRT_ENUMERATE_XrInteractionProfileAnalogThresholdVALVE(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) \
    _(binding, XrPath, PLAIN) \
    _(onThreshold, float, PLAIN) \
    _(offThreshold, float, PLAIN) \
    _(onHaptic, const XrHapticBaseHeader*, XR) \
    _(offHaptic, const XrHapticBaseHeader*, XR) 
#define XRT_ENUMERATE_XrHandJointsMotionRangeInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handJointsMotionRange, XrHandJointsMotionRangeEXT, PLAIN) 
#define XRT_ENUMERATE_XrHandJointsMotionRangeInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(handJointsMotionRange, XrHandJointsMotionRangeEXT, PLAIN) 
#define XRT_ENUMERATE_XrLoaderInitInfoBaseHeaderKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrLoaderInitInfoAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(applicationVM, void*, POINTER, false, 1) \
    _(applicationContext, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrLoaderInitInfoAndroidKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(applicationVM, void*, POINTER, false, 1) \
    _(applicationContext, void*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrVulkanInstanceCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(createFlags, XrVulkanInstanceCreateFlagsKHR, PLAIN) \
    _(pfnGetInstanceProcAddr, PFN_vkGetInstanceProcAddr, PLAIN) \
    _(vulkanCreateInfo, const VkInstanceCreateInfo*, POINTER, true, 1) \
    _(vulkanAllocator, const VkAllocationCallbacks*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrVulkanDeviceCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(createFlags, XrVulkanDeviceCreateFlagsKHR, PLAIN) \
    _(pfnGetInstanceProcAddr, PFN_vkGetInstanceProcAddr, PLAIN) \
    _(vulkanPhysicalDevice, VkPhysicalDevice, PLAIN) \
    _(vulkanCreateInfo, const VkDeviceCreateInfo*, POINTER, true, 1) \
    _(vulkanAllocator, const VkAllocationCallbacks*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrVulkanGraphicsDeviceGetInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(vulkanInstance, VkInstance, PLAIN) 
#define XRT_ENUMERATE_XrVulkanInstanceCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(createFlags, XrVulkanInstanceCreateFlagsKHR, PLAIN) \
    _(pfnGetInstanceProcAddr, PFN_vkGetInstanceProcAddr, PLAIN) \
    _(vulkanCreateInfo, const VkInstanceCreateInfo*, POINTER, true, 1) \
    _(vulkanAllocator, const VkAllocationCallbacks*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrVulkanDeviceCreateInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(createFlags, XrVulkanDeviceCreateFlagsKHR, PLAIN) \
    _(pfnGetInstanceProcAddr, PFN_vkGetInstanceProcAddr, PLAIN) \
    _(vulkanPhysicalDevice, VkPhysicalDevice, PLAIN) \
    _(vulkanCreateInfo, const VkDeviceCreateInfo*, POINTER, true, 1) \
    _(vulkanAllocator, const VkAllocationCallbacks*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrVulkanGraphicsDeviceGetInfoKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(vulkanInstance, VkInstance, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerEquirect2KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(centralHorizontalAngle, float, PLAIN) \
    _(upperVerticalAngle, float, PLAIN) \
    _(lowerVerticalAngle, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerEquirect2KHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(radius, float, PLAIN) \
    _(centralHorizontalAngle, float, PLAIN) \
    _(upperVerticalAngle, float, PLAIN) \
    _(lowerVerticalAngle, float, PLAIN) 
#define XRT_ENUMERATE_XrUuidMSFT(_) \
    _(bytes, uint8_t[16], ARRAY, 16) 
#define XRT_ENUMERATE_XrSceneObserverCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSceneCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrNewSceneComputeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedFeatureCount, uint32_t, PLAIN) \
    _(requestedFeatures, const XrSceneComputeFeatureMSFT*, POINTER, true, s->requestedFeatureCount) \
    _(consistency, XrSceneComputeConsistencyMSFT, PLAIN) \
    _(bounds, XrSceneBoundsMSFT, PLAIN) 
#define XRT_ENUMERATE_XrVisualMeshComputeLodInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(lod, XrMeshComputeLodMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneSphereBoundMSFT(_) \
    _(center, XrVector3f, PLAIN) \
    _(radius, float, PLAIN) 
#define XRT_ENUMERATE_XrSceneOrientedBoxBoundMSFT(_) \
    _(pose, XrPosef, PLAIN) \
    _(extents, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrSceneFrustumBoundMSFT(_) \
    _(pose, XrPosef, PLAIN) \
    _(fov, XrFovf, PLAIN) \
    _(farDistance, float, PLAIN) 
#define XRT_ENUMERATE_XrSceneBoundsMSFT(_) \
    _(space, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(sphereCount, uint32_t, PLAIN) \
    _(spheres, const XrSceneSphereBoundMSFT*, POINTER, true, s->sphereCount) \
    _(boxCount, uint32_t, PLAIN) \
    _(boxes, const XrSceneOrientedBoxBoundMSFT*, POINTER, true, s->boxCount) \
    _(frustumCount, uint32_t, PLAIN) \
    _(frustums, const XrSceneFrustumBoundMSFT*, POINTER, true, s->frustumCount) 
#define XRT_ENUMERATE_XrSceneComponentMSFT(_) \
    _(componentType, XrSceneComponentTypeMSFT, PLAIN) \
    _(id, XrUuidMSFT, PLAIN) \
    _(parentId, XrUuidMSFT, PLAIN) \
    _(updateTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSceneComponentsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(componentCapacityInput, uint32_t, PLAIN) \
    _(componentCountOutput, uint32_t, PLAIN) \
    _(components, XrSceneComponentMSFT*, POINTER, false, s->componentCapacityInput) 
#define XRT_ENUMERATE_XrSceneComponentsGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSceneComponentTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneComponentLocationMSFT(_) \
    _(flags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSceneComponentLocationsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(locationCount, uint32_t, PLAIN) \
    _(locations, XrSceneComponentLocationMSFT*, POINTER, false, s->locationCount) 
#define XRT_ENUMERATE_XrSceneComponentsLocateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(componentIdCount, uint32_t, PLAIN) \
    _(componentIds, const XrUuidMSFT*, POINTER, true, s->componentIdCount) 
#define XRT_ENUMERATE_XrSceneObjectMSFT(_) \
    _(objectType, XrSceneObjectTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneObjectsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sceneObjectCount, uint32_t, PLAIN) \
    _(sceneObjects, XrSceneObjectMSFT*, POINTER, false, s->sceneObjectCount) 
#define XRT_ENUMERATE_XrSceneComponentParentFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(parentId, XrUuidMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneObjectTypesFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(objectTypeCount, uint32_t, PLAIN) \
    _(objectTypes, const XrSceneObjectTypeMSFT*, POINTER, true, s->objectTypeCount) 
#define XRT_ENUMERATE_XrScenePlaneMSFT(_) \
    _(alignment, XrScenePlaneAlignmentTypeMSFT, PLAIN) \
    _(size, XrExtent2Df, PLAIN) \
    _(meshBufferId, uint64_t, PLAIN) \
    _(supportsIndicesUint16, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrScenePlanesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(scenePlaneCount, uint32_t, PLAIN) \
    _(scenePlanes, XrScenePlaneMSFT*, POINTER, false, s->scenePlaneCount) 
#define XRT_ENUMERATE_XrScenePlaneAlignmentFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(alignmentCount, uint32_t, PLAIN) \
    _(alignments, const XrScenePlaneAlignmentTypeMSFT*, POINTER, true, s->alignmentCount) 
#define XRT_ENUMERATE_XrSceneMeshMSFT(_) \
    _(meshBufferId, uint64_t, PLAIN) \
    _(supportsIndicesUint16, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSceneMeshesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sceneMeshCount, uint32_t, PLAIN) \
    _(sceneMeshes, XrSceneMeshMSFT*, POINTER, false, s->sceneMeshCount) 
#define XRT_ENUMERATE_XrSceneMeshBuffersGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(meshBufferId, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSceneMeshBuffersMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSceneMeshVertexBufferMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSceneMeshIndicesUint32MSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSceneMeshIndicesUint16MSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSceneObserverCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSceneCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrNewSceneComputeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedFeatureCount, uint32_t, PLAIN) \
    _(requestedFeatures, const XrSceneComputeFeatureMSFT*, POINTER, true, s->requestedFeatureCount) \
    _(consistency, XrSceneComputeConsistencyMSFT, PLAIN) \
    _(bounds, XrSceneBoundsMSFT, PLAIN) 
#define XRT_ENUMERATE_XrVisualMeshComputeLodInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(lod, XrMeshComputeLodMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneComponentsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(componentCapacityInput, uint32_t, PLAIN) \
    _(componentCountOutput, uint32_t, PLAIN) \
    _(components, XrSceneComponentMSFT*, POINTER, false, s->componentCapacityInput) 
#define XRT_ENUMERATE_XrSceneComponentsGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSceneComponentTypeMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneComponentLocationsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(locationCount, uint32_t, PLAIN) \
    _(locations, XrSceneComponentLocationMSFT*, POINTER, false, s->locationCount) 
#define XRT_ENUMERATE_XrSceneComponentsLocateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(componentIdCount, uint32_t, PLAIN) \
    _(componentIds, const XrUuidMSFT*, POINTER, true, s->componentIdCount) 
#define XRT_ENUMERATE_XrSceneObjectsMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sceneObjectCount, uint32_t, PLAIN) \
    _(sceneObjects, XrSceneObjectMSFT*, POINTER, false, s->sceneObjectCount) 
#define XRT_ENUMERATE_XrSceneComponentParentFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(parentId, XrUuidMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneObjectTypesFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(objectTypeCount, uint32_t, PLAIN) \
    _(objectTypes, const XrSceneObjectTypeMSFT*, POINTER, true, s->objectTypeCount) 
#define XRT_ENUMERATE_XrScenePlanesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(scenePlaneCount, uint32_t, PLAIN) \
    _(scenePlanes, XrScenePlaneMSFT*, POINTER, false, s->scenePlaneCount) 
#define XRT_ENUMERATE_XrScenePlaneAlignmentFilterInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(alignmentCount, uint32_t, PLAIN) \
    _(alignments, const XrScenePlaneAlignmentTypeMSFT*, POINTER, true, s->alignmentCount) 
#define XRT_ENUMERATE_XrSceneMeshesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sceneMeshCount, uint32_t, PLAIN) \
    _(sceneMeshes, XrSceneMeshMSFT*, POINTER, false, s->sceneMeshCount) 
#define XRT_ENUMERATE_XrSceneMeshBuffersGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(meshBufferId, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSceneMeshBuffersMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSceneMeshVertexBufferMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSceneMeshIndicesUint32MSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSceneMeshIndicesUint16MSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSerializedSceneFragmentDataGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sceneFragmentId, XrUuidMSFT, PLAIN) 
#define XRT_ENUMERATE_XrDeserializeSceneFragmentMSFT(_) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, const uint8_t*, POINTER, true, s->bufferSize) 
#define XRT_ENUMERATE_XrSceneDeserializeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fragmentCount, uint32_t, PLAIN) \
    _(fragments, const XrDeserializeSceneFragmentMSFT*, POINTER, true, s->fragmentCount) 
#define XRT_ENUMERATE_XrSerializedSceneFragmentDataGetInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sceneFragmentId, XrUuidMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneDeserializeInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fragmentCount, uint32_t, PLAIN) \
    _(fragments, const XrDeserializeSceneFragmentMSFT*, POINTER, true, s->fragmentCount) 
#define XRT_ENUMERATE_XrEventDataDisplayRefreshRateChangedFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fromDisplayRefreshRate, float, PLAIN) \
    _(toDisplayRefreshRate, float, PLAIN) 
#define XRT_ENUMERATE_XrEventDataDisplayRefreshRateChangedFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fromDisplayRefreshRate, float, PLAIN) \
    _(toDisplayRefreshRate, float, PLAIN) 
#define XRT_ENUMERATE_XrViveTrackerPathsHTCX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(persistentPath, XrPath, PLAIN) \
    _(rolePath, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrEventDataViveTrackerConnectedHTCX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(paths, XrViveTrackerPathsHTCX*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrViveTrackerPathsHTCX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(persistentPath, XrPath, PLAIN) \
    _(rolePath, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrEventDataViveTrackerConnectedHTCX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(paths, XrViveTrackerPathsHTCX*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSystemFacialTrackingPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportEyeFacialTracking, XrBool32, PLAIN) \
    _(supportLipFacialTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFacialExpressionsHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(sampleTime, XrTime, PLAIN) \
    _(expressionCount, uint32_t, PLAIN) \
    _(expressionWeightings, float*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrFacialTrackerCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(facialTrackingType, XrFacialTrackingTypeHTC, PLAIN) 
#define XRT_ENUMERATE_XrSystemFacialTrackingPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportEyeFacialTracking, XrBool32, PLAIN) \
    _(supportLipFacialTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFacialTrackerCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(facialTrackingType, XrFacialTrackingTypeHTC, PLAIN) 
#define XRT_ENUMERATE_XrFacialExpressionsHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(sampleTime, XrTime, PLAIN) \
    _(expressionCount, uint32_t, PLAIN) \
    _(expressionWeightings, float*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrSystemColorSpacePropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(colorSpace, XrColorSpaceFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemColorSpacePropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(colorSpace, XrColorSpaceFB, PLAIN) 
#define XRT_ENUMERATE_XrVector4sFB(_) \
    _(x, int16_t, PLAIN) \
    _(y, int16_t, PLAIN) \
    _(z, int16_t, PLAIN) \
    _(w, int16_t, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingMeshFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCapacityInput, uint32_t, PLAIN) \
    _(jointCountOutput, uint32_t, PLAIN) \
    _(jointBindPoses, XrPosef*, POINTER, false, s->jointCapacityInput) \
    _(jointRadii, float*, POINTER, false, s->jointCapacityInput) \
    _(jointParents, XrHandJointEXT*, POINTER, false, s->jointCapacityInput) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertexPositions, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexNormals, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexUVs, XrVector2f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexBlendIndices, XrVector4sFB*, POINTER, false, s->vertexCapacityInput) \
    _(vertexBlendWeights, XrVector4f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, int16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrHandTrackingScaleFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sensorOutput, float, PLAIN) \
    _(currentOutput, float, PLAIN) \
    _(overrideHandScale, XrBool32, PLAIN) \
    _(overrideValueInput, float, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingMeshFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCapacityInput, uint32_t, PLAIN) \
    _(jointCountOutput, uint32_t, PLAIN) \
    _(jointBindPoses, XrPosef*, POINTER, false, s->jointCapacityInput) \
    _(jointRadii, float*, POINTER, false, s->jointCapacityInput) \
    _(jointParents, XrHandJointEXT*, POINTER, false, s->jointCapacityInput) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertexPositions, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexNormals, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexUVs, XrVector2f*, POINTER, false, s->vertexCapacityInput) \
    _(vertexBlendIndices, XrVector4sFB*, POINTER, false, s->vertexCapacityInput) \
    _(vertexBlendWeights, XrVector4f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, int16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrHandTrackingScaleFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sensorOutput, float, PLAIN) \
    _(currentOutput, float, PLAIN) \
    _(overrideHandScale, XrBool32, PLAIN) \
    _(overrideValueInput, float, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingAimStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(status, XrHandTrackingAimFlagsFB, PLAIN) \
    _(aimPose, XrPosef, PLAIN) \
    _(pinchStrengthIndex, float, PLAIN) \
    _(pinchStrengthMiddle, float, PLAIN) \
    _(pinchStrengthRing, float, PLAIN) \
    _(pinchStrengthLittle, float, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingAimStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(status, XrHandTrackingAimFlagsFB, PLAIN) \
    _(aimPose, XrPosef, PLAIN) \
    _(pinchStrengthIndex, float, PLAIN) \
    _(pinchStrengthMiddle, float, PLAIN) \
    _(pinchStrengthRing, float, PLAIN) \
    _(pinchStrengthLittle, float, PLAIN) 
#define XRT_ENUMERATE_XrHandCapsuleFB(_) \
    _(points, XrVector3f[XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB], ARRAY, XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB) \
    _(radius, float, PLAIN) \
    _(joint, XrHandJointEXT, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingCapsulesStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(capsules, XrHandCapsuleFB[XR_HAND_TRACKING_CAPSULE_COUNT_FB], ARRAY, XR_HAND_TRACKING_CAPSULE_COUNT_FB) 
#define XRT_ENUMERATE_XrHandTrackingCapsulesStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(capsules, XrHandCapsuleFB[XR_HAND_TRACKING_CAPSULE_COUNT_FB], ARRAY, XR_HAND_TRACKING_CAPSULE_COUNT_FB) 
#define XRT_ENUMERATE_XrSystemSpatialEntityPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(supportsSpatialEntity, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpaceComponentStatusSetInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) \
    _(enabled, XrBool32, PLAIN) \
    _(timeout, XrDuration, PLAIN) 
#define XRT_ENUMERATE_XrSpaceComponentStatusFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(enabled, XrBool32, PLAIN) \
    _(changePending, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpatialAnchorCreateCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceSetStatusCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialEntityPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(supportsSpatialEntity, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpaceComponentStatusSetInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) \
    _(enabled, XrBool32, PLAIN) \
    _(timeout, XrDuration, PLAIN) 
#define XRT_ENUMERATE_XrSpaceComponentStatusFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(enabled, XrBool32, PLAIN) \
    _(changePending, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpatialAnchorCreateCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceSetStatusCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFoveationProfileCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSwapchainCreateInfoFoveationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrSwapchainCreateFoveationFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateFoveationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrSwapchainStateFoveationFlagsFB, PLAIN) \
    _(profile, XrFoveationProfileFB, PLAIN) 
#define XRT_ENUMERATE_XrFoveationProfileCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSwapchainCreateInfoFoveationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrSwapchainCreateFoveationFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateFoveationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrSwapchainStateFoveationFlagsFB, PLAIN) \
    _(profile, XrFoveationProfileFB, PLAIN) 
#define XRT_ENUMERATE_XrFoveationLevelProfileCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(level, XrFoveationLevelFB, PLAIN) \
    _(verticalOffset, float, PLAIN) \
    _(dynamic, XrFoveationDynamicFB, PLAIN) 
#define XRT_ENUMERATE_XrFoveationLevelProfileCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(level, XrFoveationLevelFB, PLAIN) \
    _(verticalOffset, float, PLAIN) \
    _(dynamic, XrFoveationDynamicFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemKeyboardTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsKeyboardTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrKeyboardTrackingDescriptionFB(_) \
    _(trackedKeyboardId, uint64_t, PLAIN) \
    _(size, XrVector3f, PLAIN) \
    _(flags, XrKeyboardTrackingFlagsFB, PLAIN) \
    _(name, char[XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB], ARRAY, XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB) 
#define XRT_ENUMERATE_XrKeyboardSpaceCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(trackedKeyboardId, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrKeyboardTrackingQueryFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrKeyboardTrackingQueryFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrKeyboardSpaceCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(trackedKeyboardId, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrKeyboardTrackingQueryFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrKeyboardTrackingQueryFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemKeyboardTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsKeyboardTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrTriangleMeshCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrTriangleMeshFlagsFB, PLAIN) \
    _(windingOrder, XrWindingOrderFB, PLAIN) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertexBuffer, const XrVector3f*, POINTER, true, 1) \
    _(triangleCount, uint32_t, PLAIN) \
    _(indexBuffer, const uint32_t*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrTriangleMeshCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrTriangleMeshFlagsFB, PLAIN) \
    _(windingOrder, XrWindingOrderFB, PLAIN) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertexBuffer, const XrVector3f*, POINTER, true, 1) \
    _(triangleCount, uint32_t, PLAIN) \
    _(indexBuffer, const uint32_t*, POINTER, true, 1) 
#define XRT_ENUMERATE_XrSystemPassthroughPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(supportsPassthrough, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemPassthroughProperties2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(capabilities, XrPassthroughCapabilityFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughLayerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(passthrough, XrPassthroughFB, PLAIN) \
    _(flags, XrPassthroughFlagsFB, PLAIN) \
    _(purpose, XrPassthroughLayerPurposeFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerPassthroughFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(layerHandle, XrPassthroughLayerFB, PLAIN) 
#define XRT_ENUMERATE_XrGeometryInstanceCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, XrPassthroughLayerFB, PLAIN) \
    _(mesh, XrTriangleMeshFB, PLAIN) \
    _(baseSpace, XrSpace, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrGeometryInstanceTransformFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughStyleFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureOpacityFactor, float, PLAIN) \
    _(edgeColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapMonoToRgbaFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureColorMap, XrColor4f[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB], ARRAY, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB) 
#define XRT_ENUMERATE_XrPassthroughColorMapMonoToMonoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureColorMap, uint8_t[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB], ARRAY, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB) 
#define XRT_ENUMERATE_XrPassthroughBrightnessContrastSaturationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(brightness, float, PLAIN) \
    _(contrast, float, PLAIN) \
    _(saturation, float, PLAIN) 
#define XRT_ENUMERATE_XrEventDataPassthroughStateChangedFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughStateChangedFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemPassthroughPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(supportsPassthrough, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughLayerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(passthrough, XrPassthroughFB, PLAIN) \
    _(flags, XrPassthroughFlagsFB, PLAIN) \
    _(purpose, XrPassthroughLayerPurposeFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerPassthroughFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(layerHandle, XrPassthroughLayerFB, PLAIN) 
#define XRT_ENUMERATE_XrGeometryInstanceCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, XrPassthroughLayerFB, PLAIN) \
    _(mesh, XrTriangleMeshFB, PLAIN) \
    _(baseSpace, XrSpace, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrGeometryInstanceTransformFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrSystemPassthroughProperties2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(capabilities, XrPassthroughCapabilityFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughStyleFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureOpacityFactor, float, PLAIN) \
    _(edgeColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapMonoToRgbaFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureColorMap, XrColor4f[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB], ARRAY, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB) 
#define XRT_ENUMERATE_XrPassthroughColorMapMonoToMonoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textureColorMap, uint8_t[XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB], ARRAY, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB) 
#define XRT_ENUMERATE_XrPassthroughBrightnessContrastSaturationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(brightness, float, PLAIN) \
    _(contrast, float, PLAIN) \
    _(saturation, float, PLAIN) 
#define XRT_ENUMERATE_XrEventDataPassthroughStateChangedFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughStateChangedFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelPathInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(path, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vendorId, uint32_t, PLAIN) \
    _(modelName, char[XR_MAX_RENDER_MODEL_NAME_SIZE_FB], ARRAY, XR_MAX_RENDER_MODEL_NAME_SIZE_FB) \
    _(modelKey, XrRenderModelKeyFB, PLAIN) \
    _(modelVersion, uint32_t, PLAIN) \
    _(flags, XrRenderModelFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelBufferFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrRenderModelLoadInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(modelKey, XrRenderModelKeyFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemRenderModelPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsRenderModelLoading, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelCapabilitiesRequestFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrRenderModelFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelPathInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(path, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vendorId, uint32_t, PLAIN) \
    _(modelName, char[XR_MAX_RENDER_MODEL_NAME_SIZE_FB], ARRAY, XR_MAX_RENDER_MODEL_NAME_SIZE_FB) \
    _(modelKey, XrRenderModelKeyFB, PLAIN) \
    _(modelVersion, uint32_t, PLAIN) \
    _(flags, XrRenderModelFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelBufferFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrRenderModelLoadInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(modelKey, XrRenderModelKeyFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemRenderModelPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsRenderModelLoading, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrRenderModelCapabilitiesRequestFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(flags, XrRenderModelFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrBindingModificationsKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bindingModificationCount, uint32_t, PLAIN) \
    _(bindingModifications, const XrBindingModificationBaseHeaderKHR* const*, XR) 
#define XRT_ENUMERATE_XrBindingModificationBaseHeaderKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrBindingModificationsKHR(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bindingModificationCount, uint32_t, PLAIN) \
    _(bindingModifications, const XrBindingModificationBaseHeaderKHR* const*, XR) 
#define XRT_ENUMERATE_XrViewLocateFoveatedRenderingVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(foveatedRenderingActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFoveatedViewConfigurationViewVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(foveatedRenderingActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemFoveatedRenderingPropertiesVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFoveatedRendering, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrViewLocateFoveatedRenderingVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(foveatedRenderingActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFoveatedViewConfigurationViewVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(foveatedRenderingActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemFoveatedRenderingPropertiesVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFoveatedRendering, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerDepthTestVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(depthTestRangeNearZ, float, PLAIN) \
    _(depthTestRangeFarZ, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerDepthTestVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(depthTestRangeNearZ, float, PLAIN) \
    _(depthTestRangeFarZ, float, PLAIN) 
#define XRT_ENUMERATE_XrSystemMarkerTrackingPropertiesVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsMarkerTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataMarkerTrackingUpdateVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerId, uint64_t, PLAIN) \
    _(isActive, XrBool32, PLAIN) \
    _(isPredicted, XrBool32, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrMarkerSpaceCreateInfoVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerId, uint64_t, PLAIN) \
    _(poseInMarkerSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemMarkerTrackingPropertiesVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsMarkerTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataMarkerTrackingUpdateVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerId, uint64_t, PLAIN) \
    _(isActive, XrBool32, PLAIN) \
    _(isPredicted, XrBool32, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrMarkerSpaceCreateInfoVARJO(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerId, uint64_t, PLAIN) \
    _(poseInMarkerSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrFrameEndInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(focusDistance, float, PLAIN) \
    _(flags, XrFrameEndInfoFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrFrameEndInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(focusDistance, float, PLAIN) \
    _(flags, XrFrameEndInfoFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrGlobalDimmerFrameEndInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(dimmerValue, float, PLAIN) \
    _(flags, XrGlobalDimmerFrameEndInfoFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrGlobalDimmerFrameEndInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(dimmerValue, float, PLAIN) \
    _(flags, XrGlobalDimmerFrameEndInfoFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrCoordinateSpaceCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(cfuid, MLCoordinateFrameUID, PLAIN) \
    _(poseInCoordinateSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemMarkerUnderstandingPropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsMarkerUnderstanding, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(profile, XrMarkerDetectorProfileML, PLAIN) \
    _(markerType, XrMarkerTypeML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorArucoInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(arucoDict, XrMarkerArucoDictML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorSizeInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerLength, float, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorAprilTagInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(aprilTagDict, XrMarkerAprilTagDictML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorCustomProfileInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fpsHint, XrMarkerDetectorFpsML, PLAIN) \
    _(resolutionHint, XrMarkerDetectorResolutionML, PLAIN) \
    _(cameraHint, XrMarkerDetectorCameraML, PLAIN) \
    _(cornerRefineMethod, XrMarkerDetectorCornerRefineMethodML, PLAIN) \
    _(useEdgeRefinement, XrBool32, PLAIN) \
    _(fullAnalysisIntervalHint, XrMarkerDetectorFullAnalysisIntervalML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorSnapshotInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrMarkerDetectorStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(state, XrMarkerDetectorStatusML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerSpaceCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerDetector, XrMarkerDetectorML, PLAIN) \
    _(marker, XrMarkerML, PLAIN) \
    _(poseInMarkerSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemMarkerUnderstandingPropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsMarkerUnderstanding, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(profile, XrMarkerDetectorProfileML, PLAIN) \
    _(markerType, XrMarkerTypeML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorArucoInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(arucoDict, XrMarkerArucoDictML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorSizeInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerLength, float, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorAprilTagInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(aprilTagDict, XrMarkerAprilTagDictML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorCustomProfileInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fpsHint, XrMarkerDetectorFpsML, PLAIN) \
    _(resolutionHint, XrMarkerDetectorResolutionML, PLAIN) \
    _(cameraHint, XrMarkerDetectorCameraML, PLAIN) \
    _(cornerRefineMethod, XrMarkerDetectorCornerRefineMethodML, PLAIN) \
    _(useEdgeRefinement, XrBool32, PLAIN) \
    _(fullAnalysisIntervalHint, XrMarkerDetectorFullAnalysisIntervalML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerDetectorSnapshotInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrMarkerDetectorStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(state, XrMarkerDetectorStatusML, PLAIN) 
#define XRT_ENUMERATE_XrMarkerSpaceCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerDetector, XrMarkerDetectorML, PLAIN) \
    _(marker, XrMarkerML, PLAIN) \
    _(poseInMarkerSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrLocalizationMapML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(name, char[XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML], ARRAY, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML) \
    _(mapUuid, XrUuidEXT, PLAIN) \
    _(mapType, XrLocalizationMapTypeML, PLAIN) 
#define XRT_ENUMERATE_XrEventDataLocalizationChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(state, XrLocalizationMapStateML, PLAIN) \
    _(map, XrLocalizationMapML, PLAIN) \
    _(confidence, XrLocalizationMapConfidenceML, PLAIN) \
    _(errorFlags, XrLocalizationMapErrorFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrLocalizationMapQueryInfoBaseHeaderML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrMapLocalizationRequestInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(mapUuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrLocalizationMapImportInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(size, uint32_t, PLAIN) \
    _(data, char*, POINTER, false, s->size) 
#define XRT_ENUMERATE_XrLocalizationEnableEventsInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrLocalizationMapML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(name, char[XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML], ARRAY, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML) \
    _(mapUuid, XrUuidEXT, PLAIN) \
    _(mapType, XrLocalizationMapTypeML, PLAIN) 
#define XRT_ENUMERATE_XrEventDataLocalizationChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(state, XrLocalizationMapStateML, PLAIN) \
    _(map, XrLocalizationMapML, PLAIN) \
    _(confidence, XrLocalizationMapConfidenceML, PLAIN) \
    _(errorFlags, XrLocalizationMapErrorFlagsML, PLAIN) 
#define XRT_ENUMERATE_XrMapLocalizationRequestInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(mapUuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrLocalizationMapImportInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(size, uint32_t, PLAIN) \
    _(data, char*, POINTER, false, s->size) 
#define XRT_ENUMERATE_XrLocalizationEnableEventsInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateInfoBaseHeaderML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateInfoFromPoseML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(poseInBaseSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrCreateSpatialAnchorsCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) 
#define XRT_ENUMERATE_XrSpatialAnchorStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(confidence, XrSpatialAnchorConfidenceML, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateInfoFromPoseML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(poseInBaseSpace, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrCreateSpatialAnchorsCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) 
#define XRT_ENUMERATE_XrSpatialAnchorStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(confidence, XrSpatialAnchorConfidenceML, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateStorageInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialAnchorsQueryInfoBaseHeaderML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialAnchorsQueryInfoRadiusML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(center, XrVector3f, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(radius, float, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsQueryCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(uuidCapacityInput, uint32_t, PLAIN) \
    _(uuidCountOutput, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCapacityInput) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateInfoFromUuidsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(storage, XrSpatialAnchorsStorageML, PLAIN) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchorCount, uint32_t, PLAIN) \
    _(anchors, const XrSpace*, POINTER, true, s->anchorCount) \
    _(expiration, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) \
    _(expiration, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrSpatialAnchorCompletionResultML(_) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateStorageInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpatialAnchorsQueryInfoRadiusML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(center, XrVector3f, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(radius, float, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsQueryCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(uuidCapacityInput, uint32_t, PLAIN) \
    _(uuidCountOutput, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCapacityInput) 
#define XRT_ENUMERATE_XrSpatialAnchorsCreateInfoFromUuidsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(storage, XrSpatialAnchorsStorageML, PLAIN) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchorCount, uint32_t, PLAIN) \
    _(anchors, const XrSpace*, POINTER, true, s->anchorCount) \
    _(expiration, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) \
    _(expiration, uint64_t, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorsPublishCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsDeleteCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrSpatialAnchorsUpdateExpirationCompletionDetailsML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCount, uint32_t, PLAIN) \
    _(results, XrSpatialAnchorCompletionResultML*, POINTER, false, s->resultCount) 
#define XRT_ENUMERATE_XrEventDataHeadsetFitChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(status, XrHeadsetFitStatusML, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEventDataEyeCalibrationChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(status, XrEyeCalibrationStatusML, PLAIN) 
#define XRT_ENUMERATE_XrUserCalibrationEnableEventsInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataHeadsetFitChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(status, XrHeadsetFitStatusML, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEventDataEyeCalibrationChangedML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(status, XrEyeCalibrationStatusML, PLAIN) 
#define XRT_ENUMERATE_XrUserCalibrationEnableEventsInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorPersistenceNameMSFT(_) \
    _(name, char[XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT], ARRAY, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT) 
#define XRT_ENUMERATE_XrSpatialAnchorPersistenceInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spatialAnchorPersistenceName, XrSpatialAnchorPersistenceNameMSFT, PLAIN) \
    _(spatialAnchor, XrSpatialAnchorMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, PLAIN) \
    _(spatialAnchorPersistenceName, XrSpatialAnchorPersistenceNameMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorPersistenceInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spatialAnchorPersistenceName, XrSpatialAnchorPersistenceNameMSFT, PLAIN) \
    _(spatialAnchor, XrSpatialAnchorMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spatialAnchorStore, XrSpatialAnchorStoreConnectionMSFT, PLAIN) \
    _(spatialAnchorPersistenceName, XrSpatialAnchorPersistenceNameMSFT, PLAIN) 
#define XRT_ENUMERATE_XrSceneMarkerMSFT(_) \
    _(markerType, XrSceneMarkerTypeMSFT, PLAIN) \
    _(lastSeenTime, XrTime, PLAIN) \
    _(center, XrOffset2Df, PLAIN) \
    _(size, XrExtent2Df, PLAIN) 
#define XRT_ENUMERATE_XrSceneMarkersMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sceneMarkerCapacityInput, uint32_t, PLAIN) \
    _(sceneMarkers, XrSceneMarkerMSFT*, POINTER, false, s->sceneMarkerCapacityInput) 
#define XRT_ENUMERATE_XrSceneMarkerTypeFilterMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerTypeCount, uint32_t, PLAIN) \
    _(markerTypes, XrSceneMarkerTypeMSFT*, POINTER, false, s->markerTypeCount) 
#define XRT_ENUMERATE_XrSceneMarkerQRCodeMSFT(_) \
    _(symbolType, XrSceneMarkerQRCodeSymbolTypeMSFT, PLAIN) \
    _(version, uint8_t, PLAIN) 
#define XRT_ENUMERATE_XrSceneMarkerQRCodesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(qrCodeCapacityInput, uint32_t, PLAIN) \
    _(qrCodes, XrSceneMarkerQRCodeMSFT*, POINTER, false, s->qrCodeCapacityInput) 
#define XRT_ENUMERATE_XrSceneMarkersMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sceneMarkerCapacityInput, uint32_t, PLAIN) \
    _(sceneMarkers, XrSceneMarkerMSFT*, POINTER, false, s->sceneMarkerCapacityInput) 
#define XRT_ENUMERATE_XrSceneMarkerTypeFilterMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(markerTypeCount, uint32_t, PLAIN) \
    _(markerTypes, XrSceneMarkerTypeMSFT*, POINTER, false, s->markerTypeCount) 
#define XRT_ENUMERATE_XrSceneMarkerQRCodesMSFT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(qrCodeCapacityInput, uint32_t, PLAIN) \
    _(qrCodes, XrSceneMarkerQRCodeMSFT*, POINTER, false, s->qrCodeCapacityInput) 
#define XRT_ENUMERATE_XrSpaceQueryInfoBaseHeaderFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpaceFilterInfoBaseHeaderFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpaceQueryInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(queryAction, XrSpaceQueryActionFB, PLAIN) \
    _(maxResultCount, uint32_t, PLAIN) \
    _(timeout, XrDuration, PLAIN) \
    _(filter, const XrSpaceFilterInfoBaseHeaderFB*, XR) \
    _(excludeFilter, const XrSpaceFilterInfoBaseHeaderFB*, XR) 
#define XRT_ENUMERATE_XrSpaceStorageLocationFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceUuidFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCount) 
#define XRT_ENUMERATE_XrSpaceComponentFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceQueryResultFB(_) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSpaceQueryResultsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCapacityInput, uint32_t, PLAIN) \
    _(resultCountOutput, uint32_t, PLAIN) \
    _(results, XrSpaceQueryResultFB*, POINTER, false, s->resultCapacityInput) 
#define XRT_ENUMERATE_XrEventDataSpaceQueryResultsAvailableFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceQueryCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpaceQueryInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(queryAction, XrSpaceQueryActionFB, PLAIN) \
    _(maxResultCount, uint32_t, PLAIN) \
    _(timeout, XrDuration, PLAIN) \
    _(filter, const XrSpaceFilterInfoBaseHeaderFB*, XR) \
    _(excludeFilter, const XrSpaceFilterInfoBaseHeaderFB*, XR) 
#define XRT_ENUMERATE_XrSpaceQueryResultsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(resultCapacityInput, uint32_t, PLAIN) \
    _(resultCountOutput, uint32_t, PLAIN) \
    _(results, XrSpaceQueryResultFB*, POINTER, false, s->resultCapacityInput) 
#define XRT_ENUMERATE_XrSpaceStorageLocationFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceUuidFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCount) 
#define XRT_ENUMERATE_XrSpaceComponentFilterInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(componentType, XrSpaceComponentTypeFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceQueryResultsAvailableFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceQueryCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpaceSaveInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) \
    _(persistenceMode, XrSpacePersistenceModeFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceEraseInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceSaveCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceEraseCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceSaveInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) \
    _(persistenceMode, XrSpacePersistenceModeFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceEraseInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceSaveCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceEraseCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageFoveationVulkanFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, VkImage, PLAIN) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageFoveationVulkanFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(image, VkImage, PLAIN) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateAndroidSurfaceDimensionsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateAndroidSurfaceDimensionsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateSamplerOpenGLESFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minFilter, EGLenum, PLAIN) \
    _(magFilter, EGLenum, PLAIN) \
    _(wrapModeS, EGLenum, PLAIN) \
    _(wrapModeT, EGLenum, PLAIN) \
    _(swizzleRed, EGLenum, PLAIN) \
    _(swizzleGreen, EGLenum, PLAIN) \
    _(swizzleBlue, EGLenum, PLAIN) \
    _(swizzleAlpha, EGLenum, PLAIN) \
    _(maxAnisotropy, float, PLAIN) \
    _(borderColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateSamplerOpenGLESFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minFilter, EGLenum, PLAIN) \
    _(magFilter, EGLenum, PLAIN) \
    _(wrapModeS, EGLenum, PLAIN) \
    _(wrapModeT, EGLenum, PLAIN) \
    _(swizzleRed, EGLenum, PLAIN) \
    _(swizzleGreen, EGLenum, PLAIN) \
    _(swizzleBlue, EGLenum, PLAIN) \
    _(swizzleAlpha, EGLenum, PLAIN) \
    _(maxAnisotropy, float, PLAIN) \
    _(borderColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateSamplerVulkanFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minFilter, VkFilter, PLAIN) \
    _(magFilter, VkFilter, PLAIN) \
    _(mipmapMode, VkSamplerMipmapMode, PLAIN) \
    _(wrapModeS, VkSamplerAddressMode, PLAIN) \
    _(wrapModeT, VkSamplerAddressMode, PLAIN) \
    _(swizzleRed, VkComponentSwizzle, PLAIN) \
    _(swizzleGreen, VkComponentSwizzle, PLAIN) \
    _(swizzleBlue, VkComponentSwizzle, PLAIN) \
    _(swizzleAlpha, VkComponentSwizzle, PLAIN) \
    _(maxAnisotropy, float, PLAIN) \
    _(borderColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainStateSamplerVulkanFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(minFilter, VkFilter, PLAIN) \
    _(magFilter, VkFilter, PLAIN) \
    _(mipmapMode, VkSamplerMipmapMode, PLAIN) \
    _(wrapModeS, VkSamplerAddressMode, PLAIN) \
    _(wrapModeT, VkSamplerAddressMode, PLAIN) \
    _(swizzleRed, VkComponentSwizzle, PLAIN) \
    _(swizzleGreen, VkComponentSwizzle, PLAIN) \
    _(swizzleBlue, VkComponentSwizzle, PLAIN) \
    _(swizzleAlpha, VkComponentSwizzle, PLAIN) \
    _(maxAnisotropy, float, PLAIN) \
    _(borderColor, XrColor4f, PLAIN) 
#define XRT_ENUMERATE_XrSpaceShareInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(userCount, uint32_t, PLAIN) \
    _(users, XrSpaceUserFB*, POINTER, false, s->userCount) 
#define XRT_ENUMERATE_XrEventDataSpaceShareCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpaceShareInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(userCount, uint32_t, PLAIN) \
    _(users, XrSpaceUserFB*, POINTER, false, s->userCount) 
#define XRT_ENUMERATE_XrEventDataSpaceShareCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerSpaceWarpInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerSpaceWarpInfoFlagsFB, PLAIN) \
    _(motionVectorSubImage, XrSwapchainSubImage, PLAIN) \
    _(appSpaceDeltaPose, XrPosef, PLAIN) \
    _(depthSubImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpaceWarpPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedMotionVectorImageRectWidth, uint32_t, PLAIN) \
    _(recommendedMotionVectorImageRectHeight, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerSpaceWarpInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerSpaceWarpInfoFlagsFB, PLAIN) \
    _(motionVectorSubImage, XrSwapchainSubImage, PLAIN) \
    _(appSpaceDeltaPose, XrPosef, PLAIN) \
    _(depthSubImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpaceWarpPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedMotionVectorImageRectWidth, uint32_t, PLAIN) \
    _(recommendedMotionVectorImageRectHeight, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrHapticAmplitudeEnvelopeVibrationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(duration, XrDuration, PLAIN) \
    _(amplitudeCount, uint32_t, PLAIN) \
    _(amplitudes, const float*, POINTER, true, s->amplitudeCount) 
#define XRT_ENUMERATE_XrHapticAmplitudeEnvelopeVibrationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(duration, XrDuration, PLAIN) \
    _(amplitudeCount, uint32_t, PLAIN) \
    _(amplitudes, const float*, POINTER, true, s->amplitudeCount) 
#define XRT_ENUMERATE_XrOffset3DfFB(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) \
    _(z, float, PLAIN) 
#define XRT_ENUMERATE_XrRect3DfFB(_) \
    _(offset, XrOffset3DfFB, PLAIN) \
    _(extent, XrExtent3DfFB, PLAIN) 
#define XRT_ENUMERATE_XrSemanticLabelsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, char*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrRoomLayoutFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(floorUuid, XrUuidEXT, PLAIN) \
    _(ceilingUuid, XrUuidEXT, PLAIN) \
    _(wallUuidCapacityInput, uint32_t, PLAIN) \
    _(wallUuidCountOutput, uint32_t, PLAIN) \
    _(wallUuids, XrUuidEXT*, POINTER, false, s->wallUuidCapacityInput) 
#define XRT_ENUMERATE_XrBoundary2DFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSemanticLabelsSupportInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrSemanticLabelsSupportFlagsFB, PLAIN) \
    _(recognizedLabels, const char*, POINTER, true, count_null_terminated(s->recognizedLabels)) 
#define XRT_ENUMERATE_XrSemanticLabelsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, char*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrRoomLayoutFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(floorUuid, XrUuidEXT, PLAIN) \
    _(ceilingUuid, XrUuidEXT, PLAIN) \
    _(wallUuidCapacityInput, uint32_t, PLAIN) \
    _(wallUuidCountOutput, uint32_t, PLAIN) \
    _(wallUuids, XrUuidEXT*, POINTER, false, s->wallUuidCapacityInput) 
#define XRT_ENUMERATE_XrBoundary2DFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSemanticLabelsSupportInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrSemanticLabelsSupportFlagsFB, PLAIN) \
    _(recognizedLabels, const char*, POINTER, true, count_null_terminated(s->recognizedLabels)) 
#define XRT_ENUMERATE_XrDigitalLensControlALMALENCE(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrDigitalLensControlFlagsALMALENCE, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSceneCaptureCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSceneCaptureRequestInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestByteCount, uint32_t, PLAIN) \
    _(request, const char*, POINTER, true, s->requestByteCount) 
#define XRT_ENUMERATE_XrEventDataSceneCaptureCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSceneCaptureRequestInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestByteCount, uint32_t, PLAIN) \
    _(request, const char*, POINTER, true, s->requestByteCount) 
#define XRT_ENUMERATE_XrSpaceContainerFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCapacityInput, uint32_t, PLAIN) \
    _(uuidCountOutput, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCapacityInput) 
#define XRT_ENUMERATE_XrSpaceContainerFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCapacityInput, uint32_t, PLAIN) \
    _(uuidCountOutput, uint32_t, PLAIN) \
    _(uuids, XrUuidEXT*, POINTER, false, s->uuidCapacityInput) 
#define XRT_ENUMERATE_XrFoveationEyeTrackedProfileCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrFoveationEyeTrackedProfileCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrFoveationEyeTrackedStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(foveationCenter, XrVector2f[XR_FOVEATION_CENTER_SIZE_META], ARRAY, XR_FOVEATION_CENTER_SIZE_META) \
    _(flags, XrFoveationEyeTrackedStateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrSystemFoveationEyeTrackedPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFoveationEyeTracked, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFoveationEyeTrackedProfileCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrFoveationEyeTrackedProfileCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrFoveationEyeTrackedStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(foveationCenter, XrVector2f[XR_FOVEATION_CENTER_SIZE_META], ARRAY, XR_FOVEATION_CENTER_SIZE_META) \
    _(flags, XrFoveationEyeTrackedStateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrSystemFoveationEyeTrackedPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFoveationEyeTracked, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemFaceTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFaceTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFaceTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(faceExpressionSet, XrFaceExpressionSetFB, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionStatusFB(_) \
    _(isValid, XrBool32, PLAIN) \
    _(isEyeFollowingBlendshapesValid, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionWeightsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(weightCount, uint32_t, PLAIN) \
    _(weights, float*, POINTER, false, s->weightCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidences, float*, POINTER, false, s->confidenceCount) \
    _(status, XrFaceExpressionStatusFB, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemFaceTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFaceTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFaceTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(faceExpressionSet, XrFaceExpressionSetFB, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionWeightsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(weightCount, uint32_t, PLAIN) \
    _(weights, float*, POINTER, false, s->weightCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidences, float*, POINTER, false, s->confidenceCount) \
    _(status, XrFaceExpressionStatusFB, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEyeGazeFB(_) \
    _(isValid, XrBool32, PLAIN) \
    _(gazePose, XrPosef, PLAIN) \
    _(gazeConfidence, float, PLAIN) 
#define XRT_ENUMERATE_XrEyeTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEyeGazesInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemEyeTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEyeTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEyeGazesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(gaze, XrEyeGazeFB[XR_EYE_POSITION_COUNT_FB], ARRAY, XR_EYE_POSITION_COUNT_FB) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEyeTrackerCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEyeGazesInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEyeGazesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(gaze, XrEyeGazeFB[XR_EYE_POSITION_COUNT_FB], ARRAY, XR_EYE_POSITION_COUNT_FB) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemEyeTrackingPropertiesFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEyeTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughKeyboardHandsIntensityFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(leftHandIntensity, float, PLAIN) \
    _(rightHandIntensity, float, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughKeyboardHandsIntensityFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(leftHandIntensity, float, PLAIN) \
    _(rightHandIntensity, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerSettingsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerSettingsFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerSettingsFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerSettingsFlagsFB, PLAIN) 
#define XRT_ENUMERATE_XrHapticPcmVibrationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, const float*, POINTER, true, s->bufferSize) \
    _(sampleRate, float, PLAIN) \
    _(append, XrBool32, PLAIN) \
    _(samplesConsumed, uint32_t*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrDevicePcmSampleRateStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sampleRate, float, PLAIN) 
#define XRT_ENUMERATE_XrHapticPcmVibrationFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, const float*, POINTER, true, s->bufferSize) \
    _(sampleRate, float, PLAIN) \
    _(append, XrBool32, PLAIN) \
    _(samplesConsumed, uint32_t*, POINTER, false, 1) 
#define XRT_ENUMERATE_XrDevicePcmSampleRateStateFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(sampleRate, float, PLAIN) 
#define XRT_ENUMERATE_XrFrameSynthesisInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrFrameSynthesisInfoFlagsEXT, PLAIN) \
    _(motionVectorSubImage, XrSwapchainSubImage, PLAIN) \
    _(motionVectorScale, XrVector4f, PLAIN) \
    _(motionVectorOffset, XrVector4f, PLAIN) \
    _(appSpaceDeltaPose, XrPosef, PLAIN) \
    _(depthSubImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrFrameSynthesisConfigViewEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedMotionVectorImageRectWidth, uint32_t, PLAIN) \
    _(recommendedMotionVectorImageRectHeight, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrFrameSynthesisInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrFrameSynthesisInfoFlagsEXT, PLAIN) \
    _(motionVectorSubImage, XrSwapchainSubImage, PLAIN) \
    _(motionVectorScale, XrVector4f, PLAIN) \
    _(motionVectorOffset, XrVector4f, PLAIN) \
    _(appSpaceDeltaPose, XrPosef, PLAIN) \
    _(depthSubImage, XrSwapchainSubImage, PLAIN) \
    _(minDepth, float, PLAIN) \
    _(maxDepth, float, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrFrameSynthesisConfigViewEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedMotionVectorImageRectWidth, uint32_t, PLAIN) \
    _(recommendedMotionVectorImageRectHeight, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerDepthTestFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(depthMask, XrBool32, PLAIN) \
    _(compareOp, XrCompareOpFB, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerDepthTestFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(depthMask, XrBool32, PLAIN) \
    _(compareOp, XrCompareOpFB, PLAIN) 
#define XRT_ENUMERATE_XrLocalDimmingFrameEndInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(localDimmingMode, XrLocalDimmingModeMETA, PLAIN) 
#define XRT_ENUMERATE_XrLocalDimmingFrameEndInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(localDimmingMode, XrLocalDimmingModeMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughPreferencesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughPreferenceFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughPreferencesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPassthroughPreferenceFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrSystemVirtualKeyboardPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsVirtualKeyboard, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrVirtualKeyboardSpaceCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationType, XrVirtualKeyboardLocationTypeMETA, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardLocationInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationType, XrVirtualKeyboardLocationTypeMETA, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(scale, float, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardModelVisibilitySetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(visible, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardAnimationStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(animationIndex, int32_t, PLAIN) \
    _(fraction, float, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardModelAnimationStatesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(stateCapacityInput, uint32_t, PLAIN) \
    _(stateCountOutput, uint32_t, PLAIN) \
    _(states, XrVirtualKeyboardAnimationStateMETA*, POINTER, false, s->stateCapacityInput) 
#define XRT_ENUMERATE_XrVirtualKeyboardTextureDataMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(textureWidth, uint32_t, PLAIN) \
    _(textureHeight, uint32_t, PLAIN) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrVirtualKeyboardInputInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(inputSource, XrVirtualKeyboardInputSourceMETA, PLAIN) \
    _(inputSpace, XrSpace, PLAIN) \
    _(inputPoseInSpace, XrPosef, PLAIN) \
    _(inputState, XrVirtualKeyboardInputStateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardTextContextChangeInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textContext, const char*, POINTER, true, count_null_terminated(s->textContext)) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardCommitTextMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) \
    _(text, char[XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META], ARRAY, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardBackspaceMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardEnterMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardShownMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardHiddenMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrSystemVirtualKeyboardPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsVirtualKeyboard, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrVirtualKeyboardSpaceCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationType, XrVirtualKeyboardLocationTypeMETA, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardLocationInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationType, XrVirtualKeyboardLocationTypeMETA, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(scale, float, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardModelVisibilitySetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(visible, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardAnimationStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(animationIndex, int32_t, PLAIN) \
    _(fraction, float, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardModelAnimationStatesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(stateCapacityInput, uint32_t, PLAIN) \
    _(stateCountOutput, uint32_t, PLAIN) \
    _(states, XrVirtualKeyboardAnimationStateMETA*, POINTER, false, s->stateCapacityInput) 
#define XRT_ENUMERATE_XrVirtualKeyboardTextureDataMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(textureWidth, uint32_t, PLAIN) \
    _(textureHeight, uint32_t, PLAIN) \
    _(bufferCapacityInput, uint32_t, PLAIN) \
    _(bufferCountOutput, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferCapacityInput) 
#define XRT_ENUMERATE_XrVirtualKeyboardInputInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(inputSource, XrVirtualKeyboardInputSourceMETA, PLAIN) \
    _(inputSpace, XrSpace, PLAIN) \
    _(inputPoseInSpace, XrPosef, PLAIN) \
    _(inputState, XrVirtualKeyboardInputStateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrVirtualKeyboardTextContextChangeInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(textContext, const char*, POINTER, true, count_null_terminated(s->textContext)) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardCommitTextMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) \
    _(text, char[XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META], ARRAY, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardBackspaceMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardEnterMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardShownMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrEventDataVirtualKeyboardHiddenMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(keyboard, XrVirtualKeyboardMETA, PLAIN) 
#define XRT_ENUMERATE_XrExternalCameraIntrinsicsOCULUS(_) \
    _(lastChangeTime, XrTime, PLAIN) \
    _(fov, XrFovf, PLAIN) \
    _(virtualNearPlaneDistance, float, PLAIN) \
    _(virtualFarPlaneDistance, float, PLAIN) \
    _(imageSensorPixelResolution, XrExtent2Di, PLAIN) 
#define XRT_ENUMERATE_XrExternalCameraExtrinsicsOCULUS(_) \
    _(lastChangeTime, XrTime, PLAIN) \
    _(cameraStatusFlags, XrExternalCameraStatusFlagsOCULUS, PLAIN) \
    _(attachedToDevice, XrExternalCameraAttachedToDeviceOCULUS, PLAIN) \
    _(relativePose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrExternalCameraOCULUS(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(name, char[XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS], ARRAY, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS) \
    _(intrinsics, XrExternalCameraIntrinsicsOCULUS, PLAIN) \
    _(extrinsics, XrExternalCameraExtrinsicsOCULUS, PLAIN) 
#define XRT_ENUMERATE_XrExternalCameraOCULUS(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(name, char[XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS], ARRAY, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS) \
    _(intrinsics, XrExternalCameraIntrinsicsOCULUS, PLAIN) \
    _(extrinsics, XrExternalCameraExtrinsicsOCULUS, PLAIN) 
#define XRT_ENUMERATE_XrVulkanSwapchainCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(additionalCreateFlags, VkImageCreateFlags, PLAIN) \
    _(additionalUsageFlags, VkImageUsageFlags, PLAIN) 
#define XRT_ENUMERATE_XrVulkanSwapchainCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(additionalCreateFlags, VkImageCreateFlags, PLAIN) \
    _(additionalUsageFlags, VkImageUsageFlags, PLAIN) 
#define XRT_ENUMERATE_XrPerformanceMetricsStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrPerformanceMetricsCounterMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(counterFlags, XrPerformanceMetricsCounterFlagsMETA, PLAIN) \
    _(counterUnit, XrPerformanceMetricsCounterUnitMETA, PLAIN) \
    _(uintValue, uint32_t, PLAIN) \
    _(floatValue, float, PLAIN) 
#define XRT_ENUMERATE_XrPerformanceMetricsStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrPerformanceMetricsCounterMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(counterFlags, XrPerformanceMetricsCounterFlagsMETA, PLAIN) \
    _(counterUnit, XrPerformanceMetricsCounterUnitMETA, PLAIN) \
    _(uintValue, uint32_t, PLAIN) \
    _(floatValue, float, PLAIN) 
#define XRT_ENUMERATE_XrSpaceListSaveInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceListSaveCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpaceListSaveInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(location, XrSpaceStorageLocationFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSpaceListSaveCompleteFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSpaceUserCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(userId, XrSpaceUserIdFB, PLAIN) 
#define XRT_ENUMERATE_XrSpaceUserCreateInfoFB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(userId, XrSpaceUserIdFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemHeadsetIdPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(id, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSystemHeadsetIdPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(id, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrRecommendedLayerResolutionMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedImageDimensions, XrExtent2Di, PLAIN) \
    _(isValid, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrRecommendedLayerResolutionGetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, const XrCompositionLayerBaseHeader*, XR) \
    _(predictedDisplayTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrRecommendedLayerResolutionMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedImageDimensions, XrExtent2Di, PLAIN) \
    _(isValid, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrRecommendedLayerResolutionGetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, const XrCompositionLayerBaseHeader*, XR) \
    _(predictedDisplayTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorLutDataMETA(_) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, const uint8_t*, POINTER, true, s->bufferSize) 
#define XRT_ENUMERATE_XrPassthroughColorLutCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(channels, XrPassthroughColorLutChannelsMETA, PLAIN) \
    _(resolution, uint32_t, PLAIN) \
    _(data, XrPassthroughColorLutDataMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorLutUpdateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(data, XrPassthroughColorLutDataMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapLutMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(colorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(weight, float, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapInterpolatedLutMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sourceColorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(targetColorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(weight, float, PLAIN) 
#define XRT_ENUMERATE_XrSystemPassthroughColorLutPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(maxColorLutResolution, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSystemPassthroughColorLutPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(maxColorLutResolution, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorLutCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(channels, XrPassthroughColorLutChannelsMETA, PLAIN) \
    _(resolution, uint32_t, PLAIN) \
    _(data, XrPassthroughColorLutDataMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorLutUpdateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(data, XrPassthroughColorLutDataMETA, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapLutMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(colorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(weight, float, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorMapInterpolatedLutMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sourceColorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(targetColorLut, XrPassthroughColorLutMETA, PLAIN) \
    _(weight, float, PLAIN) 
#define XRT_ENUMERATE_XrSpaceTriangleMeshGetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpaceTriangleMeshMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSpaceTriangleMeshGetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSpaceTriangleMeshMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint32_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSystemPropertiesBodyTrackingFullBodyMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFullBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemPropertiesBodyTrackingFullBodyMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFullBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataPassthroughLayerResumedMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, XrPassthroughLayerFB, PLAIN) 
#define XRT_ENUMERATE_XrEventDataPassthroughLayerResumedMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layer, XrPassthroughLayerFB, PLAIN) 
#define XRT_ENUMERATE_XrSystemFaceTrackingProperties2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsVisualFaceTracking, XrBool32, PLAIN) \
    _(supportsAudioFaceTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFaceTrackerCreateInfo2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(faceExpressionSet, XrFaceExpressionSet2FB, PLAIN) \
    _(requestedDataSourceCount, uint32_t, PLAIN) \
    _(requestedDataSources, XrFaceTrackingDataSource2FB*, POINTER, false, s->requestedDataSourceCount) 
#define XRT_ENUMERATE_XrFaceExpressionInfo2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionWeights2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(weightCount, uint32_t, PLAIN) \
    _(weights, float*, POINTER, false, s->weightCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidences, float*, POINTER, false, s->confidenceCount) \
    _(isValid, XrBool32, PLAIN) \
    _(isEyeFollowingBlendshapesValid, XrBool32, PLAIN) \
    _(dataSource, XrFaceTrackingDataSource2FB, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemFaceTrackingProperties2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsVisualFaceTracking, XrBool32, PLAIN) \
    _(supportsAudioFaceTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFaceTrackerCreateInfo2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(faceExpressionSet, XrFaceExpressionSet2FB, PLAIN) \
    _(requestedDataSourceCount, uint32_t, PLAIN) \
    _(requestedDataSources, XrFaceTrackingDataSource2FB*, POINTER, false, s->requestedDataSourceCount) 
#define XRT_ENUMERATE_XrFaceExpressionInfo2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrFaceExpressionWeights2FB(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(weightCount, uint32_t, PLAIN) \
    _(weights, float*, POINTER, false, s->weightCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidences, float*, POINTER, false, s->confidenceCount) \
    _(isValid, XrBool32, PLAIN) \
    _(isEyeFollowingBlendshapesValid, XrBool32, PLAIN) \
    _(dataSource, XrFaceTrackingDataSource2FB, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialEntitySharingPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialEntitySharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrShareSpacesRecipientBaseHeaderMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrShareSpacesInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(recipientInfo, const XrShareSpacesRecipientBaseHeaderMETA*, XR) 
#define XRT_ENUMERATE_XrEventDataShareSpacesCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialEntitySharingPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialEntitySharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrShareSpacesInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, XrSpace*, POINTER, false, s->spaceCount) \
    _(recipientInfo, const XrShareSpacesRecipientBaseHeaderMETA*, XR) 
#define XRT_ENUMERATE_XrEventDataShareSpacesCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthProviderCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrEnvironmentDepthProviderCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthSwapchainCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrEnvironmentDepthSwapchainCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthSwapchainStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageAcquireInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(displayTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageViewMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fov, XrFovf, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(swapchainIndex, uint32_t, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) \
    _(views, XrEnvironmentDepthImageViewMETA[2], ARRAY, 2) 
#define XRT_ENUMERATE_XrEnvironmentDepthHandRemovalSetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemEnvironmentDepthPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEnvironmentDepth, XrBool32, PLAIN) \
    _(supportsHandRemoval, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthProviderCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrEnvironmentDepthProviderCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthSwapchainCreateInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrEnvironmentDepthSwapchainCreateFlagsMETA, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthSwapchainStateMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageAcquireInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(displayTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageViewMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(fov, XrFovf, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrEnvironmentDepthImageMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(swapchainIndex, uint32_t, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) \
    _(views, XrEnvironmentDepthImageViewMETA[2], ARRAY, 2) 
#define XRT_ENUMERATE_XrEnvironmentDepthHandRemovalSetInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(enabled, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemEnvironmentDepthPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsEnvironmentDepth, XrBool32, PLAIN) \
    _(supportsHandRemoval, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(form, XrPassthroughFormHTC, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(alpha, float, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughMeshTransformInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertices, const XrVector3f*, POINTER, true, s->vertexCount) \
    _(indexCount, uint32_t, PLAIN) \
    _(indices, const uint32_t*, POINTER, true, s->indexCount) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerPassthroughHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(passthrough, XrPassthroughHTC, PLAIN) \
    _(color, XrPassthroughColorHTC, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(form, XrPassthroughFormHTC, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughColorHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(alpha, float, PLAIN) 
#define XRT_ENUMERATE_XrPassthroughMeshTransformInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertices, const XrVector3f*, POINTER, true, s->vertexCount) \
    _(indexCount, uint32_t, PLAIN) \
    _(indices, const uint32_t*, POINTER, true, s->indexCount) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(scale, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerPassthroughHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(passthrough, XrPassthroughHTC, PLAIN) \
    _(color, XrPassthroughColorHTC, PLAIN) 
#define XRT_ENUMERATE_XrFoveationApplyInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(mode, XrFoveationModeHTC, PLAIN) \
    _(subImageCount, uint32_t, PLAIN) \
    _(subImages, XrSwapchainSubImage*, POINTER, false, s->subImageCount) 
#define XRT_ENUMERATE_XrFoveationConfigurationHTC(_) \
    _(level, XrFoveationLevelHTC, PLAIN) \
    _(clearFovDegree, float, PLAIN) \
    _(focalCenterOffset, XrVector2f, PLAIN) 
#define XRT_ENUMERATE_XrFoveationDynamicModeInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(dynamicFlags, XrFoveationDynamicFlagsHTC, PLAIN) 
#define XRT_ENUMERATE_XrFoveationCustomModeInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(configCount, uint32_t, PLAIN) \
    _(configs, const XrFoveationConfigurationHTC*, POINTER, true, s->configCount) 
#define XRT_ENUMERATE_XrFoveationApplyInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(mode, XrFoveationModeHTC, PLAIN) \
    _(subImageCount, uint32_t, PLAIN) \
    _(subImages, XrSwapchainSubImage*, POINTER, false, s->subImageCount) 
#define XRT_ENUMERATE_XrFoveationDynamicModeInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(dynamicFlags, XrFoveationDynamicFlagsHTC, PLAIN) 
#define XRT_ENUMERATE_XrFoveationCustomModeInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(configCount, uint32_t, PLAIN) \
    _(configs, const XrFoveationConfigurationHTC*, POINTER, true, s->configCount) 
#define XRT_ENUMERATE_XrSystemAnchorPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsAnchor, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(name, XrSpatialAnchorNameHTC, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorNameHTC(_) \
    _(name, char[XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC], ARRAY, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC) 
#define XRT_ENUMERATE_XrSystemAnchorPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsAnchor, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(poseInSpace, XrPosef, PLAIN) \
    _(name, XrSpatialAnchorNameHTC, PLAIN) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bodyJointSet, XrBodyJointSetHTC, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(combinedLocationFlags, XrSpaceLocationFlags, PLAIN) \
    _(confidenceLevel, XrBodyJointConfidenceHTC, PLAIN) \
    _(jointLocationCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationHTC*, POINTER, false, s->jointLocationCount) \
    _(skeletonGenerationId, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationHTC(_) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(joints, XrBodySkeletonJointHTC*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bodyJointSet, XrBodyJointSetHTC, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(combinedLocationFlags, XrSpaceLocationFlags, PLAIN) \
    _(confidenceLevel, XrBodyJointConfidenceHTC, PLAIN) \
    _(jointLocationCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationHTC*, POINTER, false, s->jointLocationCount) \
    _(skeletonGenerationId, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonHTC(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(jointCount, uint32_t, PLAIN) \
    _(joints, XrBodySkeletonJointHTC*, POINTER, false, s->jointCount) 
#define XRT_ENUMERATE_XrActiveActionSetPrioritiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(actionSetPriorityCount, uint32_t, PLAIN) \
    _(actionSetPriorities, const XrActiveActionSetPriorityEXT*, POINTER, true, s->actionSetPriorityCount) 
#define XRT_ENUMERATE_XrActiveActionSetPriorityEXT(_) \
    _(actionSet, XrActionSet, PLAIN) \
    _(priorityOverride, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrActiveActionSetPrioritiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(actionSetPriorityCount, uint32_t, PLAIN) \
    _(actionSetPriorities, const XrActiveActionSetPriorityEXT*, POINTER, true, s->actionSetPriorityCount) 
#define XRT_ENUMERATE_XrSystemForceFeedbackCurlPropertiesMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsForceFeedbackCurl, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrForceFeedbackCurlApplyLocationsMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationCount, uint32_t, PLAIN) \
    _(locations, XrForceFeedbackCurlApplyLocationMNDX*, POINTER, false, s->locationCount) 
#define XRT_ENUMERATE_XrForceFeedbackCurlApplyLocationMNDX(_) \
    _(location, XrForceFeedbackCurlLocationMNDX, PLAIN) \
    _(value, float, PLAIN) 
#define XRT_ENUMERATE_XrSystemForceFeedbackCurlPropertiesMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsForceFeedbackCurl, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrForceFeedbackCurlApplyLocationsMNDX(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(locationCount, uint32_t, PLAIN) \
    _(locations, XrForceFeedbackCurlApplyLocationMNDX*, POINTER, false, s->locationCount) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(jointSet, XrBodyJointSetBD, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(allJointPosesTracked, XrBool32, PLAIN) \
    _(jointLocationCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationBD*, POINTER, false, s->jointLocationCount) 
#define XRT_ENUMERATE_XrBodyJointLocationBD(_) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrBodyTrackerCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(jointSet, XrBodyJointSetBD, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointsLocateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrBodyJointLocationsBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(allJointPosesTracked, XrBool32, PLAIN) \
    _(jointLocationCount, uint32_t, PLAIN) \
    _(jointLocations, XrBodyJointLocationBD*, POINTER, false, s->jointLocationCount) 
#define XRT_ENUMERATE_XrSystemBodyTrackingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsBodyTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialSensingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialSensing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) \
    _(componentType, XrSpatialEntityComponentTypeBD, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataBaseHeaderBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSpatialEntityLocationGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataLocationBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(location, XrSpaceLocation, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataSemanticBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(labelCapacityInput, uint32_t, PLAIN) \
    _(labelCountOutput, uint32_t, PLAIN) \
    _(labels, XrSemanticLabelBD*, POINTER, false, s->labelCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataBoundingBox2DBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(boundingBox2D, XrRect2Df, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataPolygonBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataBoundingBox3DBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(boundingBox3D, XrBoxf, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataTriangleMeshBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSenseDataProviderCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(providerType, XrSenseDataProviderTypeBD, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataProviderStartInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEventDataSenseDataProviderStateChangedBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(provider, XrSenseDataProviderBD, PLAIN) \
    _(newState, XrSenseDataProviderStateBD, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSenseDataUpdatedBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(provider, XrSenseDataProviderBD, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataQueryInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSenseDataQueryCompletionBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(snapshot, XrSenseDataSnapshotBD, PLAIN) 
#define XRT_ENUMERATE_XrQueriedSenseDataGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrQueriedSenseDataBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(stateCapacityInput, uint32_t, PLAIN) \
    _(stateCountOutput, uint32_t, PLAIN) \
    _(states, XrSpatialEntityStateBD*, POINTER, false, s->stateCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityStateBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) \
    _(lastUpdateTime, XrTime, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataFilterUuidBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSenseDataFilterSemanticBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(labelCount, uint32_t, PLAIN) \
    _(labels, const XrSemanticLabelBD*, POINTER, true, s->labelCount) 
#define XRT_ENUMERATE_XrSpatialEntityAnchorCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(snapshot, XrSenseDataSnapshotBD, PLAIN) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) 
#define XRT_ENUMERATE_XrAnchorSpaceCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchor, XrAnchorBD, PLAIN) \
    _(poseInAnchorSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialSensingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialSensing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) \
    _(componentType, XrSpatialEntityComponentTypeBD, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityLocationGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataLocationBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(location, XrSpaceLocation, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataSemanticBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(labelCapacityInput, uint32_t, PLAIN) \
    _(labelCountOutput, uint32_t, PLAIN) \
    _(labels, XrSemanticLabelBD*, POINTER, false, s->labelCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataBoundingBox2DBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(boundingBox2D, XrRect2Df, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataPolygonBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataBoundingBox3DBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(boundingBox3D, XrBoxf, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityComponentDataTriangleMeshBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector3f*, POINTER, false, s->vertexCapacityInput) \
    _(indexCapacityInput, uint32_t, PLAIN) \
    _(indexCountOutput, uint32_t, PLAIN) \
    _(indices, uint16_t*, POINTER, false, s->indexCapacityInput) 
#define XRT_ENUMERATE_XrSenseDataProviderCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(providerType, XrSenseDataProviderTypeBD, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataProviderStartInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEventDataSenseDataProviderStateChangedBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(provider, XrSenseDataProviderBD, PLAIN) \
    _(newState, XrSenseDataProviderStateBD, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSenseDataUpdatedBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(provider, XrSenseDataProviderBD, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataQueryInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSenseDataQueryCompletionBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(snapshot, XrSenseDataSnapshotBD, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataFilterUuidBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuidCount, uint32_t, PLAIN) \
    _(uuids, const XrUuidEXT*, POINTER, true, s->uuidCount) 
#define XRT_ENUMERATE_XrSenseDataFilterSemanticBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(labelCount, uint32_t, PLAIN) \
    _(labels, const XrSemanticLabelBD*, POINTER, true, s->labelCount) 
#define XRT_ENUMERATE_XrQueriedSenseDataGetInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrQueriedSenseDataBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(stateCapacityInput, uint32_t, PLAIN) \
    _(stateCountOutput, uint32_t, PLAIN) \
    _(states, XrSpatialEntityStateBD*, POINTER, false, s->stateCapacityInput) 
#define XRT_ENUMERATE_XrSpatialEntityStateBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) \
    _(lastUpdateTime, XrTime, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialEntityAnchorCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(snapshot, XrSenseDataSnapshotBD, PLAIN) \
    _(entityId, XrSpatialEntityIdBD, PLAIN) 
#define XRT_ENUMERATE_XrAnchorSpaceCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchor, XrAnchorBD, PLAIN) \
    _(poseInAnchorSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialAnchorPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialAnchor, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateCompletionBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorPersistInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrPersistenceLocationBD, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorUnpersistInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrPersistenceLocationBD, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialAnchorPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialAnchor, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(space, XrSpace, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorCreateCompletionBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorPersistInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrPersistenceLocationBD, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorUnpersistInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(location, XrPersistenceLocationBD, PLAIN) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialAnchorSharingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialAnchorSharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorShareInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSharedSpatialAnchorDownloadInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialAnchorSharingPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialAnchorSharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSpatialAnchorShareInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(anchor, XrAnchorBD, PLAIN) 
#define XRT_ENUMERATE_XrSharedSpatialAnchorDownloadInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialScenePropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialScene, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSceneCaptureInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSystemSpatialScenePropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialScene, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSceneCaptureInfoBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSystemSpatialMeshPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialMesh, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataProviderCreateInfoSpatialMeshBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(configFlags, XrSpatialMeshConfigFlagsBD, PLAIN) \
    _(lod, XrSpatialMeshLodBD, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialMeshPropertiesBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialMesh, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSenseDataProviderCreateInfoSpatialMeshBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(configFlags, XrSpatialMeshConfigFlagsBD, PLAIN) \
    _(lod, XrSpatialMeshLodBD, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollResultProgressBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isSupported, XrBool32, PLAIN) \
    _(progressPercentage, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollResultProgressBD(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isSupported, XrBool32, PLAIN) \
    _(progressPercentage, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingDataSourceInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedDataSourceCount, uint32_t, PLAIN) \
    _(requestedDataSources, XrHandTrackingDataSourceEXT*, POINTER, false, s->requestedDataSourceCount) 
#define XRT_ENUMERATE_XrHandTrackingDataSourceStateEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(dataSource, XrHandTrackingDataSourceEXT, PLAIN) 
#define XRT_ENUMERATE_XrHandTrackingDataSourceInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedDataSourceCount, uint32_t, PLAIN) \
    _(requestedDataSources, XrHandTrackingDataSourceEXT*, POINTER, false, s->requestedDataSourceCount) 
#define XRT_ENUMERATE_XrHandTrackingDataSourceStateEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) \
    _(dataSource, XrHandTrackingDataSourceEXT, PLAIN) 
#define XRT_ENUMERATE_XrSystemPlaneDetectionPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportedFeatures, XrPlaneDetectionCapabilityFlagsEXT, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPlaneDetectorFlagsEXT, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorBeginInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(orientationCount, uint32_t, PLAIN) \
    _(orientations, const XrPlaneDetectorOrientationEXT*, POINTER, true, s->orientationCount) \
    _(semanticTypeCount, uint32_t, PLAIN) \
    _(semanticTypes, const XrPlaneDetectorSemanticTypeEXT*, POINTER, true, s->semanticTypeCount) \
    _(maxPlanes, uint32_t, PLAIN) \
    _(minArea, float, PLAIN) \
    _(boundingBoxPose, XrPosef, PLAIN) \
    _(boundingBoxExtent, XrExtent3DfEXT, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorGetInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorLocationEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(planeId, uint64_t, PLAIN) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(extents, XrExtent2Df, PLAIN) \
    _(orientation, XrPlaneDetectorOrientationEXT, PLAIN) \
    _(semanticType, XrPlaneDetectorSemanticTypeEXT, PLAIN) \
    _(polygonBufferCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorLocationsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(planeLocationCapacityInput, uint32_t, PLAIN) \
    _(planeLocationCountOutput, uint32_t, PLAIN) \
    _(planeLocations, XrPlaneDetectorLocationEXT*, POINTER, false, s->planeLocationCapacityInput) 
#define XRT_ENUMERATE_XrPlaneDetectorPolygonBufferEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrPlaneDetectorCreateInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrPlaneDetectorFlagsEXT, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorBeginInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(orientationCount, uint32_t, PLAIN) \
    _(orientations, const XrPlaneDetectorOrientationEXT*, POINTER, true, s->orientationCount) \
    _(semanticTypeCount, uint32_t, PLAIN) \
    _(semanticTypes, const XrPlaneDetectorSemanticTypeEXT*, POINTER, true, s->semanticTypeCount) \
    _(maxPlanes, uint32_t, PLAIN) \
    _(minArea, float, PLAIN) \
    _(boundingBoxPose, XrPosef, PLAIN) \
    _(boundingBoxExtent, XrExtent3DfEXT, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorGetInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorLocationsEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(planeLocationCapacityInput, uint32_t, PLAIN) \
    _(planeLocationCountOutput, uint32_t, PLAIN) \
    _(planeLocations, XrPlaneDetectorLocationEXT*, POINTER, false, s->planeLocationCapacityInput) 
#define XRT_ENUMERATE_XrPlaneDetectorLocationEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(planeId, uint64_t, PLAIN) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(extents, XrExtent2Df, PLAIN) \
    _(orientation, XrPlaneDetectorOrientationEXT, PLAIN) \
    _(semanticType, XrPlaneDetectorSemanticTypeEXT, PLAIN) \
    _(polygonBufferCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrPlaneDetectorPolygonBufferEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(vertexCapacityInput, uint32_t, PLAIN) \
    _(vertexCountOutput, uint32_t, PLAIN) \
    _(vertices, XrVector2f*, POINTER, false, s->vertexCapacityInput) 
#define XRT_ENUMERATE_XrSystemPlaneDetectionPropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportedFeatures, XrPlaneDetectionCapabilityFlagsEXT, PLAIN) 
#define XRT_ENUMERATE_XrFutureCancelInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(future, XrFutureEXT, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(future, XrFutureEXT, PLAIN) 
#define XRT_ENUMERATE_XrFutureCompletionBaseHeaderEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrFutureCompletionEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollResultEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(state, XrFutureStateEXT, PLAIN) 
#define XRT_ENUMERATE_XrFutureCancelInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(future, XrFutureEXT, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollInfoEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(future, XrFutureEXT, PLAIN) 
#define XRT_ENUMERATE_XrFutureCompletionEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrFuturePollResultEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(state, XrFutureStateEXT, PLAIN) 
#define XRT_ENUMERATE_XrEventDataUserPresenceChangedEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(isUserPresent, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemUserPresencePropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsUserPresence, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrEventDataUserPresenceChangedEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(isUserPresent, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemUserPresencePropertiesEXT(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsUserPresence, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemNotificationsSetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(suppressNotifications, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemNotificationsSetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(suppressNotifications, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshDetectorCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrWorldMeshBlockStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(meshBoundingBoxCenter, XrPosef, PLAIN) \
    _(meshBoundingBoxExtents, XrExtent3DfEXT, PLAIN) \
    _(lastUpdateTime, XrTime, PLAIN) \
    _(status, XrWorldMeshBlockStatusML, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshStateRequestInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(boundingBoxCenter, XrPosef, PLAIN) \
    _(boundingBoxExtents, XrExtent3DfEXT, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshStateRequestCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(timestamp, XrTime, PLAIN) \
    _(meshBlockStateCapacityInput, uint32_t, PLAIN) \
    _(meshBlockStateCountOutput, uint32_t, PLAIN) \
    _(meshBlockStates, XrWorldMeshBlockStateML*, POINTER, false, s->meshBlockStateCapacityInput) 
#define XRT_ENUMERATE_XrWorldMeshBufferRecommendedSizeInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(maxBlockCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshBufferSizeML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(size, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshBufferML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, void*, POINTER, false, s->bufferSize) 
#define XRT_ENUMERATE_XrWorldMeshBlockRequestML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(lod, XrWorldMeshDetectorLodML, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshGetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrWorldMeshDetectorFlagsML, PLAIN) \
    _(fillHoleLength, float, PLAIN) \
    _(disconnectedComponentArea, float, PLAIN) \
    _(blockCount, uint32_t, PLAIN) \
    _(blocks, XrWorldMeshBlockRequestML*, POINTER, false, s->blockCount) 
#define XRT_ENUMERATE_XrWorldMeshBlockML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(blockResult, XrWorldMeshBlockResultML, PLAIN) \
    _(lod, XrWorldMeshDetectorLodML, PLAIN) \
    _(flags, XrWorldMeshDetectorFlagsML, PLAIN) \
    _(indexCount, uint32_t, PLAIN) \
    _(indexBuffer, uint16_t*, POINTER, false, s->indexCount) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertexBuffer, XrVector3f*, POINTER, false, s->vertexCount) \
    _(normalCount, uint32_t, PLAIN) \
    _(normalBuffer, XrVector3f*, POINTER, false, s->normalCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidenceBuffer, float*, POINTER, false, s->confidenceCount) 
#define XRT_ENUMERATE_XrWorldMeshRequestCompletionInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(meshSpace, XrSpace, PLAIN) \
    _(meshSpaceLocateTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshRequestCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(blockCount, uint32_t, PLAIN) \
    _(blocks, XrWorldMeshBlockML*, POINTER, false, s->blockCount) 
#define XRT_ENUMERATE_XrWorldMeshDetectorCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrWorldMeshStateRequestInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(boundingBoxCenter, XrPosef, PLAIN) \
    _(boundingBoxExtents, XrExtent3DfEXT, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshBlockStateML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(meshBoundingBoxCenter, XrPosef, PLAIN) \
    _(meshBoundingBoxExtents, XrExtent3DfEXT, PLAIN) \
    _(lastUpdateTime, XrTime, PLAIN) \
    _(status, XrWorldMeshBlockStatusML, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshStateRequestCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(timestamp, XrTime, PLAIN) \
    _(meshBlockStateCapacityInput, uint32_t, PLAIN) \
    _(meshBlockStateCountOutput, uint32_t, PLAIN) \
    _(meshBlockStates, XrWorldMeshBlockStateML*, POINTER, false, s->meshBlockStateCapacityInput) 
#define XRT_ENUMERATE_XrWorldMeshBufferRecommendedSizeInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(maxBlockCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshBufferSizeML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(size, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshBufferML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, void*, POINTER, false, s->bufferSize) 
#define XRT_ENUMERATE_XrWorldMeshBlockRequestML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(lod, XrWorldMeshDetectorLodML, PLAIN) 
#define XRT_ENUMERATE_XrWorldMeshGetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(flags, XrWorldMeshDetectorFlagsML, PLAIN) \
    _(fillHoleLength, float, PLAIN) \
    _(disconnectedComponentArea, float, PLAIN) \
    _(blockCount, uint32_t, PLAIN) \
    _(blocks, XrWorldMeshBlockRequestML*, POINTER, false, s->blockCount) 
#define XRT_ENUMERATE_XrWorldMeshBlockML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(uuid, XrUuidEXT, PLAIN) \
    _(blockResult, XrWorldMeshBlockResultML, PLAIN) \
    _(lod, XrWorldMeshDetectorLodML, PLAIN) \
    _(flags, XrWorldMeshDetectorFlagsML, PLAIN) \
    _(indexCount, uint32_t, PLAIN) \
    _(indexBuffer, uint16_t*, POINTER, false, s->indexCount) \
    _(vertexCount, uint32_t, PLAIN) \
    _(vertexBuffer, XrVector3f*, POINTER, false, s->vertexCount) \
    _(normalCount, uint32_t, PLAIN) \
    _(normalBuffer, XrVector3f*, POINTER, false, s->normalCount) \
    _(confidenceCount, uint32_t, PLAIN) \
    _(confidenceBuffer, float*, POINTER, false, s->confidenceCount) 
#define XRT_ENUMERATE_XrWorldMeshRequestCompletionML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(futureResult, XrResult, PLAIN) \
    _(blockCount, uint32_t, PLAIN) \
    _(blocks, XrWorldMeshBlockML*, POINTER, false, s->blockCount) 
#define XRT_ENUMERATE_XrWorldMeshRequestCompletionInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(meshSpace, XrSpace, PLAIN) \
    _(meshSpaceLocateTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemFacialExpressionPropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFacialExpression, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFacialExpressionClientCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedCount, uint32_t, PLAIN) \
    _(requestedFacialBlendShapes, const XrFacialBlendShapeML*, POINTER, true, s->requestedCount) 
#define XRT_ENUMERATE_XrFacialExpressionBlendShapeGetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrFacialExpressionBlendShapePropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(requestedFacialBlendShape, XrFacialBlendShapeML, PLAIN) \
    _(weight, float, PLAIN) \
    _(flags, XrFacialExpressionBlendShapePropertiesFlagsML, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemFacialExpressionPropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsFacialExpression, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFacialExpressionClientCreateInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestedCount, uint32_t, PLAIN) \
    _(requestedFacialBlendShapes, const XrFacialBlendShapeML*, POINTER, true, s->requestedCount) 
#define XRT_ENUMERATE_XrFacialExpressionBlendShapeGetInfoML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrFacialExpressionBlendShapePropertiesML(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(requestedFacialBlendShape, XrFacialBlendShapeML, PLAIN) \
    _(weight, float, PLAIN) \
    _(flags, XrFacialExpressionBlendShapePropertiesFlagsML, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrSystemSimultaneousHandsAndControllersPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSimultaneousHandsAndControllers, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSimultaneousHandsAndControllersTrackingResumeInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSimultaneousHandsAndControllersTrackingPauseInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSystemSimultaneousHandsAndControllersPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSimultaneousHandsAndControllers, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSimultaneousHandsAndControllersTrackingResumeInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSimultaneousHandsAndControllersTrackingPauseInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrColocationDiscoveryStartInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrColocationDiscoveryStopInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrColocationAdvertisementStartInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferSize) 
#define XRT_ENUMERATE_XrColocationAdvertisementStopInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEventDataStartColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(advertisementRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(advertisementUuid, XrUuid, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStopColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(advertisementRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStartColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataColocationDiscoveryResultMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(advertisementUuid, XrUuid, PLAIN) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, uint8_t[XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META], ARRAY, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META) 
#define XRT_ENUMERATE_XrEventDataColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStopColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSystemColocationDiscoveryPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsColocationDiscovery, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrColocationDiscoveryStartInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrColocationDiscoveryStopInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrColocationAdvertisementStartInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, uint8_t*, POINTER, false, s->bufferSize) 
#define XRT_ENUMERATE_XrColocationAdvertisementStopInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEventDataStartColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(advertisementRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) \
    _(advertisementUuid, XrUuid, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStopColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataColocationAdvertisementCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(advertisementRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStartColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataColocationDiscoveryResultMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(advertisementUuid, XrUuid, PLAIN) \
    _(bufferSize, uint32_t, PLAIN) \
    _(buffer, uint8_t[XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META], ARRAY, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META) 
#define XRT_ENUMERATE_XrEventDataColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(discoveryRequestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrEventDataStopColocationDiscoveryCompleteMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(requestId, XrAsyncRequestIdFB, PLAIN) \
    _(result, XrResult, PLAIN) 
#define XRT_ENUMERATE_XrSystemColocationDiscoveryPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsColocationDiscovery, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialEntityGroupSharingPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialEntityGroupSharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrShareSpacesRecipientGroupsMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(groupCount, uint32_t, PLAIN) \
    _(groups, XrUuid*, POINTER, false, s->groupCount) 
#define XRT_ENUMERATE_XrSpaceGroupUuidFilterInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(groupUuid, XrUuid, PLAIN) 
#define XRT_ENUMERATE_XrShareSpacesRecipientGroupsMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(groupCount, uint32_t, PLAIN) \
    _(groups, XrUuid*, POINTER, false, s->groupCount) 
#define XRT_ENUMERATE_XrSpaceGroupUuidFilterInfoMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(groupUuid, XrUuid, PLAIN) 
#define XRT_ENUMERATE_XrSystemSpatialEntityGroupSharingPropertiesMETA(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(supportsSpatialEntityGroupSharing, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrActionCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(actionName, char[XR_MAX_ACTION_NAME_SIZE], ARRAY, XR_MAX_ACTION_NAME_SIZE) \
    _(actionType, XrActionType, PLAIN) \
    _(countSubactionPaths, uint32_t, PLAIN) \
    _(subactionPaths, const XrPath*, POINTER, true, s->countSubactionPaths) \
    _(localizedActionName, char[XR_MAX_LOCALIZED_ACTION_NAME_SIZE], ARRAY, XR_MAX_LOCALIZED_ACTION_NAME_SIZE) 
#define XRT_ENUMERATE_XrActionSetCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(actionSetName, char[XR_MAX_ACTION_SET_NAME_SIZE], ARRAY, XR_MAX_ACTION_SET_NAME_SIZE) \
    _(localizedActionSetName, char[XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE], ARRAY, XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE) \
    _(priority, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrActionSpaceCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) \
    _(subactionPath, XrPath, PLAIN) \
    _(poseInActionSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrActionStateBoolean(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(currentState, XrBool32, PLAIN) \
    _(changedSinceLastSync, XrBool32, PLAIN) \
    _(lastChangeTime, XrTime, PLAIN) \
    _(isActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrActionStateFloat(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(currentState, float, PLAIN) \
    _(changedSinceLastSync, XrBool32, PLAIN) \
    _(lastChangeTime, XrTime, PLAIN) \
    _(isActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrActionStateGetInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) \
    _(subactionPath, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrActionStatePose(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(isActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrActionStateVector2f(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(currentState, XrVector2f, PLAIN) \
    _(changedSinceLastSync, XrBool32, PLAIN) \
    _(lastChangeTime, XrTime, PLAIN) \
    _(isActive, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrActionSuggestedBinding(_) \
    _(action, XrAction, PLAIN) \
    _(binding, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrActionsSyncInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(countActiveActionSets, uint32_t, PLAIN) \
    _(activeActionSets, const XrActiveActionSet*, POINTER, true, s->countActiveActionSets) 
#define XRT_ENUMERATE_XrActiveActionSet(_) \
    _(actionSet, XrActionSet, PLAIN) \
    _(subactionPath, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrApiLayerProperties(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(layerName, char[XR_MAX_API_LAYER_NAME_SIZE], ARRAY, XR_MAX_API_LAYER_NAME_SIZE) \
    _(specVersion, XrVersion, PLAIN) \
    _(layerVersion, uint32_t, PLAIN) \
    _(description, char[XR_MAX_API_LAYER_DESCRIPTION_SIZE], ARRAY, XR_MAX_API_LAYER_DESCRIPTION_SIZE) 
#define XRT_ENUMERATE_XrApplicationInfo(_) \
    _(applicationName, char[XR_MAX_APPLICATION_NAME_SIZE], ARRAY, XR_MAX_APPLICATION_NAME_SIZE) \
    _(applicationVersion, uint32_t, PLAIN) \
    _(engineName, char[XR_MAX_ENGINE_NAME_SIZE], ARRAY, XR_MAX_ENGINE_NAME_SIZE) \
    _(engineVersion, uint32_t, PLAIN) \
    _(apiVersion, XrVersion, PLAIN) 
#define XRT_ENUMERATE_XrBodySkeletonJointHTC(_) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrBoundSourcesForActionEnumerateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) 
#define XRT_ENUMERATE_XrBoxf(_) \
    _(center, XrPosef, PLAIN) \
    _(extents, XrExtent3Df, PLAIN) 
#define XRT_ENUMERATE_XrColor3f(_) \
    _(r, float, PLAIN) \
    _(g, float, PLAIN) \
    _(b, float, PLAIN) 
#define XRT_ENUMERATE_XrColor4f(_) \
    _(r, float, PLAIN) \
    _(g, float, PLAIN) \
    _(b, float, PLAIN) \
    _(a, float, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerBaseHeader(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerProjection(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(viewCount, uint32_t, PLAIN) \
    _(views, const XrCompositionLayerProjectionView*, POINTER, true, s->viewCount) 
#define XRT_ENUMERATE_XrCompositionLayerProjectionView(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(pose, XrPosef, PLAIN) \
    _(fov, XrFovf, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) 
#define XRT_ENUMERATE_XrCompositionLayerQuad(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(layerFlags, XrCompositionLayerFlags, PLAIN) \
    _(space, XrSpace, PLAIN) \
    _(eyeVisibility, XrEyeVisibility, PLAIN) \
    _(subImage, XrSwapchainSubImage, PLAIN) \
    _(pose, XrPosef, PLAIN) \
    _(size, XrExtent2Df, PLAIN) 
#define XRT_ENUMERATE_XrEventDataBaseHeader(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrEventDataBuffer(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(varying, uint8_t[4000], ARRAY, 4000) 
#define XRT_ENUMERATE_XrEventDataEventsLost(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(lostEventCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrEventDataInstanceLossPending(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(lossTime, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrEventDataInteractionProfileChanged(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) 
#define XRT_ENUMERATE_XrEventDataReferenceSpaceChangePending(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(referenceSpaceType, XrReferenceSpaceType, PLAIN) \
    _(changeTime, XrTime, PLAIN) \
    _(poseValid, XrBool32, PLAIN) \
    _(poseInPreviousSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrEventDataSessionStateChanged(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(session, XrSession, PLAIN) \
    _(state, XrSessionState, PLAIN) \
    _(time, XrTime, PLAIN) 
#define XRT_ENUMERATE_XrExtensionProperties(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(extensionName, char[XR_MAX_EXTENSION_NAME_SIZE], ARRAY, XR_MAX_EXTENSION_NAME_SIZE) \
    _(extensionVersion, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrExtent2Df(_) \
    _(width, float, PLAIN) \
    _(height, float, PLAIN) 
#define XRT_ENUMERATE_XrExtent2Di(_) \
    _(width, int32_t, PLAIN) \
    _(height, int32_t, PLAIN) 
#define XRT_ENUMERATE_XrExtent3Df(_) \
    _(width, float, PLAIN) \
    _(height, float, PLAIN) \
    _(depth, float, PLAIN) 
#define XRT_ENUMERATE_XrFovf(_) \
    _(angleLeft, float, PLAIN) \
    _(angleRight, float, PLAIN) \
    _(angleUp, float, PLAIN) \
    _(angleDown, float, PLAIN) 
#define XRT_ENUMERATE_XrFrameBeginInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrFrameEndInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(displayTime, XrTime, PLAIN) \
    _(environmentBlendMode, XrEnvironmentBlendMode, PLAIN) \
    _(layerCount, uint32_t, PLAIN) \
    _(layers, const XrCompositionLayerBaseHeader* const*, XR) 
#define XRT_ENUMERATE_XrFrameState(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(predictedDisplayTime, XrTime, PLAIN) \
    _(predictedDisplayPeriod, XrDuration, PLAIN) \
    _(shouldRender, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrFrameWaitInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrFrustumf(_) \
    _(pose, XrPosef, PLAIN) \
    _(fov, XrFovf, PLAIN) \
    _(nearZ, float, PLAIN) \
    _(farZ, float, PLAIN) 
#define XRT_ENUMERATE_XrHapticActionInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(action, XrAction, PLAIN) \
    _(subactionPath, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrHapticBaseHeader(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrHapticVibration(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(duration, XrDuration, PLAIN) \
    _(frequency, float, PLAIN) \
    _(amplitude, float, PLAIN) 
#define XRT_ENUMERATE_XrInputSourceLocalizedNameGetInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(sourcePath, XrPath, PLAIN) \
    _(whichComponents, XrInputSourceLocalizedNameFlags, PLAIN) 
#define XRT_ENUMERATE_XrInstanceCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrInstanceCreateFlags, PLAIN) \
    _(applicationInfo, XrApplicationInfo, PLAIN) \
    _(enabledApiLayerCount, uint32_t, PLAIN) \
    _(enabledApiLayerNames, const char* const*, POINTER, true, s->enabledApiLayerCount,null-terminated) \
    _(enabledExtensionCount, uint32_t, PLAIN) \
    _(enabledExtensionNames, const char* const*, POINTER, true, s->enabledExtensionCount,null-terminated) 
#define XRT_ENUMERATE_XrInstanceProperties(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(runtimeVersion, XrVersion, PLAIN) \
    _(runtimeName, char[XR_MAX_RUNTIME_NAME_SIZE], ARRAY, XR_MAX_RUNTIME_NAME_SIZE) 
#define XRT_ENUMERATE_XrInteractionProfileState(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(interactionProfile, XrPath, PLAIN) 
#define XRT_ENUMERATE_XrInteractionProfileSuggestedBinding(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(interactionProfile, XrPath, PLAIN) \
    _(countSuggestedBindings, uint32_t, PLAIN) \
    _(suggestedBindings, const XrActionSuggestedBinding*, POINTER, true, s->countSuggestedBindings) 
#define XRT_ENUMERATE_XrOffset2Df(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) 
#define XRT_ENUMERATE_XrOffset2Di(_) \
    _(x, int32_t, PLAIN) \
    _(y, int32_t, PLAIN) 
#define XRT_ENUMERATE_XrPosef(_) \
    _(orientation, XrQuaternionf, PLAIN) \
    _(position, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrQuaternionf(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) \
    _(z, float, PLAIN) \
    _(w, float, PLAIN) 
#define XRT_ENUMERATE_XrRect2Df(_) \
    _(offset, XrOffset2Df, PLAIN) \
    _(extent, XrExtent2Df, PLAIN) 
#define XRT_ENUMERATE_XrRect2Di(_) \
    _(offset, XrOffset2Di, PLAIN) \
    _(extent, XrExtent2Di, PLAIN) 
#define XRT_ENUMERATE_XrReferenceSpaceCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(referenceSpaceType, XrReferenceSpaceType, PLAIN) \
    _(poseInReferenceSpace, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSessionActionSetsAttachInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(countActionSets, uint32_t, PLAIN) \
    _(actionSets, const XrActionSet*, POINTER, true, s->countActionSets) 
#define XRT_ENUMERATE_XrSessionBeginInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(primaryViewConfigurationType, XrViewConfigurationType, PLAIN) 
#define XRT_ENUMERATE_XrSessionCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrSessionCreateFlags, PLAIN) \
    _(systemId, XrSystemId, PLAIN) 
#define XRT_ENUMERATE_XrSpaceLocation(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSpaceLocationData(_) \
    _(locationFlags, XrSpaceLocationFlags, PLAIN) \
    _(pose, XrPosef, PLAIN) 
#define XRT_ENUMERATE_XrSpaceLocations(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(locationCount, uint32_t, PLAIN) \
    _(locations, XrSpaceLocationData*, POINTER, false, s->locationCount) 
#define XRT_ENUMERATE_XrSpaceVelocities(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(velocityCount, uint32_t, PLAIN) \
    _(velocities, XrSpaceVelocityData*, POINTER, false, s->velocityCount) 
#define XRT_ENUMERATE_XrSpaceVelocity(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(velocityFlags, XrSpaceVelocityFlags, PLAIN) \
    _(linearVelocity, XrVector3f, PLAIN) \
    _(angularVelocity, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrSpaceVelocityData(_) \
    _(velocityFlags, XrSpaceVelocityFlags, PLAIN) \
    _(linearVelocity, XrVector3f, PLAIN) \
    _(angularVelocity, XrVector3f, PLAIN) 
#define XRT_ENUMERATE_XrSpacesLocateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(baseSpace, XrSpace, PLAIN) \
    _(time, XrTime, PLAIN) \
    _(spaceCount, uint32_t, PLAIN) \
    _(spaces, const XrSpace*, POINTER, true, s->spaceCount) 
#define XRT_ENUMERATE_XrSpheref(_) \
    _(center, XrPosef, PLAIN) \
    _(radius, float, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainCreateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(createFlags, XrSwapchainCreateFlags, PLAIN) \
    _(usageFlags, XrSwapchainUsageFlags, PLAIN) \
    _(format, int64_t, PLAIN) \
    _(sampleCount, uint32_t, PLAIN) \
    _(width, uint32_t, PLAIN) \
    _(height, uint32_t, PLAIN) \
    _(faceCount, uint32_t, PLAIN) \
    _(arraySize, uint32_t, PLAIN) \
    _(mipCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainImageAcquireInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSwapchainImageBaseHeader(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) 
#define XRT_ENUMERATE_XrSwapchainImageReleaseInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) 
#define XRT_ENUMERATE_XrSwapchainImageWaitInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(timeout, XrDuration, PLAIN) 
#define XRT_ENUMERATE_XrSwapchainSubImage(_) \
    _(swapchain, XrSwapchain, PLAIN) \
    _(imageRect, XrRect2Di, PLAIN) \
    _(imageArrayIndex, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSystemGetInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(formFactor, XrFormFactor, PLAIN) 
#define XRT_ENUMERATE_XrSystemGraphicsProperties(_) \
    _(maxSwapchainImageHeight, uint32_t, PLAIN) \
    _(maxSwapchainImageWidth, uint32_t, PLAIN) \
    _(maxLayerCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrSystemProperties(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(systemId, XrSystemId, PLAIN) \
    _(vendorId, uint32_t, PLAIN) \
    _(systemName, char[XR_MAX_SYSTEM_NAME_SIZE], ARRAY, XR_MAX_SYSTEM_NAME_SIZE) \
    _(graphicsProperties, XrSystemGraphicsProperties, PLAIN) \
    _(trackingProperties, XrSystemTrackingProperties, PLAIN) 
#define XRT_ENUMERATE_XrSystemTrackingProperties(_) \
    _(orientationTracking, XrBool32, PLAIN) \
    _(positionTracking, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrUuid(_) \
    _(data, uint8_t[XR_UUID_SIZE], ARRAY, XR_UUID_SIZE) 
#define XRT_ENUMERATE_XrVector2f(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) 
#define XRT_ENUMERATE_XrVector3f(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) \
    _(z, float, PLAIN) 
#define XRT_ENUMERATE_XrVector4f(_) \
    _(x, float, PLAIN) \
    _(y, float, PLAIN) \
    _(z, float, PLAIN) \
    _(w, float, PLAIN) 
#define XRT_ENUMERATE_XrView(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(pose, XrPosef, PLAIN) \
    _(fov, XrFovf, PLAIN) 
#define XRT_ENUMERATE_XrViewConfigurationProperties(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(fovMutable, XrBool32, PLAIN) 
#define XRT_ENUMERATE_XrViewConfigurationView(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(recommendedImageRectWidth, uint32_t, PLAIN) \
    _(maxImageRectWidth, uint32_t, PLAIN) \
    _(recommendedImageRectHeight, uint32_t, PLAIN) \
    _(maxImageRectHeight, uint32_t, PLAIN) \
    _(recommendedSwapchainSampleCount, uint32_t, PLAIN) \
    _(maxSwapchainSampleCount, uint32_t, PLAIN) 
#define XRT_ENUMERATE_XrViewLocateInfo(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, const void*, XR) \
    _(viewConfigurationType, XrViewConfigurationType, PLAIN) \
    _(displayTime, XrTime, PLAIN) \
    _(space, XrSpace, PLAIN) 
#define XRT_ENUMERATE_XrViewState(_) \
    _(type, XrStructureType, PLAIN) \
    _(next, void*, XR) \
    _(viewStateFlags, XrViewStateFlags, PLAIN) 

#endif // XRT_REFLECTION_STRUCT_H