













#ifndef XRTRANSPORT_DESERIALIZER_GENERATED_H
#define XRTRANSPORT_DESERIALIZER_GENERATED_H

#include "openxr/openxr.h"

#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <cassert>
#include <cstring>

namespace xrtransport {

// Forward declarations (deserializers)

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube


static void deserialize(XrCompositionLayerCubeKHR* s, std::istream& in);




static void deserialize(XrCompositionLayerCubeKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance


static void deserialize(XrInstanceCreateInfoAndroidKHR* s, std::istream& in);




static void deserialize(XrInstanceCreateInfoAndroidKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth


static void deserialize(XrCompositionLayerDepthInfoKHR* s, std::istream& in);




static void deserialize(XrCompositionLayerDepthInfoKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list


static void deserialize(XrVulkanSwapchainFormatListCreateInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanSwapchainFormatListCreateInfoKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings


static void deserialize(XrEventDataPerfSettingsEXT* s, std::istream& in);




static void deserialize(XrEventDataPerfSettingsEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder


static void deserialize(XrCompositionLayerCylinderKHR* s, std::istream& in);




static void deserialize(XrCompositionLayerCylinderKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect


static void deserialize(XrCompositionLayerEquirectKHR* s, std::istream& in);




static void deserialize(XrCompositionLayerEquirectKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils


static void deserialize(XrDebugUtilsObjectNameInfoEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsLabelEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsMessengerCallbackDataEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsMessengerCreateInfoEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsObjectNameInfoEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsMessengerCallbackDataEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsMessengerCreateInfoEXT* s, std::istream& in);




static void deserialize(XrDebugUtilsLabelEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable


static void deserialize(XrGraphicsBindingOpenGLWin32KHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLXlibKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLXcbKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLWaylandKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageOpenGLKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsOpenGLKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLWin32KHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLXlibKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLXcbKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLWaylandKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageOpenGLKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsOpenGLKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable


static void deserialize(XrGraphicsBindingOpenGLESAndroidKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageOpenGLESKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsOpenGLESKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingOpenGLESAndroidKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageOpenGLESKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsOpenGLESKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable


static void deserialize(XrGraphicsBindingVulkanKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageVulkanKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsVulkanKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingVulkanKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageVulkanKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsVulkanKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable


static void deserialize(XrGraphicsBindingD3D11KHR* s, std::istream& in);




static void deserialize(XrSwapchainImageD3D11KHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsD3D11KHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingD3D11KHR* s, std::istream& in);




static void deserialize(XrSwapchainImageD3D11KHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsD3D11KHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable


static void deserialize(XrGraphicsBindingD3D12KHR* s, std::istream& in);




static void deserialize(XrSwapchainImageD3D12KHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsD3D12KHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingD3D12KHR* s, std::istream& in);




static void deserialize(XrSwapchainImageD3D12KHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsD3D12KHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable


static void deserialize(XrGraphicsBindingMetalKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageMetalKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsMetalKHR* s, std::istream& in);




static void deserialize(XrGraphicsBindingMetalKHR* s, std::istream& in);




static void deserialize(XrSwapchainImageMetalKHR* s, std::istream& in);




static void deserialize(XrGraphicsRequirementsMetalKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction


static void deserialize(XrSystemEyeGazeInteractionPropertiesEXT* s, std::istream& in);




static void deserialize(XrEyeGazeSampleTimeEXT* s, std::istream& in);




static void deserialize(XrSystemEyeGazeInteractionPropertiesEXT* s, std::istream& in);




static void deserialize(XrEyeGazeSampleTimeEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask


static void deserialize(XrVisibilityMaskKHR* s, std::istream& in);




static void deserialize(XrEventDataVisibilityMaskChangedKHR* s, std::istream& in);




static void deserialize(XrVisibilityMaskKHR* s, std::istream& in);




static void deserialize(XrEventDataVisibilityMaskChangedKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay


static void deserialize(XrSessionCreateInfoOverlayEXTX* s, std::istream& in);




static void deserialize(XrEventDataMainSessionVisibilityChangedEXTX* s, std::istream& in);




static void deserialize(XrSessionCreateInfoOverlayEXTX* s, std::istream& in);




static void deserialize(XrEventDataMainSessionVisibilityChangedEXTX* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias


static void deserialize(XrCompositionLayerColorScaleBiasKHR* s, std::istream& in);




static void deserialize(XrCompositionLayerColorScaleBiasKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor


static void deserialize(XrSpatialAnchorCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialAnchorSpaceCreateInfoMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout


static void deserialize(XrCompositionLayerImageLayoutFB* s, std::istream& in);




static void deserialize(XrCompositionLayerImageLayoutFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend


static void deserialize(XrCompositionLayerAlphaBlendFB* s, std::istream& in);




static void deserialize(XrCompositionLayerAlphaBlendFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range


static void deserialize(XrViewConfigurationDepthRangeEXT* s, std::istream& in);




static void deserialize(XrViewConfigurationDepthRangeEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable


static void deserialize(XrGraphicsBindingEGLMNDX* s, std::istream& in);




static void deserialize(XrGraphicsBindingEGLMNDX* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge


static void deserialize(XrSpatialGraphNodeSpaceCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphNodeBindingPropertiesMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphNodeSpaceCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialGraphNodeBindingPropertiesMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking


static void deserialize(XrSystemHandTrackingPropertiesEXT* s, std::istream& in);




static void deserialize(XrHandTrackerCreateInfoEXT* s, std::istream& in);




static void deserialize(XrHandJointsLocateInfoEXT* s, std::istream& in);




static void deserialize(XrHandJointLocationEXT* s, std::istream& in);




static void deserialize(XrHandJointVelocityEXT* s, std::istream& in);




static void deserialize(XrHandJointLocationsEXT* s, std::istream& in);




static void deserialize(XrHandJointVelocitiesEXT* s, std::istream& in);




static void deserialize(XrSystemHandTrackingPropertiesEXT* s, std::istream& in);




static void deserialize(XrHandTrackerCreateInfoEXT* s, std::istream& in);




static void deserialize(XrHandJointsLocateInfoEXT* s, std::istream& in);




static void deserialize(XrHandJointLocationsEXT* s, std::istream& in);




static void deserialize(XrHandJointVelocitiesEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh


static void deserialize(XrSystemHandTrackingMeshPropertiesMSFT* s, std::istream& in);




static void deserialize(XrHandMeshSpaceCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrHandMeshUpdateInfoMSFT* s, std::istream& in);




static void deserialize(XrHandMeshMSFT* s, std::istream& in);




static void deserialize(XrHandMeshIndexBufferMSFT* s, std::istream& in);




static void deserialize(XrHandMeshVertexBufferMSFT* s, std::istream& in);




static void deserialize(XrHandMeshVertexMSFT* s, std::istream& in);




static void deserialize(XrHandPoseTypeInfoMSFT* s, std::istream& in);




static void deserialize(XrSystemHandTrackingMeshPropertiesMSFT* s, std::istream& in);




static void deserialize(XrHandMeshSpaceCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrHandMeshUpdateInfoMSFT* s, std::istream& in);




static void deserialize(XrHandMeshMSFT* s, std::istream& in);




static void deserialize(XrHandPoseTypeInfoMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration


static void deserialize(XrSecondaryViewConfigurationSessionBeginInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationStateMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationFrameStateMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationFrameEndInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationLayerInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationSessionBeginInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationStateMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationFrameStateMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationFrameEndInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationLayerInfoMSFT* s, std::istream& in);




static void deserialize(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model


static void deserialize(XrControllerModelKeyStateMSFT* s, std::istream& in);




static void deserialize(XrControllerModelNodePropertiesMSFT* s, std::istream& in);




static void deserialize(XrControllerModelPropertiesMSFT* s, std::istream& in);




static void deserialize(XrControllerModelNodeStateMSFT* s, std::istream& in);




static void deserialize(XrControllerModelStateMSFT* s, std::istream& in);




static void deserialize(XrControllerModelKeyStateMSFT* s, std::istream& in);




static void deserialize(XrControllerModelNodePropertiesMSFT* s, std::istream& in);




static void deserialize(XrControllerModelPropertiesMSFT* s, std::istream& in);




static void deserialize(XrControllerModelNodeStateMSFT* s, std::istream& in);




static void deserialize(XrControllerModelStateMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov


static void deserialize(XrViewConfigurationViewFovEPIC* s, std::istream& in);




static void deserialize(XrViewConfigurationViewFovEPIC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment


static void deserialize(XrHolographicWindowAttachmentMSFT* s, std::istream& in);




static void deserialize(XrHolographicWindowAttachmentMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection


static void deserialize(XrCompositionLayerReprojectionInfoMSFT* s, std::istream& in);




static void deserialize(XrCompositionLayerReprojectionPlaneOverrideMSFT* s, std::istream& in);




static void deserialize(XrCompositionLayerReprojectionInfoMSFT* s, std::istream& in);




static void deserialize(XrCompositionLayerReprojectionPlaneOverrideMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create


static void deserialize(XrAndroidSurfaceSwapchainCreateInfoFB* s, std::istream& in);




static void deserialize(XrAndroidSurfaceSwapchainCreateInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state


static void deserialize(XrSwapchainStateBaseHeaderFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content


static void deserialize(XrCompositionLayerSecureContentFB* s, std::istream& in);




static void deserialize(XrCompositionLayerSecureContentFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking


static void deserialize(XrBodyJointLocationFB* s, std::istream& in);




static void deserialize(XrSystemBodyTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrBodySkeletonJointFB* s, std::istream& in);




static void deserialize(XrBodySkeletonFB* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoFB* s, std::istream& in);




static void deserialize(XrBodyJointLocationsFB* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoFB* s, std::istream& in);




static void deserialize(XrSystemBodyTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrBodyJointLocationsFB* s, std::istream& in);




static void deserialize(XrBodySkeletonFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding


static void deserialize(XrInteractionProfileDpadBindingEXT* s, std::istream& in);




static void deserialize(XrInteractionProfileDpadBindingEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold


static void deserialize(XrInteractionProfileAnalogThresholdVALVE* s, std::istream& in);




static void deserialize(XrInteractionProfileAnalogThresholdVALVE* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range


static void deserialize(XrHandJointsMotionRangeInfoEXT* s, std::istream& in);




static void deserialize(XrHandJointsMotionRangeInfoEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init


static void deserialize(XrLoaderInitInfoBaseHeaderKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android


static void deserialize(XrLoaderInitInfoAndroidKHR* s, std::istream& in);




static void deserialize(XrLoaderInitInfoAndroidKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2


static void deserialize(XrVulkanInstanceCreateInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanDeviceCreateInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanGraphicsDeviceGetInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanInstanceCreateInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanDeviceCreateInfoKHR* s, std::istream& in);




static void deserialize(XrVulkanGraphicsDeviceGetInfoKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2


static void deserialize(XrCompositionLayerEquirect2KHR* s, std::istream& in);




static void deserialize(XrCompositionLayerEquirect2KHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding


static void deserialize(XrUuidMSFT* s, std::istream& in);




static void deserialize(XrSceneObserverCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrNewSceneComputeInfoMSFT* s, std::istream& in);




static void deserialize(XrVisualMeshComputeLodInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneSphereBoundMSFT* s, std::istream& in);




static void deserialize(XrSceneOrientedBoxBoundMSFT* s, std::istream& in);




static void deserialize(XrSceneFrustumBoundMSFT* s, std::istream& in);




static void deserialize(XrSceneBoundsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentLocationMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentLocationsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsLocateInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneObjectMSFT* s, std::istream& in);




static void deserialize(XrSceneObjectsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentParentFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneObjectTypesFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrScenePlaneMSFT* s, std::istream& in);




static void deserialize(XrScenePlanesMSFT* s, std::istream& in);




static void deserialize(XrScenePlaneAlignmentFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshesMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshBuffersGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshBuffersMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshVertexBufferMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshIndicesUint32MSFT* s, std::istream& in);




static void deserialize(XrSceneMeshIndicesUint16MSFT* s, std::istream& in);




static void deserialize(XrSceneObserverCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrNewSceneComputeInfoMSFT* s, std::istream& in);




static void deserialize(XrVisualMeshComputeLodInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentLocationsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentsLocateInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneObjectsMSFT* s, std::istream& in);




static void deserialize(XrSceneComponentParentFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneObjectTypesFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrScenePlanesMSFT* s, std::istream& in);




static void deserialize(XrScenePlaneAlignmentFilterInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshesMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshBuffersGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshBuffersMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshVertexBufferMSFT* s, std::istream& in);




static void deserialize(XrSceneMeshIndicesUint32MSFT* s, std::istream& in);




static void deserialize(XrSceneMeshIndicesUint16MSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization


static void deserialize(XrSerializedSceneFragmentDataGetInfoMSFT* s, std::istream& in);




static void deserialize(XrDeserializeSceneFragmentMSFT* s, std::istream& in);




static void deserialize(XrSceneDeserializeInfoMSFT* s, std::istream& in);




static void deserialize(XrSerializedSceneFragmentDataGetInfoMSFT* s, std::istream& in);




static void deserialize(XrSceneDeserializeInfoMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate


static void deserialize(XrEventDataDisplayRefreshRateChangedFB* s, std::istream& in);




static void deserialize(XrEventDataDisplayRefreshRateChangedFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction


static void deserialize(XrViveTrackerPathsHTCX* s, std::istream& in);




static void deserialize(XrEventDataViveTrackerConnectedHTCX* s, std::istream& in);




static void deserialize(XrViveTrackerPathsHTCX* s, std::istream& in);




static void deserialize(XrEventDataViveTrackerConnectedHTCX* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking


static void deserialize(XrSystemFacialTrackingPropertiesHTC* s, std::istream& in);




static void deserialize(XrFacialExpressionsHTC* s, std::istream& in);




static void deserialize(XrFacialTrackerCreateInfoHTC* s, std::istream& in);




static void deserialize(XrSystemFacialTrackingPropertiesHTC* s, std::istream& in);




static void deserialize(XrFacialTrackerCreateInfoHTC* s, std::istream& in);




static void deserialize(XrFacialExpressionsHTC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space


static void deserialize(XrSystemColorSpacePropertiesFB* s, std::istream& in);




static void deserialize(XrSystemColorSpacePropertiesFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh


static void deserialize(XrVector4sFB* s, std::istream& in);




static void deserialize(XrHandTrackingMeshFB* s, std::istream& in);




static void deserialize(XrHandTrackingScaleFB* s, std::istream& in);




static void deserialize(XrHandTrackingMeshFB* s, std::istream& in);




static void deserialize(XrHandTrackingScaleFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim


static void deserialize(XrHandTrackingAimStateFB* s, std::istream& in);




static void deserialize(XrHandTrackingAimStateFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules


static void deserialize(XrHandCapsuleFB* s, std::istream& in);




static void deserialize(XrHandTrackingCapsulesStateFB* s, std::istream& in);




static void deserialize(XrHandTrackingCapsulesStateFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity


static void deserialize(XrSystemSpatialEntityPropertiesFB* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentStatusSetInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentStatusFB* s, std::istream& in);




static void deserialize(XrEventDataSpatialAnchorCreateCompleteFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceSetStatusCompleteFB* s, std::istream& in);




static void deserialize(XrSystemSpatialEntityPropertiesFB* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentStatusSetInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentStatusFB* s, std::istream& in);




static void deserialize(XrEventDataSpatialAnchorCreateCompleteFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceSetStatusCompleteFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation


static void deserialize(XrFoveationProfileCreateInfoFB* s, std::istream& in);




static void deserialize(XrSwapchainCreateInfoFoveationFB* s, std::istream& in);




static void deserialize(XrSwapchainStateFoveationFB* s, std::istream& in);




static void deserialize(XrFoveationProfileCreateInfoFB* s, std::istream& in);




static void deserialize(XrSwapchainCreateInfoFoveationFB* s, std::istream& in);




static void deserialize(XrSwapchainStateFoveationFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration


static void deserialize(XrFoveationLevelProfileCreateInfoFB* s, std::istream& in);




static void deserialize(XrFoveationLevelProfileCreateInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking


static void deserialize(XrSystemKeyboardTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrKeyboardTrackingDescriptionFB* s, std::istream& in);




static void deserialize(XrKeyboardSpaceCreateInfoFB* s, std::istream& in);




static void deserialize(XrKeyboardTrackingQueryFB* s, std::istream& in);




static void deserialize(XrKeyboardSpaceCreateInfoFB* s, std::istream& in);




static void deserialize(XrKeyboardTrackingQueryFB* s, std::istream& in);




static void deserialize(XrSystemKeyboardTrackingPropertiesFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh


static void deserialize(XrTriangleMeshCreateInfoFB* s, std::istream& in);




static void deserialize(XrTriangleMeshCreateInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough


static void deserialize(XrSystemPassthroughPropertiesFB* s, std::istream& in);




static void deserialize(XrSystemPassthroughProperties2FB* s, std::istream& in);




static void deserialize(XrPassthroughCreateInfoFB* s, std::istream& in);




static void deserialize(XrPassthroughLayerCreateInfoFB* s, std::istream& in);




static void deserialize(XrCompositionLayerPassthroughFB* s, std::istream& in);




static void deserialize(XrGeometryInstanceCreateInfoFB* s, std::istream& in);




static void deserialize(XrGeometryInstanceTransformFB* s, std::istream& in);




static void deserialize(XrPassthroughStyleFB* s, std::istream& in);




static void deserialize(XrPassthroughColorMapMonoToRgbaFB* s, std::istream& in);




static void deserialize(XrPassthroughColorMapMonoToMonoFB* s, std::istream& in);




static void deserialize(XrPassthroughBrightnessContrastSaturationFB* s, std::istream& in);




static void deserialize(XrEventDataPassthroughStateChangedFB* s, std::istream& in);




static void deserialize(XrSystemPassthroughPropertiesFB* s, std::istream& in);




static void deserialize(XrPassthroughCreateInfoFB* s, std::istream& in);




static void deserialize(XrPassthroughLayerCreateInfoFB* s, std::istream& in);




static void deserialize(XrCompositionLayerPassthroughFB* s, std::istream& in);




static void deserialize(XrGeometryInstanceCreateInfoFB* s, std::istream& in);




static void deserialize(XrGeometryInstanceTransformFB* s, std::istream& in);




static void deserialize(XrSystemPassthroughProperties2FB* s, std::istream& in);




static void deserialize(XrPassthroughStyleFB* s, std::istream& in);




static void deserialize(XrPassthroughColorMapMonoToRgbaFB* s, std::istream& in);




static void deserialize(XrPassthroughColorMapMonoToMonoFB* s, std::istream& in);




static void deserialize(XrPassthroughBrightnessContrastSaturationFB* s, std::istream& in);




static void deserialize(XrEventDataPassthroughStateChangedFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model


static void deserialize(XrRenderModelPathInfoFB* s, std::istream& in);




static void deserialize(XrRenderModelPropertiesFB* s, std::istream& in);




static void deserialize(XrRenderModelBufferFB* s, std::istream& in);




static void deserialize(XrRenderModelLoadInfoFB* s, std::istream& in);




static void deserialize(XrSystemRenderModelPropertiesFB* s, std::istream& in);




static void deserialize(XrRenderModelCapabilitiesRequestFB* s, std::istream& in);




static void deserialize(XrRenderModelPathInfoFB* s, std::istream& in);




static void deserialize(XrRenderModelPropertiesFB* s, std::istream& in);




static void deserialize(XrRenderModelBufferFB* s, std::istream& in);




static void deserialize(XrRenderModelLoadInfoFB* s, std::istream& in);




static void deserialize(XrSystemRenderModelPropertiesFB* s, std::istream& in);




static void deserialize(XrRenderModelCapabilitiesRequestFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification


static void deserialize(XrBindingModificationsKHR* s, std::istream& in);




static void deserialize(XrBindingModificationBaseHeaderKHR* s, std::istream& in);




static void deserialize(XrBindingModificationsKHR* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering


static void deserialize(XrViewLocateFoveatedRenderingVARJO* s, std::istream& in);




static void deserialize(XrFoveatedViewConfigurationViewVARJO* s, std::istream& in);




static void deserialize(XrSystemFoveatedRenderingPropertiesVARJO* s, std::istream& in);




static void deserialize(XrViewLocateFoveatedRenderingVARJO* s, std::istream& in);




static void deserialize(XrFoveatedViewConfigurationViewVARJO* s, std::istream& in);




static void deserialize(XrSystemFoveatedRenderingPropertiesVARJO* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test


static void deserialize(XrCompositionLayerDepthTestVARJO* s, std::istream& in);




static void deserialize(XrCompositionLayerDepthTestVARJO* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking


static void deserialize(XrSystemMarkerTrackingPropertiesVARJO* s, std::istream& in);




static void deserialize(XrEventDataMarkerTrackingUpdateVARJO* s, std::istream& in);




static void deserialize(XrMarkerSpaceCreateInfoVARJO* s, std::istream& in);




static void deserialize(XrSystemMarkerTrackingPropertiesVARJO* s, std::istream& in);




static void deserialize(XrEventDataMarkerTrackingUpdateVARJO* s, std::istream& in);




static void deserialize(XrMarkerSpaceCreateInfoVARJO* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info


static void deserialize(XrFrameEndInfoML* s, std::istream& in);




static void deserialize(XrFrameEndInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer


static void deserialize(XrGlobalDimmerFrameEndInfoML* s, std::istream& in);




static void deserialize(XrGlobalDimmerFrameEndInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat


static void deserialize(XrCoordinateSpaceCreateInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding


static void deserialize(XrSystemMarkerUnderstandingPropertiesML* s, std::istream& in);




static void deserialize(XrMarkerDetectorCreateInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorArucoInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorSizeInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorAprilTagInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorCustomProfileInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorSnapshotInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorStateML* s, std::istream& in);




static void deserialize(XrMarkerSpaceCreateInfoML* s, std::istream& in);




static void deserialize(XrSystemMarkerUnderstandingPropertiesML* s, std::istream& in);




static void deserialize(XrMarkerDetectorCreateInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorArucoInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorSizeInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorAprilTagInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorCustomProfileInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorSnapshotInfoML* s, std::istream& in);




static void deserialize(XrMarkerDetectorStateML* s, std::istream& in);




static void deserialize(XrMarkerSpaceCreateInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map


static void deserialize(XrLocalizationMapML* s, std::istream& in);




static void deserialize(XrEventDataLocalizationChangedML* s, std::istream& in);




static void deserialize(XrLocalizationMapQueryInfoBaseHeaderML* s, std::istream& in);




static void deserialize(XrMapLocalizationRequestInfoML* s, std::istream& in);




static void deserialize(XrLocalizationMapImportInfoML* s, std::istream& in);




static void deserialize(XrLocalizationEnableEventsInfoML* s, std::istream& in);




static void deserialize(XrLocalizationMapML* s, std::istream& in);




static void deserialize(XrEventDataLocalizationChangedML* s, std::istream& in);




static void deserialize(XrMapLocalizationRequestInfoML* s, std::istream& in);




static void deserialize(XrLocalizationMapImportInfoML* s, std::istream& in);




static void deserialize(XrLocalizationEnableEventsInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors


static void deserialize(XrSpatialAnchorsCreateInfoBaseHeaderML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsCreateInfoFromPoseML* s, std::istream& in);




static void deserialize(XrCreateSpatialAnchorsCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorStateML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsCreateInfoFromPoseML* s, std::istream& in);




static void deserialize(XrCreateSpatialAnchorsCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorStateML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage


static void deserialize(XrSpatialAnchorsCreateStorageInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsQueryInfoBaseHeaderML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsQueryInfoRadiusML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsQueryCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsCreateInfoFromUuidsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishCompletionDetailsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteCompletionDetailsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorCompletionResultML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsCreateStorageInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsQueryInfoRadiusML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsQueryCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsCreateInfoFromUuidsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationInfoML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsPublishCompletionDetailsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsDeleteCompletionDetailsML* s, std::istream& in);




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration


static void deserialize(XrEventDataHeadsetFitChangedML* s, std::istream& in);




static void deserialize(XrEventDataEyeCalibrationChangedML* s, std::istream& in);




static void deserialize(XrUserCalibrationEnableEventsInfoML* s, std::istream& in);




static void deserialize(XrEventDataHeadsetFitChangedML* s, std::istream& in);




static void deserialize(XrEventDataEyeCalibrationChangedML* s, std::istream& in);




static void deserialize(XrUserCalibrationEnableEventsInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence


static void deserialize(XrSpatialAnchorPersistenceNameMSFT* s, std::istream& in);




static void deserialize(XrSpatialAnchorPersistenceInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialAnchorPersistenceInfoMSFT* s, std::istream& in);




static void deserialize(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker


static void deserialize(XrSceneMarkerMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkersMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkerTypeFilterMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkerQRCodeMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkerQRCodesMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkersMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkerTypeFilterMSFT* s, std::istream& in);




static void deserialize(XrSceneMarkerQRCodesMSFT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query


static void deserialize(XrSpaceQueryInfoBaseHeaderFB* s, std::istream& in);




static void deserialize(XrSpaceFilterInfoBaseHeaderFB* s, std::istream& in);




static void deserialize(XrSpaceQueryInfoFB* s, std::istream& in);




static void deserialize(XrSpaceStorageLocationFilterInfoFB* s, std::istream& in);




static void deserialize(XrSpaceUuidFilterInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentFilterInfoFB* s, std::istream& in);




static void deserialize(XrSpaceQueryResultFB* s, std::istream& in);




static void deserialize(XrSpaceQueryResultsFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceQueryResultsAvailableFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceQueryCompleteFB* s, std::istream& in);




static void deserialize(XrSpaceQueryInfoFB* s, std::istream& in);




static void deserialize(XrSpaceQueryResultsFB* s, std::istream& in);




static void deserialize(XrSpaceStorageLocationFilterInfoFB* s, std::istream& in);




static void deserialize(XrSpaceUuidFilterInfoFB* s, std::istream& in);




static void deserialize(XrSpaceComponentFilterInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceQueryResultsAvailableFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceQueryCompleteFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage


static void deserialize(XrSpaceSaveInfoFB* s, std::istream& in);




static void deserialize(XrSpaceEraseInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceSaveCompleteFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceEraseCompleteFB* s, std::istream& in);




static void deserialize(XrSpaceSaveInfoFB* s, std::istream& in);




static void deserialize(XrSpaceEraseInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceSaveCompleteFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceEraseCompleteFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan


static void deserialize(XrSwapchainImageFoveationVulkanFB* s, std::istream& in);




static void deserialize(XrSwapchainImageFoveationVulkanFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface


static void deserialize(XrSwapchainStateAndroidSurfaceDimensionsFB* s, std::istream& in);




static void deserialize(XrSwapchainStateAndroidSurfaceDimensionsFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es


static void deserialize(XrSwapchainStateSamplerOpenGLESFB* s, std::istream& in);




static void deserialize(XrSwapchainStateSamplerOpenGLESFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan


static void deserialize(XrSwapchainStateSamplerVulkanFB* s, std::istream& in);




static void deserialize(XrSwapchainStateSamplerVulkanFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing


static void deserialize(XrSpaceShareInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceShareCompleteFB* s, std::istream& in);




static void deserialize(XrSpaceShareInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceShareCompleteFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp


static void deserialize(XrCompositionLayerSpaceWarpInfoFB* s, std::istream& in);




static void deserialize(XrSystemSpaceWarpPropertiesFB* s, std::istream& in);




static void deserialize(XrCompositionLayerSpaceWarpInfoFB* s, std::istream& in);




static void deserialize(XrSystemSpaceWarpPropertiesFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope


static void deserialize(XrHapticAmplitudeEnvelopeVibrationFB* s, std::istream& in);




static void deserialize(XrHapticAmplitudeEnvelopeVibrationFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene


static void deserialize(XrOffset3DfFB* s, std::istream& in);




static void deserialize(XrRect3DfFB* s, std::istream& in);




static void deserialize(XrSemanticLabelsFB* s, std::istream& in);




static void deserialize(XrRoomLayoutFB* s, std::istream& in);




static void deserialize(XrBoundary2DFB* s, std::istream& in);




static void deserialize(XrSemanticLabelsSupportInfoFB* s, std::istream& in);




static void deserialize(XrSemanticLabelsFB* s, std::istream& in);




static void deserialize(XrRoomLayoutFB* s, std::istream& in);




static void deserialize(XrBoundary2DFB* s, std::istream& in);




static void deserialize(XrSemanticLabelsSupportInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control


static void deserialize(XrDigitalLensControlALMALENCE* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture


static void deserialize(XrEventDataSceneCaptureCompleteFB* s, std::istream& in);




static void deserialize(XrSceneCaptureRequestInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSceneCaptureCompleteFB* s, std::istream& in);




static void deserialize(XrSceneCaptureRequestInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container


static void deserialize(XrSpaceContainerFB* s, std::istream& in);




static void deserialize(XrSpaceContainerFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked


static void deserialize(XrFoveationEyeTrackedProfileCreateInfoMETA* s, std::istream& in);




static void deserialize(XrFoveationEyeTrackedStateMETA* s, std::istream& in);




static void deserialize(XrSystemFoveationEyeTrackedPropertiesMETA* s, std::istream& in);




static void deserialize(XrFoveationEyeTrackedProfileCreateInfoMETA* s, std::istream& in);




static void deserialize(XrFoveationEyeTrackedStateMETA* s, std::istream& in);




static void deserialize(XrSystemFoveationEyeTrackedPropertiesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking


static void deserialize(XrSystemFaceTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrFaceTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrFaceExpressionInfoFB* s, std::istream& in);




static void deserialize(XrFaceExpressionStatusFB* s, std::istream& in);




static void deserialize(XrFaceExpressionWeightsFB* s, std::istream& in);




static void deserialize(XrSystemFaceTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrFaceTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrFaceExpressionInfoFB* s, std::istream& in);




static void deserialize(XrFaceExpressionWeightsFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social


static void deserialize(XrEyeGazeFB* s, std::istream& in);




static void deserialize(XrEyeTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrEyeGazesInfoFB* s, std::istream& in);




static void deserialize(XrSystemEyeTrackingPropertiesFB* s, std::istream& in);




static void deserialize(XrEyeGazesFB* s, std::istream& in);




static void deserialize(XrEyeTrackerCreateInfoFB* s, std::istream& in);




static void deserialize(XrEyeGazesInfoFB* s, std::istream& in);




static void deserialize(XrEyeGazesFB* s, std::istream& in);




static void deserialize(XrSystemEyeTrackingPropertiesFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands


static void deserialize(XrPassthroughKeyboardHandsIntensityFB* s, std::istream& in);




static void deserialize(XrPassthroughKeyboardHandsIntensityFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings


static void deserialize(XrCompositionLayerSettingsFB* s, std::istream& in);




static void deserialize(XrCompositionLayerSettingsFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm


static void deserialize(XrHapticPcmVibrationFB* s, std::istream& in);




static void deserialize(XrDevicePcmSampleRateStateFB* s, std::istream& in);




static void deserialize(XrHapticPcmVibrationFB* s, std::istream& in);




static void deserialize(XrDevicePcmSampleRateStateFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis


static void deserialize(XrFrameSynthesisInfoEXT* s, std::istream& in);




static void deserialize(XrFrameSynthesisConfigViewEXT* s, std::istream& in);




static void deserialize(XrFrameSynthesisInfoEXT* s, std::istream& in);




static void deserialize(XrFrameSynthesisConfigViewEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test


static void deserialize(XrCompositionLayerDepthTestFB* s, std::istream& in);




static void deserialize(XrCompositionLayerDepthTestFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming


static void deserialize(XrLocalDimmingFrameEndInfoMETA* s, std::istream& in);




static void deserialize(XrLocalDimmingFrameEndInfoMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences


static void deserialize(XrPassthroughPreferencesMETA* s, std::istream& in);




static void deserialize(XrPassthroughPreferencesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard


static void deserialize(XrSystemVirtualKeyboardPropertiesMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardCreateInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardSpaceCreateInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardLocationInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardModelVisibilitySetInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardAnimationStateMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardModelAnimationStatesMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardTextureDataMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardInputInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardTextContextChangeInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardCommitTextMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardBackspaceMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardEnterMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardShownMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardHiddenMETA* s, std::istream& in);




static void deserialize(XrSystemVirtualKeyboardPropertiesMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardCreateInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardSpaceCreateInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardLocationInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardModelVisibilitySetInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardAnimationStateMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardModelAnimationStatesMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardTextureDataMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardInputInfoMETA* s, std::istream& in);




static void deserialize(XrVirtualKeyboardTextContextChangeInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardCommitTextMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardBackspaceMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardEnterMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardShownMETA* s, std::istream& in);




static void deserialize(XrEventDataVirtualKeyboardHiddenMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera


static void deserialize(XrExternalCameraIntrinsicsOCULUS* s, std::istream& in);




static void deserialize(XrExternalCameraExtrinsicsOCULUS* s, std::istream& in);




static void deserialize(XrExternalCameraOCULUS* s, std::istream& in);




static void deserialize(XrExternalCameraOCULUS* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info


static void deserialize(XrVulkanSwapchainCreateInfoMETA* s, std::istream& in);




static void deserialize(XrVulkanSwapchainCreateInfoMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics


static void deserialize(XrPerformanceMetricsStateMETA* s, std::istream& in);




static void deserialize(XrPerformanceMetricsCounterMETA* s, std::istream& in);




static void deserialize(XrPerformanceMetricsStateMETA* s, std::istream& in);




static void deserialize(XrPerformanceMetricsCounterMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch


static void deserialize(XrSpaceListSaveInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceListSaveCompleteFB* s, std::istream& in);




static void deserialize(XrSpaceListSaveInfoFB* s, std::istream& in);




static void deserialize(XrEventDataSpaceListSaveCompleteFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user


static void deserialize(XrSpaceUserCreateInfoFB* s, std::istream& in);




static void deserialize(XrSpaceUserCreateInfoFB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id


static void deserialize(XrSystemHeadsetIdPropertiesMETA* s, std::istream& in);




static void deserialize(XrSystemHeadsetIdPropertiesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution


static void deserialize(XrRecommendedLayerResolutionMETA* s, std::istream& in);




static void deserialize(XrRecommendedLayerResolutionGetInfoMETA* s, std::istream& in);




static void deserialize(XrRecommendedLayerResolutionMETA* s, std::istream& in);




static void deserialize(XrRecommendedLayerResolutionGetInfoMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut


static void deserialize(XrPassthroughColorLutDataMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorLutCreateInfoMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorLutUpdateInfoMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorMapLutMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorMapInterpolatedLutMETA* s, std::istream& in);




static void deserialize(XrSystemPassthroughColorLutPropertiesMETA* s, std::istream& in);




static void deserialize(XrSystemPassthroughColorLutPropertiesMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorLutCreateInfoMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorLutUpdateInfoMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorMapLutMETA* s, std::istream& in);




static void deserialize(XrPassthroughColorMapInterpolatedLutMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh


static void deserialize(XrSpaceTriangleMeshGetInfoMETA* s, std::istream& in);




static void deserialize(XrSpaceTriangleMeshMETA* s, std::istream& in);




static void deserialize(XrSpaceTriangleMeshGetInfoMETA* s, std::istream& in);




static void deserialize(XrSpaceTriangleMeshMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body


static void deserialize(XrSystemPropertiesBodyTrackingFullBodyMETA* s, std::istream& in);




static void deserialize(XrSystemPropertiesBodyTrackingFullBodyMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event


static void deserialize(XrEventDataPassthroughLayerResumedMETA* s, std::istream& in);




static void deserialize(XrEventDataPassthroughLayerResumedMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2


static void deserialize(XrSystemFaceTrackingProperties2FB* s, std::istream& in);




static void deserialize(XrFaceTrackerCreateInfo2FB* s, std::istream& in);




static void deserialize(XrFaceExpressionInfo2FB* s, std::istream& in);




static void deserialize(XrFaceExpressionWeights2FB* s, std::istream& in);




static void deserialize(XrSystemFaceTrackingProperties2FB* s, std::istream& in);




static void deserialize(XrFaceTrackerCreateInfo2FB* s, std::istream& in);




static void deserialize(XrFaceExpressionInfo2FB* s, std::istream& in);




static void deserialize(XrFaceExpressionWeights2FB* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing


static void deserialize(XrSystemSpatialEntitySharingPropertiesMETA* s, std::istream& in);




static void deserialize(XrShareSpacesRecipientBaseHeaderMETA* s, std::istream& in);




static void deserialize(XrShareSpacesInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataShareSpacesCompleteMETA* s, std::istream& in);




static void deserialize(XrSystemSpatialEntitySharingPropertiesMETA* s, std::istream& in);




static void deserialize(XrShareSpacesInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataShareSpacesCompleteMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth


static void deserialize(XrEnvironmentDepthProviderCreateInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthSwapchainCreateInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthSwapchainStateMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageAcquireInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageViewMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthHandRemovalSetInfoMETA* s, std::istream& in);




static void deserialize(XrSystemEnvironmentDepthPropertiesMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthProviderCreateInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthSwapchainCreateInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthSwapchainStateMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageAcquireInfoMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageViewMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthImageMETA* s, std::istream& in);




static void deserialize(XrEnvironmentDepthHandRemovalSetInfoMETA* s, std::istream& in);




static void deserialize(XrSystemEnvironmentDepthPropertiesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough


static void deserialize(XrPassthroughCreateInfoHTC* s, std::istream& in);




static void deserialize(XrPassthroughColorHTC* s, std::istream& in);




static void deserialize(XrPassthroughMeshTransformInfoHTC* s, std::istream& in);




static void deserialize(XrCompositionLayerPassthroughHTC* s, std::istream& in);




static void deserialize(XrPassthroughCreateInfoHTC* s, std::istream& in);




static void deserialize(XrPassthroughColorHTC* s, std::istream& in);




static void deserialize(XrPassthroughMeshTransformInfoHTC* s, std::istream& in);




static void deserialize(XrCompositionLayerPassthroughHTC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation


static void deserialize(XrFoveationApplyInfoHTC* s, std::istream& in);




static void deserialize(XrFoveationConfigurationHTC* s, std::istream& in);




static void deserialize(XrFoveationDynamicModeInfoHTC* s, std::istream& in);




static void deserialize(XrFoveationCustomModeInfoHTC* s, std::istream& in);




static void deserialize(XrFoveationApplyInfoHTC* s, std::istream& in);




static void deserialize(XrFoveationDynamicModeInfoHTC* s, std::istream& in);




static void deserialize(XrFoveationCustomModeInfoHTC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor


static void deserialize(XrSystemAnchorPropertiesHTC* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoHTC* s, std::istream& in);




static void deserialize(XrSpatialAnchorNameHTC* s, std::istream& in);




static void deserialize(XrSystemAnchorPropertiesHTC* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoHTC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking


static void deserialize(XrSystemBodyTrackingPropertiesHTC* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoHTC* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoHTC* s, std::istream& in);




static void deserialize(XrBodyJointLocationsHTC* s, std::istream& in);




static void deserialize(XrBodyJointLocationHTC* s, std::istream& in);




static void deserialize(XrBodySkeletonHTC* s, std::istream& in);




static void deserialize(XrSystemBodyTrackingPropertiesHTC* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoHTC* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoHTC* s, std::istream& in);




static void deserialize(XrBodyJointLocationsHTC* s, std::istream& in);




static void deserialize(XrBodySkeletonHTC* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority


static void deserialize(XrActiveActionSetPrioritiesEXT* s, std::istream& in);




static void deserialize(XrActiveActionSetPriorityEXT* s, std::istream& in);




static void deserialize(XrActiveActionSetPrioritiesEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl


static void deserialize(XrSystemForceFeedbackCurlPropertiesMNDX* s, std::istream& in);




static void deserialize(XrForceFeedbackCurlApplyLocationsMNDX* s, std::istream& in);




static void deserialize(XrForceFeedbackCurlApplyLocationMNDX* s, std::istream& in);




static void deserialize(XrSystemForceFeedbackCurlPropertiesMNDX* s, std::istream& in);




static void deserialize(XrForceFeedbackCurlApplyLocationsMNDX* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking


static void deserialize(XrSystemBodyTrackingPropertiesBD* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoBD* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoBD* s, std::istream& in);




static void deserialize(XrBodyJointLocationsBD* s, std::istream& in);




static void deserialize(XrBodyJointLocationBD* s, std::istream& in);




static void deserialize(XrBodyTrackerCreateInfoBD* s, std::istream& in);




static void deserialize(XrBodyJointsLocateInfoBD* s, std::istream& in);




static void deserialize(XrBodyJointLocationsBD* s, std::istream& in);




static void deserialize(XrSystemBodyTrackingPropertiesBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing


static void deserialize(XrSystemSpatialSensingPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentGetInfoBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataBaseHeaderBD* s, std::istream& in);




static void deserialize(XrSpatialEntityLocationGetInfoBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataLocationBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataSemanticBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataBoundingBox2DBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataPolygonBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataBoundingBox3DBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataTriangleMeshBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderCreateInfoBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderStartInfoBD* s, std::istream& in);




static void deserialize(XrEventDataSenseDataProviderStateChangedBD* s, std::istream& in);




static void deserialize(XrEventDataSenseDataUpdatedBD* s, std::istream& in);




static void deserialize(XrSenseDataQueryInfoBD* s, std::istream& in);




static void deserialize(XrSenseDataQueryCompletionBD* s, std::istream& in);




static void deserialize(XrQueriedSenseDataGetInfoBD* s, std::istream& in);




static void deserialize(XrQueriedSenseDataBD* s, std::istream& in);




static void deserialize(XrSpatialEntityStateBD* s, std::istream& in);




static void deserialize(XrSenseDataFilterUuidBD* s, std::istream& in);




static void deserialize(XrSenseDataFilterSemanticBD* s, std::istream& in);




static void deserialize(XrSpatialEntityAnchorCreateInfoBD* s, std::istream& in);




static void deserialize(XrAnchorSpaceCreateInfoBD* s, std::istream& in);




static void deserialize(XrSystemSpatialSensingPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentGetInfoBD* s, std::istream& in);




static void deserialize(XrSpatialEntityLocationGetInfoBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataLocationBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataSemanticBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataBoundingBox2DBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataPolygonBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataBoundingBox3DBD* s, std::istream& in);




static void deserialize(XrSpatialEntityComponentDataTriangleMeshBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderCreateInfoBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderStartInfoBD* s, std::istream& in);




static void deserialize(XrEventDataSenseDataProviderStateChangedBD* s, std::istream& in);




static void deserialize(XrEventDataSenseDataUpdatedBD* s, std::istream& in);




static void deserialize(XrSenseDataQueryInfoBD* s, std::istream& in);




static void deserialize(XrSenseDataQueryCompletionBD* s, std::istream& in);




static void deserialize(XrSenseDataFilterUuidBD* s, std::istream& in);




static void deserialize(XrSenseDataFilterSemanticBD* s, std::istream& in);




static void deserialize(XrQueriedSenseDataGetInfoBD* s, std::istream& in);




static void deserialize(XrQueriedSenseDataBD* s, std::istream& in);




static void deserialize(XrSpatialEntityStateBD* s, std::istream& in);




static void deserialize(XrSpatialEntityAnchorCreateInfoBD* s, std::istream& in);




static void deserialize(XrAnchorSpaceCreateInfoBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor


static void deserialize(XrSystemSpatialAnchorPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateCompletionBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorPersistInfoBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorUnpersistInfoBD* s, std::istream& in);




static void deserialize(XrSystemSpatialAnchorPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateInfoBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorCreateCompletionBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorPersistInfoBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorUnpersistInfoBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing


static void deserialize(XrSystemSpatialAnchorSharingPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorShareInfoBD* s, std::istream& in);




static void deserialize(XrSharedSpatialAnchorDownloadInfoBD* s, std::istream& in);




static void deserialize(XrSystemSpatialAnchorSharingPropertiesBD* s, std::istream& in);




static void deserialize(XrSpatialAnchorShareInfoBD* s, std::istream& in);




static void deserialize(XrSharedSpatialAnchorDownloadInfoBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene


static void deserialize(XrSystemSpatialScenePropertiesBD* s, std::istream& in);




static void deserialize(XrSceneCaptureInfoBD* s, std::istream& in);




static void deserialize(XrSystemSpatialScenePropertiesBD* s, std::istream& in);




static void deserialize(XrSceneCaptureInfoBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh


static void deserialize(XrSystemSpatialMeshPropertiesBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderCreateInfoSpatialMeshBD* s, std::istream& in);




static void deserialize(XrSystemSpatialMeshPropertiesBD* s, std::istream& in);




static void deserialize(XrSenseDataProviderCreateInfoSpatialMeshBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress


static void deserialize(XrFuturePollResultProgressBD* s, std::istream& in);




static void deserialize(XrFuturePollResultProgressBD* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source


static void deserialize(XrHandTrackingDataSourceInfoEXT* s, std::istream& in);




static void deserialize(XrHandTrackingDataSourceStateEXT* s, std::istream& in);




static void deserialize(XrHandTrackingDataSourceInfoEXT* s, std::istream& in);




static void deserialize(XrHandTrackingDataSourceStateEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection


static void deserialize(XrSystemPlaneDetectionPropertiesEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorCreateInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorBeginInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorGetInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorLocationEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorLocationsEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorPolygonBufferEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorCreateInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorBeginInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorGetInfoEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorLocationsEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorLocationEXT* s, std::istream& in);




static void deserialize(XrPlaneDetectorPolygonBufferEXT* s, std::istream& in);




static void deserialize(XrSystemPlaneDetectionPropertiesEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future


static void deserialize(XrFutureCancelInfoEXT* s, std::istream& in);




static void deserialize(XrFuturePollInfoEXT* s, std::istream& in);




static void deserialize(XrFutureCompletionBaseHeaderEXT* s, std::istream& in);




static void deserialize(XrFutureCompletionEXT* s, std::istream& in);




static void deserialize(XrFuturePollResultEXT* s, std::istream& in);




static void deserialize(XrFutureCancelInfoEXT* s, std::istream& in);




static void deserialize(XrFuturePollInfoEXT* s, std::istream& in);




static void deserialize(XrFutureCompletionEXT* s, std::istream& in);




static void deserialize(XrFuturePollResultEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence


static void deserialize(XrEventDataUserPresenceChangedEXT* s, std::istream& in);




static void deserialize(XrSystemUserPresencePropertiesEXT* s, std::istream& in);




static void deserialize(XrEventDataUserPresenceChangedEXT* s, std::istream& in);




static void deserialize(XrSystemUserPresencePropertiesEXT* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications


static void deserialize(XrSystemNotificationsSetInfoML* s, std::istream& in);




static void deserialize(XrSystemNotificationsSetInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection


static void deserialize(XrWorldMeshDetectorCreateInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockStateML* s, std::istream& in);




static void deserialize(XrWorldMeshStateRequestInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshStateRequestCompletionML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferRecommendedSizeInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferSizeML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockRequestML* s, std::istream& in);




static void deserialize(XrWorldMeshGetInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockML* s, std::istream& in);




static void deserialize(XrWorldMeshRequestCompletionInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshRequestCompletionML* s, std::istream& in);




static void deserialize(XrWorldMeshDetectorCreateInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshStateRequestInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockStateML* s, std::istream& in);




static void deserialize(XrWorldMeshStateRequestCompletionML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferRecommendedSizeInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferSizeML* s, std::istream& in);




static void deserialize(XrWorldMeshBufferML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockRequestML* s, std::istream& in);




static void deserialize(XrWorldMeshGetInfoML* s, std::istream& in);




static void deserialize(XrWorldMeshBlockML* s, std::istream& in);




static void deserialize(XrWorldMeshRequestCompletionML* s, std::istream& in);




static void deserialize(XrWorldMeshRequestCompletionInfoML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression


static void deserialize(XrSystemFacialExpressionPropertiesML* s, std::istream& in);




static void deserialize(XrFacialExpressionClientCreateInfoML* s, std::istream& in);




static void deserialize(XrFacialExpressionBlendShapeGetInfoML* s, std::istream& in);




static void deserialize(XrFacialExpressionBlendShapePropertiesML* s, std::istream& in);




static void deserialize(XrSystemFacialExpressionPropertiesML* s, std::istream& in);




static void deserialize(XrFacialExpressionClientCreateInfoML* s, std::istream& in);




static void deserialize(XrFacialExpressionBlendShapeGetInfoML* s, std::istream& in);




static void deserialize(XrFacialExpressionBlendShapePropertiesML* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers


static void deserialize(XrSystemSimultaneousHandsAndControllersPropertiesMETA* s, std::istream& in);




static void deserialize(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s, std::istream& in);




static void deserialize(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s, std::istream& in);




static void deserialize(XrSystemSimultaneousHandsAndControllersPropertiesMETA* s, std::istream& in);




static void deserialize(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s, std::istream& in);




static void deserialize(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery


static void deserialize(XrColocationDiscoveryStartInfoMETA* s, std::istream& in);




static void deserialize(XrColocationDiscoveryStopInfoMETA* s, std::istream& in);




static void deserialize(XrColocationAdvertisementStartInfoMETA* s, std::istream& in);




static void deserialize(XrColocationAdvertisementStopInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataStartColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStopColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStartColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationDiscoveryResultMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStopColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrSystemColocationDiscoveryPropertiesMETA* s, std::istream& in);




static void deserialize(XrColocationDiscoveryStartInfoMETA* s, std::istream& in);




static void deserialize(XrColocationDiscoveryStopInfoMETA* s, std::istream& in);




static void deserialize(XrColocationAdvertisementStartInfoMETA* s, std::istream& in);




static void deserialize(XrColocationAdvertisementStopInfoMETA* s, std::istream& in);




static void deserialize(XrEventDataStartColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStopColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationAdvertisementCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStartColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationDiscoveryResultMETA* s, std::istream& in);




static void deserialize(XrEventDataColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrEventDataStopColocationDiscoveryCompleteMETA* s, std::istream& in);




static void deserialize(XrSystemColocationDiscoveryPropertiesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void deserialize(XrSystemSpatialEntityGroupSharingPropertiesMETA* s, std::istream& in);




static void deserialize(XrShareSpacesRecipientGroupsMETA* s, std::istream& in);




static void deserialize(XrSpaceGroupUuidFilterInfoMETA* s, std::istream& in);




static void deserialize(XrShareSpacesRecipientGroupsMETA* s, std::istream& in);




static void deserialize(XrSpaceGroupUuidFilterInfoMETA* s, std::istream& in);




static void deserialize(XrSystemSpatialEntityGroupSharingPropertiesMETA* s, std::istream& in);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void deserialize(XrActionCreateInfo* s, std::istream& in);




static void deserialize(XrActionSetCreateInfo* s, std::istream& in);




static void deserialize(XrActionSpaceCreateInfo* s, std::istream& in);




static void deserialize(XrActionStateBoolean* s, std::istream& in);




static void deserialize(XrActionStateFloat* s, std::istream& in);




static void deserialize(XrActionStateGetInfo* s, std::istream& in);




static void deserialize(XrActionStatePose* s, std::istream& in);




static void deserialize(XrActionStateVector2f* s, std::istream& in);




static void deserialize(XrActionSuggestedBinding* s, std::istream& in);




static void deserialize(XrActionsSyncInfo* s, std::istream& in);




static void deserialize(XrActiveActionSet* s, std::istream& in);




static void deserialize(XrApiLayerProperties* s, std::istream& in);




static void deserialize(XrApplicationInfo* s, std::istream& in);




static void deserialize(XrBodySkeletonJointHTC* s, std::istream& in);




static void deserialize(XrBoundSourcesForActionEnumerateInfo* s, std::istream& in);




static void deserialize(XrBoxf* s, std::istream& in);




static void deserialize(XrColor3f* s, std::istream& in);




static void deserialize(XrColor4f* s, std::istream& in);




static void deserialize(XrCompositionLayerBaseHeader* s, std::istream& in);




static void deserialize(XrCompositionLayerProjection* s, std::istream& in);




static void deserialize(XrCompositionLayerProjectionView* s, std::istream& in);




static void deserialize(XrCompositionLayerQuad* s, std::istream& in);




static void deserialize(XrEventDataBaseHeader* s, std::istream& in);




static void deserialize(XrEventDataBuffer* s, std::istream& in);




static void deserialize(XrEventDataEventsLost* s, std::istream& in);




static void deserialize(XrEventDataInstanceLossPending* s, std::istream& in);




static void deserialize(XrEventDataInteractionProfileChanged* s, std::istream& in);




static void deserialize(XrEventDataReferenceSpaceChangePending* s, std::istream& in);




static void deserialize(XrEventDataSessionStateChanged* s, std::istream& in);




static void deserialize(XrExtensionProperties* s, std::istream& in);




static void deserialize(XrExtent2Df* s, std::istream& in);




static void deserialize(XrExtent2Di* s, std::istream& in);




static void deserialize(XrExtent3Df* s, std::istream& in);




static void deserialize(XrFovf* s, std::istream& in);




static void deserialize(XrFrameBeginInfo* s, std::istream& in);




static void deserialize(XrFrameEndInfo* s, std::istream& in);




static void deserialize(XrFrameState* s, std::istream& in);




static void deserialize(XrFrameWaitInfo* s, std::istream& in);




static void deserialize(XrFrustumf* s, std::istream& in);




static void deserialize(XrHapticActionInfo* s, std::istream& in);




static void deserialize(XrHapticBaseHeader* s, std::istream& in);




static void deserialize(XrHapticVibration* s, std::istream& in);




static void deserialize(XrInputSourceLocalizedNameGetInfo* s, std::istream& in);




static void deserialize(XrInstanceCreateInfo* s, std::istream& in);




static void deserialize(XrInstanceProperties* s, std::istream& in);




static void deserialize(XrInteractionProfileState* s, std::istream& in);




static void deserialize(XrInteractionProfileSuggestedBinding* s, std::istream& in);




static void deserialize(XrOffset2Df* s, std::istream& in);




static void deserialize(XrOffset2Di* s, std::istream& in);




static void deserialize(XrPosef* s, std::istream& in);




static void deserialize(XrQuaternionf* s, std::istream& in);




static void deserialize(XrRect2Df* s, std::istream& in);




static void deserialize(XrRect2Di* s, std::istream& in);




static void deserialize(XrReferenceSpaceCreateInfo* s, std::istream& in);




static void deserialize(XrSessionActionSetsAttachInfo* s, std::istream& in);




static void deserialize(XrSessionBeginInfo* s, std::istream& in);




static void deserialize(XrSessionCreateInfo* s, std::istream& in);




static void deserialize(XrSpaceLocation* s, std::istream& in);




static void deserialize(XrSpaceLocationData* s, std::istream& in);




static void deserialize(XrSpaceLocations* s, std::istream& in);




static void deserialize(XrSpaceVelocities* s, std::istream& in);




static void deserialize(XrSpaceVelocity* s, std::istream& in);




static void deserialize(XrSpaceVelocityData* s, std::istream& in);




static void deserialize(XrSpacesLocateInfo* s, std::istream& in);




static void deserialize(XrSpheref* s, std::istream& in);




static void deserialize(XrSwapchainCreateInfo* s, std::istream& in);




static void deserialize(XrSwapchainImageAcquireInfo* s, std::istream& in);




static void deserialize(XrSwapchainImageBaseHeader* s, std::istream& in);




static void deserialize(XrSwapchainImageReleaseInfo* s, std::istream& in);




static void deserialize(XrSwapchainImageWaitInfo* s, std::istream& in);




static void deserialize(XrSwapchainSubImage* s, std::istream& in);




static void deserialize(XrSystemGetInfo* s, std::istream& in);




static void deserialize(XrSystemGraphicsProperties* s, std::istream& in);




static void deserialize(XrSystemProperties* s, std::istream& in);




static void deserialize(XrSystemTrackingProperties* s, std::istream& in);




static void deserialize(XrUuid* s, std::istream& in);




static void deserialize(XrVector2f* s, std::istream& in);




static void deserialize(XrVector3f* s, std::istream& in);




static void deserialize(XrVector4f* s, std::istream& in);




static void deserialize(XrView* s, std::istream& in);




static void deserialize(XrViewConfigurationProperties* s, std::istream& in);




static void deserialize(XrViewConfigurationView* s, std::istream& in);




static void deserialize(XrViewLocateInfo* s, std::istream& in);




static void deserialize(XrViewState* s, std::istream& in);




// Forward declarations (cleaners)

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube


static void cleanup(const XrCompositionLayerCubeKHR* s);




static void cleanup(const XrCompositionLayerCubeKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance


static void cleanup(const XrInstanceCreateInfoAndroidKHR* s);




static void cleanup(const XrInstanceCreateInfoAndroidKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth


static void cleanup(const XrCompositionLayerDepthInfoKHR* s);




static void cleanup(const XrCompositionLayerDepthInfoKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list


static void cleanup(const XrVulkanSwapchainFormatListCreateInfoKHR* s);




static void cleanup(const XrVulkanSwapchainFormatListCreateInfoKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings


static void cleanup(const XrEventDataPerfSettingsEXT* s);




static void cleanup(const XrEventDataPerfSettingsEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder


static void cleanup(const XrCompositionLayerCylinderKHR* s);




static void cleanup(const XrCompositionLayerCylinderKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect


static void cleanup(const XrCompositionLayerEquirectKHR* s);




static void cleanup(const XrCompositionLayerEquirectKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils


static void cleanup(const XrDebugUtilsObjectNameInfoEXT* s);




static void cleanup(const XrDebugUtilsLabelEXT* s);




static void cleanup(const XrDebugUtilsMessengerCallbackDataEXT* s);




static void cleanup(const XrDebugUtilsMessengerCreateInfoEXT* s);




static void cleanup(const XrDebugUtilsObjectNameInfoEXT* s);




static void cleanup(const XrDebugUtilsMessengerCallbackDataEXT* s);




static void cleanup(const XrDebugUtilsMessengerCreateInfoEXT* s);




static void cleanup(const XrDebugUtilsLabelEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable


static void cleanup(const XrGraphicsBindingOpenGLWin32KHR* s);




static void cleanup(const XrGraphicsBindingOpenGLXlibKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLXcbKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLWaylandKHR* s);




static void cleanup(const XrSwapchainImageOpenGLKHR* s);




static void cleanup(const XrGraphicsRequirementsOpenGLKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLWin32KHR* s);




static void cleanup(const XrGraphicsBindingOpenGLXlibKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLXcbKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLWaylandKHR* s);




static void cleanup(const XrSwapchainImageOpenGLKHR* s);




static void cleanup(const XrGraphicsRequirementsOpenGLKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable


static void cleanup(const XrGraphicsBindingOpenGLESAndroidKHR* s);




static void cleanup(const XrSwapchainImageOpenGLESKHR* s);




static void cleanup(const XrGraphicsRequirementsOpenGLESKHR* s);




static void cleanup(const XrGraphicsBindingOpenGLESAndroidKHR* s);




static void cleanup(const XrSwapchainImageOpenGLESKHR* s);




static void cleanup(const XrGraphicsRequirementsOpenGLESKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable


static void cleanup(const XrGraphicsBindingVulkanKHR* s);




static void cleanup(const XrSwapchainImageVulkanKHR* s);




static void cleanup(const XrGraphicsRequirementsVulkanKHR* s);




static void cleanup(const XrGraphicsBindingVulkanKHR* s);




static void cleanup(const XrSwapchainImageVulkanKHR* s);




static void cleanup(const XrGraphicsRequirementsVulkanKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable


static void cleanup(const XrGraphicsBindingD3D11KHR* s);




static void cleanup(const XrSwapchainImageD3D11KHR* s);




static void cleanup(const XrGraphicsRequirementsD3D11KHR* s);




static void cleanup(const XrGraphicsBindingD3D11KHR* s);




static void cleanup(const XrSwapchainImageD3D11KHR* s);




static void cleanup(const XrGraphicsRequirementsD3D11KHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable


static void cleanup(const XrGraphicsBindingD3D12KHR* s);




static void cleanup(const XrSwapchainImageD3D12KHR* s);




static void cleanup(const XrGraphicsRequirementsD3D12KHR* s);




static void cleanup(const XrGraphicsBindingD3D12KHR* s);




static void cleanup(const XrSwapchainImageD3D12KHR* s);




static void cleanup(const XrGraphicsRequirementsD3D12KHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable


static void cleanup(const XrGraphicsBindingMetalKHR* s);




static void cleanup(const XrSwapchainImageMetalKHR* s);




static void cleanup(const XrGraphicsRequirementsMetalKHR* s);




static void cleanup(const XrGraphicsBindingMetalKHR* s);




static void cleanup(const XrSwapchainImageMetalKHR* s);




static void cleanup(const XrGraphicsRequirementsMetalKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction


static void cleanup(const XrSystemEyeGazeInteractionPropertiesEXT* s);




static void cleanup(const XrEyeGazeSampleTimeEXT* s);




static void cleanup(const XrSystemEyeGazeInteractionPropertiesEXT* s);




static void cleanup(const XrEyeGazeSampleTimeEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask


static void cleanup(const XrVisibilityMaskKHR* s);




static void cleanup(const XrEventDataVisibilityMaskChangedKHR* s);




static void cleanup(const XrVisibilityMaskKHR* s);




static void cleanup(const XrEventDataVisibilityMaskChangedKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay


static void cleanup(const XrSessionCreateInfoOverlayEXTX* s);




static void cleanup(const XrEventDataMainSessionVisibilityChangedEXTX* s);




static void cleanup(const XrSessionCreateInfoOverlayEXTX* s);




static void cleanup(const XrEventDataMainSessionVisibilityChangedEXTX* s);


#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias


static void cleanup(const XrCompositionLayerColorScaleBiasKHR* s);




static void cleanup(const XrCompositionLayerColorScaleBiasKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor


static void cleanup(const XrSpatialAnchorCreateInfoMSFT* s);




static void cleanup(const XrSpatialAnchorSpaceCreateInfoMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout


static void cleanup(const XrCompositionLayerImageLayoutFB* s);




static void cleanup(const XrCompositionLayerImageLayoutFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend


static void cleanup(const XrCompositionLayerAlphaBlendFB* s);




static void cleanup(const XrCompositionLayerAlphaBlendFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range


static void cleanup(const XrViewConfigurationDepthRangeEXT* s);




static void cleanup(const XrViewConfigurationDepthRangeEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable


static void cleanup(const XrGraphicsBindingEGLMNDX* s);




static void cleanup(const XrGraphicsBindingEGLMNDX* s);


#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge


static void cleanup(const XrSpatialGraphNodeSpaceCreateInfoMSFT* s);




static void cleanup(const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s);




static void cleanup(const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s);




static void cleanup(const XrSpatialGraphNodeBindingPropertiesMSFT* s);




static void cleanup(const XrSpatialGraphNodeSpaceCreateInfoMSFT* s);




static void cleanup(const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s);




static void cleanup(const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s);




static void cleanup(const XrSpatialGraphNodeBindingPropertiesMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking


static void cleanup(const XrSystemHandTrackingPropertiesEXT* s);




static void cleanup(const XrHandTrackerCreateInfoEXT* s);




static void cleanup(const XrHandJointsLocateInfoEXT* s);




static void cleanup(const XrHandJointLocationEXT* s);




static void cleanup(const XrHandJointVelocityEXT* s);




static void cleanup(const XrHandJointLocationsEXT* s);




static void cleanup(const XrHandJointVelocitiesEXT* s);




static void cleanup(const XrSystemHandTrackingPropertiesEXT* s);




static void cleanup(const XrHandTrackerCreateInfoEXT* s);




static void cleanup(const XrHandJointsLocateInfoEXT* s);




static void cleanup(const XrHandJointLocationsEXT* s);




static void cleanup(const XrHandJointVelocitiesEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh


static void cleanup(const XrSystemHandTrackingMeshPropertiesMSFT* s);




static void cleanup(const XrHandMeshSpaceCreateInfoMSFT* s);




static void cleanup(const XrHandMeshUpdateInfoMSFT* s);




static void cleanup(const XrHandMeshMSFT* s);




static void cleanup(const XrHandMeshIndexBufferMSFT* s);




static void cleanup(const XrHandMeshVertexBufferMSFT* s);




static void cleanup(const XrHandMeshVertexMSFT* s);




static void cleanup(const XrHandPoseTypeInfoMSFT* s);




static void cleanup(const XrSystemHandTrackingMeshPropertiesMSFT* s);




static void cleanup(const XrHandMeshSpaceCreateInfoMSFT* s);




static void cleanup(const XrHandMeshUpdateInfoMSFT* s);




static void cleanup(const XrHandMeshMSFT* s);




static void cleanup(const XrHandPoseTypeInfoMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration


static void cleanup(const XrSecondaryViewConfigurationSessionBeginInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationStateMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationFrameStateMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationFrameEndInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationLayerInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationSessionBeginInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationStateMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationFrameStateMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationFrameEndInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationLayerInfoMSFT* s);




static void cleanup(const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model


static void cleanup(const XrControllerModelKeyStateMSFT* s);




static void cleanup(const XrControllerModelNodePropertiesMSFT* s);




static void cleanup(const XrControllerModelPropertiesMSFT* s);




static void cleanup(const XrControllerModelNodeStateMSFT* s);




static void cleanup(const XrControllerModelStateMSFT* s);




static void cleanup(const XrControllerModelKeyStateMSFT* s);




static void cleanup(const XrControllerModelNodePropertiesMSFT* s);




static void cleanup(const XrControllerModelPropertiesMSFT* s);




static void cleanup(const XrControllerModelNodeStateMSFT* s);




static void cleanup(const XrControllerModelStateMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov


static void cleanup(const XrViewConfigurationViewFovEPIC* s);




static void cleanup(const XrViewConfigurationViewFovEPIC* s);


#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment


static void cleanup(const XrHolographicWindowAttachmentMSFT* s);




static void cleanup(const XrHolographicWindowAttachmentMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection


static void cleanup(const XrCompositionLayerReprojectionInfoMSFT* s);




static void cleanup(const XrCompositionLayerReprojectionPlaneOverrideMSFT* s);




static void cleanup(const XrCompositionLayerReprojectionInfoMSFT* s);




static void cleanup(const XrCompositionLayerReprojectionPlaneOverrideMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create


static void cleanup(const XrAndroidSurfaceSwapchainCreateInfoFB* s);




static void cleanup(const XrAndroidSurfaceSwapchainCreateInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state


static void cleanup(const XrSwapchainStateBaseHeaderFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content


static void cleanup(const XrCompositionLayerSecureContentFB* s);




static void cleanup(const XrCompositionLayerSecureContentFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking


static void cleanup(const XrBodyJointLocationFB* s);




static void cleanup(const XrSystemBodyTrackingPropertiesFB* s);




static void cleanup(const XrBodyTrackerCreateInfoFB* s);




static void cleanup(const XrBodySkeletonJointFB* s);




static void cleanup(const XrBodySkeletonFB* s);




static void cleanup(const XrBodyJointsLocateInfoFB* s);




static void cleanup(const XrBodyJointLocationsFB* s);




static void cleanup(const XrBodyTrackerCreateInfoFB* s);




static void cleanup(const XrBodyJointsLocateInfoFB* s);




static void cleanup(const XrSystemBodyTrackingPropertiesFB* s);




static void cleanup(const XrBodyJointLocationsFB* s);




static void cleanup(const XrBodySkeletonFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding


static void cleanup(const XrInteractionProfileDpadBindingEXT* s);




static void cleanup(const XrInteractionProfileDpadBindingEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold


static void cleanup(const XrInteractionProfileAnalogThresholdVALVE* s);




static void cleanup(const XrInteractionProfileAnalogThresholdVALVE* s);


#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range


static void cleanup(const XrHandJointsMotionRangeInfoEXT* s);




static void cleanup(const XrHandJointsMotionRangeInfoEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init


static void cleanup(const XrLoaderInitInfoBaseHeaderKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android


static void cleanup(const XrLoaderInitInfoAndroidKHR* s);




static void cleanup(const XrLoaderInitInfoAndroidKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2


static void cleanup(const XrVulkanInstanceCreateInfoKHR* s);




static void cleanup(const XrVulkanDeviceCreateInfoKHR* s);




static void cleanup(const XrVulkanGraphicsDeviceGetInfoKHR* s);




static void cleanup(const XrVulkanInstanceCreateInfoKHR* s);




static void cleanup(const XrVulkanDeviceCreateInfoKHR* s);




static void cleanup(const XrVulkanGraphicsDeviceGetInfoKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2


static void cleanup(const XrCompositionLayerEquirect2KHR* s);




static void cleanup(const XrCompositionLayerEquirect2KHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding


static void cleanup(const XrUuidMSFT* s);




static void cleanup(const XrSceneObserverCreateInfoMSFT* s);




static void cleanup(const XrSceneCreateInfoMSFT* s);




static void cleanup(const XrNewSceneComputeInfoMSFT* s);




static void cleanup(const XrVisualMeshComputeLodInfoMSFT* s);




static void cleanup(const XrSceneSphereBoundMSFT* s);




static void cleanup(const XrSceneOrientedBoxBoundMSFT* s);




static void cleanup(const XrSceneFrustumBoundMSFT* s);




static void cleanup(const XrSceneBoundsMSFT* s);




static void cleanup(const XrSceneComponentMSFT* s);




static void cleanup(const XrSceneComponentsMSFT* s);




static void cleanup(const XrSceneComponentsGetInfoMSFT* s);




static void cleanup(const XrSceneComponentLocationMSFT* s);




static void cleanup(const XrSceneComponentLocationsMSFT* s);




static void cleanup(const XrSceneComponentsLocateInfoMSFT* s);




static void cleanup(const XrSceneObjectMSFT* s);




static void cleanup(const XrSceneObjectsMSFT* s);




static void cleanup(const XrSceneComponentParentFilterInfoMSFT* s);




static void cleanup(const XrSceneObjectTypesFilterInfoMSFT* s);




static void cleanup(const XrScenePlaneMSFT* s);




static void cleanup(const XrScenePlanesMSFT* s);




static void cleanup(const XrScenePlaneAlignmentFilterInfoMSFT* s);




static void cleanup(const XrSceneMeshMSFT* s);




static void cleanup(const XrSceneMeshesMSFT* s);




static void cleanup(const XrSceneMeshBuffersGetInfoMSFT* s);




static void cleanup(const XrSceneMeshBuffersMSFT* s);




static void cleanup(const XrSceneMeshVertexBufferMSFT* s);




static void cleanup(const XrSceneMeshIndicesUint32MSFT* s);




static void cleanup(const XrSceneMeshIndicesUint16MSFT* s);




static void cleanup(const XrSceneObserverCreateInfoMSFT* s);




static void cleanup(const XrSceneCreateInfoMSFT* s);




static void cleanup(const XrNewSceneComputeInfoMSFT* s);




static void cleanup(const XrVisualMeshComputeLodInfoMSFT* s);




static void cleanup(const XrSceneComponentsMSFT* s);




static void cleanup(const XrSceneComponentsGetInfoMSFT* s);




static void cleanup(const XrSceneComponentLocationsMSFT* s);




static void cleanup(const XrSceneComponentsLocateInfoMSFT* s);




static void cleanup(const XrSceneObjectsMSFT* s);




static void cleanup(const XrSceneComponentParentFilterInfoMSFT* s);




static void cleanup(const XrSceneObjectTypesFilterInfoMSFT* s);




static void cleanup(const XrScenePlanesMSFT* s);




static void cleanup(const XrScenePlaneAlignmentFilterInfoMSFT* s);




static void cleanup(const XrSceneMeshesMSFT* s);




static void cleanup(const XrSceneMeshBuffersGetInfoMSFT* s);




static void cleanup(const XrSceneMeshBuffersMSFT* s);




static void cleanup(const XrSceneMeshVertexBufferMSFT* s);




static void cleanup(const XrSceneMeshIndicesUint32MSFT* s);




static void cleanup(const XrSceneMeshIndicesUint16MSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization


static void cleanup(const XrSerializedSceneFragmentDataGetInfoMSFT* s);




static void cleanup(const XrDeserializeSceneFragmentMSFT* s);




static void cleanup(const XrSceneDeserializeInfoMSFT* s);




static void cleanup(const XrSerializedSceneFragmentDataGetInfoMSFT* s);




static void cleanup(const XrSceneDeserializeInfoMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate


static void cleanup(const XrEventDataDisplayRefreshRateChangedFB* s);




static void cleanup(const XrEventDataDisplayRefreshRateChangedFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction


static void cleanup(const XrViveTrackerPathsHTCX* s);




static void cleanup(const XrEventDataViveTrackerConnectedHTCX* s);




static void cleanup(const XrViveTrackerPathsHTCX* s);




static void cleanup(const XrEventDataViveTrackerConnectedHTCX* s);


#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking


static void cleanup(const XrSystemFacialTrackingPropertiesHTC* s);




static void cleanup(const XrFacialExpressionsHTC* s);




static void cleanup(const XrFacialTrackerCreateInfoHTC* s);




static void cleanup(const XrSystemFacialTrackingPropertiesHTC* s);




static void cleanup(const XrFacialTrackerCreateInfoHTC* s);




static void cleanup(const XrFacialExpressionsHTC* s);


#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space


static void cleanup(const XrSystemColorSpacePropertiesFB* s);




static void cleanup(const XrSystemColorSpacePropertiesFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh


static void cleanup(const XrVector4sFB* s);




static void cleanup(const XrHandTrackingMeshFB* s);




static void cleanup(const XrHandTrackingScaleFB* s);




static void cleanup(const XrHandTrackingMeshFB* s);




static void cleanup(const XrHandTrackingScaleFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim


static void cleanup(const XrHandTrackingAimStateFB* s);




static void cleanup(const XrHandTrackingAimStateFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules


static void cleanup(const XrHandCapsuleFB* s);




static void cleanup(const XrHandTrackingCapsulesStateFB* s);




static void cleanup(const XrHandTrackingCapsulesStateFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity


static void cleanup(const XrSystemSpatialEntityPropertiesFB* s);




static void cleanup(const XrSpatialAnchorCreateInfoFB* s);




static void cleanup(const XrSpaceComponentStatusSetInfoFB* s);




static void cleanup(const XrSpaceComponentStatusFB* s);




static void cleanup(const XrEventDataSpatialAnchorCreateCompleteFB* s);




static void cleanup(const XrEventDataSpaceSetStatusCompleteFB* s);




static void cleanup(const XrSystemSpatialEntityPropertiesFB* s);




static void cleanup(const XrSpatialAnchorCreateInfoFB* s);




static void cleanup(const XrSpaceComponentStatusSetInfoFB* s);




static void cleanup(const XrSpaceComponentStatusFB* s);




static void cleanup(const XrEventDataSpatialAnchorCreateCompleteFB* s);




static void cleanup(const XrEventDataSpaceSetStatusCompleteFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation


static void cleanup(const XrFoveationProfileCreateInfoFB* s);




static void cleanup(const XrSwapchainCreateInfoFoveationFB* s);




static void cleanup(const XrSwapchainStateFoveationFB* s);




static void cleanup(const XrFoveationProfileCreateInfoFB* s);




static void cleanup(const XrSwapchainCreateInfoFoveationFB* s);




static void cleanup(const XrSwapchainStateFoveationFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration


static void cleanup(const XrFoveationLevelProfileCreateInfoFB* s);




static void cleanup(const XrFoveationLevelProfileCreateInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking


static void cleanup(const XrSystemKeyboardTrackingPropertiesFB* s);




static void cleanup(const XrKeyboardTrackingDescriptionFB* s);




static void cleanup(const XrKeyboardSpaceCreateInfoFB* s);




static void cleanup(const XrKeyboardTrackingQueryFB* s);




static void cleanup(const XrKeyboardSpaceCreateInfoFB* s);




static void cleanup(const XrKeyboardTrackingQueryFB* s);




static void cleanup(const XrSystemKeyboardTrackingPropertiesFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh


static void cleanup(const XrTriangleMeshCreateInfoFB* s);




static void cleanup(const XrTriangleMeshCreateInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough


static void cleanup(const XrSystemPassthroughPropertiesFB* s);




static void cleanup(const XrSystemPassthroughProperties2FB* s);




static void cleanup(const XrPassthroughCreateInfoFB* s);




static void cleanup(const XrPassthroughLayerCreateInfoFB* s);




static void cleanup(const XrCompositionLayerPassthroughFB* s);




static void cleanup(const XrGeometryInstanceCreateInfoFB* s);




static void cleanup(const XrGeometryInstanceTransformFB* s);




static void cleanup(const XrPassthroughStyleFB* s);




static void cleanup(const XrPassthroughColorMapMonoToRgbaFB* s);




static void cleanup(const XrPassthroughColorMapMonoToMonoFB* s);




static void cleanup(const XrPassthroughBrightnessContrastSaturationFB* s);




static void cleanup(const XrEventDataPassthroughStateChangedFB* s);




static void cleanup(const XrSystemPassthroughPropertiesFB* s);




static void cleanup(const XrPassthroughCreateInfoFB* s);




static void cleanup(const XrPassthroughLayerCreateInfoFB* s);




static void cleanup(const XrCompositionLayerPassthroughFB* s);




static void cleanup(const XrGeometryInstanceCreateInfoFB* s);




static void cleanup(const XrGeometryInstanceTransformFB* s);




static void cleanup(const XrSystemPassthroughProperties2FB* s);




static void cleanup(const XrPassthroughStyleFB* s);




static void cleanup(const XrPassthroughColorMapMonoToRgbaFB* s);




static void cleanup(const XrPassthroughColorMapMonoToMonoFB* s);




static void cleanup(const XrPassthroughBrightnessContrastSaturationFB* s);




static void cleanup(const XrEventDataPassthroughStateChangedFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model


static void cleanup(const XrRenderModelPathInfoFB* s);




static void cleanup(const XrRenderModelPropertiesFB* s);




static void cleanup(const XrRenderModelBufferFB* s);




static void cleanup(const XrRenderModelLoadInfoFB* s);




static void cleanup(const XrSystemRenderModelPropertiesFB* s);




static void cleanup(const XrRenderModelCapabilitiesRequestFB* s);




static void cleanup(const XrRenderModelPathInfoFB* s);




static void cleanup(const XrRenderModelPropertiesFB* s);




static void cleanup(const XrRenderModelBufferFB* s);




static void cleanup(const XrRenderModelLoadInfoFB* s);




static void cleanup(const XrSystemRenderModelPropertiesFB* s);




static void cleanup(const XrRenderModelCapabilitiesRequestFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification


static void cleanup(const XrBindingModificationsKHR* s);




static void cleanup(const XrBindingModificationBaseHeaderKHR* s);




static void cleanup(const XrBindingModificationsKHR* s);


#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering


static void cleanup(const XrViewLocateFoveatedRenderingVARJO* s);




static void cleanup(const XrFoveatedViewConfigurationViewVARJO* s);




static void cleanup(const XrSystemFoveatedRenderingPropertiesVARJO* s);




static void cleanup(const XrViewLocateFoveatedRenderingVARJO* s);




static void cleanup(const XrFoveatedViewConfigurationViewVARJO* s);




static void cleanup(const XrSystemFoveatedRenderingPropertiesVARJO* s);


#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test


static void cleanup(const XrCompositionLayerDepthTestVARJO* s);




static void cleanup(const XrCompositionLayerDepthTestVARJO* s);


#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking


static void cleanup(const XrSystemMarkerTrackingPropertiesVARJO* s);




static void cleanup(const XrEventDataMarkerTrackingUpdateVARJO* s);




static void cleanup(const XrMarkerSpaceCreateInfoVARJO* s);




static void cleanup(const XrSystemMarkerTrackingPropertiesVARJO* s);




static void cleanup(const XrEventDataMarkerTrackingUpdateVARJO* s);




static void cleanup(const XrMarkerSpaceCreateInfoVARJO* s);


#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info


static void cleanup(const XrFrameEndInfoML* s);




static void cleanup(const XrFrameEndInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer


static void cleanup(const XrGlobalDimmerFrameEndInfoML* s);




static void cleanup(const XrGlobalDimmerFrameEndInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat


static void cleanup(const XrCoordinateSpaceCreateInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding


static void cleanup(const XrSystemMarkerUnderstandingPropertiesML* s);




static void cleanup(const XrMarkerDetectorCreateInfoML* s);




static void cleanup(const XrMarkerDetectorArucoInfoML* s);




static void cleanup(const XrMarkerDetectorSizeInfoML* s);




static void cleanup(const XrMarkerDetectorAprilTagInfoML* s);




static void cleanup(const XrMarkerDetectorCustomProfileInfoML* s);




static void cleanup(const XrMarkerDetectorSnapshotInfoML* s);




static void cleanup(const XrMarkerDetectorStateML* s);




static void cleanup(const XrMarkerSpaceCreateInfoML* s);




static void cleanup(const XrSystemMarkerUnderstandingPropertiesML* s);




static void cleanup(const XrMarkerDetectorCreateInfoML* s);




static void cleanup(const XrMarkerDetectorArucoInfoML* s);




static void cleanup(const XrMarkerDetectorSizeInfoML* s);




static void cleanup(const XrMarkerDetectorAprilTagInfoML* s);




static void cleanup(const XrMarkerDetectorCustomProfileInfoML* s);




static void cleanup(const XrMarkerDetectorSnapshotInfoML* s);




static void cleanup(const XrMarkerDetectorStateML* s);




static void cleanup(const XrMarkerSpaceCreateInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map


static void cleanup(const XrLocalizationMapML* s);




static void cleanup(const XrEventDataLocalizationChangedML* s);




static void cleanup(const XrLocalizationMapQueryInfoBaseHeaderML* s);




static void cleanup(const XrMapLocalizationRequestInfoML* s);




static void cleanup(const XrLocalizationMapImportInfoML* s);




static void cleanup(const XrLocalizationEnableEventsInfoML* s);




static void cleanup(const XrLocalizationMapML* s);




static void cleanup(const XrEventDataLocalizationChangedML* s);




static void cleanup(const XrMapLocalizationRequestInfoML* s);




static void cleanup(const XrLocalizationMapImportInfoML* s);




static void cleanup(const XrLocalizationEnableEventsInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors


static void cleanup(const XrSpatialAnchorsCreateInfoBaseHeaderML* s);




static void cleanup(const XrSpatialAnchorsCreateInfoFromPoseML* s);




static void cleanup(const XrCreateSpatialAnchorsCompletionML* s);




static void cleanup(const XrSpatialAnchorStateML* s);




static void cleanup(const XrSpatialAnchorsCreateInfoFromPoseML* s);




static void cleanup(const XrCreateSpatialAnchorsCompletionML* s);




static void cleanup(const XrSpatialAnchorStateML* s);


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage


static void cleanup(const XrSpatialAnchorsCreateStorageInfoML* s);




static void cleanup(const XrSpatialAnchorsQueryInfoBaseHeaderML* s);




static void cleanup(const XrSpatialAnchorsQueryInfoRadiusML* s);




static void cleanup(const XrSpatialAnchorsQueryCompletionML* s);




static void cleanup(const XrSpatialAnchorsCreateInfoFromUuidsML* s);




static void cleanup(const XrSpatialAnchorsPublishInfoML* s);




static void cleanup(const XrSpatialAnchorsPublishCompletionML* s);




static void cleanup(const XrSpatialAnchorsDeleteInfoML* s);




static void cleanup(const XrSpatialAnchorsDeleteCompletionML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationInfoML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionML* s);




static void cleanup(const XrSpatialAnchorsPublishCompletionDetailsML* s);




static void cleanup(const XrSpatialAnchorsDeleteCompletionDetailsML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s);




static void cleanup(const XrSpatialAnchorCompletionResultML* s);




static void cleanup(const XrSpatialAnchorsCreateStorageInfoML* s);




static void cleanup(const XrSpatialAnchorsQueryInfoRadiusML* s);




static void cleanup(const XrSpatialAnchorsQueryCompletionML* s);




static void cleanup(const XrSpatialAnchorsCreateInfoFromUuidsML* s);




static void cleanup(const XrSpatialAnchorsPublishInfoML* s);




static void cleanup(const XrSpatialAnchorsPublishCompletionML* s);




static void cleanup(const XrSpatialAnchorsDeleteInfoML* s);




static void cleanup(const XrSpatialAnchorsDeleteCompletionML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationInfoML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionML* s);




static void cleanup(const XrSpatialAnchorsPublishCompletionDetailsML* s);




static void cleanup(const XrSpatialAnchorsDeleteCompletionDetailsML* s);




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s);


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration


static void cleanup(const XrEventDataHeadsetFitChangedML* s);




static void cleanup(const XrEventDataEyeCalibrationChangedML* s);




static void cleanup(const XrUserCalibrationEnableEventsInfoML* s);




static void cleanup(const XrEventDataHeadsetFitChangedML* s);




static void cleanup(const XrEventDataEyeCalibrationChangedML* s);




static void cleanup(const XrUserCalibrationEnableEventsInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence


static void cleanup(const XrSpatialAnchorPersistenceNameMSFT* s);




static void cleanup(const XrSpatialAnchorPersistenceInfoMSFT* s);




static void cleanup(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s);




static void cleanup(const XrSpatialAnchorPersistenceInfoMSFT* s);




static void cleanup(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker


static void cleanup(const XrSceneMarkerMSFT* s);




static void cleanup(const XrSceneMarkersMSFT* s);




static void cleanup(const XrSceneMarkerTypeFilterMSFT* s);




static void cleanup(const XrSceneMarkerQRCodeMSFT* s);




static void cleanup(const XrSceneMarkerQRCodesMSFT* s);




static void cleanup(const XrSceneMarkersMSFT* s);




static void cleanup(const XrSceneMarkerTypeFilterMSFT* s);




static void cleanup(const XrSceneMarkerQRCodesMSFT* s);


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query


static void cleanup(const XrSpaceQueryInfoBaseHeaderFB* s);




static void cleanup(const XrSpaceFilterInfoBaseHeaderFB* s);




static void cleanup(const XrSpaceQueryInfoFB* s);




static void cleanup(const XrSpaceStorageLocationFilterInfoFB* s);




static void cleanup(const XrSpaceUuidFilterInfoFB* s);




static void cleanup(const XrSpaceComponentFilterInfoFB* s);




static void cleanup(const XrSpaceQueryResultFB* s);




static void cleanup(const XrSpaceQueryResultsFB* s);




static void cleanup(const XrEventDataSpaceQueryResultsAvailableFB* s);




static void cleanup(const XrEventDataSpaceQueryCompleteFB* s);




static void cleanup(const XrSpaceQueryInfoFB* s);




static void cleanup(const XrSpaceQueryResultsFB* s);




static void cleanup(const XrSpaceStorageLocationFilterInfoFB* s);




static void cleanup(const XrSpaceUuidFilterInfoFB* s);




static void cleanup(const XrSpaceComponentFilterInfoFB* s);




static void cleanup(const XrEventDataSpaceQueryResultsAvailableFB* s);




static void cleanup(const XrEventDataSpaceQueryCompleteFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage


static void cleanup(const XrSpaceSaveInfoFB* s);




static void cleanup(const XrSpaceEraseInfoFB* s);




static void cleanup(const XrEventDataSpaceSaveCompleteFB* s);




static void cleanup(const XrEventDataSpaceEraseCompleteFB* s);




static void cleanup(const XrSpaceSaveInfoFB* s);




static void cleanup(const XrSpaceEraseInfoFB* s);




static void cleanup(const XrEventDataSpaceSaveCompleteFB* s);




static void cleanup(const XrEventDataSpaceEraseCompleteFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan


static void cleanup(const XrSwapchainImageFoveationVulkanFB* s);




static void cleanup(const XrSwapchainImageFoveationVulkanFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface


static void cleanup(const XrSwapchainStateAndroidSurfaceDimensionsFB* s);




static void cleanup(const XrSwapchainStateAndroidSurfaceDimensionsFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es


static void cleanup(const XrSwapchainStateSamplerOpenGLESFB* s);




static void cleanup(const XrSwapchainStateSamplerOpenGLESFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan


static void cleanup(const XrSwapchainStateSamplerVulkanFB* s);




static void cleanup(const XrSwapchainStateSamplerVulkanFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing


static void cleanup(const XrSpaceShareInfoFB* s);




static void cleanup(const XrEventDataSpaceShareCompleteFB* s);




static void cleanup(const XrSpaceShareInfoFB* s);




static void cleanup(const XrEventDataSpaceShareCompleteFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp


static void cleanup(const XrCompositionLayerSpaceWarpInfoFB* s);




static void cleanup(const XrSystemSpaceWarpPropertiesFB* s);




static void cleanup(const XrCompositionLayerSpaceWarpInfoFB* s);




static void cleanup(const XrSystemSpaceWarpPropertiesFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope


static void cleanup(const XrHapticAmplitudeEnvelopeVibrationFB* s);




static void cleanup(const XrHapticAmplitudeEnvelopeVibrationFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene


static void cleanup(const XrOffset3DfFB* s);




static void cleanup(const XrRect3DfFB* s);




static void cleanup(const XrSemanticLabelsFB* s);




static void cleanup(const XrRoomLayoutFB* s);




static void cleanup(const XrBoundary2DFB* s);




static void cleanup(const XrSemanticLabelsSupportInfoFB* s);




static void cleanup(const XrSemanticLabelsFB* s);




static void cleanup(const XrRoomLayoutFB* s);




static void cleanup(const XrBoundary2DFB* s);




static void cleanup(const XrSemanticLabelsSupportInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control


static void cleanup(const XrDigitalLensControlALMALENCE* s);


#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture


static void cleanup(const XrEventDataSceneCaptureCompleteFB* s);




static void cleanup(const XrSceneCaptureRequestInfoFB* s);




static void cleanup(const XrEventDataSceneCaptureCompleteFB* s);




static void cleanup(const XrSceneCaptureRequestInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container


static void cleanup(const XrSpaceContainerFB* s);




static void cleanup(const XrSpaceContainerFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked


static void cleanup(const XrFoveationEyeTrackedProfileCreateInfoMETA* s);




static void cleanup(const XrFoveationEyeTrackedStateMETA* s);




static void cleanup(const XrSystemFoveationEyeTrackedPropertiesMETA* s);




static void cleanup(const XrFoveationEyeTrackedProfileCreateInfoMETA* s);




static void cleanup(const XrFoveationEyeTrackedStateMETA* s);




static void cleanup(const XrSystemFoveationEyeTrackedPropertiesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking


static void cleanup(const XrSystemFaceTrackingPropertiesFB* s);




static void cleanup(const XrFaceTrackerCreateInfoFB* s);




static void cleanup(const XrFaceExpressionInfoFB* s);




static void cleanup(const XrFaceExpressionStatusFB* s);




static void cleanup(const XrFaceExpressionWeightsFB* s);




static void cleanup(const XrSystemFaceTrackingPropertiesFB* s);




static void cleanup(const XrFaceTrackerCreateInfoFB* s);




static void cleanup(const XrFaceExpressionInfoFB* s);




static void cleanup(const XrFaceExpressionWeightsFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social


static void cleanup(const XrEyeGazeFB* s);




static void cleanup(const XrEyeTrackerCreateInfoFB* s);




static void cleanup(const XrEyeGazesInfoFB* s);




static void cleanup(const XrSystemEyeTrackingPropertiesFB* s);




static void cleanup(const XrEyeGazesFB* s);




static void cleanup(const XrEyeTrackerCreateInfoFB* s);




static void cleanup(const XrEyeGazesInfoFB* s);




static void cleanup(const XrEyeGazesFB* s);




static void cleanup(const XrSystemEyeTrackingPropertiesFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands


static void cleanup(const XrPassthroughKeyboardHandsIntensityFB* s);




static void cleanup(const XrPassthroughKeyboardHandsIntensityFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings


static void cleanup(const XrCompositionLayerSettingsFB* s);




static void cleanup(const XrCompositionLayerSettingsFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm


static void cleanup(const XrHapticPcmVibrationFB* s);




static void cleanup(const XrDevicePcmSampleRateStateFB* s);




static void cleanup(const XrHapticPcmVibrationFB* s);




static void cleanup(const XrDevicePcmSampleRateStateFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis


static void cleanup(const XrFrameSynthesisInfoEXT* s);




static void cleanup(const XrFrameSynthesisConfigViewEXT* s);




static void cleanup(const XrFrameSynthesisInfoEXT* s);




static void cleanup(const XrFrameSynthesisConfigViewEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test


static void cleanup(const XrCompositionLayerDepthTestFB* s);




static void cleanup(const XrCompositionLayerDepthTestFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming


static void cleanup(const XrLocalDimmingFrameEndInfoMETA* s);




static void cleanup(const XrLocalDimmingFrameEndInfoMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences


static void cleanup(const XrPassthroughPreferencesMETA* s);




static void cleanup(const XrPassthroughPreferencesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard


static void cleanup(const XrSystemVirtualKeyboardPropertiesMETA* s);




static void cleanup(const XrVirtualKeyboardCreateInfoMETA* s);




static void cleanup(const XrVirtualKeyboardSpaceCreateInfoMETA* s);




static void cleanup(const XrVirtualKeyboardLocationInfoMETA* s);




static void cleanup(const XrVirtualKeyboardModelVisibilitySetInfoMETA* s);




static void cleanup(const XrVirtualKeyboardAnimationStateMETA* s);




static void cleanup(const XrVirtualKeyboardModelAnimationStatesMETA* s);




static void cleanup(const XrVirtualKeyboardTextureDataMETA* s);




static void cleanup(const XrVirtualKeyboardInputInfoMETA* s);




static void cleanup(const XrVirtualKeyboardTextContextChangeInfoMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardCommitTextMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardBackspaceMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardEnterMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardShownMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardHiddenMETA* s);




static void cleanup(const XrSystemVirtualKeyboardPropertiesMETA* s);




static void cleanup(const XrVirtualKeyboardCreateInfoMETA* s);




static void cleanup(const XrVirtualKeyboardSpaceCreateInfoMETA* s);




static void cleanup(const XrVirtualKeyboardLocationInfoMETA* s);




static void cleanup(const XrVirtualKeyboardModelVisibilitySetInfoMETA* s);




static void cleanup(const XrVirtualKeyboardAnimationStateMETA* s);




static void cleanup(const XrVirtualKeyboardModelAnimationStatesMETA* s);




static void cleanup(const XrVirtualKeyboardTextureDataMETA* s);




static void cleanup(const XrVirtualKeyboardInputInfoMETA* s);




static void cleanup(const XrVirtualKeyboardTextContextChangeInfoMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardCommitTextMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardBackspaceMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardEnterMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardShownMETA* s);




static void cleanup(const XrEventDataVirtualKeyboardHiddenMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera


static void cleanup(const XrExternalCameraIntrinsicsOCULUS* s);




static void cleanup(const XrExternalCameraExtrinsicsOCULUS* s);




static void cleanup(const XrExternalCameraOCULUS* s);




static void cleanup(const XrExternalCameraOCULUS* s);


#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info


static void cleanup(const XrVulkanSwapchainCreateInfoMETA* s);




static void cleanup(const XrVulkanSwapchainCreateInfoMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics


static void cleanup(const XrPerformanceMetricsStateMETA* s);




static void cleanup(const XrPerformanceMetricsCounterMETA* s);




static void cleanup(const XrPerformanceMetricsStateMETA* s);




static void cleanup(const XrPerformanceMetricsCounterMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch


static void cleanup(const XrSpaceListSaveInfoFB* s);




static void cleanup(const XrEventDataSpaceListSaveCompleteFB* s);




static void cleanup(const XrSpaceListSaveInfoFB* s);




static void cleanup(const XrEventDataSpaceListSaveCompleteFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user


static void cleanup(const XrSpaceUserCreateInfoFB* s);




static void cleanup(const XrSpaceUserCreateInfoFB* s);


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id


static void cleanup(const XrSystemHeadsetIdPropertiesMETA* s);




static void cleanup(const XrSystemHeadsetIdPropertiesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution


static void cleanup(const XrRecommendedLayerResolutionMETA* s);




static void cleanup(const XrRecommendedLayerResolutionGetInfoMETA* s);




static void cleanup(const XrRecommendedLayerResolutionMETA* s);




static void cleanup(const XrRecommendedLayerResolutionGetInfoMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut


static void cleanup(const XrPassthroughColorLutDataMETA* s);




static void cleanup(const XrPassthroughColorLutCreateInfoMETA* s);




static void cleanup(const XrPassthroughColorLutUpdateInfoMETA* s);




static void cleanup(const XrPassthroughColorMapLutMETA* s);




static void cleanup(const XrPassthroughColorMapInterpolatedLutMETA* s);




static void cleanup(const XrSystemPassthroughColorLutPropertiesMETA* s);




static void cleanup(const XrSystemPassthroughColorLutPropertiesMETA* s);




static void cleanup(const XrPassthroughColorLutCreateInfoMETA* s);




static void cleanup(const XrPassthroughColorLutUpdateInfoMETA* s);




static void cleanup(const XrPassthroughColorMapLutMETA* s);




static void cleanup(const XrPassthroughColorMapInterpolatedLutMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh


static void cleanup(const XrSpaceTriangleMeshGetInfoMETA* s);




static void cleanup(const XrSpaceTriangleMeshMETA* s);




static void cleanup(const XrSpaceTriangleMeshGetInfoMETA* s);




static void cleanup(const XrSpaceTriangleMeshMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body


static void cleanup(const XrSystemPropertiesBodyTrackingFullBodyMETA* s);




static void cleanup(const XrSystemPropertiesBodyTrackingFullBodyMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event


static void cleanup(const XrEventDataPassthroughLayerResumedMETA* s);




static void cleanup(const XrEventDataPassthroughLayerResumedMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2


static void cleanup(const XrSystemFaceTrackingProperties2FB* s);




static void cleanup(const XrFaceTrackerCreateInfo2FB* s);




static void cleanup(const XrFaceExpressionInfo2FB* s);




static void cleanup(const XrFaceExpressionWeights2FB* s);




static void cleanup(const XrSystemFaceTrackingProperties2FB* s);




static void cleanup(const XrFaceTrackerCreateInfo2FB* s);




static void cleanup(const XrFaceExpressionInfo2FB* s);




static void cleanup(const XrFaceExpressionWeights2FB* s);


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing


static void cleanup(const XrSystemSpatialEntitySharingPropertiesMETA* s);




static void cleanup(const XrShareSpacesRecipientBaseHeaderMETA* s);




static void cleanup(const XrShareSpacesInfoMETA* s);




static void cleanup(const XrEventDataShareSpacesCompleteMETA* s);




static void cleanup(const XrSystemSpatialEntitySharingPropertiesMETA* s);




static void cleanup(const XrShareSpacesInfoMETA* s);




static void cleanup(const XrEventDataShareSpacesCompleteMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth


static void cleanup(const XrEnvironmentDepthProviderCreateInfoMETA* s);




static void cleanup(const XrEnvironmentDepthSwapchainCreateInfoMETA* s);




static void cleanup(const XrEnvironmentDepthSwapchainStateMETA* s);




static void cleanup(const XrEnvironmentDepthImageAcquireInfoMETA* s);




static void cleanup(const XrEnvironmentDepthImageViewMETA* s);




static void cleanup(const XrEnvironmentDepthImageMETA* s);




static void cleanup(const XrEnvironmentDepthHandRemovalSetInfoMETA* s);




static void cleanup(const XrSystemEnvironmentDepthPropertiesMETA* s);




static void cleanup(const XrEnvironmentDepthProviderCreateInfoMETA* s);




static void cleanup(const XrEnvironmentDepthSwapchainCreateInfoMETA* s);




static void cleanup(const XrEnvironmentDepthSwapchainStateMETA* s);




static void cleanup(const XrEnvironmentDepthImageAcquireInfoMETA* s);




static void cleanup(const XrEnvironmentDepthImageViewMETA* s);




static void cleanup(const XrEnvironmentDepthImageMETA* s);




static void cleanup(const XrEnvironmentDepthHandRemovalSetInfoMETA* s);




static void cleanup(const XrSystemEnvironmentDepthPropertiesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough


static void cleanup(const XrPassthroughCreateInfoHTC* s);




static void cleanup(const XrPassthroughColorHTC* s);




static void cleanup(const XrPassthroughMeshTransformInfoHTC* s);




static void cleanup(const XrCompositionLayerPassthroughHTC* s);




static void cleanup(const XrPassthroughCreateInfoHTC* s);




static void cleanup(const XrPassthroughColorHTC* s);




static void cleanup(const XrPassthroughMeshTransformInfoHTC* s);




static void cleanup(const XrCompositionLayerPassthroughHTC* s);


#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation


static void cleanup(const XrFoveationApplyInfoHTC* s);




static void cleanup(const XrFoveationConfigurationHTC* s);




static void cleanup(const XrFoveationDynamicModeInfoHTC* s);




static void cleanup(const XrFoveationCustomModeInfoHTC* s);




static void cleanup(const XrFoveationApplyInfoHTC* s);




static void cleanup(const XrFoveationDynamicModeInfoHTC* s);




static void cleanup(const XrFoveationCustomModeInfoHTC* s);


#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor


static void cleanup(const XrSystemAnchorPropertiesHTC* s);




static void cleanup(const XrSpatialAnchorCreateInfoHTC* s);




static void cleanup(const XrSpatialAnchorNameHTC* s);




static void cleanup(const XrSystemAnchorPropertiesHTC* s);




static void cleanup(const XrSpatialAnchorCreateInfoHTC* s);


#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking


static void cleanup(const XrSystemBodyTrackingPropertiesHTC* s);




static void cleanup(const XrBodyTrackerCreateInfoHTC* s);




static void cleanup(const XrBodyJointsLocateInfoHTC* s);




static void cleanup(const XrBodyJointLocationsHTC* s);




static void cleanup(const XrBodyJointLocationHTC* s);




static void cleanup(const XrBodySkeletonHTC* s);




static void cleanup(const XrSystemBodyTrackingPropertiesHTC* s);




static void cleanup(const XrBodyTrackerCreateInfoHTC* s);




static void cleanup(const XrBodyJointsLocateInfoHTC* s);




static void cleanup(const XrBodyJointLocationsHTC* s);




static void cleanup(const XrBodySkeletonHTC* s);


#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority


static void cleanup(const XrActiveActionSetPrioritiesEXT* s);




static void cleanup(const XrActiveActionSetPriorityEXT* s);




static void cleanup(const XrActiveActionSetPrioritiesEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl


static void cleanup(const XrSystemForceFeedbackCurlPropertiesMNDX* s);




static void cleanup(const XrForceFeedbackCurlApplyLocationsMNDX* s);




static void cleanup(const XrForceFeedbackCurlApplyLocationMNDX* s);




static void cleanup(const XrSystemForceFeedbackCurlPropertiesMNDX* s);




static void cleanup(const XrForceFeedbackCurlApplyLocationsMNDX* s);


#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking


static void cleanup(const XrSystemBodyTrackingPropertiesBD* s);




static void cleanup(const XrBodyTrackerCreateInfoBD* s);




static void cleanup(const XrBodyJointsLocateInfoBD* s);




static void cleanup(const XrBodyJointLocationsBD* s);




static void cleanup(const XrBodyJointLocationBD* s);




static void cleanup(const XrBodyTrackerCreateInfoBD* s);




static void cleanup(const XrBodyJointsLocateInfoBD* s);




static void cleanup(const XrBodyJointLocationsBD* s);




static void cleanup(const XrSystemBodyTrackingPropertiesBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing


static void cleanup(const XrSystemSpatialSensingPropertiesBD* s);




static void cleanup(const XrSpatialEntityComponentGetInfoBD* s);




static void cleanup(const XrSpatialEntityComponentDataBaseHeaderBD* s);




static void cleanup(const XrSpatialEntityLocationGetInfoBD* s);




static void cleanup(const XrSpatialEntityComponentDataLocationBD* s);




static void cleanup(const XrSpatialEntityComponentDataSemanticBD* s);




static void cleanup(const XrSpatialEntityComponentDataBoundingBox2DBD* s);




static void cleanup(const XrSpatialEntityComponentDataPolygonBD* s);




static void cleanup(const XrSpatialEntityComponentDataBoundingBox3DBD* s);




static void cleanup(const XrSpatialEntityComponentDataTriangleMeshBD* s);




static void cleanup(const XrSenseDataProviderCreateInfoBD* s);




static void cleanup(const XrSenseDataProviderStartInfoBD* s);




static void cleanup(const XrEventDataSenseDataProviderStateChangedBD* s);




static void cleanup(const XrEventDataSenseDataUpdatedBD* s);




static void cleanup(const XrSenseDataQueryInfoBD* s);




static void cleanup(const XrSenseDataQueryCompletionBD* s);




static void cleanup(const XrQueriedSenseDataGetInfoBD* s);




static void cleanup(const XrQueriedSenseDataBD* s);




static void cleanup(const XrSpatialEntityStateBD* s);




static void cleanup(const XrSenseDataFilterUuidBD* s);




static void cleanup(const XrSenseDataFilterSemanticBD* s);




static void cleanup(const XrSpatialEntityAnchorCreateInfoBD* s);




static void cleanup(const XrAnchorSpaceCreateInfoBD* s);




static void cleanup(const XrSystemSpatialSensingPropertiesBD* s);




static void cleanup(const XrSpatialEntityComponentGetInfoBD* s);




static void cleanup(const XrSpatialEntityLocationGetInfoBD* s);




static void cleanup(const XrSpatialEntityComponentDataLocationBD* s);




static void cleanup(const XrSpatialEntityComponentDataSemanticBD* s);




static void cleanup(const XrSpatialEntityComponentDataBoundingBox2DBD* s);




static void cleanup(const XrSpatialEntityComponentDataPolygonBD* s);




static void cleanup(const XrSpatialEntityComponentDataBoundingBox3DBD* s);




static void cleanup(const XrSpatialEntityComponentDataTriangleMeshBD* s);




static void cleanup(const XrSenseDataProviderCreateInfoBD* s);




static void cleanup(const XrSenseDataProviderStartInfoBD* s);




static void cleanup(const XrEventDataSenseDataProviderStateChangedBD* s);




static void cleanup(const XrEventDataSenseDataUpdatedBD* s);




static void cleanup(const XrSenseDataQueryInfoBD* s);




static void cleanup(const XrSenseDataQueryCompletionBD* s);




static void cleanup(const XrSenseDataFilterUuidBD* s);




static void cleanup(const XrSenseDataFilterSemanticBD* s);




static void cleanup(const XrQueriedSenseDataGetInfoBD* s);




static void cleanup(const XrQueriedSenseDataBD* s);




static void cleanup(const XrSpatialEntityStateBD* s);




static void cleanup(const XrSpatialEntityAnchorCreateInfoBD* s);




static void cleanup(const XrAnchorSpaceCreateInfoBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor


static void cleanup(const XrSystemSpatialAnchorPropertiesBD* s);




static void cleanup(const XrSpatialAnchorCreateInfoBD* s);




static void cleanup(const XrSpatialAnchorCreateCompletionBD* s);




static void cleanup(const XrSpatialAnchorPersistInfoBD* s);




static void cleanup(const XrSpatialAnchorUnpersistInfoBD* s);




static void cleanup(const XrSystemSpatialAnchorPropertiesBD* s);




static void cleanup(const XrSpatialAnchorCreateInfoBD* s);




static void cleanup(const XrSpatialAnchorCreateCompletionBD* s);




static void cleanup(const XrSpatialAnchorPersistInfoBD* s);




static void cleanup(const XrSpatialAnchorUnpersistInfoBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing


static void cleanup(const XrSystemSpatialAnchorSharingPropertiesBD* s);




static void cleanup(const XrSpatialAnchorShareInfoBD* s);




static void cleanup(const XrSharedSpatialAnchorDownloadInfoBD* s);




static void cleanup(const XrSystemSpatialAnchorSharingPropertiesBD* s);




static void cleanup(const XrSpatialAnchorShareInfoBD* s);




static void cleanup(const XrSharedSpatialAnchorDownloadInfoBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene


static void cleanup(const XrSystemSpatialScenePropertiesBD* s);




static void cleanup(const XrSceneCaptureInfoBD* s);




static void cleanup(const XrSystemSpatialScenePropertiesBD* s);




static void cleanup(const XrSceneCaptureInfoBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh


static void cleanup(const XrSystemSpatialMeshPropertiesBD* s);




static void cleanup(const XrSenseDataProviderCreateInfoSpatialMeshBD* s);




static void cleanup(const XrSystemSpatialMeshPropertiesBD* s);




static void cleanup(const XrSenseDataProviderCreateInfoSpatialMeshBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress


static void cleanup(const XrFuturePollResultProgressBD* s);




static void cleanup(const XrFuturePollResultProgressBD* s);


#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source


static void cleanup(const XrHandTrackingDataSourceInfoEXT* s);




static void cleanup(const XrHandTrackingDataSourceStateEXT* s);




static void cleanup(const XrHandTrackingDataSourceInfoEXT* s);




static void cleanup(const XrHandTrackingDataSourceStateEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection


static void cleanup(const XrSystemPlaneDetectionPropertiesEXT* s);




static void cleanup(const XrPlaneDetectorCreateInfoEXT* s);




static void cleanup(const XrPlaneDetectorBeginInfoEXT* s);




static void cleanup(const XrPlaneDetectorGetInfoEXT* s);




static void cleanup(const XrPlaneDetectorLocationEXT* s);




static void cleanup(const XrPlaneDetectorLocationsEXT* s);




static void cleanup(const XrPlaneDetectorPolygonBufferEXT* s);




static void cleanup(const XrPlaneDetectorCreateInfoEXT* s);




static void cleanup(const XrPlaneDetectorBeginInfoEXT* s);




static void cleanup(const XrPlaneDetectorGetInfoEXT* s);




static void cleanup(const XrPlaneDetectorLocationsEXT* s);




static void cleanup(const XrPlaneDetectorLocationEXT* s);




static void cleanup(const XrPlaneDetectorPolygonBufferEXT* s);




static void cleanup(const XrSystemPlaneDetectionPropertiesEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future


static void cleanup(const XrFutureCancelInfoEXT* s);




static void cleanup(const XrFuturePollInfoEXT* s);




static void cleanup(const XrFutureCompletionBaseHeaderEXT* s);




static void cleanup(const XrFutureCompletionEXT* s);




static void cleanup(const XrFuturePollResultEXT* s);




static void cleanup(const XrFutureCancelInfoEXT* s);




static void cleanup(const XrFuturePollInfoEXT* s);




static void cleanup(const XrFutureCompletionEXT* s);




static void cleanup(const XrFuturePollResultEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence


static void cleanup(const XrEventDataUserPresenceChangedEXT* s);




static void cleanup(const XrSystemUserPresencePropertiesEXT* s);




static void cleanup(const XrEventDataUserPresenceChangedEXT* s);




static void cleanup(const XrSystemUserPresencePropertiesEXT* s);


#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications


static void cleanup(const XrSystemNotificationsSetInfoML* s);




static void cleanup(const XrSystemNotificationsSetInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection


static void cleanup(const XrWorldMeshDetectorCreateInfoML* s);




static void cleanup(const XrWorldMeshBlockStateML* s);




static void cleanup(const XrWorldMeshStateRequestInfoML* s);




static void cleanup(const XrWorldMeshStateRequestCompletionML* s);




static void cleanup(const XrWorldMeshBufferRecommendedSizeInfoML* s);




static void cleanup(const XrWorldMeshBufferSizeML* s);




static void cleanup(const XrWorldMeshBufferML* s);




static void cleanup(const XrWorldMeshBlockRequestML* s);




static void cleanup(const XrWorldMeshGetInfoML* s);




static void cleanup(const XrWorldMeshBlockML* s);




static void cleanup(const XrWorldMeshRequestCompletionInfoML* s);




static void cleanup(const XrWorldMeshRequestCompletionML* s);




static void cleanup(const XrWorldMeshDetectorCreateInfoML* s);




static void cleanup(const XrWorldMeshStateRequestInfoML* s);




static void cleanup(const XrWorldMeshBlockStateML* s);




static void cleanup(const XrWorldMeshStateRequestCompletionML* s);




static void cleanup(const XrWorldMeshBufferRecommendedSizeInfoML* s);




static void cleanup(const XrWorldMeshBufferSizeML* s);




static void cleanup(const XrWorldMeshBufferML* s);




static void cleanup(const XrWorldMeshBlockRequestML* s);




static void cleanup(const XrWorldMeshGetInfoML* s);




static void cleanup(const XrWorldMeshBlockML* s);




static void cleanup(const XrWorldMeshRequestCompletionML* s);




static void cleanup(const XrWorldMeshRequestCompletionInfoML* s);


#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression


static void cleanup(const XrSystemFacialExpressionPropertiesML* s);




static void cleanup(const XrFacialExpressionClientCreateInfoML* s);




static void cleanup(const XrFacialExpressionBlendShapeGetInfoML* s);




static void cleanup(const XrFacialExpressionBlendShapePropertiesML* s);




static void cleanup(const XrSystemFacialExpressionPropertiesML* s);




static void cleanup(const XrFacialExpressionClientCreateInfoML* s);




static void cleanup(const XrFacialExpressionBlendShapeGetInfoML* s);




static void cleanup(const XrFacialExpressionBlendShapePropertiesML* s);


#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers


static void cleanup(const XrSystemSimultaneousHandsAndControllersPropertiesMETA* s);




static void cleanup(const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s);




static void cleanup(const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s);




static void cleanup(const XrSystemSimultaneousHandsAndControllersPropertiesMETA* s);




static void cleanup(const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s);




static void cleanup(const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery


static void cleanup(const XrColocationDiscoveryStartInfoMETA* s);




static void cleanup(const XrColocationDiscoveryStopInfoMETA* s);




static void cleanup(const XrColocationAdvertisementStartInfoMETA* s);




static void cleanup(const XrColocationAdvertisementStopInfoMETA* s);




static void cleanup(const XrEventDataStartColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataStopColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataStartColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrEventDataColocationDiscoveryResultMETA* s);




static void cleanup(const XrEventDataColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrEventDataStopColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrSystemColocationDiscoveryPropertiesMETA* s);




static void cleanup(const XrColocationDiscoveryStartInfoMETA* s);




static void cleanup(const XrColocationDiscoveryStopInfoMETA* s);




static void cleanup(const XrColocationAdvertisementStartInfoMETA* s);




static void cleanup(const XrColocationAdvertisementStopInfoMETA* s);




static void cleanup(const XrEventDataStartColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataStopColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataColocationAdvertisementCompleteMETA* s);




static void cleanup(const XrEventDataStartColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrEventDataColocationDiscoveryResultMETA* s);




static void cleanup(const XrEventDataColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrEventDataStopColocationDiscoveryCompleteMETA* s);




static void cleanup(const XrSystemColocationDiscoveryPropertiesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void cleanup(const XrSystemSpatialEntityGroupSharingPropertiesMETA* s);




static void cleanup(const XrShareSpacesRecipientGroupsMETA* s);




static void cleanup(const XrSpaceGroupUuidFilterInfoMETA* s);




static void cleanup(const XrShareSpacesRecipientGroupsMETA* s);




static void cleanup(const XrSpaceGroupUuidFilterInfoMETA* s);




static void cleanup(const XrSystemSpatialEntityGroupSharingPropertiesMETA* s);


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void cleanup(const XrActionCreateInfo* s);




static void cleanup(const XrActionSetCreateInfo* s);




static void cleanup(const XrActionSpaceCreateInfo* s);




static void cleanup(const XrActionStateBoolean* s);




static void cleanup(const XrActionStateFloat* s);




static void cleanup(const XrActionStateGetInfo* s);




static void cleanup(const XrActionStatePose* s);




static void cleanup(const XrActionStateVector2f* s);




static void cleanup(const XrActionSuggestedBinding* s);




static void cleanup(const XrActionsSyncInfo* s);




static void cleanup(const XrActiveActionSet* s);




static void cleanup(const XrApiLayerProperties* s);




static void cleanup(const XrApplicationInfo* s);




static void cleanup(const XrBodySkeletonJointHTC* s);




static void cleanup(const XrBoundSourcesForActionEnumerateInfo* s);




static void cleanup(const XrBoxf* s);




static void cleanup(const XrColor3f* s);




static void cleanup(const XrColor4f* s);




static void cleanup(const XrCompositionLayerBaseHeader* s);




static void cleanup(const XrCompositionLayerProjection* s);




static void cleanup(const XrCompositionLayerProjectionView* s);




static void cleanup(const XrCompositionLayerQuad* s);




static void cleanup(const XrEventDataBaseHeader* s);




static void cleanup(const XrEventDataBuffer* s);




static void cleanup(const XrEventDataEventsLost* s);




static void cleanup(const XrEventDataInstanceLossPending* s);




static void cleanup(const XrEventDataInteractionProfileChanged* s);




static void cleanup(const XrEventDataReferenceSpaceChangePending* s);




static void cleanup(const XrEventDataSessionStateChanged* s);




static void cleanup(const XrExtensionProperties* s);




static void cleanup(const XrExtent2Df* s);




static void cleanup(const XrExtent2Di* s);




static void cleanup(const XrExtent3Df* s);




static void cleanup(const XrFovf* s);




static void cleanup(const XrFrameBeginInfo* s);




static void cleanup(const XrFrameEndInfo* s);




static void cleanup(const XrFrameState* s);




static void cleanup(const XrFrameWaitInfo* s);




static void cleanup(const XrFrustumf* s);




static void cleanup(const XrHapticActionInfo* s);




static void cleanup(const XrHapticBaseHeader* s);




static void cleanup(const XrHapticVibration* s);




static void cleanup(const XrInputSourceLocalizedNameGetInfo* s);




static void cleanup(const XrInstanceCreateInfo* s);




static void cleanup(const XrInstanceProperties* s);




static void cleanup(const XrInteractionProfileState* s);




static void cleanup(const XrInteractionProfileSuggestedBinding* s);




static void cleanup(const XrOffset2Df* s);




static void cleanup(const XrOffset2Di* s);




static void cleanup(const XrPosef* s);




static void cleanup(const XrQuaternionf* s);




static void cleanup(const XrRect2Df* s);




static void cleanup(const XrRect2Di* s);




static void cleanup(const XrReferenceSpaceCreateInfo* s);




static void cleanup(const XrSessionActionSetsAttachInfo* s);




static void cleanup(const XrSessionBeginInfo* s);




static void cleanup(const XrSessionCreateInfo* s);




static void cleanup(const XrSpaceLocation* s);




static void cleanup(const XrSpaceLocationData* s);




static void cleanup(const XrSpaceLocations* s);




static void cleanup(const XrSpaceVelocities* s);




static void cleanup(const XrSpaceVelocity* s);




static void cleanup(const XrSpaceVelocityData* s);




static void cleanup(const XrSpacesLocateInfo* s);




static void cleanup(const XrSpheref* s);




static void cleanup(const XrSwapchainCreateInfo* s);




static void cleanup(const XrSwapchainImageAcquireInfo* s);




static void cleanup(const XrSwapchainImageBaseHeader* s);




static void cleanup(const XrSwapchainImageReleaseInfo* s);




static void cleanup(const XrSwapchainImageWaitInfo* s);




static void cleanup(const XrSwapchainSubImage* s);




static void cleanup(const XrSystemGetInfo* s);




static void cleanup(const XrSystemGraphicsProperties* s);




static void cleanup(const XrSystemProperties* s);




static void cleanup(const XrSystemTrackingProperties* s);




static void cleanup(const XrUuid* s);




static void cleanup(const XrVector2f* s);




static void cleanup(const XrVector3f* s);




static void cleanup(const XrVector4f* s);




static void cleanup(const XrView* s);




static void cleanup(const XrViewConfigurationProperties* s);




static void cleanup(const XrViewConfigurationView* s);




static void cleanup(const XrViewLocateInfo* s);




static void cleanup(const XrViewState* s);




// Struct deserializer lookup
// Only to be used with OpenXR pNext structs
using StructDeserializer = void(*)(XrBaseOutStructure*, std::istream&);
#define STRUCT_DESERIALIZER_PTR(t) (reinterpret_cast<StructDeserializer>(static_cast<void(*)(t*, std::istream&)>(&deserialize)))

static std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube

    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerCubeKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerCubeKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance

    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrInstanceCreateInfoAndroidKHR)},


    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrInstanceCreateInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthInfoKHR)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list

    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanSwapchainFormatListCreateInfoKHR)},


    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanSwapchainFormatListCreateInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings

    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, STRUCT_DESERIALIZER_PTR(XrEventDataPerfSettingsEXT)},


    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, STRUCT_DESERIALIZER_PTR(XrEventDataPerfSettingsEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder

    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerCylinderKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerCylinderKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerEquirectKHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerEquirectKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils

    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsLabelEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, STRUCT_DESERIALIZER_PTR(XrDebugUtilsLabelEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsOpenGLKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsOpenGLKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsOpenGLESKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable

    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsVulkanKHR)},


    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsVulkanKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsD3D11KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsD3D11KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsD3D12KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsD3D12KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable

    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsMetalKHR)},


    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, STRUCT_DESERIALIZER_PTR(XrGraphicsRequirementsMetalKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction

    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, STRUCT_DESERIALIZER_PTR(XrEyeGazeSampleTimeEXT)},


    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, STRUCT_DESERIALIZER_PTR(XrEyeGazeSampleTimeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask

    {XR_TYPE_VISIBILITY_MASK_KHR, STRUCT_DESERIALIZER_PTR(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, STRUCT_DESERIALIZER_PTR(XrEventDataVisibilityMaskChangedKHR)},


    {XR_TYPE_VISIBILITY_MASK_KHR, STRUCT_DESERIALIZER_PTR(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, STRUCT_DESERIALIZER_PTR(XrEventDataVisibilityMaskChangedKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay

    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, STRUCT_DESERIALIZER_PTR(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, STRUCT_DESERIALIZER_PTR(XrEventDataMainSessionVisibilityChangedEXTX)},


    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, STRUCT_DESERIALIZER_PTR(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, STRUCT_DESERIALIZER_PTR(XrEventDataMainSessionVisibilityChangedEXTX)},

#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias

    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerColorScaleBiasKHR)},


    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerColorScaleBiasKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor

    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorSpaceCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout

    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerImageLayoutFB)},


    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerImageLayoutFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend

    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerAlphaBlendFB)},


    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerAlphaBlendFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range

    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, STRUCT_DESERIALIZER_PTR(XrViewConfigurationDepthRangeEXT)},


    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, STRUCT_DESERIALIZER_PTR(XrViewConfigurationDepthRangeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable

    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingEGLMNDX)},


    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, STRUCT_DESERIALIZER_PTR(XrGraphicsBindingEGLMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge

    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeBindingPropertiesMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialGraphNodeBindingPropertiesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking

    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointVelocitiesEXT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointVelocitiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh

    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandPoseTypeInfoMSFT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, STRUCT_DESERIALIZER_PTR(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrHandPoseTypeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration

    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model

    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, STRUCT_DESERIALIZER_PTR(XrControllerModelStateMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov

    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, STRUCT_DESERIALIZER_PTR(XrViewConfigurationViewFovEPIC)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, STRUCT_DESERIALIZER_PTR(XrViewConfigurationViewFovEPIC)},

#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment

    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, STRUCT_DESERIALIZER_PTR(XrHolographicWindowAttachmentMSFT)},


    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, STRUCT_DESERIALIZER_PTR(XrHolographicWindowAttachmentMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection

    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, STRUCT_DESERIALIZER_PTR(XrCompositionLayerReprojectionPlaneOverrideMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, STRUCT_DESERIALIZER_PTR(XrCompositionLayerReprojectionPlaneOverrideMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create

    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrAndroidSurfaceSwapchainCreateInfoFB)},


    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrAndroidSurfaceSwapchainCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content

    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSecureContentFB)},


    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSecureContentFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_SKELETON_FB, STRUCT_DESERIALIZER_PTR(XrBodySkeletonFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_SKELETON_FB, STRUCT_DESERIALIZER_PTR(XrBodySkeletonFB)},

#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding

    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, STRUCT_DESERIALIZER_PTR(XrInteractionProfileDpadBindingEXT)},


    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, STRUCT_DESERIALIZER_PTR(XrInteractionProfileDpadBindingEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold

    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, STRUCT_DESERIALIZER_PTR(XrInteractionProfileAnalogThresholdVALVE)},


    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, STRUCT_DESERIALIZER_PTR(XrInteractionProfileAnalogThresholdVALVE)},

#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range

    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointsMotionRangeInfoEXT)},


    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandJointsMotionRangeInfoEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init
#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android

    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrLoaderInitInfoAndroidKHR)},


    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, STRUCT_DESERIALIZER_PTR(XrLoaderInitInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2

    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanGraphicsDeviceGetInfoKHR)},


    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, STRUCT_DESERIALIZER_PTR(XrVulkanGraphicsDeviceGetInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerEquirect2KHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, STRUCT_DESERIALIZER_PTR(XrCompositionLayerEquirect2KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding

    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, STRUCT_DESERIALIZER_PTR(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshIndicesUint16MSFT)},


    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, STRUCT_DESERIALIZER_PTR(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMeshIndicesUint16MSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization

    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneDeserializeInfoMSFT)},


    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneDeserializeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate

    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, STRUCT_DESERIALIZER_PTR(XrEventDataDisplayRefreshRateChangedFB)},


    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, STRUCT_DESERIALIZER_PTR(XrEventDataDisplayRefreshRateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction

    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, STRUCT_DESERIALIZER_PTR(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, STRUCT_DESERIALIZER_PTR(XrEventDataViveTrackerConnectedHTCX)},


    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, STRUCT_DESERIALIZER_PTR(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, STRUCT_DESERIALIZER_PTR(XrEventDataViveTrackerConnectedHTCX)},

#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking

    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, STRUCT_DESERIALIZER_PTR(XrFacialExpressionsHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, STRUCT_DESERIALIZER_PTR(XrFacialExpressionsHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space

    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemColorSpacePropertiesFB)},


    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemColorSpacePropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh

    {XR_TYPE_HAND_TRACKING_MESH_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingScaleFB)},


    {XR_TYPE_HAND_TRACKING_MESH_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingScaleFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim

    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingAimStateFB)},


    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingAimStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules

    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingCapsulesStateFB)},


    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, STRUCT_DESERIALIZER_PTR(XrHandTrackingCapsulesStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceSetStatusCompleteFB)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceSetStatusCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation

    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateFoveationFB)},


    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateFoveationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration

    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFoveationLevelProfileCreateInfoFB)},


    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFoveationLevelProfileCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking

    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemKeyboardTrackingPropertiesFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, STRUCT_DESERIALIZER_PTR(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, STRUCT_DESERIALIZER_PTR(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemKeyboardTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh

    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrTriangleMeshCreateInfoFB)},


    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrTriangleMeshCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough

    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, STRUCT_DESERIALIZER_PTR(XrGeometryInstanceTransformFB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, STRUCT_DESERIALIZER_PTR(XrEventDataPassthroughStateChangedFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, STRUCT_DESERIALIZER_PTR(XrGeometryInstanceTransformFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, STRUCT_DESERIALIZER_PTR(XrEventDataPassthroughStateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model

    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelCapabilitiesRequestFB)},


    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, STRUCT_DESERIALIZER_PTR(XrRenderModelCapabilitiesRequestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification

    {XR_TYPE_BINDING_MODIFICATIONS_KHR, STRUCT_DESERIALIZER_PTR(XrBindingModificationsKHR)},


    {XR_TYPE_BINDING_MODIFICATIONS_KHR, STRUCT_DESERIALIZER_PTR(XrBindingModificationsKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering

    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, STRUCT_DESERIALIZER_PTR(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, STRUCT_DESERIALIZER_PTR(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, STRUCT_DESERIALIZER_PTR(XrSystemFoveatedRenderingPropertiesVARJO)},


    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, STRUCT_DESERIALIZER_PTR(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, STRUCT_DESERIALIZER_PTR(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, STRUCT_DESERIALIZER_PTR(XrSystemFoveatedRenderingPropertiesVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthTestVARJO)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthTestVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking

    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, STRUCT_DESERIALIZER_PTR(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, STRUCT_DESERIALIZER_PTR(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, STRUCT_DESERIALIZER_PTR(XrMarkerSpaceCreateInfoVARJO)},


    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, STRUCT_DESERIALIZER_PTR(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, STRUCT_DESERIALIZER_PTR(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, STRUCT_DESERIALIZER_PTR(XrMarkerSpaceCreateInfoVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info

    {XR_TYPE_FRAME_END_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFrameEndInfoML)},


    {XR_TYPE_FRAME_END_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer

    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, STRUCT_DESERIALIZER_PTR(XrGlobalDimmerFrameEndInfoML)},


    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, STRUCT_DESERIALIZER_PTR(XrGlobalDimmerFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat

    {XR_TYPE_COORDINATE_SPACE_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrCoordinateSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding

    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerSpaceCreateInfoML)},


    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, STRUCT_DESERIALIZER_PTR(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMarkerSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map

    {XR_TYPE_LOCALIZATION_MAP_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationEnableEventsInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, STRUCT_DESERIALIZER_PTR(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, STRUCT_DESERIALIZER_PTR(XrLocalizationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorStateML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorStateML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration

    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, STRUCT_DESERIALIZER_PTR(XrUserCalibrationEnableEventsInfoML)},


    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, STRUCT_DESERIALIZER_PTR(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, STRUCT_DESERIALIZER_PTR(XrUserCalibrationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence

    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker

    {XR_TYPE_SCENE_MARKERS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkerQRCodesMSFT)},


    {XR_TYPE_SCENE_MARKERS_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, STRUCT_DESERIALIZER_PTR(XrSceneMarkerQRCodesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query

    {XR_TYPE_SPACE_QUERY_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, STRUCT_DESERIALIZER_PTR(XrSpaceQueryResultsFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceQueryCompleteFB)},


    {XR_TYPE_SPACE_QUERY_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, STRUCT_DESERIALIZER_PTR(XrSpaceQueryResultsFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceQueryCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage

    {XR_TYPE_SPACE_SAVE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceEraseCompleteFB)},


    {XR_TYPE_SPACE_SAVE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceEraseCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan

    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainImageFoveationVulkanFB)},


    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainImageFoveationVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface

    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateAndroidSurfaceDimensionsFB)},


    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateAndroidSurfaceDimensionsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateSamplerOpenGLESFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateSamplerOpenGLESFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateSamplerVulkanFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, STRUCT_DESERIALIZER_PTR(XrSwapchainStateSamplerVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing

    {XR_TYPE_SPACE_SHARE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceShareCompleteFB)},


    {XR_TYPE_SPACE_SHARE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceShareCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp

    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemSpaceWarpPropertiesFB)},


    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemSpaceWarpPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope

    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, STRUCT_DESERIALIZER_PTR(XrHapticAmplitudeEnvelopeVibrationFB)},


    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, STRUCT_DESERIALIZER_PTR(XrHapticAmplitudeEnvelopeVibrationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene

    {XR_TYPE_SEMANTIC_LABELS_FB, STRUCT_DESERIALIZER_PTR(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, STRUCT_DESERIALIZER_PTR(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, STRUCT_DESERIALIZER_PTR(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSemanticLabelsSupportInfoFB)},


    {XR_TYPE_SEMANTIC_LABELS_FB, STRUCT_DESERIALIZER_PTR(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, STRUCT_DESERIALIZER_PTR(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, STRUCT_DESERIALIZER_PTR(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSemanticLabelsSupportInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control

    {XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE, STRUCT_DESERIALIZER_PTR(XrDigitalLensControlALMALENCE)},

#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture

    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSceneCaptureRequestInfoFB)},


    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSceneCaptureRequestInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container

    {XR_TYPE_SPACE_CONTAINER_FB, STRUCT_DESERIALIZER_PTR(XrSpaceContainerFB)},


    {XR_TYPE_SPACE_CONTAINER_FB, STRUCT_DESERIALIZER_PTR(XrSpaceContainerFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked

    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, STRUCT_DESERIALIZER_PTR(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemFoveationEyeTrackedPropertiesMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, STRUCT_DESERIALIZER_PTR(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemFoveationEyeTrackedPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionWeightsFB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionWeightsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social

    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, STRUCT_DESERIALIZER_PTR(XrEyeGazesInfoFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemEyeTrackingPropertiesFB)},


    {XR_TYPE_EYE_GAZES_FB, STRUCT_DESERIALIZER_PTR(XrEyeGazesFB)},


    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, STRUCT_DESERIALIZER_PTR(XrEyeGazesInfoFB)},


    {XR_TYPE_EYE_GAZES_FB, STRUCT_DESERIALIZER_PTR(XrEyeGazesFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, STRUCT_DESERIALIZER_PTR(XrSystemEyeTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands

    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughKeyboardHandsIntensityFB)},


    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, STRUCT_DESERIALIZER_PTR(XrPassthroughKeyboardHandsIntensityFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings

    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSettingsFB)},


    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerSettingsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm

    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, STRUCT_DESERIALIZER_PTR(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, STRUCT_DESERIALIZER_PTR(XrDevicePcmSampleRateStateFB)},


    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, STRUCT_DESERIALIZER_PTR(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, STRUCT_DESERIALIZER_PTR(XrDevicePcmSampleRateStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis

    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, STRUCT_DESERIALIZER_PTR(XrFrameSynthesisConfigViewEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, STRUCT_DESERIALIZER_PTR(XrFrameSynthesisConfigViewEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthTestFB)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, STRUCT_DESERIALIZER_PTR(XrCompositionLayerDepthTestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming

    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, STRUCT_DESERIALIZER_PTR(XrLocalDimmingFrameEndInfoMETA)},


    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, STRUCT_DESERIALIZER_PTR(XrLocalDimmingFrameEndInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences

    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, STRUCT_DESERIALIZER_PTR(XrPassthroughPreferencesMETA)},


    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, STRUCT_DESERIALIZER_PTR(XrPassthroughPreferencesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard

    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardHiddenMETA)},


    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, STRUCT_DESERIALIZER_PTR(XrEventDataVirtualKeyboardHiddenMETA)},

#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera

    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, STRUCT_DESERIALIZER_PTR(XrExternalCameraOCULUS)},


    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, STRUCT_DESERIALIZER_PTR(XrExternalCameraOCULUS)},

#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info

    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVulkanSwapchainCreateInfoMETA)},


    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrVulkanSwapchainCreateInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics

    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, STRUCT_DESERIALIZER_PTR(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, STRUCT_DESERIALIZER_PTR(XrPerformanceMetricsCounterMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, STRUCT_DESERIALIZER_PTR(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, STRUCT_DESERIALIZER_PTR(XrPerformanceMetricsCounterMETA)},

#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch

    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceListSaveCompleteFB)},


    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, STRUCT_DESERIALIZER_PTR(XrEventDataSpaceListSaveCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user

    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceUserCreateInfoFB)},


    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, STRUCT_DESERIALIZER_PTR(XrSpaceUserCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id

    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemHeadsetIdPropertiesMETA)},


    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemHeadsetIdPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution

    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, STRUCT_DESERIALIZER_PTR(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, STRUCT_DESERIALIZER_PTR(XrRecommendedLayerResolutionGetInfoMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, STRUCT_DESERIALIZER_PTR(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, STRUCT_DESERIALIZER_PTR(XrRecommendedLayerResolutionGetInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut

    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapInterpolatedLutMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, STRUCT_DESERIALIZER_PTR(XrPassthroughColorMapInterpolatedLutMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh

    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, STRUCT_DESERIALIZER_PTR(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, STRUCT_DESERIALIZER_PTR(XrSpaceTriangleMeshMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, STRUCT_DESERIALIZER_PTR(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, STRUCT_DESERIALIZER_PTR(XrSpaceTriangleMeshMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body

    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, STRUCT_DESERIALIZER_PTR(XrSystemPropertiesBodyTrackingFullBodyMETA)},


    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, STRUCT_DESERIALIZER_PTR(XrSystemPropertiesBodyTrackingFullBodyMETA)},

#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event

    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, STRUCT_DESERIALIZER_PTR(XrEventDataPassthroughLayerResumedMETA)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, STRUCT_DESERIALIZER_PTR(XrEventDataPassthroughLayerResumedMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, STRUCT_DESERIALIZER_PTR(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, STRUCT_DESERIALIZER_PTR(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionWeights2FB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, STRUCT_DESERIALIZER_PTR(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, STRUCT_DESERIALIZER_PTR(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, STRUCT_DESERIALIZER_PTR(XrFaceExpressionWeights2FB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, STRUCT_DESERIALIZER_PTR(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataShareSpacesCompleteMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, STRUCT_DESERIALIZER_PTR(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataShareSpacesCompleteMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth

    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemEnvironmentDepthPropertiesMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, STRUCT_DESERIALIZER_PTR(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemEnvironmentDepthPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough

    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, STRUCT_DESERIALIZER_PTR(XrCompositionLayerPassthroughHTC)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, STRUCT_DESERIALIZER_PTR(XrCompositionLayerPassthroughHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation

    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationCustomModeInfoHTC)},


    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrFoveationCustomModeInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor

    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoHTC)},


    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, STRUCT_DESERIALIZER_PTR(XrBodySkeletonHTC)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, STRUCT_DESERIALIZER_PTR(XrBodySkeletonHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority

    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, STRUCT_DESERIALIZER_PTR(XrActiveActionSetPrioritiesEXT)},


    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, STRUCT_DESERIALIZER_PTR(XrActiveActionSetPrioritiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl

    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, STRUCT_DESERIALIZER_PTR(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, STRUCT_DESERIALIZER_PTR(XrForceFeedbackCurlApplyLocationsMNDX)},


    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, STRUCT_DESERIALIZER_PTR(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, STRUCT_DESERIALIZER_PTR(XrForceFeedbackCurlApplyLocationsMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, STRUCT_DESERIALIZER_PTR(XrBodyJointLocationsBD)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemBodyTrackingPropertiesBD)},

#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing

    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, STRUCT_DESERIALIZER_PTR(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, STRUCT_DESERIALIZER_PTR(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, STRUCT_DESERIALIZER_PTR(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityStateBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrAnchorSpaceCreateInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, STRUCT_DESERIALIZER_PTR(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, STRUCT_DESERIALIZER_PTR(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, STRUCT_DESERIALIZER_PTR(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, STRUCT_DESERIALIZER_PTR(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityStateBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrAnchorSpaceCreateInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorUnpersistInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorUnpersistInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSharedSpatialAnchorDownloadInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSharedSpatialAnchorDownloadInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene

    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSceneCaptureInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, STRUCT_DESERIALIZER_PTR(XrSceneCaptureInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh

    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderCreateInfoSpatialMeshBD)},


    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, STRUCT_DESERIALIZER_PTR(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, STRUCT_DESERIALIZER_PTR(XrSenseDataProviderCreateInfoSpatialMeshBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress

    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, STRUCT_DESERIALIZER_PTR(XrFuturePollResultProgressBD)},


    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, STRUCT_DESERIALIZER_PTR(XrFuturePollResultProgressBD)},

#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source

    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackingDataSourceStateEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, STRUCT_DESERIALIZER_PTR(XrHandTrackingDataSourceStateEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection

    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemPlaneDetectionPropertiesEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, STRUCT_DESERIALIZER_PTR(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemPlaneDetectionPropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future

    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, STRUCT_DESERIALIZER_PTR(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, STRUCT_DESERIALIZER_PTR(XrFuturePollResultEXT)},


    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, STRUCT_DESERIALIZER_PTR(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, STRUCT_DESERIALIZER_PTR(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, STRUCT_DESERIALIZER_PTR(XrFuturePollResultEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence

    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, STRUCT_DESERIALIZER_PTR(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemUserPresencePropertiesEXT)},


    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, STRUCT_DESERIALIZER_PTR(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, STRUCT_DESERIALIZER_PTR(XrSystemUserPresencePropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications

    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSystemNotificationsSetInfoML)},


    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrSystemNotificationsSetInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection

    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshRequestCompletionInfoML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, STRUCT_DESERIALIZER_PTR(XrWorldMeshRequestCompletionInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression

    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionBlendShapePropertiesML)},


    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, STRUCT_DESERIALIZER_PTR(XrFacialExpressionBlendShapePropertiesML)},

#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers

    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, STRUCT_DESERIALIZER_PTR(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, STRUCT_DESERIALIZER_PTR(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},


    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, STRUCT_DESERIALIZER_PTR(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, STRUCT_DESERIALIZER_PTR(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery

    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemColocationDiscoveryPropertiesMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, STRUCT_DESERIALIZER_PTR(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_DESERIALIZER_PTR(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemColocationDiscoveryPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntityGroupSharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, STRUCT_DESERIALIZER_PTR(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, STRUCT_DESERIALIZER_PTR(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, STRUCT_DESERIALIZER_PTR(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, STRUCT_DESERIALIZER_PTR(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, STRUCT_DESERIALIZER_PTR(XrSystemSpatialEntityGroupSharingPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_ACTION_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrActionCreateInfo)},


    {XR_TYPE_ACTION_SET_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrActionSetCreateInfo)},


    {XR_TYPE_ACTION_SPACE_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrActionSpaceCreateInfo)},


    {XR_TYPE_ACTION_STATE_BOOLEAN, STRUCT_DESERIALIZER_PTR(XrActionStateBoolean)},


    {XR_TYPE_ACTION_STATE_FLOAT, STRUCT_DESERIALIZER_PTR(XrActionStateFloat)},


    {XR_TYPE_ACTION_STATE_GET_INFO, STRUCT_DESERIALIZER_PTR(XrActionStateGetInfo)},


    {XR_TYPE_ACTION_STATE_POSE, STRUCT_DESERIALIZER_PTR(XrActionStatePose)},


    {XR_TYPE_ACTION_STATE_VECTOR2F, STRUCT_DESERIALIZER_PTR(XrActionStateVector2f)},


    {XR_TYPE_ACTIONS_SYNC_INFO, STRUCT_DESERIALIZER_PTR(XrActionsSyncInfo)},


    {XR_TYPE_API_LAYER_PROPERTIES, STRUCT_DESERIALIZER_PTR(XrApiLayerProperties)},


    {XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO, STRUCT_DESERIALIZER_PTR(XrBoundSourcesForActionEnumerateInfo)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION, STRUCT_DESERIALIZER_PTR(XrCompositionLayerProjection)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW, STRUCT_DESERIALIZER_PTR(XrCompositionLayerProjectionView)},


    {XR_TYPE_COMPOSITION_LAYER_QUAD, STRUCT_DESERIALIZER_PTR(XrCompositionLayerQuad)},


    {XR_TYPE_EVENT_DATA_BUFFER, STRUCT_DESERIALIZER_PTR(XrEventDataBuffer)},


    {XR_TYPE_EVENT_DATA_EVENTS_LOST, STRUCT_DESERIALIZER_PTR(XrEventDataEventsLost)},


    {XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING, STRUCT_DESERIALIZER_PTR(XrEventDataInstanceLossPending)},


    {XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED, STRUCT_DESERIALIZER_PTR(XrEventDataInteractionProfileChanged)},


    {XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING, STRUCT_DESERIALIZER_PTR(XrEventDataReferenceSpaceChangePending)},


    {XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED, STRUCT_DESERIALIZER_PTR(XrEventDataSessionStateChanged)},


    {XR_TYPE_EXTENSION_PROPERTIES, STRUCT_DESERIALIZER_PTR(XrExtensionProperties)},


    {XR_TYPE_FRAME_BEGIN_INFO, STRUCT_DESERIALIZER_PTR(XrFrameBeginInfo)},


    {XR_TYPE_FRAME_END_INFO, STRUCT_DESERIALIZER_PTR(XrFrameEndInfo)},


    {XR_TYPE_FRAME_STATE, STRUCT_DESERIALIZER_PTR(XrFrameState)},


    {XR_TYPE_FRAME_WAIT_INFO, STRUCT_DESERIALIZER_PTR(XrFrameWaitInfo)},


    {XR_TYPE_HAPTIC_ACTION_INFO, STRUCT_DESERIALIZER_PTR(XrHapticActionInfo)},


    {XR_TYPE_HAPTIC_VIBRATION, STRUCT_DESERIALIZER_PTR(XrHapticVibration)},


    {XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO, STRUCT_DESERIALIZER_PTR(XrInputSourceLocalizedNameGetInfo)},


    {XR_TYPE_INSTANCE_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrInstanceCreateInfo)},


    {XR_TYPE_INSTANCE_PROPERTIES, STRUCT_DESERIALIZER_PTR(XrInstanceProperties)},


    {XR_TYPE_INTERACTION_PROFILE_STATE, STRUCT_DESERIALIZER_PTR(XrInteractionProfileState)},


    {XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING, STRUCT_DESERIALIZER_PTR(XrInteractionProfileSuggestedBinding)},


    {XR_TYPE_REFERENCE_SPACE_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrReferenceSpaceCreateInfo)},


    {XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO, STRUCT_DESERIALIZER_PTR(XrSessionActionSetsAttachInfo)},


    {XR_TYPE_SESSION_BEGIN_INFO, STRUCT_DESERIALIZER_PTR(XrSessionBeginInfo)},


    {XR_TYPE_SESSION_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrSessionCreateInfo)},


    {XR_TYPE_SPACE_LOCATION, STRUCT_DESERIALIZER_PTR(XrSpaceLocation)},


    {XR_TYPE_SPACE_LOCATIONS, STRUCT_DESERIALIZER_PTR(XrSpaceLocations)},


    {XR_TYPE_SPACE_VELOCITIES, STRUCT_DESERIALIZER_PTR(XrSpaceVelocities)},


    {XR_TYPE_SPACE_VELOCITY, STRUCT_DESERIALIZER_PTR(XrSpaceVelocity)},


    {XR_TYPE_SPACES_LOCATE_INFO, STRUCT_DESERIALIZER_PTR(XrSpacesLocateInfo)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO, STRUCT_DESERIALIZER_PTR(XrSwapchainCreateInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO, STRUCT_DESERIALIZER_PTR(XrSwapchainImageAcquireInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO, STRUCT_DESERIALIZER_PTR(XrSwapchainImageReleaseInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO, STRUCT_DESERIALIZER_PTR(XrSwapchainImageWaitInfo)},


    {XR_TYPE_SYSTEM_GET_INFO, STRUCT_DESERIALIZER_PTR(XrSystemGetInfo)},


    {XR_TYPE_SYSTEM_PROPERTIES, STRUCT_DESERIALIZER_PTR(XrSystemProperties)},


    {XR_TYPE_VIEW, STRUCT_DESERIALIZER_PTR(XrView)},


    {XR_TYPE_VIEW_CONFIGURATION_PROPERTIES, STRUCT_DESERIALIZER_PTR(XrViewConfigurationProperties)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW, STRUCT_DESERIALIZER_PTR(XrViewConfigurationView)},


    {XR_TYPE_VIEW_LOCATE_INFO, STRUCT_DESERIALIZER_PTR(XrViewLocateInfo)},


    {XR_TYPE_VIEW_STATE, STRUCT_DESERIALIZER_PTR(XrViewState)},


};

static StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    assert(deserializer_lookup_table.find(struct_type) != deserializer_lookup_table.end());
    return deserializer_lookup_table[struct_type];
}

// Struct cleaner lookup
// Only to be used with OpenXR pNext structs
using StructCleaner = void(*)(const XrBaseOutStructure*);
#define STRUCT_CLEANER_PTR(t) (reinterpret_cast<StructCleaner>(static_cast<void(*)(const t*)>(&cleanup)))

static std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube

    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerCubeKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerCubeKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance

    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, STRUCT_CLEANER_PTR(XrInstanceCreateInfoAndroidKHR)},


    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, STRUCT_CLEANER_PTR(XrInstanceCreateInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerDepthInfoKHR)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerDepthInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list

    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanSwapchainFormatListCreateInfoKHR)},


    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanSwapchainFormatListCreateInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings

    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, STRUCT_CLEANER_PTR(XrEventDataPerfSettingsEXT)},


    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, STRUCT_CLEANER_PTR(XrEventDataPerfSettingsEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder

    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerCylinderKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerCylinderKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerEquirectKHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerEquirectKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils

    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsLabelEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, STRUCT_CLEANER_PTR(XrDebugUtilsLabelEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsOpenGLKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsOpenGLKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsOpenGLESKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable

    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsVulkanKHR)},


    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsVulkanKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsD3D11KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsD3D11KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsD3D12KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsD3D12KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable

    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsMetalKHR)},


    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, STRUCT_CLEANER_PTR(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, STRUCT_CLEANER_PTR(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, STRUCT_CLEANER_PTR(XrGraphicsRequirementsMetalKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction

    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, STRUCT_CLEANER_PTR(XrEyeGazeSampleTimeEXT)},


    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, STRUCT_CLEANER_PTR(XrEyeGazeSampleTimeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask

    {XR_TYPE_VISIBILITY_MASK_KHR, STRUCT_CLEANER_PTR(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, STRUCT_CLEANER_PTR(XrEventDataVisibilityMaskChangedKHR)},


    {XR_TYPE_VISIBILITY_MASK_KHR, STRUCT_CLEANER_PTR(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, STRUCT_CLEANER_PTR(XrEventDataVisibilityMaskChangedKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay

    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, STRUCT_CLEANER_PTR(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, STRUCT_CLEANER_PTR(XrEventDataMainSessionVisibilityChangedEXTX)},


    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, STRUCT_CLEANER_PTR(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, STRUCT_CLEANER_PTR(XrEventDataMainSessionVisibilityChangedEXTX)},

#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias

    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerColorScaleBiasKHR)},


    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerColorScaleBiasKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor

    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorSpaceCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout

    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, STRUCT_CLEANER_PTR(XrCompositionLayerImageLayoutFB)},


    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, STRUCT_CLEANER_PTR(XrCompositionLayerImageLayoutFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend

    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, STRUCT_CLEANER_PTR(XrCompositionLayerAlphaBlendFB)},


    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, STRUCT_CLEANER_PTR(XrCompositionLayerAlphaBlendFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range

    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, STRUCT_CLEANER_PTR(XrViewConfigurationDepthRangeEXT)},


    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, STRUCT_CLEANER_PTR(XrViewConfigurationDepthRangeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable

    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, STRUCT_CLEANER_PTR(XrGraphicsBindingEGLMNDX)},


    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, STRUCT_CLEANER_PTR(XrGraphicsBindingEGLMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge

    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeBindingPropertiesMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrSpatialGraphNodeBindingPropertiesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking

    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, STRUCT_CLEANER_PTR(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, STRUCT_CLEANER_PTR(XrHandJointVelocitiesEXT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, STRUCT_CLEANER_PTR(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, STRUCT_CLEANER_PTR(XrHandJointVelocitiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh

    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, STRUCT_CLEANER_PTR(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandPoseTypeInfoMSFT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, STRUCT_CLEANER_PTR(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, STRUCT_CLEANER_PTR(XrHandPoseTypeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration

    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model

    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, STRUCT_CLEANER_PTR(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, STRUCT_CLEANER_PTR(XrControllerModelStateMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov

    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, STRUCT_CLEANER_PTR(XrViewConfigurationViewFovEPIC)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, STRUCT_CLEANER_PTR(XrViewConfigurationViewFovEPIC)},

#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment

    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, STRUCT_CLEANER_PTR(XrHolographicWindowAttachmentMSFT)},


    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, STRUCT_CLEANER_PTR(XrHolographicWindowAttachmentMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection

    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, STRUCT_CLEANER_PTR(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, STRUCT_CLEANER_PTR(XrCompositionLayerReprojectionPlaneOverrideMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, STRUCT_CLEANER_PTR(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, STRUCT_CLEANER_PTR(XrCompositionLayerReprojectionPlaneOverrideMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create

    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrAndroidSurfaceSwapchainCreateInfoFB)},


    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrAndroidSurfaceSwapchainCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content

    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSecureContentFB)},


    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSecureContentFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_SKELETON_FB, STRUCT_CLEANER_PTR(XrBodySkeletonFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, STRUCT_CLEANER_PTR(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, STRUCT_CLEANER_PTR(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_SKELETON_FB, STRUCT_CLEANER_PTR(XrBodySkeletonFB)},

#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding

    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, STRUCT_CLEANER_PTR(XrInteractionProfileDpadBindingEXT)},


    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, STRUCT_CLEANER_PTR(XrInteractionProfileDpadBindingEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold

    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, STRUCT_CLEANER_PTR(XrInteractionProfileAnalogThresholdVALVE)},


    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, STRUCT_CLEANER_PTR(XrInteractionProfileAnalogThresholdVALVE)},

#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range

    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandJointsMotionRangeInfoEXT)},


    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandJointsMotionRangeInfoEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init
#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android

    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, STRUCT_CLEANER_PTR(XrLoaderInitInfoAndroidKHR)},


    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, STRUCT_CLEANER_PTR(XrLoaderInitInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2

    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanGraphicsDeviceGetInfoKHR)},


    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, STRUCT_CLEANER_PTR(XrVulkanGraphicsDeviceGetInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerEquirect2KHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, STRUCT_CLEANER_PTR(XrCompositionLayerEquirect2KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding

    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, STRUCT_CLEANER_PTR(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, STRUCT_CLEANER_PTR(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, STRUCT_CLEANER_PTR(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, STRUCT_CLEANER_PTR(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshIndicesUint16MSFT)},


    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, STRUCT_CLEANER_PTR(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, STRUCT_CLEANER_PTR(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, STRUCT_CLEANER_PTR(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, STRUCT_CLEANER_PTR(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, STRUCT_CLEANER_PTR(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, STRUCT_CLEANER_PTR(XrSceneMeshIndicesUint16MSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization

    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneDeserializeInfoMSFT)},


    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, STRUCT_CLEANER_PTR(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSceneDeserializeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate

    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, STRUCT_CLEANER_PTR(XrEventDataDisplayRefreshRateChangedFB)},


    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, STRUCT_CLEANER_PTR(XrEventDataDisplayRefreshRateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction

    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, STRUCT_CLEANER_PTR(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, STRUCT_CLEANER_PTR(XrEventDataViveTrackerConnectedHTCX)},


    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, STRUCT_CLEANER_PTR(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, STRUCT_CLEANER_PTR(XrEventDataViveTrackerConnectedHTCX)},

#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking

    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, STRUCT_CLEANER_PTR(XrFacialExpressionsHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, STRUCT_CLEANER_PTR(XrFacialExpressionsHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space

    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemColorSpacePropertiesFB)},


    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemColorSpacePropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh

    {XR_TYPE_HAND_TRACKING_MESH_FB, STRUCT_CLEANER_PTR(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, STRUCT_CLEANER_PTR(XrHandTrackingScaleFB)},


    {XR_TYPE_HAND_TRACKING_MESH_FB, STRUCT_CLEANER_PTR(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, STRUCT_CLEANER_PTR(XrHandTrackingScaleFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim

    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, STRUCT_CLEANER_PTR(XrHandTrackingAimStateFB)},


    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, STRUCT_CLEANER_PTR(XrHandTrackingAimStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules

    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, STRUCT_CLEANER_PTR(XrHandTrackingCapsulesStateFB)},


    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, STRUCT_CLEANER_PTR(XrHandTrackingCapsulesStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, STRUCT_CLEANER_PTR(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceSetStatusCompleteFB)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, STRUCT_CLEANER_PTR(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceSetStatusCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation

    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, STRUCT_CLEANER_PTR(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, STRUCT_CLEANER_PTR(XrSwapchainStateFoveationFB)},


    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, STRUCT_CLEANER_PTR(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, STRUCT_CLEANER_PTR(XrSwapchainStateFoveationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration

    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFoveationLevelProfileCreateInfoFB)},


    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFoveationLevelProfileCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking

    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemKeyboardTrackingPropertiesFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, STRUCT_CLEANER_PTR(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, STRUCT_CLEANER_PTR(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemKeyboardTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh

    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrTriangleMeshCreateInfoFB)},


    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrTriangleMeshCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough

    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, STRUCT_CLEANER_PTR(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, STRUCT_CLEANER_PTR(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, STRUCT_CLEANER_PTR(XrGeometryInstanceTransformFB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, STRUCT_CLEANER_PTR(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, STRUCT_CLEANER_PTR(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, STRUCT_CLEANER_PTR(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, STRUCT_CLEANER_PTR(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, STRUCT_CLEANER_PTR(XrEventDataPassthroughStateChangedFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, STRUCT_CLEANER_PTR(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, STRUCT_CLEANER_PTR(XrGeometryInstanceTransformFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, STRUCT_CLEANER_PTR(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, STRUCT_CLEANER_PTR(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, STRUCT_CLEANER_PTR(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, STRUCT_CLEANER_PTR(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, STRUCT_CLEANER_PTR(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, STRUCT_CLEANER_PTR(XrEventDataPassthroughStateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model

    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, STRUCT_CLEANER_PTR(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, STRUCT_CLEANER_PTR(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, STRUCT_CLEANER_PTR(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, STRUCT_CLEANER_PTR(XrRenderModelCapabilitiesRequestFB)},


    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, STRUCT_CLEANER_PTR(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, STRUCT_CLEANER_PTR(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, STRUCT_CLEANER_PTR(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, STRUCT_CLEANER_PTR(XrRenderModelCapabilitiesRequestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification

    {XR_TYPE_BINDING_MODIFICATIONS_KHR, STRUCT_CLEANER_PTR(XrBindingModificationsKHR)},


    {XR_TYPE_BINDING_MODIFICATIONS_KHR, STRUCT_CLEANER_PTR(XrBindingModificationsKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering

    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, STRUCT_CLEANER_PTR(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, STRUCT_CLEANER_PTR(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, STRUCT_CLEANER_PTR(XrSystemFoveatedRenderingPropertiesVARJO)},


    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, STRUCT_CLEANER_PTR(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, STRUCT_CLEANER_PTR(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, STRUCT_CLEANER_PTR(XrSystemFoveatedRenderingPropertiesVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, STRUCT_CLEANER_PTR(XrCompositionLayerDepthTestVARJO)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, STRUCT_CLEANER_PTR(XrCompositionLayerDepthTestVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking

    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, STRUCT_CLEANER_PTR(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, STRUCT_CLEANER_PTR(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, STRUCT_CLEANER_PTR(XrMarkerSpaceCreateInfoVARJO)},


    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, STRUCT_CLEANER_PTR(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, STRUCT_CLEANER_PTR(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, STRUCT_CLEANER_PTR(XrMarkerSpaceCreateInfoVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info

    {XR_TYPE_FRAME_END_INFO_ML, STRUCT_CLEANER_PTR(XrFrameEndInfoML)},


    {XR_TYPE_FRAME_END_INFO_ML, STRUCT_CLEANER_PTR(XrFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer

    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, STRUCT_CLEANER_PTR(XrGlobalDimmerFrameEndInfoML)},


    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, STRUCT_CLEANER_PTR(XrGlobalDimmerFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat

    {XR_TYPE_COORDINATE_SPACE_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrCoordinateSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding

    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerSpaceCreateInfoML)},


    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, STRUCT_CLEANER_PTR(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrMarkerSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map

    {XR_TYPE_LOCALIZATION_MAP_ML, STRUCT_CLEANER_PTR(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, STRUCT_CLEANER_PTR(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, STRUCT_CLEANER_PTR(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, STRUCT_CLEANER_PTR(XrLocalizationEnableEventsInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_ML, STRUCT_CLEANER_PTR(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, STRUCT_CLEANER_PTR(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, STRUCT_CLEANER_PTR(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, STRUCT_CLEANER_PTR(XrLocalizationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, STRUCT_CLEANER_PTR(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorStateML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, STRUCT_CLEANER_PTR(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorStateML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, STRUCT_CLEANER_PTR(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration

    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, STRUCT_CLEANER_PTR(XrUserCalibrationEnableEventsInfoML)},


    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, STRUCT_CLEANER_PTR(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, STRUCT_CLEANER_PTR(XrUserCalibrationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence

    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, STRUCT_CLEANER_PTR(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker

    {XR_TYPE_SCENE_MARKERS_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkerQRCodesMSFT)},


    {XR_TYPE_SCENE_MARKERS_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, STRUCT_CLEANER_PTR(XrSceneMarkerQRCodesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query

    {XR_TYPE_SPACE_QUERY_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, STRUCT_CLEANER_PTR(XrSpaceQueryResultsFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceQueryCompleteFB)},


    {XR_TYPE_SPACE_QUERY_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, STRUCT_CLEANER_PTR(XrSpaceQueryResultsFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceQueryCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage

    {XR_TYPE_SPACE_SAVE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceEraseCompleteFB)},


    {XR_TYPE_SPACE_SAVE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceEraseCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan

    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, STRUCT_CLEANER_PTR(XrSwapchainImageFoveationVulkanFB)},


    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, STRUCT_CLEANER_PTR(XrSwapchainImageFoveationVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface

    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, STRUCT_CLEANER_PTR(XrSwapchainStateAndroidSurfaceDimensionsFB)},


    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, STRUCT_CLEANER_PTR(XrSwapchainStateAndroidSurfaceDimensionsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, STRUCT_CLEANER_PTR(XrSwapchainStateSamplerOpenGLESFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, STRUCT_CLEANER_PTR(XrSwapchainStateSamplerOpenGLESFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, STRUCT_CLEANER_PTR(XrSwapchainStateSamplerVulkanFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, STRUCT_CLEANER_PTR(XrSwapchainStateSamplerVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing

    {XR_TYPE_SPACE_SHARE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceShareCompleteFB)},


    {XR_TYPE_SPACE_SHARE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceShareCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp

    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemSpaceWarpPropertiesFB)},


    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemSpaceWarpPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope

    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, STRUCT_CLEANER_PTR(XrHapticAmplitudeEnvelopeVibrationFB)},


    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, STRUCT_CLEANER_PTR(XrHapticAmplitudeEnvelopeVibrationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene

    {XR_TYPE_SEMANTIC_LABELS_FB, STRUCT_CLEANER_PTR(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, STRUCT_CLEANER_PTR(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, STRUCT_CLEANER_PTR(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, STRUCT_CLEANER_PTR(XrSemanticLabelsSupportInfoFB)},


    {XR_TYPE_SEMANTIC_LABELS_FB, STRUCT_CLEANER_PTR(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, STRUCT_CLEANER_PTR(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, STRUCT_CLEANER_PTR(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, STRUCT_CLEANER_PTR(XrSemanticLabelsSupportInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control

    {XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE, STRUCT_CLEANER_PTR(XrDigitalLensControlALMALENCE)},

#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture

    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, STRUCT_CLEANER_PTR(XrSceneCaptureRequestInfoFB)},


    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, STRUCT_CLEANER_PTR(XrSceneCaptureRequestInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container

    {XR_TYPE_SPACE_CONTAINER_FB, STRUCT_CLEANER_PTR(XrSpaceContainerFB)},


    {XR_TYPE_SPACE_CONTAINER_FB, STRUCT_CLEANER_PTR(XrSpaceContainerFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked

    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, STRUCT_CLEANER_PTR(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemFoveationEyeTrackedPropertiesMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, STRUCT_CLEANER_PTR(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemFoveationEyeTrackedPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, STRUCT_CLEANER_PTR(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, STRUCT_CLEANER_PTR(XrFaceExpressionWeightsFB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, STRUCT_CLEANER_PTR(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, STRUCT_CLEANER_PTR(XrFaceExpressionWeightsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social

    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, STRUCT_CLEANER_PTR(XrEyeGazesInfoFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemEyeTrackingPropertiesFB)},


    {XR_TYPE_EYE_GAZES_FB, STRUCT_CLEANER_PTR(XrEyeGazesFB)},


    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, STRUCT_CLEANER_PTR(XrEyeGazesInfoFB)},


    {XR_TYPE_EYE_GAZES_FB, STRUCT_CLEANER_PTR(XrEyeGazesFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, STRUCT_CLEANER_PTR(XrSystemEyeTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands

    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, STRUCT_CLEANER_PTR(XrPassthroughKeyboardHandsIntensityFB)},


    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, STRUCT_CLEANER_PTR(XrPassthroughKeyboardHandsIntensityFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings

    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSettingsFB)},


    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, STRUCT_CLEANER_PTR(XrCompositionLayerSettingsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm

    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, STRUCT_CLEANER_PTR(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, STRUCT_CLEANER_PTR(XrDevicePcmSampleRateStateFB)},


    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, STRUCT_CLEANER_PTR(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, STRUCT_CLEANER_PTR(XrDevicePcmSampleRateStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis

    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, STRUCT_CLEANER_PTR(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, STRUCT_CLEANER_PTR(XrFrameSynthesisConfigViewEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, STRUCT_CLEANER_PTR(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, STRUCT_CLEANER_PTR(XrFrameSynthesisConfigViewEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, STRUCT_CLEANER_PTR(XrCompositionLayerDepthTestFB)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, STRUCT_CLEANER_PTR(XrCompositionLayerDepthTestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming

    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, STRUCT_CLEANER_PTR(XrLocalDimmingFrameEndInfoMETA)},


    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, STRUCT_CLEANER_PTR(XrLocalDimmingFrameEndInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences

    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, STRUCT_CLEANER_PTR(XrPassthroughPreferencesMETA)},


    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, STRUCT_CLEANER_PTR(XrPassthroughPreferencesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard

    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardHiddenMETA)},


    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, STRUCT_CLEANER_PTR(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, STRUCT_CLEANER_PTR(XrEventDataVirtualKeyboardHiddenMETA)},

#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera

    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, STRUCT_CLEANER_PTR(XrExternalCameraOCULUS)},


    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, STRUCT_CLEANER_PTR(XrExternalCameraOCULUS)},

#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info

    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVulkanSwapchainCreateInfoMETA)},


    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrVulkanSwapchainCreateInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics

    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, STRUCT_CLEANER_PTR(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, STRUCT_CLEANER_PTR(XrPerformanceMetricsCounterMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, STRUCT_CLEANER_PTR(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, STRUCT_CLEANER_PTR(XrPerformanceMetricsCounterMETA)},

#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch

    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceListSaveCompleteFB)},


    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, STRUCT_CLEANER_PTR(XrEventDataSpaceListSaveCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user

    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceUserCreateInfoFB)},


    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, STRUCT_CLEANER_PTR(XrSpaceUserCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id

    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemHeadsetIdPropertiesMETA)},


    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemHeadsetIdPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution

    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, STRUCT_CLEANER_PTR(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, STRUCT_CLEANER_PTR(XrRecommendedLayerResolutionGetInfoMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, STRUCT_CLEANER_PTR(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, STRUCT_CLEANER_PTR(XrRecommendedLayerResolutionGetInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut

    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, STRUCT_CLEANER_PTR(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, STRUCT_CLEANER_PTR(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, STRUCT_CLEANER_PTR(XrPassthroughColorMapInterpolatedLutMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, STRUCT_CLEANER_PTR(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, STRUCT_CLEANER_PTR(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, STRUCT_CLEANER_PTR(XrPassthroughColorMapInterpolatedLutMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh

    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, STRUCT_CLEANER_PTR(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, STRUCT_CLEANER_PTR(XrSpaceTriangleMeshMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, STRUCT_CLEANER_PTR(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, STRUCT_CLEANER_PTR(XrSpaceTriangleMeshMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body

    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, STRUCT_CLEANER_PTR(XrSystemPropertiesBodyTrackingFullBodyMETA)},


    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, STRUCT_CLEANER_PTR(XrSystemPropertiesBodyTrackingFullBodyMETA)},

#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event

    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, STRUCT_CLEANER_PTR(XrEventDataPassthroughLayerResumedMETA)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, STRUCT_CLEANER_PTR(XrEventDataPassthroughLayerResumedMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, STRUCT_CLEANER_PTR(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, STRUCT_CLEANER_PTR(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, STRUCT_CLEANER_PTR(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, STRUCT_CLEANER_PTR(XrFaceExpressionWeights2FB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, STRUCT_CLEANER_PTR(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, STRUCT_CLEANER_PTR(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, STRUCT_CLEANER_PTR(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, STRUCT_CLEANER_PTR(XrFaceExpressionWeights2FB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, STRUCT_CLEANER_PTR(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataShareSpacesCompleteMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, STRUCT_CLEANER_PTR(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataShareSpacesCompleteMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth

    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemEnvironmentDepthPropertiesMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, STRUCT_CLEANER_PTR(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemEnvironmentDepthPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough

    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, STRUCT_CLEANER_PTR(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, STRUCT_CLEANER_PTR(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, STRUCT_CLEANER_PTR(XrCompositionLayerPassthroughHTC)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, STRUCT_CLEANER_PTR(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, STRUCT_CLEANER_PTR(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, STRUCT_CLEANER_PTR(XrCompositionLayerPassthroughHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation

    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationCustomModeInfoHTC)},


    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, STRUCT_CLEANER_PTR(XrFoveationCustomModeInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor

    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoHTC)},


    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, STRUCT_CLEANER_PTR(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, STRUCT_CLEANER_PTR(XrBodySkeletonHTC)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, STRUCT_CLEANER_PTR(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, STRUCT_CLEANER_PTR(XrBodySkeletonHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority

    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, STRUCT_CLEANER_PTR(XrActiveActionSetPrioritiesEXT)},


    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, STRUCT_CLEANER_PTR(XrActiveActionSetPrioritiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl

    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, STRUCT_CLEANER_PTR(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, STRUCT_CLEANER_PTR(XrForceFeedbackCurlApplyLocationsMNDX)},


    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, STRUCT_CLEANER_PTR(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, STRUCT_CLEANER_PTR(XrForceFeedbackCurlApplyLocationsMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, STRUCT_CLEANER_PTR(XrBodyJointLocationsBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, STRUCT_CLEANER_PTR(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, STRUCT_CLEANER_PTR(XrBodyJointLocationsBD)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemBodyTrackingPropertiesBD)},

#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing

    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, STRUCT_CLEANER_PTR(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, STRUCT_CLEANER_PTR(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, STRUCT_CLEANER_PTR(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, STRUCT_CLEANER_PTR(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, STRUCT_CLEANER_PTR(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, STRUCT_CLEANER_PTR(XrSpatialEntityStateBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, STRUCT_CLEANER_PTR(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, STRUCT_CLEANER_PTR(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrAnchorSpaceCreateInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, STRUCT_CLEANER_PTR(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, STRUCT_CLEANER_PTR(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, STRUCT_CLEANER_PTR(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, STRUCT_CLEANER_PTR(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, STRUCT_CLEANER_PTR(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, STRUCT_CLEANER_PTR(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, STRUCT_CLEANER_PTR(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, STRUCT_CLEANER_PTR(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, STRUCT_CLEANER_PTR(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, STRUCT_CLEANER_PTR(XrSpatialEntityStateBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrAnchorSpaceCreateInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorUnpersistInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorUnpersistInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, STRUCT_CLEANER_PTR(XrSharedSpatialAnchorDownloadInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, STRUCT_CLEANER_PTR(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, STRUCT_CLEANER_PTR(XrSharedSpatialAnchorDownloadInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene

    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, STRUCT_CLEANER_PTR(XrSceneCaptureInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, STRUCT_CLEANER_PTR(XrSceneCaptureInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh

    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderCreateInfoSpatialMeshBD)},


    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, STRUCT_CLEANER_PTR(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, STRUCT_CLEANER_PTR(XrSenseDataProviderCreateInfoSpatialMeshBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress

    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, STRUCT_CLEANER_PTR(XrFuturePollResultProgressBD)},


    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, STRUCT_CLEANER_PTR(XrFuturePollResultProgressBD)},

#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source

    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, STRUCT_CLEANER_PTR(XrHandTrackingDataSourceStateEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, STRUCT_CLEANER_PTR(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, STRUCT_CLEANER_PTR(XrHandTrackingDataSourceStateEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection

    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemPlaneDetectionPropertiesEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, STRUCT_CLEANER_PTR(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemPlaneDetectionPropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future

    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, STRUCT_CLEANER_PTR(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, STRUCT_CLEANER_PTR(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, STRUCT_CLEANER_PTR(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, STRUCT_CLEANER_PTR(XrFuturePollResultEXT)},


    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, STRUCT_CLEANER_PTR(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, STRUCT_CLEANER_PTR(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, STRUCT_CLEANER_PTR(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, STRUCT_CLEANER_PTR(XrFuturePollResultEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence

    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, STRUCT_CLEANER_PTR(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemUserPresencePropertiesEXT)},


    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, STRUCT_CLEANER_PTR(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, STRUCT_CLEANER_PTR(XrSystemUserPresencePropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications

    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, STRUCT_CLEANER_PTR(XrSystemNotificationsSetInfoML)},


    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, STRUCT_CLEANER_PTR(XrSystemNotificationsSetInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection

    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, STRUCT_CLEANER_PTR(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshRequestCompletionInfoML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, STRUCT_CLEANER_PTR(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, STRUCT_CLEANER_PTR(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, STRUCT_CLEANER_PTR(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, STRUCT_CLEANER_PTR(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, STRUCT_CLEANER_PTR(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, STRUCT_CLEANER_PTR(XrWorldMeshRequestCompletionInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression

    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, STRUCT_CLEANER_PTR(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrFacialExpressionBlendShapePropertiesML)},


    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, STRUCT_CLEANER_PTR(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, STRUCT_CLEANER_PTR(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, STRUCT_CLEANER_PTR(XrFacialExpressionBlendShapePropertiesML)},

#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers

    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, STRUCT_CLEANER_PTR(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, STRUCT_CLEANER_PTR(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},


    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, STRUCT_CLEANER_PTR(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, STRUCT_CLEANER_PTR(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery

    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, STRUCT_CLEANER_PTR(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, STRUCT_CLEANER_PTR(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, STRUCT_CLEANER_PTR(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, STRUCT_CLEANER_PTR(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, STRUCT_CLEANER_PTR(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemColocationDiscoveryPropertiesMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, STRUCT_CLEANER_PTR(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, STRUCT_CLEANER_PTR(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, STRUCT_CLEANER_PTR(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, STRUCT_CLEANER_PTR(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, STRUCT_CLEANER_PTR(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, STRUCT_CLEANER_PTR(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemColocationDiscoveryPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSpatialEntityGroupSharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, STRUCT_CLEANER_PTR(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, STRUCT_CLEANER_PTR(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, STRUCT_CLEANER_PTR(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, STRUCT_CLEANER_PTR(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, STRUCT_CLEANER_PTR(XrSystemSpatialEntityGroupSharingPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_ACTION_CREATE_INFO, STRUCT_CLEANER_PTR(XrActionCreateInfo)},


    {XR_TYPE_ACTION_SET_CREATE_INFO, STRUCT_CLEANER_PTR(XrActionSetCreateInfo)},


    {XR_TYPE_ACTION_SPACE_CREATE_INFO, STRUCT_CLEANER_PTR(XrActionSpaceCreateInfo)},


    {XR_TYPE_ACTION_STATE_BOOLEAN, STRUCT_CLEANER_PTR(XrActionStateBoolean)},


    {XR_TYPE_ACTION_STATE_FLOAT, STRUCT_CLEANER_PTR(XrActionStateFloat)},


    {XR_TYPE_ACTION_STATE_GET_INFO, STRUCT_CLEANER_PTR(XrActionStateGetInfo)},


    {XR_TYPE_ACTION_STATE_POSE, STRUCT_CLEANER_PTR(XrActionStatePose)},


    {XR_TYPE_ACTION_STATE_VECTOR2F, STRUCT_CLEANER_PTR(XrActionStateVector2f)},


    {XR_TYPE_ACTIONS_SYNC_INFO, STRUCT_CLEANER_PTR(XrActionsSyncInfo)},


    {XR_TYPE_API_LAYER_PROPERTIES, STRUCT_CLEANER_PTR(XrApiLayerProperties)},


    {XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO, STRUCT_CLEANER_PTR(XrBoundSourcesForActionEnumerateInfo)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION, STRUCT_CLEANER_PTR(XrCompositionLayerProjection)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW, STRUCT_CLEANER_PTR(XrCompositionLayerProjectionView)},


    {XR_TYPE_COMPOSITION_LAYER_QUAD, STRUCT_CLEANER_PTR(XrCompositionLayerQuad)},


    {XR_TYPE_EVENT_DATA_BUFFER, STRUCT_CLEANER_PTR(XrEventDataBuffer)},


    {XR_TYPE_EVENT_DATA_EVENTS_LOST, STRUCT_CLEANER_PTR(XrEventDataEventsLost)},


    {XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING, STRUCT_CLEANER_PTR(XrEventDataInstanceLossPending)},


    {XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED, STRUCT_CLEANER_PTR(XrEventDataInteractionProfileChanged)},


    {XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING, STRUCT_CLEANER_PTR(XrEventDataReferenceSpaceChangePending)},


    {XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED, STRUCT_CLEANER_PTR(XrEventDataSessionStateChanged)},


    {XR_TYPE_EXTENSION_PROPERTIES, STRUCT_CLEANER_PTR(XrExtensionProperties)},


    {XR_TYPE_FRAME_BEGIN_INFO, STRUCT_CLEANER_PTR(XrFrameBeginInfo)},


    {XR_TYPE_FRAME_END_INFO, STRUCT_CLEANER_PTR(XrFrameEndInfo)},


    {XR_TYPE_FRAME_STATE, STRUCT_CLEANER_PTR(XrFrameState)},


    {XR_TYPE_FRAME_WAIT_INFO, STRUCT_CLEANER_PTR(XrFrameWaitInfo)},


    {XR_TYPE_HAPTIC_ACTION_INFO, STRUCT_CLEANER_PTR(XrHapticActionInfo)},


    {XR_TYPE_HAPTIC_VIBRATION, STRUCT_CLEANER_PTR(XrHapticVibration)},


    {XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO, STRUCT_CLEANER_PTR(XrInputSourceLocalizedNameGetInfo)},


    {XR_TYPE_INSTANCE_CREATE_INFO, STRUCT_CLEANER_PTR(XrInstanceCreateInfo)},


    {XR_TYPE_INSTANCE_PROPERTIES, STRUCT_CLEANER_PTR(XrInstanceProperties)},


    {XR_TYPE_INTERACTION_PROFILE_STATE, STRUCT_CLEANER_PTR(XrInteractionProfileState)},


    {XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING, STRUCT_CLEANER_PTR(XrInteractionProfileSuggestedBinding)},


    {XR_TYPE_REFERENCE_SPACE_CREATE_INFO, STRUCT_CLEANER_PTR(XrReferenceSpaceCreateInfo)},


    {XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO, STRUCT_CLEANER_PTR(XrSessionActionSetsAttachInfo)},


    {XR_TYPE_SESSION_BEGIN_INFO, STRUCT_CLEANER_PTR(XrSessionBeginInfo)},


    {XR_TYPE_SESSION_CREATE_INFO, STRUCT_CLEANER_PTR(XrSessionCreateInfo)},


    {XR_TYPE_SPACE_LOCATION, STRUCT_CLEANER_PTR(XrSpaceLocation)},


    {XR_TYPE_SPACE_LOCATIONS, STRUCT_CLEANER_PTR(XrSpaceLocations)},


    {XR_TYPE_SPACE_VELOCITIES, STRUCT_CLEANER_PTR(XrSpaceVelocities)},


    {XR_TYPE_SPACE_VELOCITY, STRUCT_CLEANER_PTR(XrSpaceVelocity)},


    {XR_TYPE_SPACES_LOCATE_INFO, STRUCT_CLEANER_PTR(XrSpacesLocateInfo)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO, STRUCT_CLEANER_PTR(XrSwapchainCreateInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO, STRUCT_CLEANER_PTR(XrSwapchainImageAcquireInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO, STRUCT_CLEANER_PTR(XrSwapchainImageReleaseInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO, STRUCT_CLEANER_PTR(XrSwapchainImageWaitInfo)},


    {XR_TYPE_SYSTEM_GET_INFO, STRUCT_CLEANER_PTR(XrSystemGetInfo)},


    {XR_TYPE_SYSTEM_PROPERTIES, STRUCT_CLEANER_PTR(XrSystemProperties)},


    {XR_TYPE_VIEW, STRUCT_CLEANER_PTR(XrView)},


    {XR_TYPE_VIEW_CONFIGURATION_PROPERTIES, STRUCT_CLEANER_PTR(XrViewConfigurationProperties)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW, STRUCT_CLEANER_PTR(XrViewConfigurationView)},


    {XR_TYPE_VIEW_LOCATE_INFO, STRUCT_CLEANER_PTR(XrViewLocateInfo)},


    {XR_TYPE_VIEW_STATE, STRUCT_CLEANER_PTR(XrViewState)},


};

static StructCleaner cleaner_lookup(XrStructureType struct_type) {
    assert(cleaner_lookup_table.find(struct_type) != cleaner_lookup_table.end());
    return cleaner_lookup_table.at(struct_type);
}

// Struct size lookup
// Only to be used with OpenXR pNext structs
static std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube

    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, sizeof(XrCompositionLayerCubeKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CUBE_KHR, sizeof(XrCompositionLayerCubeKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance

    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, sizeof(XrInstanceCreateInfoAndroidKHR)},


    {XR_TYPE_INSTANCE_CREATE_INFO_ANDROID_KHR, sizeof(XrInstanceCreateInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, sizeof(XrCompositionLayerDepthInfoKHR)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR, sizeof(XrCompositionLayerDepthInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list

    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, sizeof(XrVulkanSwapchainFormatListCreateInfoKHR)},


    {XR_TYPE_VULKAN_SWAPCHAIN_FORMAT_LIST_CREATE_INFO_KHR, sizeof(XrVulkanSwapchainFormatListCreateInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings

    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, sizeof(XrEventDataPerfSettingsEXT)},


    {XR_TYPE_EVENT_DATA_PERF_SETTINGS_EXT, sizeof(XrEventDataPerfSettingsEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder

    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, sizeof(XrCompositionLayerCylinderKHR)},


    {XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR, sizeof(XrCompositionLayerCylinderKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, sizeof(XrCompositionLayerEquirectKHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR, sizeof(XrCompositionLayerEquirectKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils

    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, sizeof(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, sizeof(XrDebugUtilsLabelEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, sizeof(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, sizeof(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_OBJECT_NAME_INFO_EXT, sizeof(XrDebugUtilsObjectNameInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT, sizeof(XrDebugUtilsMessengerCallbackDataEXT)},


    {XR_TYPE_DEBUG_UTILS_MESSENGER_CREATE_INFO_EXT, sizeof(XrDebugUtilsMessengerCreateInfoEXT)},


    {XR_TYPE_DEBUG_UTILS_LABEL_EXT, sizeof(XrDebugUtilsLabelEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, sizeof(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, sizeof(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, sizeof(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, sizeof(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, sizeof(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, sizeof(XrGraphicsRequirementsOpenGLKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WIN32_KHR, sizeof(XrGraphicsBindingOpenGLWin32KHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XLIB_KHR, sizeof(XrGraphicsBindingOpenGLXlibKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_XCB_KHR, sizeof(XrGraphicsBindingOpenGLXcbKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_WAYLAND_KHR, sizeof(XrGraphicsBindingOpenGLWaylandKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_KHR, sizeof(XrSwapchainImageOpenGLKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_KHR, sizeof(XrGraphicsRequirementsOpenGLKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable

    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, sizeof(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, sizeof(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, sizeof(XrGraphicsRequirementsOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_BINDING_OPENGL_ES_ANDROID_KHR, sizeof(XrGraphicsBindingOpenGLESAndroidKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_OPENGL_ES_KHR, sizeof(XrSwapchainImageOpenGLESKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_OPENGL_ES_KHR, sizeof(XrGraphicsRequirementsOpenGLESKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable

    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, sizeof(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, sizeof(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, sizeof(XrGraphicsRequirementsVulkanKHR)},


    {XR_TYPE_GRAPHICS_BINDING_VULKAN_KHR, sizeof(XrGraphicsBindingVulkanKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_VULKAN_KHR, sizeof(XrSwapchainImageVulkanKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_VULKAN_KHR, sizeof(XrGraphicsRequirementsVulkanKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, sizeof(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, sizeof(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, sizeof(XrGraphicsRequirementsD3D11KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D11_KHR, sizeof(XrGraphicsBindingD3D11KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D11_KHR, sizeof(XrSwapchainImageD3D11KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D11_KHR, sizeof(XrGraphicsRequirementsD3D11KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable

    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, sizeof(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, sizeof(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, sizeof(XrGraphicsRequirementsD3D12KHR)},


    {XR_TYPE_GRAPHICS_BINDING_D3D12_KHR, sizeof(XrGraphicsBindingD3D12KHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_D3D12_KHR, sizeof(XrSwapchainImageD3D12KHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_D3D12_KHR, sizeof(XrGraphicsRequirementsD3D12KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable

    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, sizeof(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, sizeof(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, sizeof(XrGraphicsRequirementsMetalKHR)},


    {XR_TYPE_GRAPHICS_BINDING_METAL_KHR, sizeof(XrGraphicsBindingMetalKHR)},


    {XR_TYPE_SWAPCHAIN_IMAGE_METAL_KHR, sizeof(XrSwapchainImageMetalKHR)},


    {XR_TYPE_GRAPHICS_REQUIREMENTS_METAL_KHR, sizeof(XrGraphicsRequirementsMetalKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction

    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, sizeof(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, sizeof(XrEyeGazeSampleTimeEXT)},


    {XR_TYPE_SYSTEM_EYE_GAZE_INTERACTION_PROPERTIES_EXT, sizeof(XrSystemEyeGazeInteractionPropertiesEXT)},


    {XR_TYPE_EYE_GAZE_SAMPLE_TIME_EXT, sizeof(XrEyeGazeSampleTimeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask

    {XR_TYPE_VISIBILITY_MASK_KHR, sizeof(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, sizeof(XrEventDataVisibilityMaskChangedKHR)},


    {XR_TYPE_VISIBILITY_MASK_KHR, sizeof(XrVisibilityMaskKHR)},


    {XR_TYPE_EVENT_DATA_VISIBILITY_MASK_CHANGED_KHR, sizeof(XrEventDataVisibilityMaskChangedKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay

    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, sizeof(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, sizeof(XrEventDataMainSessionVisibilityChangedEXTX)},


    {XR_TYPE_SESSION_CREATE_INFO_OVERLAY_EXTX, sizeof(XrSessionCreateInfoOverlayEXTX)},


    {XR_TYPE_EVENT_DATA_MAIN_SESSION_VISIBILITY_CHANGED_EXTX, sizeof(XrEventDataMainSessionVisibilityChangedEXTX)},

#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias

    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, sizeof(XrCompositionLayerColorScaleBiasKHR)},


    {XR_TYPE_COMPOSITION_LAYER_COLOR_SCALE_BIAS_KHR, sizeof(XrCompositionLayerColorScaleBiasKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor

    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_MSFT, sizeof(XrSpatialAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_SPACE_CREATE_INFO_MSFT, sizeof(XrSpatialAnchorSpaceCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout

    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, sizeof(XrCompositionLayerImageLayoutFB)},


    {XR_TYPE_COMPOSITION_LAYER_IMAGE_LAYOUT_FB, sizeof(XrCompositionLayerImageLayoutFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend

    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, sizeof(XrCompositionLayerAlphaBlendFB)},


    {XR_TYPE_COMPOSITION_LAYER_ALPHA_BLEND_FB, sizeof(XrCompositionLayerAlphaBlendFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range

    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, sizeof(XrViewConfigurationDepthRangeEXT)},


    {XR_TYPE_VIEW_CONFIGURATION_DEPTH_RANGE_EXT, sizeof(XrViewConfigurationDepthRangeEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable

    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, sizeof(XrGraphicsBindingEGLMNDX)},


    {XR_TYPE_GRAPHICS_BINDING_EGL_MNDX, sizeof(XrGraphicsBindingEGLMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge

    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, sizeof(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, sizeof(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, sizeof(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, sizeof(XrSpatialGraphNodeBindingPropertiesMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_SPACE_CREATE_INFO_MSFT, sizeof(XrSpatialGraphNodeSpaceCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_STATIC_NODE_BINDING_CREATE_INFO_MSFT, sizeof(XrSpatialGraphStaticNodeBindingCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_GET_INFO_MSFT, sizeof(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT)},


    {XR_TYPE_SPATIAL_GRAPH_NODE_BINDING_PROPERTIES_MSFT, sizeof(XrSpatialGraphNodeBindingPropertiesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking

    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, sizeof(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, sizeof(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, sizeof(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, sizeof(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, sizeof(XrHandJointVelocitiesEXT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_PROPERTIES_EXT, sizeof(XrSystemHandTrackingPropertiesEXT)},


    {XR_TYPE_HAND_TRACKER_CREATE_INFO_EXT, sizeof(XrHandTrackerCreateInfoEXT)},


    {XR_TYPE_HAND_JOINTS_LOCATE_INFO_EXT, sizeof(XrHandJointsLocateInfoEXT)},


    {XR_TYPE_HAND_JOINT_LOCATIONS_EXT, sizeof(XrHandJointLocationsEXT)},


    {XR_TYPE_HAND_JOINT_VELOCITIES_EXT, sizeof(XrHandJointVelocitiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh

    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, sizeof(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, sizeof(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, sizeof(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, sizeof(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, sizeof(XrHandPoseTypeInfoMSFT)},


    {XR_TYPE_SYSTEM_HAND_TRACKING_MESH_PROPERTIES_MSFT, sizeof(XrSystemHandTrackingMeshPropertiesMSFT)},


    {XR_TYPE_HAND_MESH_SPACE_CREATE_INFO_MSFT, sizeof(XrHandMeshSpaceCreateInfoMSFT)},


    {XR_TYPE_HAND_MESH_UPDATE_INFO_MSFT, sizeof(XrHandMeshUpdateInfoMSFT)},


    {XR_TYPE_HAND_MESH_MSFT, sizeof(XrHandMeshMSFT)},


    {XR_TYPE_HAND_POSE_TYPE_INFO_MSFT, sizeof(XrHandPoseTypeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration

    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, sizeof(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, sizeof(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, sizeof(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, sizeof(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, sizeof(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, sizeof(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SESSION_BEGIN_INFO_MSFT, sizeof(XrSecondaryViewConfigurationSessionBeginInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_STATE_MSFT, sizeof(XrSecondaryViewConfigurationStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_STATE_MSFT, sizeof(XrSecondaryViewConfigurationFrameStateMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_FRAME_END_INFO_MSFT, sizeof(XrSecondaryViewConfigurationFrameEndInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_LAYER_INFO_MSFT, sizeof(XrSecondaryViewConfigurationLayerInfoMSFT)},


    {XR_TYPE_SECONDARY_VIEW_CONFIGURATION_SWAPCHAIN_CREATE_INFO_MSFT, sizeof(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model

    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, sizeof(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, sizeof(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, sizeof(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, sizeof(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, sizeof(XrControllerModelStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_KEY_STATE_MSFT, sizeof(XrControllerModelKeyStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_PROPERTIES_MSFT, sizeof(XrControllerModelNodePropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_PROPERTIES_MSFT, sizeof(XrControllerModelPropertiesMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_NODE_STATE_MSFT, sizeof(XrControllerModelNodeStateMSFT)},


    {XR_TYPE_CONTROLLER_MODEL_STATE_MSFT, sizeof(XrControllerModelStateMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov

    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, sizeof(XrViewConfigurationViewFovEPIC)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW_FOV_EPIC, sizeof(XrViewConfigurationViewFovEPIC)},

#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment

    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, sizeof(XrHolographicWindowAttachmentMSFT)},


    {XR_TYPE_HOLOGRAPHIC_WINDOW_ATTACHMENT_MSFT, sizeof(XrHolographicWindowAttachmentMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection

    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, sizeof(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, sizeof(XrCompositionLayerReprojectionPlaneOverrideMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_INFO_MSFT, sizeof(XrCompositionLayerReprojectionInfoMSFT)},


    {XR_TYPE_COMPOSITION_LAYER_REPROJECTION_PLANE_OVERRIDE_MSFT, sizeof(XrCompositionLayerReprojectionPlaneOverrideMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create

    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, sizeof(XrAndroidSurfaceSwapchainCreateInfoFB)},


    {XR_TYPE_ANDROID_SURFACE_SWAPCHAIN_CREATE_INFO_FB, sizeof(XrAndroidSurfaceSwapchainCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content

    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, sizeof(XrCompositionLayerSecureContentFB)},


    {XR_TYPE_COMPOSITION_LAYER_SECURE_CONTENT_FB, sizeof(XrCompositionLayerSecureContentFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, sizeof(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, sizeof(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_SKELETON_FB, sizeof(XrBodySkeletonFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, sizeof(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, sizeof(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_FB, sizeof(XrBodyTrackerCreateInfoFB)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_FB, sizeof(XrBodyJointsLocateInfoFB)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_FB, sizeof(XrSystemBodyTrackingPropertiesFB)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_FB, sizeof(XrBodyJointLocationsFB)},


    {XR_TYPE_BODY_SKELETON_FB, sizeof(XrBodySkeletonFB)},

#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding

    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, sizeof(XrInteractionProfileDpadBindingEXT)},


    {XR_TYPE_INTERACTION_PROFILE_DPAD_BINDING_EXT, sizeof(XrInteractionProfileDpadBindingEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold

    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, sizeof(XrInteractionProfileAnalogThresholdVALVE)},


    {XR_TYPE_INTERACTION_PROFILE_ANALOG_THRESHOLD_VALVE, sizeof(XrInteractionProfileAnalogThresholdVALVE)},

#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range

    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, sizeof(XrHandJointsMotionRangeInfoEXT)},


    {XR_TYPE_HAND_JOINTS_MOTION_RANGE_INFO_EXT, sizeof(XrHandJointsMotionRangeInfoEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init
#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android

    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, sizeof(XrLoaderInitInfoAndroidKHR)},


    {XR_TYPE_LOADER_INIT_INFO_ANDROID_KHR, sizeof(XrLoaderInitInfoAndroidKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2

    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, sizeof(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, sizeof(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, sizeof(XrVulkanGraphicsDeviceGetInfoKHR)},


    {XR_TYPE_VULKAN_INSTANCE_CREATE_INFO_KHR, sizeof(XrVulkanInstanceCreateInfoKHR)},


    {XR_TYPE_VULKAN_DEVICE_CREATE_INFO_KHR, sizeof(XrVulkanDeviceCreateInfoKHR)},


    {XR_TYPE_VULKAN_GRAPHICS_DEVICE_GET_INFO_KHR, sizeof(XrVulkanGraphicsDeviceGetInfoKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2

    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, sizeof(XrCompositionLayerEquirect2KHR)},


    {XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR, sizeof(XrCompositionLayerEquirect2KHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding

    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, sizeof(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, sizeof(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, sizeof(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, sizeof(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, sizeof(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, sizeof(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, sizeof(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, sizeof(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, sizeof(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, sizeof(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, sizeof(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, sizeof(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, sizeof(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, sizeof(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, sizeof(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, sizeof(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, sizeof(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, sizeof(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, sizeof(XrSceneMeshIndicesUint16MSFT)},


    {XR_TYPE_SCENE_OBSERVER_CREATE_INFO_MSFT, sizeof(XrSceneObserverCreateInfoMSFT)},


    {XR_TYPE_SCENE_CREATE_INFO_MSFT, sizeof(XrSceneCreateInfoMSFT)},


    {XR_TYPE_NEW_SCENE_COMPUTE_INFO_MSFT, sizeof(XrNewSceneComputeInfoMSFT)},


    {XR_TYPE_VISUAL_MESH_COMPUTE_LOD_INFO_MSFT, sizeof(XrVisualMeshComputeLodInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_MSFT, sizeof(XrSceneComponentsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_GET_INFO_MSFT, sizeof(XrSceneComponentsGetInfoMSFT)},


    {XR_TYPE_SCENE_COMPONENT_LOCATIONS_MSFT, sizeof(XrSceneComponentLocationsMSFT)},


    {XR_TYPE_SCENE_COMPONENTS_LOCATE_INFO_MSFT, sizeof(XrSceneComponentsLocateInfoMSFT)},


    {XR_TYPE_SCENE_OBJECTS_MSFT, sizeof(XrSceneObjectsMSFT)},


    {XR_TYPE_SCENE_COMPONENT_PARENT_FILTER_INFO_MSFT, sizeof(XrSceneComponentParentFilterInfoMSFT)},


    {XR_TYPE_SCENE_OBJECT_TYPES_FILTER_INFO_MSFT, sizeof(XrSceneObjectTypesFilterInfoMSFT)},


    {XR_TYPE_SCENE_PLANES_MSFT, sizeof(XrScenePlanesMSFT)},


    {XR_TYPE_SCENE_PLANE_ALIGNMENT_FILTER_INFO_MSFT, sizeof(XrScenePlaneAlignmentFilterInfoMSFT)},


    {XR_TYPE_SCENE_MESHES_MSFT, sizeof(XrSceneMeshesMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_GET_INFO_MSFT, sizeof(XrSceneMeshBuffersGetInfoMSFT)},


    {XR_TYPE_SCENE_MESH_BUFFERS_MSFT, sizeof(XrSceneMeshBuffersMSFT)},


    {XR_TYPE_SCENE_MESH_VERTEX_BUFFER_MSFT, sizeof(XrSceneMeshVertexBufferMSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT32_MSFT, sizeof(XrSceneMeshIndicesUint32MSFT)},


    {XR_TYPE_SCENE_MESH_INDICES_UINT16_MSFT, sizeof(XrSceneMeshIndicesUint16MSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization

    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, sizeof(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, sizeof(XrSceneDeserializeInfoMSFT)},


    {XR_TYPE_SERIALIZED_SCENE_FRAGMENT_DATA_GET_INFO_MSFT, sizeof(XrSerializedSceneFragmentDataGetInfoMSFT)},


    {XR_TYPE_SCENE_DESERIALIZE_INFO_MSFT, sizeof(XrSceneDeserializeInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate

    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, sizeof(XrEventDataDisplayRefreshRateChangedFB)},


    {XR_TYPE_EVENT_DATA_DISPLAY_REFRESH_RATE_CHANGED_FB, sizeof(XrEventDataDisplayRefreshRateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction

    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, sizeof(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, sizeof(XrEventDataViveTrackerConnectedHTCX)},


    {XR_TYPE_VIVE_TRACKER_PATHS_HTCX, sizeof(XrViveTrackerPathsHTCX)},


    {XR_TYPE_EVENT_DATA_VIVE_TRACKER_CONNECTED_HTCX, sizeof(XrEventDataViveTrackerConnectedHTCX)},

#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking

    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, sizeof(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, sizeof(XrFacialExpressionsHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, sizeof(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_SYSTEM_FACIAL_TRACKING_PROPERTIES_HTC, sizeof(XrSystemFacialTrackingPropertiesHTC)},


    {XR_TYPE_FACIAL_TRACKER_CREATE_INFO_HTC, sizeof(XrFacialTrackerCreateInfoHTC)},


    {XR_TYPE_FACIAL_EXPRESSIONS_HTC, sizeof(XrFacialExpressionsHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space

    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, sizeof(XrSystemColorSpacePropertiesFB)},


    {XR_TYPE_SYSTEM_COLOR_SPACE_PROPERTIES_FB, sizeof(XrSystemColorSpacePropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh

    {XR_TYPE_HAND_TRACKING_MESH_FB, sizeof(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, sizeof(XrHandTrackingScaleFB)},


    {XR_TYPE_HAND_TRACKING_MESH_FB, sizeof(XrHandTrackingMeshFB)},


    {XR_TYPE_HAND_TRACKING_SCALE_FB, sizeof(XrHandTrackingScaleFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim

    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, sizeof(XrHandTrackingAimStateFB)},


    {XR_TYPE_HAND_TRACKING_AIM_STATE_FB, sizeof(XrHandTrackingAimStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules

    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, sizeof(XrHandTrackingCapsulesStateFB)},


    {XR_TYPE_HAND_TRACKING_CAPSULES_STATE_FB, sizeof(XrHandTrackingCapsulesStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, sizeof(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, sizeof(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, sizeof(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, sizeof(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, sizeof(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, sizeof(XrEventDataSpaceSetStatusCompleteFB)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_PROPERTIES_FB, sizeof(XrSystemSpatialEntityPropertiesFB)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_FB, sizeof(XrSpatialAnchorCreateInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_SET_INFO_FB, sizeof(XrSpaceComponentStatusSetInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_STATUS_FB, sizeof(XrSpaceComponentStatusFB)},


    {XR_TYPE_EVENT_DATA_SPATIAL_ANCHOR_CREATE_COMPLETE_FB, sizeof(XrEventDataSpatialAnchorCreateCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SET_STATUS_COMPLETE_FB, sizeof(XrEventDataSpaceSetStatusCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation

    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, sizeof(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, sizeof(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, sizeof(XrSwapchainStateFoveationFB)},


    {XR_TYPE_FOVEATION_PROFILE_CREATE_INFO_FB, sizeof(XrFoveationProfileCreateInfoFB)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO_FOVEATION_FB, sizeof(XrSwapchainCreateInfoFoveationFB)},


    {XR_TYPE_SWAPCHAIN_STATE_FOVEATION_FB, sizeof(XrSwapchainStateFoveationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration

    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, sizeof(XrFoveationLevelProfileCreateInfoFB)},


    {XR_TYPE_FOVEATION_LEVEL_PROFILE_CREATE_INFO_FB, sizeof(XrFoveationLevelProfileCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking

    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, sizeof(XrSystemKeyboardTrackingPropertiesFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, sizeof(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, sizeof(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_KEYBOARD_SPACE_CREATE_INFO_FB, sizeof(XrKeyboardSpaceCreateInfoFB)},


    {XR_TYPE_KEYBOARD_TRACKING_QUERY_FB, sizeof(XrKeyboardTrackingQueryFB)},


    {XR_TYPE_SYSTEM_KEYBOARD_TRACKING_PROPERTIES_FB, sizeof(XrSystemKeyboardTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh

    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, sizeof(XrTriangleMeshCreateInfoFB)},


    {XR_TYPE_TRIANGLE_MESH_CREATE_INFO_FB, sizeof(XrTriangleMeshCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough

    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, sizeof(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, sizeof(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, sizeof(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, sizeof(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, sizeof(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, sizeof(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, sizeof(XrGeometryInstanceTransformFB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, sizeof(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, sizeof(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, sizeof(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, sizeof(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, sizeof(XrEventDataPassthroughStateChangedFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES_FB, sizeof(XrSystemPassthroughPropertiesFB)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_FB, sizeof(XrPassthroughCreateInfoFB)},


    {XR_TYPE_PASSTHROUGH_LAYER_CREATE_INFO_FB, sizeof(XrPassthroughLayerCreateInfoFB)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB, sizeof(XrCompositionLayerPassthroughFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_CREATE_INFO_FB, sizeof(XrGeometryInstanceCreateInfoFB)},


    {XR_TYPE_GEOMETRY_INSTANCE_TRANSFORM_FB, sizeof(XrGeometryInstanceTransformFB)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_PROPERTIES2_FB, sizeof(XrSystemPassthroughProperties2FB)},


    {XR_TYPE_PASSTHROUGH_STYLE_FB, sizeof(XrPassthroughStyleFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_RGBA_FB, sizeof(XrPassthroughColorMapMonoToRgbaFB)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_MONO_TO_MONO_FB, sizeof(XrPassthroughColorMapMonoToMonoFB)},


    {XR_TYPE_PASSTHROUGH_BRIGHTNESS_CONTRAST_SATURATION_FB, sizeof(XrPassthroughBrightnessContrastSaturationFB)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_STATE_CHANGED_FB, sizeof(XrEventDataPassthroughStateChangedFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model

    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, sizeof(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, sizeof(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, sizeof(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, sizeof(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, sizeof(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, sizeof(XrRenderModelCapabilitiesRequestFB)},


    {XR_TYPE_RENDER_MODEL_PATH_INFO_FB, sizeof(XrRenderModelPathInfoFB)},


    {XR_TYPE_RENDER_MODEL_PROPERTIES_FB, sizeof(XrRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_BUFFER_FB, sizeof(XrRenderModelBufferFB)},


    {XR_TYPE_RENDER_MODEL_LOAD_INFO_FB, sizeof(XrRenderModelLoadInfoFB)},


    {XR_TYPE_SYSTEM_RENDER_MODEL_PROPERTIES_FB, sizeof(XrSystemRenderModelPropertiesFB)},


    {XR_TYPE_RENDER_MODEL_CAPABILITIES_REQUEST_FB, sizeof(XrRenderModelCapabilitiesRequestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification

    {XR_TYPE_BINDING_MODIFICATIONS_KHR, sizeof(XrBindingModificationsKHR)},


    {XR_TYPE_BINDING_MODIFICATIONS_KHR, sizeof(XrBindingModificationsKHR)},

#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering

    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, sizeof(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, sizeof(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, sizeof(XrSystemFoveatedRenderingPropertiesVARJO)},


    {XR_TYPE_VIEW_LOCATE_FOVEATED_RENDERING_VARJO, sizeof(XrViewLocateFoveatedRenderingVARJO)},


    {XR_TYPE_FOVEATED_VIEW_CONFIGURATION_VIEW_VARJO, sizeof(XrFoveatedViewConfigurationViewVARJO)},


    {XR_TYPE_SYSTEM_FOVEATED_RENDERING_PROPERTIES_VARJO, sizeof(XrSystemFoveatedRenderingPropertiesVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, sizeof(XrCompositionLayerDepthTestVARJO)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_VARJO, sizeof(XrCompositionLayerDepthTestVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking

    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, sizeof(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, sizeof(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, sizeof(XrMarkerSpaceCreateInfoVARJO)},


    {XR_TYPE_SYSTEM_MARKER_TRACKING_PROPERTIES_VARJO, sizeof(XrSystemMarkerTrackingPropertiesVARJO)},


    {XR_TYPE_EVENT_DATA_MARKER_TRACKING_UPDATE_VARJO, sizeof(XrEventDataMarkerTrackingUpdateVARJO)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_VARJO, sizeof(XrMarkerSpaceCreateInfoVARJO)},

#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info

    {XR_TYPE_FRAME_END_INFO_ML, sizeof(XrFrameEndInfoML)},


    {XR_TYPE_FRAME_END_INFO_ML, sizeof(XrFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer

    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, sizeof(XrGlobalDimmerFrameEndInfoML)},


    {XR_TYPE_GLOBAL_DIMMER_FRAME_END_INFO_ML, sizeof(XrGlobalDimmerFrameEndInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat

    {XR_TYPE_COORDINATE_SPACE_CREATE_INFO_ML, sizeof(XrCoordinateSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding

    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, sizeof(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, sizeof(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, sizeof(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, sizeof(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, sizeof(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, sizeof(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, sizeof(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, sizeof(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, sizeof(XrMarkerSpaceCreateInfoML)},


    {XR_TYPE_SYSTEM_MARKER_UNDERSTANDING_PROPERTIES_ML, sizeof(XrSystemMarkerUnderstandingPropertiesML)},


    {XR_TYPE_MARKER_DETECTOR_CREATE_INFO_ML, sizeof(XrMarkerDetectorCreateInfoML)},


    {XR_TYPE_MARKER_DETECTOR_ARUCO_INFO_ML, sizeof(XrMarkerDetectorArucoInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SIZE_INFO_ML, sizeof(XrMarkerDetectorSizeInfoML)},


    {XR_TYPE_MARKER_DETECTOR_APRIL_TAG_INFO_ML, sizeof(XrMarkerDetectorAprilTagInfoML)},


    {XR_TYPE_MARKER_DETECTOR_CUSTOM_PROFILE_INFO_ML, sizeof(XrMarkerDetectorCustomProfileInfoML)},


    {XR_TYPE_MARKER_DETECTOR_SNAPSHOT_INFO_ML, sizeof(XrMarkerDetectorSnapshotInfoML)},


    {XR_TYPE_MARKER_DETECTOR_STATE_ML, sizeof(XrMarkerDetectorStateML)},


    {XR_TYPE_MARKER_SPACE_CREATE_INFO_ML, sizeof(XrMarkerSpaceCreateInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map

    {XR_TYPE_LOCALIZATION_MAP_ML, sizeof(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, sizeof(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, sizeof(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, sizeof(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, sizeof(XrLocalizationEnableEventsInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_ML, sizeof(XrLocalizationMapML)},


    {XR_TYPE_EVENT_DATA_LOCALIZATION_CHANGED_ML, sizeof(XrEventDataLocalizationChangedML)},


    {XR_TYPE_MAP_LOCALIZATION_REQUEST_INFO_ML, sizeof(XrMapLocalizationRequestInfoML)},


    {XR_TYPE_LOCALIZATION_MAP_IMPORT_INFO_ML, sizeof(XrLocalizationMapImportInfoML)},


    {XR_TYPE_LOCALIZATION_ENABLE_EVENTS_INFO_ML, sizeof(XrLocalizationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, sizeof(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, sizeof(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, sizeof(XrSpatialAnchorStateML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_POSE_ML, sizeof(XrSpatialAnchorsCreateInfoFromPoseML)},


    {XR_TYPE_CREATE_SPATIAL_ANCHORS_COMPLETION_ML, sizeof(XrCreateSpatialAnchorsCompletionML)},


    {XR_TYPE_SPATIAL_ANCHOR_STATE_ML, sizeof(XrSpatialAnchorStateML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage

    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, sizeof(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, sizeof(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, sizeof(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, sizeof(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, sizeof(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, sizeof(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, sizeof(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, sizeof(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, sizeof(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, sizeof(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_STORAGE_INFO_ML, sizeof(XrSpatialAnchorsCreateStorageInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_INFO_RADIUS_ML, sizeof(XrSpatialAnchorsQueryInfoRadiusML)},


    {XR_TYPE_SPATIAL_ANCHORS_QUERY_COMPLETION_ML, sizeof(XrSpatialAnchorsQueryCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_CREATE_INFO_FROM_UUIDS_ML, sizeof(XrSpatialAnchorsCreateInfoFromUuidsML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_INFO_ML, sizeof(XrSpatialAnchorsPublishInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_ML, sizeof(XrSpatialAnchorsPublishCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_INFO_ML, sizeof(XrSpatialAnchorsDeleteInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_ML, sizeof(XrSpatialAnchorsDeleteCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_INFO_ML, sizeof(XrSpatialAnchorsUpdateExpirationInfoML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_ML, sizeof(XrSpatialAnchorsUpdateExpirationCompletionML)},


    {XR_TYPE_SPATIAL_ANCHORS_PUBLISH_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsPublishCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_DELETE_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsDeleteCompletionDetailsML)},


    {XR_TYPE_SPATIAL_ANCHORS_UPDATE_EXPIRATION_COMPLETION_DETAILS_ML, sizeof(XrSpatialAnchorsUpdateExpirationCompletionDetailsML)},

#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration

    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, sizeof(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, sizeof(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, sizeof(XrUserCalibrationEnableEventsInfoML)},


    {XR_TYPE_EVENT_DATA_HEADSET_FIT_CHANGED_ML, sizeof(XrEventDataHeadsetFitChangedML)},


    {XR_TYPE_EVENT_DATA_EYE_CALIBRATION_CHANGED_ML, sizeof(XrEventDataEyeCalibrationChangedML)},


    {XR_TYPE_USER_CALIBRATION_ENABLE_EVENTS_INFO_ML, sizeof(XrUserCalibrationEnableEventsInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence

    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, sizeof(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, sizeof(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSISTENCE_INFO_MSFT, sizeof(XrSpatialAnchorPersistenceInfoMSFT)},


    {XR_TYPE_SPATIAL_ANCHOR_FROM_PERSISTED_ANCHOR_CREATE_INFO_MSFT, sizeof(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker

    {XR_TYPE_SCENE_MARKERS_MSFT, sizeof(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, sizeof(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, sizeof(XrSceneMarkerQRCodesMSFT)},


    {XR_TYPE_SCENE_MARKERS_MSFT, sizeof(XrSceneMarkersMSFT)},


    {XR_TYPE_SCENE_MARKER_TYPE_FILTER_MSFT, sizeof(XrSceneMarkerTypeFilterMSFT)},


    {XR_TYPE_SCENE_MARKER_QR_CODES_MSFT, sizeof(XrSceneMarkerQRCodesMSFT)},

#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query

    {XR_TYPE_SPACE_QUERY_INFO_FB, sizeof(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, sizeof(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, sizeof(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, sizeof(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, sizeof(XrSpaceQueryResultsFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, sizeof(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, sizeof(XrEventDataSpaceQueryCompleteFB)},


    {XR_TYPE_SPACE_QUERY_INFO_FB, sizeof(XrSpaceQueryInfoFB)},


    {XR_TYPE_SPACE_QUERY_RESULTS_FB, sizeof(XrSpaceQueryResultsFB)},


    {XR_TYPE_SPACE_STORAGE_LOCATION_FILTER_INFO_FB, sizeof(XrSpaceStorageLocationFilterInfoFB)},


    {XR_TYPE_SPACE_UUID_FILTER_INFO_FB, sizeof(XrSpaceUuidFilterInfoFB)},


    {XR_TYPE_SPACE_COMPONENT_FILTER_INFO_FB, sizeof(XrSpaceComponentFilterInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_RESULTS_AVAILABLE_FB, sizeof(XrEventDataSpaceQueryResultsAvailableFB)},


    {XR_TYPE_EVENT_DATA_SPACE_QUERY_COMPLETE_FB, sizeof(XrEventDataSpaceQueryCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage

    {XR_TYPE_SPACE_SAVE_INFO_FB, sizeof(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, sizeof(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, sizeof(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, sizeof(XrEventDataSpaceEraseCompleteFB)},


    {XR_TYPE_SPACE_SAVE_INFO_FB, sizeof(XrSpaceSaveInfoFB)},


    {XR_TYPE_SPACE_ERASE_INFO_FB, sizeof(XrSpaceEraseInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SAVE_COMPLETE_FB, sizeof(XrEventDataSpaceSaveCompleteFB)},


    {XR_TYPE_EVENT_DATA_SPACE_ERASE_COMPLETE_FB, sizeof(XrEventDataSpaceEraseCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan

    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, sizeof(XrSwapchainImageFoveationVulkanFB)},


    {XR_TYPE_SWAPCHAIN_IMAGE_FOVEATION_VULKAN_FB, sizeof(XrSwapchainImageFoveationVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface

    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, sizeof(XrSwapchainStateAndroidSurfaceDimensionsFB)},


    {XR_TYPE_SWAPCHAIN_STATE_ANDROID_SURFACE_DIMENSIONS_FB, sizeof(XrSwapchainStateAndroidSurfaceDimensionsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, sizeof(XrSwapchainStateSamplerOpenGLESFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_OPENGL_ES_FB, sizeof(XrSwapchainStateSamplerOpenGLESFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan

    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, sizeof(XrSwapchainStateSamplerVulkanFB)},


    {XR_TYPE_SWAPCHAIN_STATE_SAMPLER_VULKAN_FB, sizeof(XrSwapchainStateSamplerVulkanFB)},

#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing

    {XR_TYPE_SPACE_SHARE_INFO_FB, sizeof(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, sizeof(XrEventDataSpaceShareCompleteFB)},


    {XR_TYPE_SPACE_SHARE_INFO_FB, sizeof(XrSpaceShareInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_SHARE_COMPLETE_FB, sizeof(XrEventDataSpaceShareCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp

    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, sizeof(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, sizeof(XrSystemSpaceWarpPropertiesFB)},


    {XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB, sizeof(XrCompositionLayerSpaceWarpInfoFB)},


    {XR_TYPE_SYSTEM_SPACE_WARP_PROPERTIES_FB, sizeof(XrSystemSpaceWarpPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope

    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, sizeof(XrHapticAmplitudeEnvelopeVibrationFB)},


    {XR_TYPE_HAPTIC_AMPLITUDE_ENVELOPE_VIBRATION_FB, sizeof(XrHapticAmplitudeEnvelopeVibrationFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene

    {XR_TYPE_SEMANTIC_LABELS_FB, sizeof(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, sizeof(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, sizeof(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, sizeof(XrSemanticLabelsSupportInfoFB)},


    {XR_TYPE_SEMANTIC_LABELS_FB, sizeof(XrSemanticLabelsFB)},


    {XR_TYPE_ROOM_LAYOUT_FB, sizeof(XrRoomLayoutFB)},


    {XR_TYPE_BOUNDARY_2D_FB, sizeof(XrBoundary2DFB)},


    {XR_TYPE_SEMANTIC_LABELS_SUPPORT_INFO_FB, sizeof(XrSemanticLabelsSupportInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control

    {XR_TYPE_DIGITAL_LENS_CONTROL_ALMALENCE, sizeof(XrDigitalLensControlALMALENCE)},

#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture

    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, sizeof(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, sizeof(XrSceneCaptureRequestInfoFB)},


    {XR_TYPE_EVENT_DATA_SCENE_CAPTURE_COMPLETE_FB, sizeof(XrEventDataSceneCaptureCompleteFB)},


    {XR_TYPE_SCENE_CAPTURE_REQUEST_INFO_FB, sizeof(XrSceneCaptureRequestInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container

    {XR_TYPE_SPACE_CONTAINER_FB, sizeof(XrSpaceContainerFB)},


    {XR_TYPE_SPACE_CONTAINER_FB, sizeof(XrSpaceContainerFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked

    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, sizeof(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, sizeof(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, sizeof(XrSystemFoveationEyeTrackedPropertiesMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_PROFILE_CREATE_INFO_META, sizeof(XrFoveationEyeTrackedProfileCreateInfoMETA)},


    {XR_TYPE_FOVEATION_EYE_TRACKED_STATE_META, sizeof(XrFoveationEyeTrackedStateMETA)},


    {XR_TYPE_SYSTEM_FOVEATION_EYE_TRACKED_PROPERTIES_META, sizeof(XrSystemFoveationEyeTrackedPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, sizeof(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, sizeof(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, sizeof(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, sizeof(XrFaceExpressionWeightsFB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES_FB, sizeof(XrSystemFaceTrackingPropertiesFB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO_FB, sizeof(XrFaceTrackerCreateInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_INFO_FB, sizeof(XrFaceExpressionInfoFB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS_FB, sizeof(XrFaceExpressionWeightsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social

    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, sizeof(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, sizeof(XrEyeGazesInfoFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, sizeof(XrSystemEyeTrackingPropertiesFB)},


    {XR_TYPE_EYE_GAZES_FB, sizeof(XrEyeGazesFB)},


    {XR_TYPE_EYE_TRACKER_CREATE_INFO_FB, sizeof(XrEyeTrackerCreateInfoFB)},


    {XR_TYPE_EYE_GAZES_INFO_FB, sizeof(XrEyeGazesInfoFB)},


    {XR_TYPE_EYE_GAZES_FB, sizeof(XrEyeGazesFB)},


    {XR_TYPE_SYSTEM_EYE_TRACKING_PROPERTIES_FB, sizeof(XrSystemEyeTrackingPropertiesFB)},

#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands

    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, sizeof(XrPassthroughKeyboardHandsIntensityFB)},


    {XR_TYPE_PASSTHROUGH_KEYBOARD_HANDS_INTENSITY_FB, sizeof(XrPassthroughKeyboardHandsIntensityFB)},

#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings

    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, sizeof(XrCompositionLayerSettingsFB)},


    {XR_TYPE_COMPOSITION_LAYER_SETTINGS_FB, sizeof(XrCompositionLayerSettingsFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm

    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, sizeof(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, sizeof(XrDevicePcmSampleRateStateFB)},


    {XR_TYPE_HAPTIC_PCM_VIBRATION_FB, sizeof(XrHapticPcmVibrationFB)},


    {XR_TYPE_DEVICE_PCM_SAMPLE_RATE_STATE_FB, sizeof(XrDevicePcmSampleRateStateFB)},

#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis

    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, sizeof(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, sizeof(XrFrameSynthesisConfigViewEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_INFO_EXT, sizeof(XrFrameSynthesisInfoEXT)},


    {XR_TYPE_FRAME_SYNTHESIS_CONFIG_VIEW_EXT, sizeof(XrFrameSynthesisConfigViewEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test

    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, sizeof(XrCompositionLayerDepthTestFB)},


    {XR_TYPE_COMPOSITION_LAYER_DEPTH_TEST_FB, sizeof(XrCompositionLayerDepthTestFB)},

#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming

    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, sizeof(XrLocalDimmingFrameEndInfoMETA)},


    {XR_TYPE_LOCAL_DIMMING_FRAME_END_INFO_META, sizeof(XrLocalDimmingFrameEndInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences

    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, sizeof(XrPassthroughPreferencesMETA)},


    {XR_TYPE_PASSTHROUGH_PREFERENCES_META, sizeof(XrPassthroughPreferencesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard

    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, sizeof(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, sizeof(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, sizeof(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, sizeof(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, sizeof(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, sizeof(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, sizeof(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, sizeof(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, sizeof(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, sizeof(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, sizeof(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, sizeof(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, sizeof(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, sizeof(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, sizeof(XrEventDataVirtualKeyboardHiddenMETA)},


    {XR_TYPE_SYSTEM_VIRTUAL_KEYBOARD_PROPERTIES_META, sizeof(XrSystemVirtualKeyboardPropertiesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_CREATE_INFO_META, sizeof(XrVirtualKeyboardCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_SPACE_CREATE_INFO_META, sizeof(XrVirtualKeyboardSpaceCreateInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_LOCATION_INFO_META, sizeof(XrVirtualKeyboardLocationInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_VISIBILITY_SET_INFO_META, sizeof(XrVirtualKeyboardModelVisibilitySetInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_ANIMATION_STATE_META, sizeof(XrVirtualKeyboardAnimationStateMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_MODEL_ANIMATION_STATES_META, sizeof(XrVirtualKeyboardModelAnimationStatesMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXTURE_DATA_META, sizeof(XrVirtualKeyboardTextureDataMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_INPUT_INFO_META, sizeof(XrVirtualKeyboardInputInfoMETA)},


    {XR_TYPE_VIRTUAL_KEYBOARD_TEXT_CONTEXT_CHANGE_INFO_META, sizeof(XrVirtualKeyboardTextContextChangeInfoMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_COMMIT_TEXT_META, sizeof(XrEventDataVirtualKeyboardCommitTextMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_BACKSPACE_META, sizeof(XrEventDataVirtualKeyboardBackspaceMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_ENTER_META, sizeof(XrEventDataVirtualKeyboardEnterMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_SHOWN_META, sizeof(XrEventDataVirtualKeyboardShownMETA)},


    {XR_TYPE_EVENT_DATA_VIRTUAL_KEYBOARD_HIDDEN_META, sizeof(XrEventDataVirtualKeyboardHiddenMETA)},

#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera

    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, sizeof(XrExternalCameraOCULUS)},


    {XR_TYPE_EXTERNAL_CAMERA_OCULUS, sizeof(XrExternalCameraOCULUS)},

#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info

    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, sizeof(XrVulkanSwapchainCreateInfoMETA)},


    {XR_TYPE_VULKAN_SWAPCHAIN_CREATE_INFO_META, sizeof(XrVulkanSwapchainCreateInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics

    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, sizeof(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, sizeof(XrPerformanceMetricsCounterMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_STATE_META, sizeof(XrPerformanceMetricsStateMETA)},


    {XR_TYPE_PERFORMANCE_METRICS_COUNTER_META, sizeof(XrPerformanceMetricsCounterMETA)},

#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch

    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, sizeof(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, sizeof(XrEventDataSpaceListSaveCompleteFB)},


    {XR_TYPE_SPACE_LIST_SAVE_INFO_FB, sizeof(XrSpaceListSaveInfoFB)},


    {XR_TYPE_EVENT_DATA_SPACE_LIST_SAVE_COMPLETE_FB, sizeof(XrEventDataSpaceListSaveCompleteFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user

    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, sizeof(XrSpaceUserCreateInfoFB)},


    {XR_TYPE_SPACE_USER_CREATE_INFO_FB, sizeof(XrSpaceUserCreateInfoFB)},

#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id

    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, sizeof(XrSystemHeadsetIdPropertiesMETA)},


    {XR_TYPE_SYSTEM_HEADSET_ID_PROPERTIES_META, sizeof(XrSystemHeadsetIdPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution

    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, sizeof(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, sizeof(XrRecommendedLayerResolutionGetInfoMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_META, sizeof(XrRecommendedLayerResolutionMETA)},


    {XR_TYPE_RECOMMENDED_LAYER_RESOLUTION_GET_INFO_META, sizeof(XrRecommendedLayerResolutionGetInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut

    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, sizeof(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, sizeof(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, sizeof(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, sizeof(XrPassthroughColorMapInterpolatedLutMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, sizeof(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_SYSTEM_PASSTHROUGH_COLOR_LUT_PROPERTIES_META, sizeof(XrSystemPassthroughColorLutPropertiesMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_CREATE_INFO_META, sizeof(XrPassthroughColorLutCreateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_LUT_UPDATE_INFO_META, sizeof(XrPassthroughColorLutUpdateInfoMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_LUT_META, sizeof(XrPassthroughColorMapLutMETA)},


    {XR_TYPE_PASSTHROUGH_COLOR_MAP_INTERPOLATED_LUT_META, sizeof(XrPassthroughColorMapInterpolatedLutMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh

    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, sizeof(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, sizeof(XrSpaceTriangleMeshMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_GET_INFO_META, sizeof(XrSpaceTriangleMeshGetInfoMETA)},


    {XR_TYPE_SPACE_TRIANGLE_MESH_META, sizeof(XrSpaceTriangleMeshMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body

    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, sizeof(XrSystemPropertiesBodyTrackingFullBodyMETA)},


    {XR_TYPE_SYSTEM_PROPERTIES_BODY_TRACKING_FULL_BODY_META, sizeof(XrSystemPropertiesBodyTrackingFullBodyMETA)},

#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event

    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, sizeof(XrEventDataPassthroughLayerResumedMETA)},


    {XR_TYPE_EVENT_DATA_PASSTHROUGH_LAYER_RESUMED_META, sizeof(XrEventDataPassthroughLayerResumedMETA)},

#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2

    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, sizeof(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, sizeof(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, sizeof(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, sizeof(XrFaceExpressionWeights2FB)},


    {XR_TYPE_SYSTEM_FACE_TRACKING_PROPERTIES2_FB, sizeof(XrSystemFaceTrackingProperties2FB)},


    {XR_TYPE_FACE_TRACKER_CREATE_INFO2_FB, sizeof(XrFaceTrackerCreateInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_INFO2_FB, sizeof(XrFaceExpressionInfo2FB)},


    {XR_TYPE_FACE_EXPRESSION_WEIGHTS2_FB, sizeof(XrFaceExpressionWeights2FB)},

#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, sizeof(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, sizeof(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, sizeof(XrEventDataShareSpacesCompleteMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_SHARING_PROPERTIES_META, sizeof(XrSystemSpatialEntitySharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_INFO_META, sizeof(XrShareSpacesInfoMETA)},


    {XR_TYPE_EVENT_DATA_SHARE_SPACES_COMPLETE_META, sizeof(XrEventDataShareSpacesCompleteMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth

    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, sizeof(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, sizeof(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, sizeof(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, sizeof(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, sizeof(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, sizeof(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, sizeof(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, sizeof(XrSystemEnvironmentDepthPropertiesMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_PROVIDER_CREATE_INFO_META, sizeof(XrEnvironmentDepthProviderCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_CREATE_INFO_META, sizeof(XrEnvironmentDepthSwapchainCreateInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_SWAPCHAIN_STATE_META, sizeof(XrEnvironmentDepthSwapchainStateMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_ACQUIRE_INFO_META, sizeof(XrEnvironmentDepthImageAcquireInfoMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_VIEW_META, sizeof(XrEnvironmentDepthImageViewMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_IMAGE_META, sizeof(XrEnvironmentDepthImageMETA)},


    {XR_TYPE_ENVIRONMENT_DEPTH_HAND_REMOVAL_SET_INFO_META, sizeof(XrEnvironmentDepthHandRemovalSetInfoMETA)},


    {XR_TYPE_SYSTEM_ENVIRONMENT_DEPTH_PROPERTIES_META, sizeof(XrSystemEnvironmentDepthPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough

    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, sizeof(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, sizeof(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, sizeof(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, sizeof(XrCompositionLayerPassthroughHTC)},


    {XR_TYPE_PASSTHROUGH_CREATE_INFO_HTC, sizeof(XrPassthroughCreateInfoHTC)},


    {XR_TYPE_PASSTHROUGH_COLOR_HTC, sizeof(XrPassthroughColorHTC)},


    {XR_TYPE_PASSTHROUGH_MESH_TRANSFORM_INFO_HTC, sizeof(XrPassthroughMeshTransformInfoHTC)},


    {XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC, sizeof(XrCompositionLayerPassthroughHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation

    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, sizeof(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, sizeof(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, sizeof(XrFoveationCustomModeInfoHTC)},


    {XR_TYPE_FOVEATION_APPLY_INFO_HTC, sizeof(XrFoveationApplyInfoHTC)},


    {XR_TYPE_FOVEATION_DYNAMIC_MODE_INFO_HTC, sizeof(XrFoveationDynamicModeInfoHTC)},


    {XR_TYPE_FOVEATION_CUSTOM_MODE_INFO_HTC, sizeof(XrFoveationCustomModeInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor

    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, sizeof(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, sizeof(XrSpatialAnchorCreateInfoHTC)},


    {XR_TYPE_SYSTEM_ANCHOR_PROPERTIES_HTC, sizeof(XrSystemAnchorPropertiesHTC)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_HTC, sizeof(XrSpatialAnchorCreateInfoHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, sizeof(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, sizeof(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, sizeof(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, sizeof(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, sizeof(XrBodySkeletonHTC)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_HTC, sizeof(XrSystemBodyTrackingPropertiesHTC)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_HTC, sizeof(XrBodyTrackerCreateInfoHTC)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_HTC, sizeof(XrBodyJointsLocateInfoHTC)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_HTC, sizeof(XrBodyJointLocationsHTC)},


    {XR_TYPE_BODY_SKELETON_HTC, sizeof(XrBodySkeletonHTC)},

#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority

    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, sizeof(XrActiveActionSetPrioritiesEXT)},


    {XR_TYPE_ACTIVE_ACTION_SET_PRIORITIES_EXT, sizeof(XrActiveActionSetPrioritiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl

    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, sizeof(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, sizeof(XrForceFeedbackCurlApplyLocationsMNDX)},


    {XR_TYPE_SYSTEM_FORCE_FEEDBACK_CURL_PROPERTIES_MNDX, sizeof(XrSystemForceFeedbackCurlPropertiesMNDX)},


    {XR_TYPE_FORCE_FEEDBACK_CURL_APPLY_LOCATIONS_MNDX, sizeof(XrForceFeedbackCurlApplyLocationsMNDX)},

#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking

    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, sizeof(XrSystemBodyTrackingPropertiesBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, sizeof(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, sizeof(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, sizeof(XrBodyJointLocationsBD)},


    {XR_TYPE_BODY_TRACKER_CREATE_INFO_BD, sizeof(XrBodyTrackerCreateInfoBD)},


    {XR_TYPE_BODY_JOINTS_LOCATE_INFO_BD, sizeof(XrBodyJointsLocateInfoBD)},


    {XR_TYPE_BODY_JOINT_LOCATIONS_BD, sizeof(XrBodyJointLocationsBD)},


    {XR_TYPE_SYSTEM_BODY_TRACKING_PROPERTIES_BD, sizeof(XrSystemBodyTrackingPropertiesBD)},

#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing

    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, sizeof(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, sizeof(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, sizeof(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, sizeof(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, sizeof(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, sizeof(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, sizeof(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, sizeof(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, sizeof(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, sizeof(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, sizeof(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, sizeof(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, sizeof(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, sizeof(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, sizeof(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, sizeof(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, sizeof(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, sizeof(XrSpatialEntityStateBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, sizeof(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, sizeof(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, sizeof(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, sizeof(XrAnchorSpaceCreateInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SENSING_PROPERTIES_BD, sizeof(XrSystemSpatialSensingPropertiesBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_GET_INFO_BD, sizeof(XrSpatialEntityComponentGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_LOCATION_GET_INFO_BD, sizeof(XrSpatialEntityLocationGetInfoBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_LOCATION_BD, sizeof(XrSpatialEntityComponentDataLocationBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_SEMANTIC_BD, sizeof(XrSpatialEntityComponentDataSemanticBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_2D_BD, sizeof(XrSpatialEntityComponentDataBoundingBox2DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_POLYGON_BD, sizeof(XrSpatialEntityComponentDataPolygonBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_BOUNDING_BOX_3D_BD, sizeof(XrSpatialEntityComponentDataBoundingBox3DBD)},


    {XR_TYPE_SPATIAL_ENTITY_COMPONENT_DATA_TRIANGLE_MESH_BD, sizeof(XrSpatialEntityComponentDataTriangleMeshBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_BD, sizeof(XrSenseDataProviderCreateInfoBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_START_INFO_BD, sizeof(XrSenseDataProviderStartInfoBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_PROVIDER_STATE_CHANGED_BD, sizeof(XrEventDataSenseDataProviderStateChangedBD)},


    {XR_TYPE_EVENT_DATA_SENSE_DATA_UPDATED_BD, sizeof(XrEventDataSenseDataUpdatedBD)},


    {XR_TYPE_SENSE_DATA_QUERY_INFO_BD, sizeof(XrSenseDataQueryInfoBD)},


    {XR_TYPE_SENSE_DATA_QUERY_COMPLETION_BD, sizeof(XrSenseDataQueryCompletionBD)},


    {XR_TYPE_SENSE_DATA_FILTER_UUID_BD, sizeof(XrSenseDataFilterUuidBD)},


    {XR_TYPE_SENSE_DATA_FILTER_SEMANTIC_BD, sizeof(XrSenseDataFilterSemanticBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_GET_INFO_BD, sizeof(XrQueriedSenseDataGetInfoBD)},


    {XR_TYPE_QUERIED_SENSE_DATA_BD, sizeof(XrQueriedSenseDataBD)},


    {XR_TYPE_SPATIAL_ENTITY_STATE_BD, sizeof(XrSpatialEntityStateBD)},


    {XR_TYPE_SPATIAL_ENTITY_ANCHOR_CREATE_INFO_BD, sizeof(XrSpatialEntityAnchorCreateInfoBD)},


    {XR_TYPE_ANCHOR_SPACE_CREATE_INFO_BD, sizeof(XrAnchorSpaceCreateInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, sizeof(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, sizeof(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, sizeof(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, sizeof(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, sizeof(XrSpatialAnchorUnpersistInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_PROPERTIES_BD, sizeof(XrSystemSpatialAnchorPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_INFO_BD, sizeof(XrSpatialAnchorCreateInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_CREATE_COMPLETION_BD, sizeof(XrSpatialAnchorCreateCompletionBD)},


    {XR_TYPE_SPATIAL_ANCHOR_PERSIST_INFO_BD, sizeof(XrSpatialAnchorPersistInfoBD)},


    {XR_TYPE_SPATIAL_ANCHOR_UNPERSIST_INFO_BD, sizeof(XrSpatialAnchorUnpersistInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, sizeof(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, sizeof(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, sizeof(XrSharedSpatialAnchorDownloadInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_ANCHOR_SHARING_PROPERTIES_BD, sizeof(XrSystemSpatialAnchorSharingPropertiesBD)},


    {XR_TYPE_SPATIAL_ANCHOR_SHARE_INFO_BD, sizeof(XrSpatialAnchorShareInfoBD)},


    {XR_TYPE_SHARED_SPATIAL_ANCHOR_DOWNLOAD_INFO_BD, sizeof(XrSharedSpatialAnchorDownloadInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene

    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, sizeof(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, sizeof(XrSceneCaptureInfoBD)},


    {XR_TYPE_SYSTEM_SPATIAL_SCENE_PROPERTIES_BD, sizeof(XrSystemSpatialScenePropertiesBD)},


    {XR_TYPE_SCENE_CAPTURE_INFO_BD, sizeof(XrSceneCaptureInfoBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh

    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, sizeof(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, sizeof(XrSenseDataProviderCreateInfoSpatialMeshBD)},


    {XR_TYPE_SYSTEM_SPATIAL_MESH_PROPERTIES_BD, sizeof(XrSystemSpatialMeshPropertiesBD)},


    {XR_TYPE_SENSE_DATA_PROVIDER_CREATE_INFO_SPATIAL_MESH_BD, sizeof(XrSenseDataProviderCreateInfoSpatialMeshBD)},

#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress

    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, sizeof(XrFuturePollResultProgressBD)},


    {XR_TYPE_FUTURE_POLL_RESULT_PROGRESS_BD, sizeof(XrFuturePollResultProgressBD)},

#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source

    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, sizeof(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, sizeof(XrHandTrackingDataSourceStateEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_INFO_EXT, sizeof(XrHandTrackingDataSourceInfoEXT)},


    {XR_TYPE_HAND_TRACKING_DATA_SOURCE_STATE_EXT, sizeof(XrHandTrackingDataSourceStateEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection

    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, sizeof(XrSystemPlaneDetectionPropertiesEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, sizeof(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, sizeof(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, sizeof(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, sizeof(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, sizeof(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, sizeof(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_PLANE_DETECTOR_CREATE_INFO_EXT, sizeof(XrPlaneDetectorCreateInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_BEGIN_INFO_EXT, sizeof(XrPlaneDetectorBeginInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_GET_INFO_EXT, sizeof(XrPlaneDetectorGetInfoEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATIONS_EXT, sizeof(XrPlaneDetectorLocationsEXT)},


    {XR_TYPE_PLANE_DETECTOR_LOCATION_EXT, sizeof(XrPlaneDetectorLocationEXT)},


    {XR_TYPE_PLANE_DETECTOR_POLYGON_BUFFER_EXT, sizeof(XrPlaneDetectorPolygonBufferEXT)},


    {XR_TYPE_SYSTEM_PLANE_DETECTION_PROPERTIES_EXT, sizeof(XrSystemPlaneDetectionPropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future

    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, sizeof(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, sizeof(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, sizeof(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, sizeof(XrFuturePollResultEXT)},


    {XR_TYPE_FUTURE_CANCEL_INFO_EXT, sizeof(XrFutureCancelInfoEXT)},


    {XR_TYPE_FUTURE_POLL_INFO_EXT, sizeof(XrFuturePollInfoEXT)},


    {XR_TYPE_FUTURE_COMPLETION_EXT, sizeof(XrFutureCompletionEXT)},


    {XR_TYPE_FUTURE_POLL_RESULT_EXT, sizeof(XrFuturePollResultEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence

    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, sizeof(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, sizeof(XrSystemUserPresencePropertiesEXT)},


    {XR_TYPE_EVENT_DATA_USER_PRESENCE_CHANGED_EXT, sizeof(XrEventDataUserPresenceChangedEXT)},


    {XR_TYPE_SYSTEM_USER_PRESENCE_PROPERTIES_EXT, sizeof(XrSystemUserPresencePropertiesEXT)},

#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications

    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, sizeof(XrSystemNotificationsSetInfoML)},


    {XR_TYPE_SYSTEM_NOTIFICATIONS_SET_INFO_ML, sizeof(XrSystemNotificationsSetInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection

    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, sizeof(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, sizeof(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, sizeof(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, sizeof(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, sizeof(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, sizeof(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, sizeof(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, sizeof(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, sizeof(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, sizeof(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, sizeof(XrWorldMeshRequestCompletionInfoML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, sizeof(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_DETECTOR_CREATE_INFO_ML, sizeof(XrWorldMeshDetectorCreateInfoML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_INFO_ML, sizeof(XrWorldMeshStateRequestInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_STATE_ML, sizeof(XrWorldMeshBlockStateML)},


    {XR_TYPE_WORLD_MESH_STATE_REQUEST_COMPLETION_ML, sizeof(XrWorldMeshStateRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_BUFFER_RECOMMENDED_SIZE_INFO_ML, sizeof(XrWorldMeshBufferRecommendedSizeInfoML)},


    {XR_TYPE_WORLD_MESH_BUFFER_SIZE_ML, sizeof(XrWorldMeshBufferSizeML)},


    {XR_TYPE_WORLD_MESH_BUFFER_ML, sizeof(XrWorldMeshBufferML)},


    {XR_TYPE_WORLD_MESH_BLOCK_REQUEST_ML, sizeof(XrWorldMeshBlockRequestML)},


    {XR_TYPE_WORLD_MESH_GET_INFO_ML, sizeof(XrWorldMeshGetInfoML)},


    {XR_TYPE_WORLD_MESH_BLOCK_ML, sizeof(XrWorldMeshBlockML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_ML, sizeof(XrWorldMeshRequestCompletionML)},


    {XR_TYPE_WORLD_MESH_REQUEST_COMPLETION_INFO_ML, sizeof(XrWorldMeshRequestCompletionInfoML)},

#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression

    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, sizeof(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, sizeof(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, sizeof(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, sizeof(XrFacialExpressionBlendShapePropertiesML)},


    {XR_TYPE_SYSTEM_FACIAL_EXPRESSION_PROPERTIES_ML, sizeof(XrSystemFacialExpressionPropertiesML)},


    {XR_TYPE_FACIAL_EXPRESSION_CLIENT_CREATE_INFO_ML, sizeof(XrFacialExpressionClientCreateInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_GET_INFO_ML, sizeof(XrFacialExpressionBlendShapeGetInfoML)},


    {XR_TYPE_FACIAL_EXPRESSION_BLEND_SHAPE_PROPERTIES_ML, sizeof(XrFacialExpressionBlendShapePropertiesML)},

#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers

    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, sizeof(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, sizeof(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, sizeof(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},


    {XR_TYPE_SYSTEM_SIMULTANEOUS_HANDS_AND_CONTROLLERS_PROPERTIES_META, sizeof(XrSystemSimultaneousHandsAndControllersPropertiesMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_RESUME_INFO_META, sizeof(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA)},


    {XR_TYPE_SIMULTANEOUS_HANDS_AND_CONTROLLERS_TRACKING_PAUSE_INFO_META, sizeof(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA)},

#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery

    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, sizeof(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, sizeof(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, sizeof(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, sizeof(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, sizeof(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, sizeof(XrSystemColocationDiscoveryPropertiesMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_START_INFO_META, sizeof(XrColocationDiscoveryStartInfoMETA)},


    {XR_TYPE_COLOCATION_DISCOVERY_STOP_INFO_META, sizeof(XrColocationDiscoveryStopInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_START_INFO_META, sizeof(XrColocationAdvertisementStartInfoMETA)},


    {XR_TYPE_COLOCATION_ADVERTISEMENT_STOP_INFO_META, sizeof(XrColocationAdvertisementStopInfoMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataStartColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataStopColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_ADVERTISEMENT_COMPLETE_META, sizeof(XrEventDataColocationAdvertisementCompleteMETA)},


    {XR_TYPE_EVENT_DATA_START_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataStartColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_RESULT_META, sizeof(XrEventDataColocationDiscoveryResultMETA)},


    {XR_TYPE_EVENT_DATA_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataColocationDiscoveryCompleteMETA)},


    {XR_TYPE_EVENT_DATA_STOP_COLOCATION_DISCOVERY_COMPLETE_META, sizeof(XrEventDataStopColocationDiscoveryCompleteMETA)},


    {XR_TYPE_SYSTEM_COLOCATION_DISCOVERY_PROPERTIES_META, sizeof(XrSystemColocationDiscoveryPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, sizeof(XrSystemSpatialEntityGroupSharingPropertiesMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, sizeof(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, sizeof(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SHARE_SPACES_RECIPIENT_GROUPS_META, sizeof(XrShareSpacesRecipientGroupsMETA)},


    {XR_TYPE_SPACE_GROUP_UUID_FILTER_INFO_META, sizeof(XrSpaceGroupUuidFilterInfoMETA)},


    {XR_TYPE_SYSTEM_SPATIAL_ENTITY_GROUP_SHARING_PROPERTIES_META, sizeof(XrSystemSpatialEntityGroupSharingPropertiesMETA)},

#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing

    {XR_TYPE_ACTION_CREATE_INFO, sizeof(XrActionCreateInfo)},


    {XR_TYPE_ACTION_SET_CREATE_INFO, sizeof(XrActionSetCreateInfo)},


    {XR_TYPE_ACTION_SPACE_CREATE_INFO, sizeof(XrActionSpaceCreateInfo)},


    {XR_TYPE_ACTION_STATE_BOOLEAN, sizeof(XrActionStateBoolean)},


    {XR_TYPE_ACTION_STATE_FLOAT, sizeof(XrActionStateFloat)},


    {XR_TYPE_ACTION_STATE_GET_INFO, sizeof(XrActionStateGetInfo)},


    {XR_TYPE_ACTION_STATE_POSE, sizeof(XrActionStatePose)},


    {XR_TYPE_ACTION_STATE_VECTOR2F, sizeof(XrActionStateVector2f)},


    {XR_TYPE_ACTIONS_SYNC_INFO, sizeof(XrActionsSyncInfo)},


    {XR_TYPE_API_LAYER_PROPERTIES, sizeof(XrApiLayerProperties)},


    {XR_TYPE_BOUND_SOURCES_FOR_ACTION_ENUMERATE_INFO, sizeof(XrBoundSourcesForActionEnumerateInfo)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION, sizeof(XrCompositionLayerProjection)},


    {XR_TYPE_COMPOSITION_LAYER_PROJECTION_VIEW, sizeof(XrCompositionLayerProjectionView)},


    {XR_TYPE_COMPOSITION_LAYER_QUAD, sizeof(XrCompositionLayerQuad)},


    {XR_TYPE_EVENT_DATA_BUFFER, sizeof(XrEventDataBuffer)},


    {XR_TYPE_EVENT_DATA_EVENTS_LOST, sizeof(XrEventDataEventsLost)},


    {XR_TYPE_EVENT_DATA_INSTANCE_LOSS_PENDING, sizeof(XrEventDataInstanceLossPending)},


    {XR_TYPE_EVENT_DATA_INTERACTION_PROFILE_CHANGED, sizeof(XrEventDataInteractionProfileChanged)},


    {XR_TYPE_EVENT_DATA_REFERENCE_SPACE_CHANGE_PENDING, sizeof(XrEventDataReferenceSpaceChangePending)},


    {XR_TYPE_EVENT_DATA_SESSION_STATE_CHANGED, sizeof(XrEventDataSessionStateChanged)},


    {XR_TYPE_EXTENSION_PROPERTIES, sizeof(XrExtensionProperties)},


    {XR_TYPE_FRAME_BEGIN_INFO, sizeof(XrFrameBeginInfo)},


    {XR_TYPE_FRAME_END_INFO, sizeof(XrFrameEndInfo)},


    {XR_TYPE_FRAME_STATE, sizeof(XrFrameState)},


    {XR_TYPE_FRAME_WAIT_INFO, sizeof(XrFrameWaitInfo)},


    {XR_TYPE_HAPTIC_ACTION_INFO, sizeof(XrHapticActionInfo)},


    {XR_TYPE_HAPTIC_VIBRATION, sizeof(XrHapticVibration)},


    {XR_TYPE_INPUT_SOURCE_LOCALIZED_NAME_GET_INFO, sizeof(XrInputSourceLocalizedNameGetInfo)},


    {XR_TYPE_INSTANCE_CREATE_INFO, sizeof(XrInstanceCreateInfo)},


    {XR_TYPE_INSTANCE_PROPERTIES, sizeof(XrInstanceProperties)},


    {XR_TYPE_INTERACTION_PROFILE_STATE, sizeof(XrInteractionProfileState)},


    {XR_TYPE_INTERACTION_PROFILE_SUGGESTED_BINDING, sizeof(XrInteractionProfileSuggestedBinding)},


    {XR_TYPE_REFERENCE_SPACE_CREATE_INFO, sizeof(XrReferenceSpaceCreateInfo)},


    {XR_TYPE_SESSION_ACTION_SETS_ATTACH_INFO, sizeof(XrSessionActionSetsAttachInfo)},


    {XR_TYPE_SESSION_BEGIN_INFO, sizeof(XrSessionBeginInfo)},


    {XR_TYPE_SESSION_CREATE_INFO, sizeof(XrSessionCreateInfo)},


    {XR_TYPE_SPACE_LOCATION, sizeof(XrSpaceLocation)},


    {XR_TYPE_SPACE_LOCATIONS, sizeof(XrSpaceLocations)},


    {XR_TYPE_SPACE_VELOCITIES, sizeof(XrSpaceVelocities)},


    {XR_TYPE_SPACE_VELOCITY, sizeof(XrSpaceVelocity)},


    {XR_TYPE_SPACES_LOCATE_INFO, sizeof(XrSpacesLocateInfo)},


    {XR_TYPE_SWAPCHAIN_CREATE_INFO, sizeof(XrSwapchainCreateInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_ACQUIRE_INFO, sizeof(XrSwapchainImageAcquireInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_RELEASE_INFO, sizeof(XrSwapchainImageReleaseInfo)},


    {XR_TYPE_SWAPCHAIN_IMAGE_WAIT_INFO, sizeof(XrSwapchainImageWaitInfo)},


    {XR_TYPE_SYSTEM_GET_INFO, sizeof(XrSystemGetInfo)},


    {XR_TYPE_SYSTEM_PROPERTIES, sizeof(XrSystemProperties)},


    {XR_TYPE_VIEW, sizeof(XrView)},


    {XR_TYPE_VIEW_CONFIGURATION_PROPERTIES, sizeof(XrViewConfigurationProperties)},


    {XR_TYPE_VIEW_CONFIGURATION_VIEW, sizeof(XrViewConfigurationView)},


    {XR_TYPE_VIEW_LOCATE_INFO, sizeof(XrViewLocateInfo)},


    {XR_TYPE_VIEW_STATE, sizeof(XrViewState)},


};

static std::size_t size_lookup(XrStructureType struct_type) {
    assert(size_lookup_table.find(struct_type) != size_lookup_table.end());
    return size_lookup_table.at(struct_type);
}

// Generic deserializers
template <typename T>
static void deserialize(T* x, std::istream& in) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    in.read(reinterpret_cast<char*>(x), sizeof(T));
}

template <typename T>
static void deserialize_array(T* x, std::size_t len, std::istream& in) {
    for (std::size_t i = 0; i < len; i++) {
        deserialize(&x[i], in);
    }
}

// For weird const-correctness reasons, we need a const and non-const version
template <typename T>
static void deserialize_ptr(const T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

template <typename T>
static void deserialize_ptr(T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

static void deserialize_xr(const void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

static void deserialize_xr(void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

// Generic cleaners
template <typename T>
static void cleanup(const T* x) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    // no-op for primitive types
    (void)x;
}

template <typename T>
static void cleanup_array(const T* x, std::size_t len) {
    for (std::size_t i = 0; i < len; i++) {
        cleanup(&x[i]);
    }
}

template <typename T>
static void cleanup_ptr(const T* x, std::size_t len) {
    if (!x) {
        return; // do not clean up null pointer
    }
    cleanup_array(x, len);
    std::free(const_cast<T*>(x));
}

static void cleanup_xr(const void* untyped) {
    if (!untyped) {
        return; // do not clean up null pointer
    }
    const XrBaseOutStructure* x = static_cast<const XrBaseOutStructure*>(untyped);
    cleaner_lookup(x->type)(x);
    std::free(const_cast<void*>(untyped));
}

// Deserializers

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube


static void deserialize(XrCompositionLayerCubeKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->swapchain, in);

        

    deserialize(&s->imageArrayIndex, in);

        

    deserialize(&s->orientation, in);

}




static void deserialize(XrCompositionLayerCubeKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->swapchain, in);

        

    deserialize(&s->imageArrayIndex, in);

        

    deserialize(&s->orientation, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance


static void deserialize(XrInstanceCreateInfoAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->applicationVM, in);

        

    deserialize_ptr(&s->applicationActivity, in);

}




static void deserialize(XrInstanceCreateInfoAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->applicationVM, in);

        

    deserialize_ptr(&s->applicationActivity, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth


static void deserialize(XrCompositionLayerDepthInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrCompositionLayerDepthInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list


static void deserialize(XrVulkanSwapchainFormatListCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewFormatCount, in);

        

    deserialize_ptr(&s->viewFormats, in);

}




static void deserialize(XrVulkanSwapchainFormatListCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewFormatCount, in);

        

    deserialize_ptr(&s->viewFormats, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings


static void deserialize(XrEventDataPerfSettingsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->domain, in);

        

    deserialize(&s->subDomain, in);

        

    deserialize(&s->fromLevel, in);

        

    deserialize(&s->toLevel, in);

}




static void deserialize(XrEventDataPerfSettingsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->domain, in);

        

    deserialize(&s->subDomain, in);

        

    deserialize(&s->fromLevel, in);

        

    deserialize(&s->toLevel, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder


static void deserialize(XrCompositionLayerCylinderKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->centralAngle, in);

        

    deserialize(&s->aspectRatio, in);

}




static void deserialize(XrCompositionLayerCylinderKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->centralAngle, in);

        

    deserialize(&s->aspectRatio, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect


static void deserialize(XrCompositionLayerEquirectKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->scale, in);

        

    deserialize(&s->bias, in);

}




static void deserialize(XrCompositionLayerEquirectKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->scale, in);

        

    deserialize(&s->bias, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils


static void deserialize(XrDebugUtilsObjectNameInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->objectType, in);

        

    deserialize(&s->objectHandle, in);

        

    deserialize_ptr(&s->objectName, in);

}




static void deserialize(XrDebugUtilsLabelEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->labelName, in);

}




static void deserialize(XrDebugUtilsMessengerCallbackDataEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->messageId, in);

        

    deserialize_ptr(&s->functionName, in);

        

    deserialize_ptr(&s->message, in);

        

    deserialize(&s->objectCount, in);

        

    deserialize_ptr(&s->objects, in);

        

    deserialize(&s->sessionLabelCount, in);

        

    deserialize_ptr(&s->sessionLabels, in);

}




static void deserialize(XrDebugUtilsMessengerCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->messageSeverities, in);

        

    deserialize(&s->messageTypes, in);

        

    deserialize(&s->userCallback, in);

        

    deserialize_ptr(&s->userData, in);

}




static void deserialize(XrDebugUtilsObjectNameInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->objectType, in);

        

    deserialize(&s->objectHandle, in);

        

    deserialize_ptr(&s->objectName, in);

}




static void deserialize(XrDebugUtilsMessengerCallbackDataEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->messageId, in);

        

    deserialize_ptr(&s->functionName, in);

        

    deserialize_ptr(&s->message, in);

        

    deserialize(&s->objectCount, in);

        

    deserialize_ptr(&s->objects, in);

        

    deserialize(&s->sessionLabelCount, in);

        

    deserialize_ptr(&s->sessionLabels, in);

}




static void deserialize(XrDebugUtilsMessengerCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->messageSeverities, in);

        

    deserialize(&s->messageTypes, in);

        

    deserialize(&s->userCallback, in);

        

    deserialize_ptr(&s->userData, in);

}




static void deserialize(XrDebugUtilsLabelEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->labelName, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable


static void deserialize(XrGraphicsBindingOpenGLWin32KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->hDC, in);

        

    deserialize(&s->hGLRC, in);

}




static void deserialize(XrGraphicsBindingOpenGLXlibKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->xDisplay, in);

        

    deserialize(&s->visualid, in);

        

    deserialize(&s->glxFBConfig, in);

        

    deserialize(&s->glxDrawable, in);

        

    deserialize(&s->glxContext, in);

}




static void deserialize(XrGraphicsBindingOpenGLXcbKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->connection, in);

        

    deserialize(&s->screenNumber, in);

        

    deserialize(&s->fbconfigid, in);

        

    deserialize(&s->visualid, in);

        

    deserialize(&s->glxDrawable, in);

        

    deserialize(&s->glxContext, in);

}




static void deserialize(XrGraphicsBindingOpenGLWaylandKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->display, in);

}




static void deserialize(XrSwapchainImageOpenGLKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsOpenGLKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}




static void deserialize(XrGraphicsBindingOpenGLWin32KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->hDC, in);

        

    deserialize(&s->hGLRC, in);

}




static void deserialize(XrGraphicsBindingOpenGLXlibKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->xDisplay, in);

        

    deserialize(&s->visualid, in);

        

    deserialize(&s->glxFBConfig, in);

        

    deserialize(&s->glxDrawable, in);

        

    deserialize(&s->glxContext, in);

}




static void deserialize(XrGraphicsBindingOpenGLXcbKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->connection, in);

        

    deserialize(&s->screenNumber, in);

        

    deserialize(&s->fbconfigid, in);

        

    deserialize(&s->visualid, in);

        

    deserialize(&s->glxDrawable, in);

        

    deserialize(&s->glxContext, in);

}




static void deserialize(XrGraphicsBindingOpenGLWaylandKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->display, in);

}




static void deserialize(XrSwapchainImageOpenGLKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsOpenGLKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable


static void deserialize(XrGraphicsBindingOpenGLESAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->display, in);

        

    deserialize(&s->config, in);

        

    deserialize(&s->context, in);

}




static void deserialize(XrSwapchainImageOpenGLESKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsOpenGLESKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}




static void deserialize(XrGraphicsBindingOpenGLESAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->display, in);

        

    deserialize(&s->config, in);

        

    deserialize(&s->context, in);

}




static void deserialize(XrSwapchainImageOpenGLESKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsOpenGLESKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable


static void deserialize(XrGraphicsBindingVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->instance, in);

        

    deserialize(&s->physicalDevice, in);

        

    deserialize(&s->device, in);

        

    deserialize(&s->queueFamilyIndex, in);

        

    deserialize(&s->queueIndex, in);

}




static void deserialize(XrSwapchainImageVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}




static void deserialize(XrGraphicsBindingVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->instance, in);

        

    deserialize(&s->physicalDevice, in);

        

    deserialize(&s->device, in);

        

    deserialize(&s->queueFamilyIndex, in);

        

    deserialize(&s->queueIndex, in);

}




static void deserialize(XrSwapchainImageVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

}




static void deserialize(XrGraphicsRequirementsVulkanKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minApiVersionSupported, in);

        

    deserialize(&s->maxApiVersionSupported, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable


static void deserialize(XrGraphicsBindingD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->device, in);

}




static void deserialize(XrSwapchainImageD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->adapterLuid, in);

        

    deserialize(&s->minFeatureLevel, in);

}




static void deserialize(XrGraphicsBindingD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->device, in);

}




static void deserialize(XrSwapchainImageD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsD3D11KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->adapterLuid, in);

        

    deserialize(&s->minFeatureLevel, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable


static void deserialize(XrGraphicsBindingD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->device, in);

        

    deserialize_ptr(&s->queue, in);

}




static void deserialize(XrSwapchainImageD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->adapterLuid, in);

        

    deserialize(&s->minFeatureLevel, in);

}




static void deserialize(XrGraphicsBindingD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->device, in);

        

    deserialize_ptr(&s->queue, in);

}




static void deserialize(XrSwapchainImageD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsD3D12KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->adapterLuid, in);

        

    deserialize(&s->minFeatureLevel, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable


static void deserialize(XrGraphicsBindingMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->commandQueue, in);

}




static void deserialize(XrSwapchainImageMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->metalDevice, in);

}




static void deserialize(XrGraphicsBindingMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->commandQueue, in);

}




static void deserialize(XrSwapchainImageMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->texture, in);

}




static void deserialize(XrGraphicsRequirementsMetalKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->metalDevice, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction


static void deserialize(XrSystemEyeGazeInteractionPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEyeGazeInteraction, in);

}




static void deserialize(XrEyeGazeSampleTimeEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemEyeGazeInteractionPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEyeGazeInteraction, in);

}




static void deserialize(XrEyeGazeSampleTimeEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask


static void deserialize(XrVisibilityMaskKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrEventDataVisibilityMaskChangedKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->viewIndex, in);

}




static void deserialize(XrVisibilityMaskKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrEventDataVisibilityMaskChangedKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->viewIndex, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay


static void deserialize(XrSessionCreateInfoOverlayEXTX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->sessionLayersPlacement, in);

}




static void deserialize(XrEventDataMainSessionVisibilityChangedEXTX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->visible, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSessionCreateInfoOverlayEXTX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->sessionLayersPlacement, in);

}




static void deserialize(XrEventDataMainSessionVisibilityChangedEXTX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->visible, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias


static void deserialize(XrCompositionLayerColorScaleBiasKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorScale, in);

        

    deserialize(&s->colorBias, in);

}




static void deserialize(XrCompositionLayerColorScaleBiasKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorScale, in);

        

    deserialize(&s->colorBias, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor


static void deserialize(XrSpatialAnchorCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpatialAnchorSpaceCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchor, in);

        

    deserialize(&s->poseInAnchorSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout


static void deserialize(XrCompositionLayerImageLayoutFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrCompositionLayerImageLayoutFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend


static void deserialize(XrCompositionLayerAlphaBlendFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->srcFactorColor, in);

        

    deserialize(&s->dstFactorColor, in);

        

    deserialize(&s->srcFactorAlpha, in);

        

    deserialize(&s->dstFactorAlpha, in);

}




static void deserialize(XrCompositionLayerAlphaBlendFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->srcFactorColor, in);

        

    deserialize(&s->dstFactorColor, in);

        

    deserialize(&s->srcFactorAlpha, in);

        

    deserialize(&s->dstFactorAlpha, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range


static void deserialize(XrViewConfigurationDepthRangeEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedNearZ, in);

        

    deserialize(&s->minNearZ, in);

        

    deserialize(&s->recommendedFarZ, in);

        

    deserialize(&s->maxFarZ, in);

}




static void deserialize(XrViewConfigurationDepthRangeEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedNearZ, in);

        

    deserialize(&s->minNearZ, in);

        

    deserialize(&s->recommendedFarZ, in);

        

    deserialize(&s->maxFarZ, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable


static void deserialize(XrGraphicsBindingEGLMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->getProcAddress, in);

        

    deserialize(&s->display, in);

        

    deserialize(&s->config, in);

        

    deserialize(&s->context, in);

}




static void deserialize(XrGraphicsBindingEGLMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->getProcAddress, in);

        

    deserialize(&s->display, in);

        

    deserialize(&s->config, in);

        

    deserialize(&s->context, in);

}


#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge


static void deserialize(XrSpatialGraphNodeSpaceCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeType, in);

        

    deserialize_array(s->nodeId, XR_GUID_SIZE_MSFT, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialGraphNodeBindingPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->nodeId, XR_GUID_SIZE_MSFT, in);

        

    deserialize(&s->poseInNodeSpace, in);

}




static void deserialize(XrSpatialGraphNodeSpaceCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeType, in);

        

    deserialize_array(s->nodeId, XR_GUID_SIZE_MSFT, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialGraphNodeBindingPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->nodeId, XR_GUID_SIZE_MSFT, in);

        

    deserialize(&s->poseInNodeSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking


static void deserialize(XrSystemHandTrackingPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsHandTracking, in);

}




static void deserialize(XrHandTrackerCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->hand, in);

        

    deserialize(&s->handJointSet, in);

}




static void deserialize(XrHandJointsLocateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrHandJointLocationEXT* s, std::istream& in) {
        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

}




static void deserialize(XrHandJointVelocityEXT* s, std::istream& in) {
        

    deserialize(&s->velocityFlags, in);

        

    deserialize(&s->linearVelocity, in);

        

    deserialize(&s->angularVelocity, in);

}




static void deserialize(XrHandJointLocationsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

}




static void deserialize(XrHandJointVelocitiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointVelocities, in);

}




static void deserialize(XrSystemHandTrackingPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsHandTracking, in);

}




static void deserialize(XrHandTrackerCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->hand, in);

        

    deserialize(&s->handJointSet, in);

}




static void deserialize(XrHandJointsLocateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrHandJointLocationsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

}




static void deserialize(XrHandJointVelocitiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointVelocities, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh


static void deserialize(XrSystemHandTrackingMeshPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsHandTrackingMesh, in);

        

    deserialize(&s->maxHandMeshIndexCount, in);

        

    deserialize(&s->maxHandMeshVertexCount, in);

}




static void deserialize(XrHandMeshSpaceCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handPoseType, in);

        

    deserialize(&s->poseInHandMeshSpace, in);

}




static void deserialize(XrHandMeshUpdateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->handPoseType, in);

}




static void deserialize(XrHandMeshMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->indexBufferChanged, in);

        

    deserialize(&s->vertexBufferChanged, in);

        

    deserialize(&s->indexBuffer, in);

        

    deserialize(&s->vertexBuffer, in);

}




static void deserialize(XrHandMeshIndexBufferMSFT* s, std::istream& in) {
        

    deserialize(&s->indexBufferKey, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrHandMeshVertexBufferMSFT* s, std::istream& in) {
        

    deserialize(&s->vertexUpdateTime, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrHandMeshVertexMSFT* s, std::istream& in) {
        

    deserialize(&s->position, in);

        

    deserialize(&s->normal, in);

}




static void deserialize(XrHandPoseTypeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handPoseType, in);

}




static void deserialize(XrSystemHandTrackingMeshPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsHandTrackingMesh, in);

        

    deserialize(&s->maxHandMeshIndexCount, in);

        

    deserialize(&s->maxHandMeshVertexCount, in);

}




static void deserialize(XrHandMeshSpaceCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handPoseType, in);

        

    deserialize(&s->poseInHandMeshSpace, in);

}




static void deserialize(XrHandMeshUpdateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->handPoseType, in);

}




static void deserialize(XrHandMeshMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->indexBufferChanged, in);

        

    deserialize(&s->vertexBufferChanged, in);

        

    deserialize(&s->indexBuffer, in);

        

    deserialize(&s->vertexBuffer, in);

}




static void deserialize(XrHandPoseTypeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handPoseType, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration


static void deserialize(XrSecondaryViewConfigurationSessionBeginInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->enabledViewConfigurationTypes, in);

}




static void deserialize(XrSecondaryViewConfigurationStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->active, in);

}




static void deserialize(XrSecondaryViewConfigurationFrameStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->viewConfigurationStates, in);

}




static void deserialize(XrSecondaryViewConfigurationFrameEndInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->viewConfigurationLayersInfo, in);

}




static void deserialize(XrSecondaryViewConfigurationLayerInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->environmentBlendMode, in);

        

    deserialize(&s->layerCount, in);

        

    #error "auto-generator doesn't support double pointers (s->layers)"
    None
}




static void deserialize(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

}




static void deserialize(XrSecondaryViewConfigurationSessionBeginInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->enabledViewConfigurationTypes, in);

}




static void deserialize(XrSecondaryViewConfigurationStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->active, in);

}




static void deserialize(XrSecondaryViewConfigurationFrameStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->viewConfigurationStates, in);

}




static void deserialize(XrSecondaryViewConfigurationFrameEndInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationCount, in);

        

    deserialize_ptr(&s->viewConfigurationLayersInfo, in);

}




static void deserialize(XrSecondaryViewConfigurationLayerInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->environmentBlendMode, in);

        

    deserialize(&s->layerCount, in);

        

    #error "auto-generator doesn't support double pointers (s->layers)"
    None
}




static void deserialize(XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model


static void deserialize(XrControllerModelKeyStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->modelKey, in);

}




static void deserialize(XrControllerModelNodePropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT, in);

        

    deserialize_array(s->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT, in);

}




static void deserialize(XrControllerModelPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeCapacityInput, in);

        

    deserialize(&s->nodeCountOutput, in);

        

    deserialize_ptr(&s->nodeProperties, in);

}




static void deserialize(XrControllerModelNodeStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodePose, in);

}




static void deserialize(XrControllerModelStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeCapacityInput, in);

        

    deserialize(&s->nodeCountOutput, in);

        

    deserialize_ptr(&s->nodeStates, in);

}




static void deserialize(XrControllerModelKeyStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->modelKey, in);

}




static void deserialize(XrControllerModelNodePropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT, in);

        

    deserialize_array(s->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT, in);

}




static void deserialize(XrControllerModelPropertiesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeCapacityInput, in);

        

    deserialize(&s->nodeCountOutput, in);

        

    deserialize_ptr(&s->nodeProperties, in);

}




static void deserialize(XrControllerModelNodeStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodePose, in);

}




static void deserialize(XrControllerModelStateMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->nodeCapacityInput, in);

        

    deserialize(&s->nodeCountOutput, in);

        

    deserialize_ptr(&s->nodeStates, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov


static void deserialize(XrViewConfigurationViewFovEPIC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedFov, in);

        

    deserialize(&s->maxMutableFov, in);

}




static void deserialize(XrViewConfigurationViewFovEPIC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedFov, in);

        

    deserialize(&s->maxMutableFov, in);

}


#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment


static void deserialize(XrHolographicWindowAttachmentMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->holographicSpace, in);

        

    deserialize_ptr(&s->coreWindow, in);

}




static void deserialize(XrHolographicWindowAttachmentMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->holographicSpace, in);

        

    deserialize_ptr(&s->coreWindow, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection


static void deserialize(XrCompositionLayerReprojectionInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->reprojectionMode, in);

}




static void deserialize(XrCompositionLayerReprojectionPlaneOverrideMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->position, in);

        

    deserialize(&s->normal, in);

        

    deserialize(&s->velocity, in);

}




static void deserialize(XrCompositionLayerReprojectionInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->reprojectionMode, in);

}




static void deserialize(XrCompositionLayerReprojectionPlaneOverrideMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->position, in);

        

    deserialize(&s->normal, in);

        

    deserialize(&s->velocity, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create


static void deserialize(XrAndroidSurfaceSwapchainCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}




static void deserialize(XrAndroidSurfaceSwapchainCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state


static void deserialize(XrSwapchainStateBaseHeaderFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content


static void deserialize(XrCompositionLayerSecureContentFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrCompositionLayerSecureContentFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking


static void deserialize(XrBodyJointLocationFB* s, std::istream& in) {
        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSystemBodyTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}




static void deserialize(XrBodyTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bodyJointSet, in);

}




static void deserialize(XrBodySkeletonJointFB* s, std::istream& in) {
        

    deserialize(&s->joint, in);

        

    deserialize(&s->parentJoint, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrBodySkeletonFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->joints, in);

}




static void deserialize(XrBodyJointsLocateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyJointLocationsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->confidence, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

        

    deserialize(&s->skeletonChangedCount, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bodyJointSet, in);

}




static void deserialize(XrBodyJointsLocateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemBodyTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}




static void deserialize(XrBodyJointLocationsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->confidence, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

        

    deserialize(&s->skeletonChangedCount, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodySkeletonFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->joints, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding


static void deserialize(XrInteractionProfileDpadBindingEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->binding, in);

        

    deserialize(&s->actionSet, in);

        

    deserialize(&s->forceThreshold, in);

        

    deserialize(&s->forceThresholdReleased, in);

        

    deserialize(&s->centerRegion, in);

        

    deserialize(&s->wedgeAngle, in);

        

    deserialize(&s->isSticky, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrInteractionProfileDpadBindingEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->binding, in);

        

    deserialize(&s->actionSet, in);

        

    deserialize(&s->forceThreshold, in);

        

    deserialize(&s->forceThresholdReleased, in);

        

    deserialize(&s->centerRegion, in);

        

    deserialize(&s->wedgeAngle, in);

        

    deserialize(&s->isSticky, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold


static void deserialize(XrInteractionProfileAnalogThresholdVALVE* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

        

    deserialize(&s->binding, in);

        

    deserialize(&s->onThreshold, in);

        

    deserialize(&s->offThreshold, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrInteractionProfileAnalogThresholdVALVE* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

        

    deserialize(&s->binding, in);

        

    deserialize(&s->onThreshold, in);

        

    deserialize(&s->offThreshold, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range


static void deserialize(XrHandJointsMotionRangeInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handJointsMotionRange, in);

}




static void deserialize(XrHandJointsMotionRangeInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->handJointsMotionRange, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init


static void deserialize(XrLoaderInitInfoBaseHeaderKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android


static void deserialize(XrLoaderInitInfoAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->applicationVM, in);

        

    deserialize_ptr(&s->applicationContext, in);

}




static void deserialize(XrLoaderInitInfoAndroidKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->applicationVM, in);

        

    deserialize_ptr(&s->applicationContext, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2


static void deserialize(XrVulkanInstanceCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->pfnGetInstanceProcAddr, in);

        

    deserialize_ptr(&s->vulkanCreateInfo, in);

        

    deserialize_ptr(&s->vulkanAllocator, in);

}




static void deserialize(XrVulkanDeviceCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->pfnGetInstanceProcAddr, in);

        

    deserialize(&s->vulkanPhysicalDevice, in);

        

    deserialize_ptr(&s->vulkanCreateInfo, in);

        

    deserialize_ptr(&s->vulkanAllocator, in);

}




static void deserialize(XrVulkanGraphicsDeviceGetInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->vulkanInstance, in);

}




static void deserialize(XrVulkanInstanceCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->pfnGetInstanceProcAddr, in);

        

    deserialize_ptr(&s->vulkanCreateInfo, in);

        

    deserialize_ptr(&s->vulkanAllocator, in);

}




static void deserialize(XrVulkanDeviceCreateInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->pfnGetInstanceProcAddr, in);

        

    deserialize(&s->vulkanPhysicalDevice, in);

        

    deserialize_ptr(&s->vulkanCreateInfo, in);

        

    deserialize_ptr(&s->vulkanAllocator, in);

}




static void deserialize(XrVulkanGraphicsDeviceGetInfoKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->vulkanInstance, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2


static void deserialize(XrCompositionLayerEquirect2KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->centralHorizontalAngle, in);

        

    deserialize(&s->upperVerticalAngle, in);

        

    deserialize(&s->lowerVerticalAngle, in);

}




static void deserialize(XrCompositionLayerEquirect2KHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->centralHorizontalAngle, in);

        

    deserialize(&s->upperVerticalAngle, in);

        

    deserialize(&s->lowerVerticalAngle, in);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding


static void deserialize(XrUuidMSFT* s, std::istream& in) {
        

    deserialize_array(s->bytes, 16, in);

}




static void deserialize(XrSceneObserverCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSceneCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrNewSceneComputeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedFeatureCount, in);

        

    deserialize_ptr(&s->requestedFeatures, in);

        

    deserialize(&s->consistency, in);

        

    deserialize(&s->bounds, in);

}




static void deserialize(XrVisualMeshComputeLodInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->lod, in);

}




static void deserialize(XrSceneSphereBoundMSFT* s, std::istream& in) {
        

    deserialize(&s->center, in);

        

    deserialize(&s->radius, in);

}




static void deserialize(XrSceneOrientedBoxBoundMSFT* s, std::istream& in) {
        

    deserialize(&s->pose, in);

        

    deserialize(&s->extents, in);

}




static void deserialize(XrSceneFrustumBoundMSFT* s, std::istream& in) {
        

    deserialize(&s->pose, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->farDistance, in);

}




static void deserialize(XrSceneBoundsMSFT* s, std::istream& in) {
        

    deserialize(&s->space, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->sphereCount, in);

        

    deserialize_ptr(&s->spheres, in);

        

    deserialize(&s->boxCount, in);

        

    deserialize_ptr(&s->boxes, in);

        

    deserialize(&s->frustumCount, in);

        

    deserialize_ptr(&s->frustums, in);

}




static void deserialize(XrSceneComponentMSFT* s, std::istream& in) {
        

    deserialize(&s->componentType, in);

        

    deserialize(&s->id, in);

        

    deserialize(&s->parentId, in);

        

    deserialize(&s->updateTime, in);

}




static void deserialize(XrSceneComponentsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentCapacityInput, in);

        

    deserialize(&s->componentCountOutput, in);

        

    deserialize_ptr(&s->components, in);

}




static void deserialize(XrSceneComponentsGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrSceneComponentLocationMSFT* s, std::istream& in) {
        

    deserialize(&s->flags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSceneComponentLocationsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationCount, in);

        

    deserialize_ptr(&s->locations, in);

}




static void deserialize(XrSceneComponentsLocateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->componentIdCount, in);

        

    deserialize_ptr(&s->componentIds, in);

}




static void deserialize(XrSceneObjectMSFT* s, std::istream& in) {
        

    deserialize(&s->objectType, in);

}




static void deserialize(XrSceneObjectsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneObjectCount, in);

        

    deserialize_ptr(&s->sceneObjects, in);

}




static void deserialize(XrSceneComponentParentFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->parentId, in);

}




static void deserialize(XrSceneObjectTypesFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->objectTypeCount, in);

        

    deserialize_ptr(&s->objectTypes, in);

}




static void deserialize(XrScenePlaneMSFT* s, std::istream& in) {
        

    deserialize(&s->alignment, in);

        

    deserialize(&s->size, in);

        

    deserialize(&s->meshBufferId, in);

        

    deserialize(&s->supportsIndicesUint16, in);

}




static void deserialize(XrScenePlanesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->scenePlaneCount, in);

        

    deserialize_ptr(&s->scenePlanes, in);

}




static void deserialize(XrScenePlaneAlignmentFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->alignmentCount, in);

        

    deserialize_ptr(&s->alignments, in);

}




static void deserialize(XrSceneMeshMSFT* s, std::istream& in) {
        

    deserialize(&s->meshBufferId, in);

        

    deserialize(&s->supportsIndicesUint16, in);

}




static void deserialize(XrSceneMeshesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneMeshCount, in);

        

    deserialize_ptr(&s->sceneMeshes, in);

}




static void deserialize(XrSceneMeshBuffersGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->meshBufferId, in);

}




static void deserialize(XrSceneMeshBuffersMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSceneMeshVertexBufferMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSceneMeshIndicesUint32MSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSceneMeshIndicesUint16MSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSceneObserverCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSceneCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrNewSceneComputeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedFeatureCount, in);

        

    deserialize_ptr(&s->requestedFeatures, in);

        

    deserialize(&s->consistency, in);

        

    deserialize(&s->bounds, in);

}




static void deserialize(XrVisualMeshComputeLodInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->lod, in);

}




static void deserialize(XrSceneComponentsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentCapacityInput, in);

        

    deserialize(&s->componentCountOutput, in);

        

    deserialize_ptr(&s->components, in);

}




static void deserialize(XrSceneComponentsGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrSceneComponentLocationsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationCount, in);

        

    deserialize_ptr(&s->locations, in);

}




static void deserialize(XrSceneComponentsLocateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->componentIdCount, in);

        

    deserialize_ptr(&s->componentIds, in);

}




static void deserialize(XrSceneObjectsMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneObjectCount, in);

        

    deserialize_ptr(&s->sceneObjects, in);

}




static void deserialize(XrSceneComponentParentFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->parentId, in);

}




static void deserialize(XrSceneObjectTypesFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->objectTypeCount, in);

        

    deserialize_ptr(&s->objectTypes, in);

}




static void deserialize(XrScenePlanesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->scenePlaneCount, in);

        

    deserialize_ptr(&s->scenePlanes, in);

}




static void deserialize(XrScenePlaneAlignmentFilterInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->alignmentCount, in);

        

    deserialize_ptr(&s->alignments, in);

}




static void deserialize(XrSceneMeshesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneMeshCount, in);

        

    deserialize_ptr(&s->sceneMeshes, in);

}




static void deserialize(XrSceneMeshBuffersGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->meshBufferId, in);

}




static void deserialize(XrSceneMeshBuffersMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSceneMeshVertexBufferMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSceneMeshIndicesUint32MSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSceneMeshIndicesUint16MSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization


static void deserialize(XrSerializedSceneFragmentDataGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneFragmentId, in);

}




static void deserialize(XrDeserializeSceneFragmentMSFT* s, std::istream& in) {
        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrSceneDeserializeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fragmentCount, in);

        

    deserialize_ptr(&s->fragments, in);

}




static void deserialize(XrSerializedSceneFragmentDataGetInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneFragmentId, in);

}




static void deserialize(XrSceneDeserializeInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fragmentCount, in);

        

    deserialize_ptr(&s->fragments, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate


static void deserialize(XrEventDataDisplayRefreshRateChangedFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fromDisplayRefreshRate, in);

        

    deserialize(&s->toDisplayRefreshRate, in);

}




static void deserialize(XrEventDataDisplayRefreshRateChangedFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fromDisplayRefreshRate, in);

        

    deserialize(&s->toDisplayRefreshRate, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction


static void deserialize(XrViveTrackerPathsHTCX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->persistentPath, in);

        

    deserialize(&s->rolePath, in);

}




static void deserialize(XrEventDataViveTrackerConnectedHTCX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->paths, in);

}




static void deserialize(XrViveTrackerPathsHTCX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->persistentPath, in);

        

    deserialize(&s->rolePath, in);

}




static void deserialize(XrEventDataViveTrackerConnectedHTCX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->paths, in);

}


#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking


static void deserialize(XrSystemFacialTrackingPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportEyeFacialTracking, in);

        

    deserialize(&s->supportLipFacialTracking, in);

}




static void deserialize(XrFacialExpressionsHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->sampleTime, in);

        

    deserialize(&s->expressionCount, in);

        

    deserialize_ptr(&s->expressionWeightings, in);

}




static void deserialize(XrFacialTrackerCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->facialTrackingType, in);

}




static void deserialize(XrSystemFacialTrackingPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportEyeFacialTracking, in);

        

    deserialize(&s->supportLipFacialTracking, in);

}




static void deserialize(XrFacialTrackerCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->facialTrackingType, in);

}




static void deserialize(XrFacialExpressionsHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->sampleTime, in);

        

    deserialize(&s->expressionCount, in);

        

    deserialize_ptr(&s->expressionWeightings, in);

}


#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space


static void deserialize(XrSystemColorSpacePropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorSpace, in);

}




static void deserialize(XrSystemColorSpacePropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh


static void deserialize(XrVector4sFB* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

        

    deserialize(&s->z, in);

        

    deserialize(&s->w, in);

}




static void deserialize(XrHandTrackingMeshFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCapacityInput, in);

        

    deserialize(&s->jointCountOutput, in);

        

    deserialize_ptr(&s->jointBindPoses, in);

        

    deserialize_ptr(&s->jointRadii, in);

        

    deserialize_ptr(&s->jointParents, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertexPositions, in);

        

    deserialize_ptr(&s->vertexNormals, in);

        

    deserialize_ptr(&s->vertexUVs, in);

        

    deserialize_ptr(&s->vertexBlendIndices, in);

        

    deserialize_ptr(&s->vertexBlendWeights, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrHandTrackingScaleFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sensorOutput, in);

        

    deserialize(&s->currentOutput, in);

        

    deserialize(&s->overrideHandScale, in);

        

    deserialize(&s->overrideValueInput, in);

}




static void deserialize(XrHandTrackingMeshFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCapacityInput, in);

        

    deserialize(&s->jointCountOutput, in);

        

    deserialize_ptr(&s->jointBindPoses, in);

        

    deserialize_ptr(&s->jointRadii, in);

        

    deserialize_ptr(&s->jointParents, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertexPositions, in);

        

    deserialize_ptr(&s->vertexNormals, in);

        

    deserialize_ptr(&s->vertexUVs, in);

        

    deserialize_ptr(&s->vertexBlendIndices, in);

        

    deserialize_ptr(&s->vertexBlendWeights, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrHandTrackingScaleFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sensorOutput, in);

        

    deserialize(&s->currentOutput, in);

        

    deserialize(&s->overrideHandScale, in);

        

    deserialize(&s->overrideValueInput, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim


static void deserialize(XrHandTrackingAimStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->aimPose, in);

        

    deserialize(&s->pinchStrengthIndex, in);

        

    deserialize(&s->pinchStrengthMiddle, in);

        

    deserialize(&s->pinchStrengthRing, in);

        

    deserialize(&s->pinchStrengthLittle, in);

}




static void deserialize(XrHandTrackingAimStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->aimPose, in);

        

    deserialize(&s->pinchStrengthIndex, in);

        

    deserialize(&s->pinchStrengthMiddle, in);

        

    deserialize(&s->pinchStrengthRing, in);

        

    deserialize(&s->pinchStrengthLittle, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules


static void deserialize(XrHandCapsuleFB* s, std::istream& in) {
        

    deserialize_array(s->points, XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB, in);

        

    deserialize(&s->radius, in);

        

    deserialize(&s->joint, in);

}




static void deserialize(XrHandTrackingCapsulesStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->capsules, XR_HAND_TRACKING_CAPSULE_COUNT_FB, in);

}




static void deserialize(XrHandTrackingCapsulesStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->capsules, XR_HAND_TRACKING_CAPSULE_COUNT_FB, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity


static void deserialize(XrSystemSpatialEntityPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntity, in);

}




static void deserialize(XrSpatialAnchorCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpaceComponentStatusSetInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

        

    deserialize(&s->enabled, in);

        

    deserialize(&s->timeout, in);

}




static void deserialize(XrSpaceComponentStatusFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

        

    deserialize(&s->changePending, in);

}




static void deserialize(XrEventDataSpatialAnchorCreateCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrEventDataSpaceSetStatusCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->componentType, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrSystemSpatialEntityPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntity, in);

}




static void deserialize(XrSpatialAnchorCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpaceComponentStatusSetInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

        

    deserialize(&s->enabled, in);

        

    deserialize(&s->timeout, in);

}




static void deserialize(XrSpaceComponentStatusFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

        

    deserialize(&s->changePending, in);

}




static void deserialize(XrEventDataSpatialAnchorCreateCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrEventDataSpaceSetStatusCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->componentType, in);

        

    deserialize(&s->enabled, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation


static void deserialize(XrFoveationProfileCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSwapchainCreateInfoFoveationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSwapchainStateFoveationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->profile, in);

}




static void deserialize(XrFoveationProfileCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSwapchainCreateInfoFoveationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSwapchainStateFoveationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->profile, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration


static void deserialize(XrFoveationLevelProfileCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->level, in);

        

    deserialize(&s->verticalOffset, in);

        

    deserialize(&s->dynamic, in);

}




static void deserialize(XrFoveationLevelProfileCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->level, in);

        

    deserialize(&s->verticalOffset, in);

        

    deserialize(&s->dynamic, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking


static void deserialize(XrSystemKeyboardTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsKeyboardTracking, in);

}




static void deserialize(XrKeyboardTrackingDescriptionFB* s, std::istream& in) {
        

    deserialize(&s->trackedKeyboardId, in);

        

    deserialize(&s->size, in);

        

    deserialize(&s->flags, in);

        

    deserialize_array(s->name, XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB, in);

}




static void deserialize(XrKeyboardSpaceCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->trackedKeyboardId, in);

}




static void deserialize(XrKeyboardTrackingQueryFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrKeyboardSpaceCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->trackedKeyboardId, in);

}




static void deserialize(XrKeyboardTrackingQueryFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSystemKeyboardTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsKeyboardTracking, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh


static void deserialize(XrTriangleMeshCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->windingOrder, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertexBuffer, in);

        

    deserialize(&s->triangleCount, in);

        

    deserialize_ptr(&s->indexBuffer, in);

}




static void deserialize(XrTriangleMeshCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->windingOrder, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertexBuffer, in);

        

    deserialize(&s->triangleCount, in);

        

    deserialize_ptr(&s->indexBuffer, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough


static void deserialize(XrSystemPassthroughPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsPassthrough, in);

}




static void deserialize(XrSystemPassthroughProperties2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->capabilities, in);

}




static void deserialize(XrPassthroughCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrPassthroughLayerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->passthrough, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->purpose, in);

}




static void deserialize(XrCompositionLayerPassthroughFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->layerHandle, in);

}




static void deserialize(XrGeometryInstanceCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layer, in);

        

    deserialize(&s->mesh, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrGeometryInstanceTransformFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrPassthroughStyleFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->textureOpacityFactor, in);

        

    deserialize(&s->edgeColor, in);

}




static void deserialize(XrPassthroughColorMapMonoToRgbaFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB, in);

}




static void deserialize(XrPassthroughColorMapMonoToMonoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB, in);

}




static void deserialize(XrPassthroughBrightnessContrastSaturationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->brightness, in);

        

    deserialize(&s->contrast, in);

        

    deserialize(&s->saturation, in);

}




static void deserialize(XrEventDataPassthroughStateChangedFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSystemPassthroughPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsPassthrough, in);

}




static void deserialize(XrPassthroughCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrPassthroughLayerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->passthrough, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->purpose, in);

}




static void deserialize(XrCompositionLayerPassthroughFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->layerHandle, in);

}




static void deserialize(XrGeometryInstanceCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layer, in);

        

    deserialize(&s->mesh, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrGeometryInstanceTransformFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrSystemPassthroughProperties2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->capabilities, in);

}




static void deserialize(XrPassthroughStyleFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->textureOpacityFactor, in);

        

    deserialize(&s->edgeColor, in);

}




static void deserialize(XrPassthroughColorMapMonoToRgbaFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB, in);

}




static void deserialize(XrPassthroughColorMapMonoToMonoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB, in);

}




static void deserialize(XrPassthroughBrightnessContrastSaturationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->brightness, in);

        

    deserialize(&s->contrast, in);

        

    deserialize(&s->saturation, in);

}




static void deserialize(XrEventDataPassthroughStateChangedFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model


static void deserialize(XrRenderModelPathInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->path, in);

}




static void deserialize(XrRenderModelPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vendorId, in);

        

    deserialize_array(s->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB, in);

        

    deserialize(&s->modelKey, in);

        

    deserialize(&s->modelVersion, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrRenderModelBufferFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrRenderModelLoadInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->modelKey, in);

}




static void deserialize(XrSystemRenderModelPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsRenderModelLoading, in);

}




static void deserialize(XrRenderModelCapabilitiesRequestFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrRenderModelPathInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->path, in);

}




static void deserialize(XrRenderModelPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vendorId, in);

        

    deserialize_array(s->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB, in);

        

    deserialize(&s->modelKey, in);

        

    deserialize(&s->modelVersion, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrRenderModelBufferFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrRenderModelLoadInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->modelKey, in);

}




static void deserialize(XrSystemRenderModelPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsRenderModelLoading, in);

}




static void deserialize(XrRenderModelCapabilitiesRequestFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification


static void deserialize(XrBindingModificationsKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bindingModificationCount, in);

        

    #error "auto-generator doesn't support double pointers (s->bindingModifications)"
    None
}




static void deserialize(XrBindingModificationBaseHeaderKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrBindingModificationsKHR* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bindingModificationCount, in);

        

    #error "auto-generator doesn't support double pointers (s->bindingModifications)"
    None
}


#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering


static void deserialize(XrViewLocateFoveatedRenderingVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->foveatedRenderingActive, in);

}




static void deserialize(XrFoveatedViewConfigurationViewVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->foveatedRenderingActive, in);

}




static void deserialize(XrSystemFoveatedRenderingPropertiesVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFoveatedRendering, in);

}




static void deserialize(XrViewLocateFoveatedRenderingVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->foveatedRenderingActive, in);

}




static void deserialize(XrFoveatedViewConfigurationViewVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->foveatedRenderingActive, in);

}




static void deserialize(XrSystemFoveatedRenderingPropertiesVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFoveatedRendering, in);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test


static void deserialize(XrCompositionLayerDepthTestVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->depthTestRangeNearZ, in);

        

    deserialize(&s->depthTestRangeFarZ, in);

}




static void deserialize(XrCompositionLayerDepthTestVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->depthTestRangeNearZ, in);

        

    deserialize(&s->depthTestRangeFarZ, in);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking


static void deserialize(XrSystemMarkerTrackingPropertiesVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsMarkerTracking, in);

}




static void deserialize(XrEventDataMarkerTrackingUpdateVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerId, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->isPredicted, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrMarkerSpaceCreateInfoVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerId, in);

        

    deserialize(&s->poseInMarkerSpace, in);

}




static void deserialize(XrSystemMarkerTrackingPropertiesVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsMarkerTracking, in);

}




static void deserialize(XrEventDataMarkerTrackingUpdateVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerId, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->isPredicted, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrMarkerSpaceCreateInfoVARJO* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerId, in);

        

    deserialize(&s->poseInMarkerSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info


static void deserialize(XrFrameEndInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->focusDistance, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrFrameEndInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->focusDistance, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer


static void deserialize(XrGlobalDimmerFrameEndInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->dimmerValue, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrGlobalDimmerFrameEndInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->dimmerValue, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat


static void deserialize(XrCoordinateSpaceCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->cfuid, in);

        

    deserialize(&s->poseInCoordinateSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding


static void deserialize(XrSystemMarkerUnderstandingPropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsMarkerUnderstanding, in);

}




static void deserialize(XrMarkerDetectorCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->profile, in);

        

    deserialize(&s->markerType, in);

}




static void deserialize(XrMarkerDetectorArucoInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->arucoDict, in);

}




static void deserialize(XrMarkerDetectorSizeInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerLength, in);

}




static void deserialize(XrMarkerDetectorAprilTagInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->aprilTagDict, in);

}




static void deserialize(XrMarkerDetectorCustomProfileInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fpsHint, in);

        

    deserialize(&s->resolutionHint, in);

        

    deserialize(&s->cameraHint, in);

        

    deserialize(&s->cornerRefineMethod, in);

        

    deserialize(&s->useEdgeRefinement, in);

        

    deserialize(&s->fullAnalysisIntervalHint, in);

}




static void deserialize(XrMarkerDetectorSnapshotInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrMarkerDetectorStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->state, in);

}




static void deserialize(XrMarkerSpaceCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerDetector, in);

        

    deserialize(&s->marker, in);

        

    deserialize(&s->poseInMarkerSpace, in);

}




static void deserialize(XrSystemMarkerUnderstandingPropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsMarkerUnderstanding, in);

}




static void deserialize(XrMarkerDetectorCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->profile, in);

        

    deserialize(&s->markerType, in);

}




static void deserialize(XrMarkerDetectorArucoInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->arucoDict, in);

}




static void deserialize(XrMarkerDetectorSizeInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerLength, in);

}




static void deserialize(XrMarkerDetectorAprilTagInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->aprilTagDict, in);

}




static void deserialize(XrMarkerDetectorCustomProfileInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fpsHint, in);

        

    deserialize(&s->resolutionHint, in);

        

    deserialize(&s->cameraHint, in);

        

    deserialize(&s->cornerRefineMethod, in);

        

    deserialize(&s->useEdgeRefinement, in);

        

    deserialize(&s->fullAnalysisIntervalHint, in);

}




static void deserialize(XrMarkerDetectorSnapshotInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrMarkerDetectorStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->state, in);

}




static void deserialize(XrMarkerSpaceCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerDetector, in);

        

    deserialize(&s->marker, in);

        

    deserialize(&s->poseInMarkerSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map


static void deserialize(XrLocalizationMapML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML, in);

        

    deserialize(&s->mapUuid, in);

        

    deserialize(&s->mapType, in);

}




static void deserialize(XrEventDataLocalizationChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->state, in);

        

    deserialize(&s->map, in);

        

    deserialize(&s->confidence, in);

        

    deserialize(&s->errorFlags, in);

}




static void deserialize(XrLocalizationMapQueryInfoBaseHeaderML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrMapLocalizationRequestInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->mapUuid, in);

}




static void deserialize(XrLocalizationMapImportInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->size, in);

        

    deserialize_ptr(&s->data, in);

}




static void deserialize(XrLocalizationEnableEventsInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrLocalizationMapML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML, in);

        

    deserialize(&s->mapUuid, in);

        

    deserialize(&s->mapType, in);

}




static void deserialize(XrEventDataLocalizationChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->state, in);

        

    deserialize(&s->map, in);

        

    deserialize(&s->confidence, in);

        

    deserialize(&s->errorFlags, in);

}




static void deserialize(XrMapLocalizationRequestInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->mapUuid, in);

}




static void deserialize(XrLocalizationMapImportInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->size, in);

        

    deserialize_ptr(&s->data, in);

}




static void deserialize(XrLocalizationEnableEventsInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors


static void deserialize(XrSpatialAnchorsCreateInfoBaseHeaderML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialAnchorsCreateInfoFromPoseML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->poseInBaseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrCreateSpatialAnchorsCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

}




static void deserialize(XrSpatialAnchorStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->confidence, in);

}




static void deserialize(XrSpatialAnchorsCreateInfoFromPoseML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->poseInBaseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrCreateSpatialAnchorsCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

}




static void deserialize(XrSpatialAnchorStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->confidence, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage


static void deserialize(XrSpatialAnchorsCreateStorageInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialAnchorsQueryInfoBaseHeaderML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialAnchorsQueryInfoRadiusML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->center, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->radius, in);

}




static void deserialize(XrSpatialAnchorsQueryCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->uuidCapacityInput, in);

        

    deserialize(&s->uuidCountOutput, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsCreateInfoFromUuidsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->storage, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsPublishInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchorCount, in);

        

    deserialize_ptr(&s->anchors, in);

        

    deserialize(&s->expiration, in);

}




static void deserialize(XrSpatialAnchorsPublishCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsDeleteInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsDeleteCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

        

    deserialize(&s->expiration, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrSpatialAnchorsPublishCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpatialAnchorsDeleteCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpatialAnchorCompletionResultML* s, std::istream& in) {
        

    deserialize(&s->uuid, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSpatialAnchorsCreateStorageInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialAnchorsQueryInfoRadiusML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->center, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->radius, in);

}




static void deserialize(XrSpatialAnchorsQueryCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->uuidCapacityInput, in);

        

    deserialize(&s->uuidCountOutput, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsCreateInfoFromUuidsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->storage, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsPublishInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchorCount, in);

        

    deserialize_ptr(&s->anchors, in);

        

    deserialize(&s->expiration, in);

}




static void deserialize(XrSpatialAnchorsPublishCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsDeleteInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpatialAnchorsDeleteCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

        

    deserialize(&s->expiration, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrSpatialAnchorsPublishCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpatialAnchorsDeleteCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCount, in);

        

    deserialize_ptr(&s->results, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration


static void deserialize(XrEventDataHeadsetFitChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrEventDataEyeCalibrationChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

}




static void deserialize(XrUserCalibrationEnableEventsInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrEventDataHeadsetFitChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrEventDataEyeCalibrationChangedML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->status, in);

}




static void deserialize(XrUserCalibrationEnableEventsInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence


static void deserialize(XrSpatialAnchorPersistenceNameMSFT* s, std::istream& in) {
        

    deserialize_array(s->name, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT, in);

}




static void deserialize(XrSpatialAnchorPersistenceInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spatialAnchorPersistenceName, in);

        

    deserialize(&s->spatialAnchor, in);

}




static void deserialize(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spatialAnchorStore, in);

        

    deserialize(&s->spatialAnchorPersistenceName, in);

}




static void deserialize(XrSpatialAnchorPersistenceInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spatialAnchorPersistenceName, in);

        

    deserialize(&s->spatialAnchor, in);

}




static void deserialize(XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spatialAnchorStore, in);

        

    deserialize(&s->spatialAnchorPersistenceName, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker


static void deserialize(XrSceneMarkerMSFT* s, std::istream& in) {
        

    deserialize(&s->markerType, in);

        

    deserialize(&s->lastSeenTime, in);

        

    deserialize(&s->center, in);

        

    deserialize(&s->size, in);

}




static void deserialize(XrSceneMarkersMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneMarkerCapacityInput, in);

        

    deserialize_ptr(&s->sceneMarkers, in);

}




static void deserialize(XrSceneMarkerTypeFilterMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerTypeCount, in);

        

    deserialize_ptr(&s->markerTypes, in);

}




static void deserialize(XrSceneMarkerQRCodeMSFT* s, std::istream& in) {
        

    deserialize(&s->symbolType, in);

        

    deserialize(&s->version, in);

}




static void deserialize(XrSceneMarkerQRCodesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->qrCodeCapacityInput, in);

        

    deserialize_ptr(&s->qrCodes, in);

}




static void deserialize(XrSceneMarkersMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sceneMarkerCapacityInput, in);

        

    deserialize_ptr(&s->sceneMarkers, in);

}




static void deserialize(XrSceneMarkerTypeFilterMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->markerTypeCount, in);

        

    deserialize_ptr(&s->markerTypes, in);

}




static void deserialize(XrSceneMarkerQRCodesMSFT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->qrCodeCapacityInput, in);

        

    deserialize_ptr(&s->qrCodes, in);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query


static void deserialize(XrSpaceQueryInfoBaseHeaderFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceFilterInfoBaseHeaderFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceQueryInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->queryAction, in);

        

    deserialize(&s->maxResultCount, in);

        

    deserialize(&s->timeout, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceStorageLocationFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrSpaceUuidFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpaceComponentFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrSpaceQueryResultFB* s, std::istream& in) {
        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSpaceQueryResultsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCapacityInput, in);

        

    deserialize(&s->resultCountOutput, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrEventDataSpaceQueryResultsAvailableFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

}




static void deserialize(XrEventDataSpaceQueryCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSpaceQueryInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->queryAction, in);

        

    deserialize(&s->maxResultCount, in);

        

    deserialize(&s->timeout, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceQueryResultsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->resultCapacityInput, in);

        

    deserialize(&s->resultCountOutput, in);

        

    deserialize_ptr(&s->results, in);

}




static void deserialize(XrSpaceStorageLocationFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrSpaceUuidFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpaceComponentFilterInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrEventDataSpaceQueryResultsAvailableFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

}




static void deserialize(XrEventDataSpaceQueryCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage


static void deserialize(XrSpaceSaveInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->persistenceMode, in);

}




static void deserialize(XrSpaceEraseInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceSaveCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceEraseCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrSpaceSaveInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->persistenceMode, in);

}




static void deserialize(XrSpaceEraseInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceSaveCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceEraseCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->location, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan


static void deserialize(XrSwapchainImageFoveationVulkanFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrSwapchainImageFoveationVulkanFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->image, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface


static void deserialize(XrSwapchainStateAndroidSurfaceDimensionsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrSwapchainStateAndroidSurfaceDimensionsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es


static void deserialize(XrSwapchainStateSamplerOpenGLESFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minFilter, in);

        

    deserialize(&s->magFilter, in);

        

    deserialize(&s->wrapModeS, in);

        

    deserialize(&s->wrapModeT, in);

        

    deserialize(&s->swizzleRed, in);

        

    deserialize(&s->swizzleGreen, in);

        

    deserialize(&s->swizzleBlue, in);

        

    deserialize(&s->swizzleAlpha, in);

        

    deserialize(&s->maxAnisotropy, in);

        

    deserialize(&s->borderColor, in);

}




static void deserialize(XrSwapchainStateSamplerOpenGLESFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minFilter, in);

        

    deserialize(&s->magFilter, in);

        

    deserialize(&s->wrapModeS, in);

        

    deserialize(&s->wrapModeT, in);

        

    deserialize(&s->swizzleRed, in);

        

    deserialize(&s->swizzleGreen, in);

        

    deserialize(&s->swizzleBlue, in);

        

    deserialize(&s->swizzleAlpha, in);

        

    deserialize(&s->maxAnisotropy, in);

        

    deserialize(&s->borderColor, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan


static void deserialize(XrSwapchainStateSamplerVulkanFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minFilter, in);

        

    deserialize(&s->magFilter, in);

        

    deserialize(&s->mipmapMode, in);

        

    deserialize(&s->wrapModeS, in);

        

    deserialize(&s->wrapModeT, in);

        

    deserialize(&s->swizzleRed, in);

        

    deserialize(&s->swizzleGreen, in);

        

    deserialize(&s->swizzleBlue, in);

        

    deserialize(&s->swizzleAlpha, in);

        

    deserialize(&s->maxAnisotropy, in);

        

    deserialize(&s->borderColor, in);

}




static void deserialize(XrSwapchainStateSamplerVulkanFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->minFilter, in);

        

    deserialize(&s->magFilter, in);

        

    deserialize(&s->mipmapMode, in);

        

    deserialize(&s->wrapModeS, in);

        

    deserialize(&s->wrapModeT, in);

        

    deserialize(&s->swizzleRed, in);

        

    deserialize(&s->swizzleGreen, in);

        

    deserialize(&s->swizzleBlue, in);

        

    deserialize(&s->swizzleAlpha, in);

        

    deserialize(&s->maxAnisotropy, in);

        

    deserialize(&s->borderColor, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing


static void deserialize(XrSpaceShareInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize(&s->userCount, in);

        

    deserialize_ptr(&s->users, in);

}




static void deserialize(XrEventDataSpaceShareCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSpaceShareInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize(&s->userCount, in);

        

    deserialize_ptr(&s->users, in);

}




static void deserialize(XrEventDataSpaceShareCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp


static void deserialize(XrCompositionLayerSpaceWarpInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->motionVectorSubImage, in);

        

    deserialize(&s->appSpaceDeltaPose, in);

        

    deserialize(&s->depthSubImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrSystemSpaceWarpPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedMotionVectorImageRectWidth, in);

        

    deserialize(&s->recommendedMotionVectorImageRectHeight, in);

}




static void deserialize(XrCompositionLayerSpaceWarpInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->motionVectorSubImage, in);

        

    deserialize(&s->appSpaceDeltaPose, in);

        

    deserialize(&s->depthSubImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrSystemSpaceWarpPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedMotionVectorImageRectWidth, in);

        

    deserialize(&s->recommendedMotionVectorImageRectHeight, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope


static void deserialize(XrHapticAmplitudeEnvelopeVibrationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->duration, in);

        

    deserialize(&s->amplitudeCount, in);

        

    deserialize_ptr(&s->amplitudes, in);

}




static void deserialize(XrHapticAmplitudeEnvelopeVibrationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->duration, in);

        

    deserialize(&s->amplitudeCount, in);

        

    deserialize_ptr(&s->amplitudes, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene


static void deserialize(XrOffset3DfFB* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

        

    deserialize(&s->z, in);

}




static void deserialize(XrRect3DfFB* s, std::istream& in) {
        

    deserialize(&s->offset, in);

        

    deserialize(&s->extent, in);

}




static void deserialize(XrSemanticLabelsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrRoomLayoutFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->floorUuid, in);

        

    deserialize(&s->ceilingUuid, in);

        

    deserialize(&s->wallUuidCapacityInput, in);

        

    deserialize(&s->wallUuidCountOutput, in);

        

    deserialize_ptr(&s->wallUuids, in);

}




static void deserialize(XrBoundary2DFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSemanticLabelsSupportInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize_ptr(&s->recognizedLabels, in);

}




static void deserialize(XrSemanticLabelsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrRoomLayoutFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->floorUuid, in);

        

    deserialize(&s->ceilingUuid, in);

        

    deserialize(&s->wallUuidCapacityInput, in);

        

    deserialize(&s->wallUuidCountOutput, in);

        

    deserialize_ptr(&s->wallUuids, in);

}




static void deserialize(XrBoundary2DFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSemanticLabelsSupportInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize_ptr(&s->recognizedLabels, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control


static void deserialize(XrDigitalLensControlALMALENCE* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture


static void deserialize(XrEventDataSceneCaptureCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSceneCaptureRequestInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestByteCount, in);

        

    deserialize_ptr(&s->request, in);

}




static void deserialize(XrEventDataSceneCaptureCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSceneCaptureRequestInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestByteCount, in);

        

    deserialize_ptr(&s->request, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container


static void deserialize(XrSpaceContainerFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCapacityInput, in);

        

    deserialize(&s->uuidCountOutput, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSpaceContainerFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCapacityInput, in);

        

    deserialize(&s->uuidCountOutput, in);

        

    deserialize_ptr(&s->uuids, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked


static void deserialize(XrFoveationEyeTrackedProfileCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrFoveationEyeTrackedStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->foveationCenter, XR_FOVEATION_CENTER_SIZE_META, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSystemFoveationEyeTrackedPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFoveationEyeTracked, in);

}




static void deserialize(XrFoveationEyeTrackedProfileCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrFoveationEyeTrackedStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->foveationCenter, XR_FOVEATION_CENTER_SIZE_META, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrSystemFoveationEyeTrackedPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFoveationEyeTracked, in);

}


#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking


static void deserialize(XrSystemFaceTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFaceTracking, in);

}




static void deserialize(XrFaceTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->faceExpressionSet, in);

}




static void deserialize(XrFaceExpressionInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrFaceExpressionStatusFB* s, std::istream& in) {
        

    deserialize(&s->isValid, in);

        

    deserialize(&s->isEyeFollowingBlendshapesValid, in);

}




static void deserialize(XrFaceExpressionWeightsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->weightCount, in);

        

    deserialize_ptr(&s->weights, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidences, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemFaceTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFaceTracking, in);

}




static void deserialize(XrFaceTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->faceExpressionSet, in);

}




static void deserialize(XrFaceExpressionInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrFaceExpressionWeightsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->weightCount, in);

        

    deserialize_ptr(&s->weights, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidences, in);

        

    deserialize(&s->status, in);

        

    deserialize(&s->time, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social


static void deserialize(XrEyeGazeFB* s, std::istream& in) {
        

    deserialize(&s->isValid, in);

        

    deserialize(&s->gazePose, in);

        

    deserialize(&s->gazeConfidence, in);

}




static void deserialize(XrEyeTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEyeGazesInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemEyeTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEyeTracking, in);

}




static void deserialize(XrEyeGazesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->gaze, XR_EYE_POSITION_COUNT_FB, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrEyeTrackerCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEyeGazesInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrEyeGazesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->gaze, XR_EYE_POSITION_COUNT_FB, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemEyeTrackingPropertiesFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEyeTracking, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands


static void deserialize(XrPassthroughKeyboardHandsIntensityFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->leftHandIntensity, in);

        

    deserialize(&s->rightHandIntensity, in);

}




static void deserialize(XrPassthroughKeyboardHandsIntensityFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->leftHandIntensity, in);

        

    deserialize(&s->rightHandIntensity, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings


static void deserialize(XrCompositionLayerSettingsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

}




static void deserialize(XrCompositionLayerSettingsFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm


static void deserialize(XrHapticPcmVibrationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

        

    deserialize(&s->sampleRate, in);

        

    deserialize(&s->append, in);

        

    deserialize_ptr(&s->samplesConsumed, in);

}




static void deserialize(XrDevicePcmSampleRateStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sampleRate, in);

}




static void deserialize(XrHapticPcmVibrationFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

        

    deserialize(&s->sampleRate, in);

        

    deserialize(&s->append, in);

        

    deserialize_ptr(&s->samplesConsumed, in);

}




static void deserialize(XrDevicePcmSampleRateStateFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sampleRate, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis


static void deserialize(XrFrameSynthesisInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->motionVectorSubImage, in);

        

    deserialize(&s->motionVectorScale, in);

        

    deserialize(&s->motionVectorOffset, in);

        

    deserialize(&s->appSpaceDeltaPose, in);

        

    deserialize(&s->depthSubImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrFrameSynthesisConfigViewEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedMotionVectorImageRectWidth, in);

        

    deserialize(&s->recommendedMotionVectorImageRectHeight, in);

}




static void deserialize(XrFrameSynthesisInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->motionVectorSubImage, in);

        

    deserialize(&s->motionVectorScale, in);

        

    deserialize(&s->motionVectorOffset, in);

        

    deserialize(&s->appSpaceDeltaPose, in);

        

    deserialize(&s->depthSubImage, in);

        

    deserialize(&s->minDepth, in);

        

    deserialize(&s->maxDepth, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrFrameSynthesisConfigViewEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedMotionVectorImageRectWidth, in);

        

    deserialize(&s->recommendedMotionVectorImageRectHeight, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test


static void deserialize(XrCompositionLayerDepthTestFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->depthMask, in);

        

    deserialize(&s->compareOp, in);

}




static void deserialize(XrCompositionLayerDepthTestFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->depthMask, in);

        

    deserialize(&s->compareOp, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming


static void deserialize(XrLocalDimmingFrameEndInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->localDimmingMode, in);

}




static void deserialize(XrLocalDimmingFrameEndInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->localDimmingMode, in);

}


#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences


static void deserialize(XrPassthroughPreferencesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrPassthroughPreferencesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard


static void deserialize(XrSystemVirtualKeyboardPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsVirtualKeyboard, in);

}




static void deserialize(XrVirtualKeyboardCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrVirtualKeyboardSpaceCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationType, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

}




static void deserialize(XrVirtualKeyboardLocationInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationType, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrVirtualKeyboardModelVisibilitySetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->visible, in);

}




static void deserialize(XrVirtualKeyboardAnimationStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->animationIndex, in);

        

    deserialize(&s->fraction, in);

}




static void deserialize(XrVirtualKeyboardModelAnimationStatesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->stateCapacityInput, in);

        

    deserialize(&s->stateCountOutput, in);

        

    deserialize_ptr(&s->states, in);

}




static void deserialize(XrVirtualKeyboardTextureDataMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->textureWidth, in);

        

    deserialize(&s->textureHeight, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrVirtualKeyboardInputInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->inputSource, in);

        

    deserialize(&s->inputSpace, in);

        

    deserialize(&s->inputPoseInSpace, in);

        

    deserialize(&s->inputState, in);

}




static void deserialize(XrVirtualKeyboardTextContextChangeInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->textContext, in);

}




static void deserialize(XrEventDataVirtualKeyboardCommitTextMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

        

    deserialize_array(s->text, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META, in);

}




static void deserialize(XrEventDataVirtualKeyboardBackspaceMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardEnterMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardShownMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardHiddenMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrSystemVirtualKeyboardPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsVirtualKeyboard, in);

}




static void deserialize(XrVirtualKeyboardCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrVirtualKeyboardSpaceCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationType, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

}




static void deserialize(XrVirtualKeyboardLocationInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationType, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrVirtualKeyboardModelVisibilitySetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->visible, in);

}




static void deserialize(XrVirtualKeyboardAnimationStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->animationIndex, in);

        

    deserialize(&s->fraction, in);

}




static void deserialize(XrVirtualKeyboardModelAnimationStatesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->stateCapacityInput, in);

        

    deserialize(&s->stateCountOutput, in);

        

    deserialize_ptr(&s->states, in);

}




static void deserialize(XrVirtualKeyboardTextureDataMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->textureWidth, in);

        

    deserialize(&s->textureHeight, in);

        

    deserialize(&s->bufferCapacityInput, in);

        

    deserialize(&s->bufferCountOutput, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrVirtualKeyboardInputInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->inputSource, in);

        

    deserialize(&s->inputSpace, in);

        

    deserialize(&s->inputPoseInSpace, in);

        

    deserialize(&s->inputState, in);

}




static void deserialize(XrVirtualKeyboardTextContextChangeInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_ptr(&s->textContext, in);

}




static void deserialize(XrEventDataVirtualKeyboardCommitTextMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

        

    deserialize_array(s->text, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META, in);

}




static void deserialize(XrEventDataVirtualKeyboardBackspaceMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardEnterMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardShownMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}




static void deserialize(XrEventDataVirtualKeyboardHiddenMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->keyboard, in);

}


#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera


static void deserialize(XrExternalCameraIntrinsicsOCULUS* s, std::istream& in) {
        

    deserialize(&s->lastChangeTime, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->virtualNearPlaneDistance, in);

        

    deserialize(&s->virtualFarPlaneDistance, in);

        

    deserialize(&s->imageSensorPixelResolution, in);

}




static void deserialize(XrExternalCameraExtrinsicsOCULUS* s, std::istream& in) {
        

    deserialize(&s->lastChangeTime, in);

        

    deserialize(&s->cameraStatusFlags, in);

        

    deserialize(&s->attachedToDevice, in);

        

    deserialize(&s->relativePose, in);

}




static void deserialize(XrExternalCameraOCULUS* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->name, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS, in);

        

    deserialize(&s->intrinsics, in);

        

    deserialize(&s->extrinsics, in);

}




static void deserialize(XrExternalCameraOCULUS* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->name, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS, in);

        

    deserialize(&s->intrinsics, in);

        

    deserialize(&s->extrinsics, in);

}


#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info


static void deserialize(XrVulkanSwapchainCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->additionalCreateFlags, in);

        

    deserialize(&s->additionalUsageFlags, in);

}




static void deserialize(XrVulkanSwapchainCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->additionalCreateFlags, in);

        

    deserialize(&s->additionalUsageFlags, in);

}


#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics


static void deserialize(XrPerformanceMetricsStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrPerformanceMetricsCounterMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->counterFlags, in);

        

    deserialize(&s->counterUnit, in);

        

    deserialize(&s->uintValue, in);

        

    deserialize(&s->floatValue, in);

}




static void deserialize(XrPerformanceMetricsStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrPerformanceMetricsCounterMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->counterFlags, in);

        

    deserialize(&s->counterUnit, in);

        

    deserialize(&s->uintValue, in);

        

    deserialize(&s->floatValue, in);

}


#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch


static void deserialize(XrSpaceListSaveInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceListSaveCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSpaceListSaveInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrEventDataSpaceListSaveCompleteFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user


static void deserialize(XrSpaceUserCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->userId, in);

}




static void deserialize(XrSpaceUserCreateInfoFB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->userId, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id


static void deserialize(XrSystemHeadsetIdPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->id, in);

}




static void deserialize(XrSystemHeadsetIdPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->id, in);

}


#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution


static void deserialize(XrRecommendedLayerResolutionMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedImageDimensions, in);

        

    deserialize(&s->isValid, in);

}




static void deserialize(XrRecommendedLayerResolutionGetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->predictedDisplayTime, in);

}




static void deserialize(XrRecommendedLayerResolutionMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedImageDimensions, in);

        

    deserialize(&s->isValid, in);

}




static void deserialize(XrRecommendedLayerResolutionGetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->predictedDisplayTime, in);

}


#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut


static void deserialize(XrPassthroughColorLutDataMETA* s, std::istream& in) {
        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrPassthroughColorLutCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->channels, in);

        

    deserialize(&s->resolution, in);

        

    deserialize(&s->data, in);

}




static void deserialize(XrPassthroughColorLutUpdateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->data, in);

}




static void deserialize(XrPassthroughColorMapLutMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorLut, in);

        

    deserialize(&s->weight, in);

}




static void deserialize(XrPassthroughColorMapInterpolatedLutMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sourceColorLut, in);

        

    deserialize(&s->targetColorLut, in);

        

    deserialize(&s->weight, in);

}




static void deserialize(XrSystemPassthroughColorLutPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->maxColorLutResolution, in);

}




static void deserialize(XrSystemPassthroughColorLutPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->maxColorLutResolution, in);

}




static void deserialize(XrPassthroughColorLutCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->channels, in);

        

    deserialize(&s->resolution, in);

        

    deserialize(&s->data, in);

}




static void deserialize(XrPassthroughColorLutUpdateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->data, in);

}




static void deserialize(XrPassthroughColorMapLutMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->colorLut, in);

        

    deserialize(&s->weight, in);

}




static void deserialize(XrPassthroughColorMapInterpolatedLutMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sourceColorLut, in);

        

    deserialize(&s->targetColorLut, in);

        

    deserialize(&s->weight, in);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh


static void deserialize(XrSpaceTriangleMeshGetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceTriangleMeshMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSpaceTriangleMeshGetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpaceTriangleMeshMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body


static void deserialize(XrSystemPropertiesBodyTrackingFullBodyMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFullBodyTracking, in);

}




static void deserialize(XrSystemPropertiesBodyTrackingFullBodyMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFullBodyTracking, in);

}


#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event


static void deserialize(XrEventDataPassthroughLayerResumedMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layer, in);

}




static void deserialize(XrEventDataPassthroughLayerResumedMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layer, in);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2


static void deserialize(XrSystemFaceTrackingProperties2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsVisualFaceTracking, in);

        

    deserialize(&s->supportsAudioFaceTracking, in);

}




static void deserialize(XrFaceTrackerCreateInfo2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->faceExpressionSet, in);

        

    deserialize(&s->requestedDataSourceCount, in);

        

    deserialize_ptr(&s->requestedDataSources, in);

}




static void deserialize(XrFaceExpressionInfo2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrFaceExpressionWeights2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->weightCount, in);

        

    deserialize_ptr(&s->weights, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidences, in);

        

    deserialize(&s->isValid, in);

        

    deserialize(&s->isEyeFollowingBlendshapesValid, in);

        

    deserialize(&s->dataSource, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemFaceTrackingProperties2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsVisualFaceTracking, in);

        

    deserialize(&s->supportsAudioFaceTracking, in);

}




static void deserialize(XrFaceTrackerCreateInfo2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->faceExpressionSet, in);

        

    deserialize(&s->requestedDataSourceCount, in);

        

    deserialize_ptr(&s->requestedDataSources, in);

}




static void deserialize(XrFaceExpressionInfo2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrFaceExpressionWeights2FB* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->weightCount, in);

        

    deserialize_ptr(&s->weights, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidences, in);

        

    deserialize(&s->isValid, in);

        

    deserialize(&s->isEyeFollowingBlendshapesValid, in);

        

    deserialize(&s->dataSource, in);

        

    deserialize(&s->time, in);

}


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing


static void deserialize(XrSystemSpatialEntitySharingPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntitySharing, in);

}




static void deserialize(XrShareSpacesRecipientBaseHeaderMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrShareSpacesInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataShareSpacesCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSystemSpatialEntitySharingPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntitySharing, in);

}




static void deserialize(XrShareSpacesInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataShareSpacesCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth


static void deserialize(XrEnvironmentDepthProviderCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}




static void deserialize(XrEnvironmentDepthSwapchainCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}




static void deserialize(XrEnvironmentDepthSwapchainStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrEnvironmentDepthImageAcquireInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->displayTime, in);

}




static void deserialize(XrEnvironmentDepthImageViewMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrEnvironmentDepthImageMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->swapchainIndex, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

        

    deserialize_array(s->views, 2, in);

}




static void deserialize(XrEnvironmentDepthHandRemovalSetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrSystemEnvironmentDepthPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEnvironmentDepth, in);

        

    deserialize(&s->supportsHandRemoval, in);

}




static void deserialize(XrEnvironmentDepthProviderCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}




static void deserialize(XrEnvironmentDepthSwapchainCreateInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

}




static void deserialize(XrEnvironmentDepthSwapchainStateMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrEnvironmentDepthImageAcquireInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->displayTime, in);

}




static void deserialize(XrEnvironmentDepthImageViewMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrEnvironmentDepthImageMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->swapchainIndex, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

        

    deserialize_array(s->views, 2, in);

}




static void deserialize(XrEnvironmentDepthHandRemovalSetInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->enabled, in);

}




static void deserialize(XrSystemEnvironmentDepthPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsEnvironmentDepth, in);

        

    deserialize(&s->supportsHandRemoval, in);

}


#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough


static void deserialize(XrPassthroughCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->form, in);

}




static void deserialize(XrPassthroughColorHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->alpha, in);

}




static void deserialize(XrPassthroughMeshTransformInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCount, in);

        

    deserialize_ptr(&s->indices, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrCompositionLayerPassthroughHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->passthrough, in);

        

    deserialize(&s->color, in);

}




static void deserialize(XrPassthroughCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->form, in);

}




static void deserialize(XrPassthroughColorHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->alpha, in);

}




static void deserialize(XrPassthroughMeshTransformInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCount, in);

        

    deserialize_ptr(&s->indices, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->scale, in);

}




static void deserialize(XrCompositionLayerPassthroughHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->passthrough, in);

        

    deserialize(&s->color, in);

}


#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation


static void deserialize(XrFoveationApplyInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->mode, in);

        

    deserialize(&s->subImageCount, in);

        

    deserialize_ptr(&s->subImages, in);

}




static void deserialize(XrFoveationConfigurationHTC* s, std::istream& in) {
        

    deserialize(&s->level, in);

        

    deserialize(&s->clearFovDegree, in);

        

    deserialize(&s->focalCenterOffset, in);

}




static void deserialize(XrFoveationDynamicModeInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->dynamicFlags, in);

}




static void deserialize(XrFoveationCustomModeInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->configCount, in);

        

    deserialize_ptr(&s->configs, in);

}




static void deserialize(XrFoveationApplyInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->mode, in);

        

    deserialize(&s->subImageCount, in);

        

    deserialize_ptr(&s->subImages, in);

}




static void deserialize(XrFoveationDynamicModeInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->dynamicFlags, in);

}




static void deserialize(XrFoveationCustomModeInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->configCount, in);

        

    deserialize_ptr(&s->configs, in);

}


#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor


static void deserialize(XrSystemAnchorPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsAnchor, in);

}




static void deserialize(XrSpatialAnchorCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->name, in);

}




static void deserialize(XrSpatialAnchorNameHTC* s, std::istream& in) {
        

    deserialize_array(s->name, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC, in);

}




static void deserialize(XrSystemAnchorPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsAnchor, in);

}




static void deserialize(XrSpatialAnchorCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->poseInSpace, in);

        

    deserialize(&s->name, in);

}


#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking


static void deserialize(XrSystemBodyTrackingPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}




static void deserialize(XrBodyTrackerCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bodyJointSet, in);

}




static void deserialize(XrBodyJointsLocateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyJointLocationsHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->combinedLocationFlags, in);

        

    deserialize(&s->confidenceLevel, in);

        

    deserialize(&s->jointLocationCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

        

    deserialize(&s->skeletonGenerationId, in);

}




static void deserialize(XrBodyJointLocationHTC* s, std::istream& in) {
        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrBodySkeletonHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->joints, in);

}




static void deserialize(XrSystemBodyTrackingPropertiesHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}




static void deserialize(XrBodyTrackerCreateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bodyJointSet, in);

}




static void deserialize(XrBodyJointsLocateInfoHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyJointLocationsHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->combinedLocationFlags, in);

        

    deserialize(&s->confidenceLevel, in);

        

    deserialize(&s->jointLocationCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

        

    deserialize(&s->skeletonGenerationId, in);

}




static void deserialize(XrBodySkeletonHTC* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointCount, in);

        

    deserialize_ptr(&s->joints, in);

}


#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority


static void deserialize(XrActiveActionSetPrioritiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->actionSetPriorityCount, in);

        

    deserialize_ptr(&s->actionSetPriorities, in);

}




static void deserialize(XrActiveActionSetPriorityEXT* s, std::istream& in) {
        

    deserialize(&s->actionSet, in);

        

    deserialize(&s->priorityOverride, in);

}




static void deserialize(XrActiveActionSetPrioritiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->actionSetPriorityCount, in);

        

    deserialize_ptr(&s->actionSetPriorities, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl


static void deserialize(XrSystemForceFeedbackCurlPropertiesMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsForceFeedbackCurl, in);

}




static void deserialize(XrForceFeedbackCurlApplyLocationsMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationCount, in);

        

    deserialize_ptr(&s->locations, in);

}




static void deserialize(XrForceFeedbackCurlApplyLocationMNDX* s, std::istream& in) {
        

    deserialize(&s->location, in);

        

    deserialize(&s->value, in);

}




static void deserialize(XrSystemForceFeedbackCurlPropertiesMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsForceFeedbackCurl, in);

}




static void deserialize(XrForceFeedbackCurlApplyLocationsMNDX* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationCount, in);

        

    deserialize_ptr(&s->locations, in);

}


#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking


static void deserialize(XrSystemBodyTrackingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}




static void deserialize(XrBodyTrackerCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointSet, in);

}




static void deserialize(XrBodyJointsLocateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyJointLocationsBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->allJointPosesTracked, in);

        

    deserialize(&s->jointLocationCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

}




static void deserialize(XrBodyJointLocationBD* s, std::istream& in) {
        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrBodyTrackerCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->jointSet, in);

}




static void deserialize(XrBodyJointsLocateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrBodyJointLocationsBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->allJointPosesTracked, in);

        

    deserialize(&s->jointLocationCount, in);

        

    deserialize_ptr(&s->jointLocations, in);

}




static void deserialize(XrSystemBodyTrackingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsBodyTracking, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing


static void deserialize(XrSystemSpatialSensingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialSensing, in);

}




static void deserialize(XrSpatialEntityComponentGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->entityId, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrSpatialEntityComponentDataBaseHeaderBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSpatialEntityLocationGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

}




static void deserialize(XrSpatialEntityComponentDataLocationBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrSpatialEntityComponentDataSemanticBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->labelCapacityInput, in);

        

    deserialize(&s->labelCountOutput, in);

        

    deserialize_ptr(&s->labels, in);

}




static void deserialize(XrSpatialEntityComponentDataBoundingBox2DBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->boundingBox2D, in);

}




static void deserialize(XrSpatialEntityComponentDataPolygonBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSpatialEntityComponentDataBoundingBox3DBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->boundingBox3D, in);

}




static void deserialize(XrSpatialEntityComponentDataTriangleMeshBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSenseDataProviderCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->providerType, in);

}




static void deserialize(XrSenseDataProviderStartInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataSenseDataProviderStateChangedBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->provider, in);

        

    deserialize(&s->newState, in);

}




static void deserialize(XrEventDataSenseDataUpdatedBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->provider, in);

}




static void deserialize(XrSenseDataQueryInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSenseDataQueryCompletionBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->snapshot, in);

}




static void deserialize(XrQueriedSenseDataGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrQueriedSenseDataBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->stateCapacityInput, in);

        

    deserialize(&s->stateCountOutput, in);

        

    deserialize_ptr(&s->states, in);

}




static void deserialize(XrSpatialEntityStateBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->entityId, in);

        

    deserialize(&s->lastUpdateTime, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSenseDataFilterUuidBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSenseDataFilterSemanticBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->labelCount, in);

        

    deserialize_ptr(&s->labels, in);

}




static void deserialize(XrSpatialEntityAnchorCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->snapshot, in);

        

    deserialize(&s->entityId, in);

}




static void deserialize(XrAnchorSpaceCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchor, in);

        

    deserialize(&s->poseInAnchorSpace, in);

}




static void deserialize(XrSystemSpatialSensingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialSensing, in);

}




static void deserialize(XrSpatialEntityComponentGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->entityId, in);

        

    deserialize(&s->componentType, in);

}




static void deserialize(XrSpatialEntityLocationGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

}




static void deserialize(XrSpatialEntityComponentDataLocationBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

}




static void deserialize(XrSpatialEntityComponentDataSemanticBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->labelCapacityInput, in);

        

    deserialize(&s->labelCountOutput, in);

        

    deserialize_ptr(&s->labels, in);

}




static void deserialize(XrSpatialEntityComponentDataBoundingBox2DBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->boundingBox2D, in);

}




static void deserialize(XrSpatialEntityComponentDataPolygonBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSpatialEntityComponentDataBoundingBox3DBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->boundingBox3D, in);

}




static void deserialize(XrSpatialEntityComponentDataTriangleMeshBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

        

    deserialize(&s->indexCapacityInput, in);

        

    deserialize(&s->indexCountOutput, in);

        

    deserialize_ptr(&s->indices, in);

}




static void deserialize(XrSenseDataProviderCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->providerType, in);

}




static void deserialize(XrSenseDataProviderStartInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataSenseDataProviderStateChangedBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->provider, in);

        

    deserialize(&s->newState, in);

}




static void deserialize(XrEventDataSenseDataUpdatedBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->provider, in);

}




static void deserialize(XrSenseDataQueryInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSenseDataQueryCompletionBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->snapshot, in);

}




static void deserialize(XrSenseDataFilterUuidBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuidCount, in);

        

    deserialize_ptr(&s->uuids, in);

}




static void deserialize(XrSenseDataFilterSemanticBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->labelCount, in);

        

    deserialize_ptr(&s->labels, in);

}




static void deserialize(XrQueriedSenseDataGetInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrQueriedSenseDataBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->stateCapacityInput, in);

        

    deserialize(&s->stateCountOutput, in);

        

    deserialize_ptr(&s->states, in);

}




static void deserialize(XrSpatialEntityStateBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->entityId, in);

        

    deserialize(&s->lastUpdateTime, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSpatialEntityAnchorCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->snapshot, in);

        

    deserialize(&s->entityId, in);

}




static void deserialize(XrAnchorSpaceCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchor, in);

        

    deserialize(&s->poseInAnchorSpace, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor


static void deserialize(XrSystemSpatialAnchorPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialAnchor, in);

}




static void deserialize(XrSpatialAnchorCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpatialAnchorCreateCompletionBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->anchor, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSpatialAnchorPersistInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->anchor, in);

}




static void deserialize(XrSpatialAnchorUnpersistInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->anchor, in);

}




static void deserialize(XrSystemSpatialAnchorPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialAnchor, in);

}




static void deserialize(XrSpatialAnchorCreateInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSpatialAnchorCreateCompletionBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->anchor, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSpatialAnchorPersistInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->anchor, in);

}




static void deserialize(XrSpatialAnchorUnpersistInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->location, in);

        

    deserialize(&s->anchor, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing


static void deserialize(XrSystemSpatialAnchorSharingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialAnchorSharing, in);

}




static void deserialize(XrSpatialAnchorShareInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchor, in);

}




static void deserialize(XrSharedSpatialAnchorDownloadInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

}




static void deserialize(XrSystemSpatialAnchorSharingPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialAnchorSharing, in);

}




static void deserialize(XrSpatialAnchorShareInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->anchor, in);

}




static void deserialize(XrSharedSpatialAnchorDownloadInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene


static void deserialize(XrSystemSpatialScenePropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialScene, in);

}




static void deserialize(XrSceneCaptureInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSystemSpatialScenePropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialScene, in);

}




static void deserialize(XrSceneCaptureInfoBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh


static void deserialize(XrSystemSpatialMeshPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialMesh, in);

}




static void deserialize(XrSenseDataProviderCreateInfoSpatialMeshBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->configFlags, in);

        

    deserialize(&s->lod, in);

}




static void deserialize(XrSystemSpatialMeshPropertiesBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialMesh, in);

}




static void deserialize(XrSenseDataProviderCreateInfoSpatialMeshBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->configFlags, in);

        

    deserialize(&s->lod, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress


static void deserialize(XrFuturePollResultProgressBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isSupported, in);

        

    deserialize(&s->progressPercentage, in);

}




static void deserialize(XrFuturePollResultProgressBD* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isSupported, in);

        

    deserialize(&s->progressPercentage, in);

}


#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source


static void deserialize(XrHandTrackingDataSourceInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedDataSourceCount, in);

        

    deserialize_ptr(&s->requestedDataSources, in);

}




static void deserialize(XrHandTrackingDataSourceStateEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->dataSource, in);

}




static void deserialize(XrHandTrackingDataSourceInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedDataSourceCount, in);

        

    deserialize_ptr(&s->requestedDataSources, in);

}




static void deserialize(XrHandTrackingDataSourceStateEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

        

    deserialize(&s->dataSource, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection


static void deserialize(XrSystemPlaneDetectionPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportedFeatures, in);

}




static void deserialize(XrPlaneDetectorCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrPlaneDetectorBeginInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->orientationCount, in);

        

    deserialize_ptr(&s->orientations, in);

        

    deserialize(&s->semanticTypeCount, in);

        

    deserialize_ptr(&s->semanticTypes, in);

        

    deserialize(&s->maxPlanes, in);

        

    deserialize(&s->minArea, in);

        

    deserialize(&s->boundingBoxPose, in);

        

    deserialize(&s->boundingBoxExtent, in);

}




static void deserialize(XrPlaneDetectorGetInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrPlaneDetectorLocationEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->planeId, in);

        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->extents, in);

        

    deserialize(&s->orientation, in);

        

    deserialize(&s->semanticType, in);

        

    deserialize(&s->polygonBufferCount, in);

}




static void deserialize(XrPlaneDetectorLocationsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->planeLocationCapacityInput, in);

        

    deserialize(&s->planeLocationCountOutput, in);

        

    deserialize_ptr(&s->planeLocations, in);

}




static void deserialize(XrPlaneDetectorPolygonBufferEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrPlaneDetectorCreateInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

}




static void deserialize(XrPlaneDetectorBeginInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->orientationCount, in);

        

    deserialize_ptr(&s->orientations, in);

        

    deserialize(&s->semanticTypeCount, in);

        

    deserialize_ptr(&s->semanticTypes, in);

        

    deserialize(&s->maxPlanes, in);

        

    deserialize(&s->minArea, in);

        

    deserialize(&s->boundingBoxPose, in);

        

    deserialize(&s->boundingBoxExtent, in);

}




static void deserialize(XrPlaneDetectorGetInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrPlaneDetectorLocationsEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->planeLocationCapacityInput, in);

        

    deserialize(&s->planeLocationCountOutput, in);

        

    deserialize_ptr(&s->planeLocations, in);

}




static void deserialize(XrPlaneDetectorLocationEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->planeId, in);

        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->extents, in);

        

    deserialize(&s->orientation, in);

        

    deserialize(&s->semanticType, in);

        

    deserialize(&s->polygonBufferCount, in);

}




static void deserialize(XrPlaneDetectorPolygonBufferEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->vertexCapacityInput, in);

        

    deserialize(&s->vertexCountOutput, in);

        

    deserialize_ptr(&s->vertices, in);

}




static void deserialize(XrSystemPlaneDetectionPropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportedFeatures, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future


static void deserialize(XrFutureCancelInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->future, in);

}




static void deserialize(XrFuturePollInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->future, in);

}




static void deserialize(XrFutureCompletionBaseHeaderEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrFutureCompletionEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrFuturePollResultEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->state, in);

}




static void deserialize(XrFutureCancelInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->future, in);

}




static void deserialize(XrFuturePollInfoEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->future, in);

}




static void deserialize(XrFutureCompletionEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

}




static void deserialize(XrFuturePollResultEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->state, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence


static void deserialize(XrEventDataUserPresenceChangedEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->isUserPresent, in);

}




static void deserialize(XrSystemUserPresencePropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsUserPresence, in);

}




static void deserialize(XrEventDataUserPresenceChangedEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->isUserPresent, in);

}




static void deserialize(XrSystemUserPresencePropertiesEXT* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsUserPresence, in);

}


#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications


static void deserialize(XrSystemNotificationsSetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->suppressNotifications, in);

}




static void deserialize(XrSystemNotificationsSetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->suppressNotifications, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection


static void deserialize(XrWorldMeshDetectorCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrWorldMeshBlockStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->meshBoundingBoxCenter, in);

        

    deserialize(&s->meshBoundingBoxExtents, in);

        

    deserialize(&s->lastUpdateTime, in);

        

    deserialize(&s->status, in);

}




static void deserialize(XrWorldMeshStateRequestInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->boundingBoxCenter, in);

        

    deserialize(&s->boundingBoxExtents, in);

}




static void deserialize(XrWorldMeshStateRequestCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->timestamp, in);

        

    deserialize(&s->meshBlockStateCapacityInput, in);

        

    deserialize(&s->meshBlockStateCountOutput, in);

        

    deserialize_ptr(&s->meshBlockStates, in);

}




static void deserialize(XrWorldMeshBufferRecommendedSizeInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->maxBlockCount, in);

}




static void deserialize(XrWorldMeshBufferSizeML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->size, in);

}




static void deserialize(XrWorldMeshBufferML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrWorldMeshBlockRequestML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->lod, in);

}




static void deserialize(XrWorldMeshGetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->fillHoleLength, in);

        

    deserialize(&s->disconnectedComponentArea, in);

        

    deserialize(&s->blockCount, in);

        

    deserialize_ptr(&s->blocks, in);

}




static void deserialize(XrWorldMeshBlockML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->blockResult, in);

        

    deserialize(&s->lod, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->indexCount, in);

        

    deserialize_ptr(&s->indexBuffer, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertexBuffer, in);

        

    deserialize(&s->normalCount, in);

        

    deserialize_ptr(&s->normalBuffer, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidenceBuffer, in);

}




static void deserialize(XrWorldMeshRequestCompletionInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->meshSpace, in);

        

    deserialize(&s->meshSpaceLocateTime, in);

}




static void deserialize(XrWorldMeshRequestCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->blockCount, in);

        

    deserialize_ptr(&s->blocks, in);

}




static void deserialize(XrWorldMeshDetectorCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrWorldMeshStateRequestInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->boundingBoxCenter, in);

        

    deserialize(&s->boundingBoxExtents, in);

}




static void deserialize(XrWorldMeshBlockStateML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->meshBoundingBoxCenter, in);

        

    deserialize(&s->meshBoundingBoxExtents, in);

        

    deserialize(&s->lastUpdateTime, in);

        

    deserialize(&s->status, in);

}




static void deserialize(XrWorldMeshStateRequestCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->timestamp, in);

        

    deserialize(&s->meshBlockStateCapacityInput, in);

        

    deserialize(&s->meshBlockStateCountOutput, in);

        

    deserialize_ptr(&s->meshBlockStates, in);

}




static void deserialize(XrWorldMeshBufferRecommendedSizeInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->maxBlockCount, in);

}




static void deserialize(XrWorldMeshBufferSizeML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->size, in);

}




static void deserialize(XrWorldMeshBufferML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrWorldMeshBlockRequestML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->lod, in);

}




static void deserialize(XrWorldMeshGetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->fillHoleLength, in);

        

    deserialize(&s->disconnectedComponentArea, in);

        

    deserialize(&s->blockCount, in);

        

    deserialize_ptr(&s->blocks, in);

}




static void deserialize(XrWorldMeshBlockML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->uuid, in);

        

    deserialize(&s->blockResult, in);

        

    deserialize(&s->lod, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->indexCount, in);

        

    deserialize_ptr(&s->indexBuffer, in);

        

    deserialize(&s->vertexCount, in);

        

    deserialize_ptr(&s->vertexBuffer, in);

        

    deserialize(&s->normalCount, in);

        

    deserialize_ptr(&s->normalBuffer, in);

        

    deserialize(&s->confidenceCount, in);

        

    deserialize_ptr(&s->confidenceBuffer, in);

}




static void deserialize(XrWorldMeshRequestCompletionML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->futureResult, in);

        

    deserialize(&s->blockCount, in);

        

    deserialize_ptr(&s->blocks, in);

}




static void deserialize(XrWorldMeshRequestCompletionInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->meshSpace, in);

        

    deserialize(&s->meshSpaceLocateTime, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression


static void deserialize(XrSystemFacialExpressionPropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFacialExpression, in);

}




static void deserialize(XrFacialExpressionClientCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedCount, in);

        

    deserialize_ptr(&s->requestedFacialBlendShapes, in);

}




static void deserialize(XrFacialExpressionBlendShapeGetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrFacialExpressionBlendShapePropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedFacialBlendShape, in);

        

    deserialize(&s->weight, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrSystemFacialExpressionPropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsFacialExpression, in);

}




static void deserialize(XrFacialExpressionClientCreateInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedCount, in);

        

    deserialize_ptr(&s->requestedFacialBlendShapes, in);

}




static void deserialize(XrFacialExpressionBlendShapeGetInfoML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrFacialExpressionBlendShapePropertiesML* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestedFacialBlendShape, in);

        

    deserialize(&s->weight, in);

        

    deserialize(&s->flags, in);

        

    deserialize(&s->time, in);

}


#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers


static void deserialize(XrSystemSimultaneousHandsAndControllersPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSimultaneousHandsAndControllers, in);

}




static void deserialize(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSystemSimultaneousHandsAndControllersPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSimultaneousHandsAndControllers, in);

}




static void deserialize(XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}


#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery


static void deserialize(XrColocationDiscoveryStartInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrColocationDiscoveryStopInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrColocationAdvertisementStartInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrColocationAdvertisementStopInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataStartColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->advertisementRequestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->advertisementUuid, in);

}




static void deserialize(XrEventDataStopColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->advertisementRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataStartColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataColocationDiscoveryResultMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->advertisementUuid, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_array(s->buffer, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META, in);

}




static void deserialize(XrEventDataColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataStopColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSystemColocationDiscoveryPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsColocationDiscovery, in);

}




static void deserialize(XrColocationDiscoveryStartInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrColocationDiscoveryStopInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrColocationAdvertisementStartInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_ptr(&s->buffer, in);

}




static void deserialize(XrColocationAdvertisementStopInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataStartColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->advertisementRequestId, in);

        

    deserialize(&s->result, in);

        

    deserialize(&s->advertisementUuid, in);

}




static void deserialize(XrEventDataStopColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataColocationAdvertisementCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->advertisementRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataStartColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataColocationDiscoveryResultMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->advertisementUuid, in);

        

    deserialize(&s->bufferSize, in);

        

    deserialize_array(s->buffer, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META, in);

}




static void deserialize(XrEventDataColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->discoveryRequestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrEventDataStopColocationDiscoveryCompleteMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->requestId, in);

        

    deserialize(&s->result, in);

}




static void deserialize(XrSystemColocationDiscoveryPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsColocationDiscovery, in);

}


#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void deserialize(XrSystemSpatialEntityGroupSharingPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntityGroupSharing, in);

}




static void deserialize(XrShareSpacesRecipientGroupsMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->groupCount, in);

        

    deserialize_ptr(&s->groups, in);

}




static void deserialize(XrSpaceGroupUuidFilterInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->groupUuid, in);

}




static void deserialize(XrShareSpacesRecipientGroupsMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->groupCount, in);

        

    deserialize_ptr(&s->groups, in);

}




static void deserialize(XrSpaceGroupUuidFilterInfoMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->groupUuid, in);

}




static void deserialize(XrSystemSpatialEntityGroupSharingPropertiesMETA* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->supportsSpatialEntityGroupSharing, in);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void deserialize(XrActionCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->actionName, XR_MAX_ACTION_NAME_SIZE, in);

        

    deserialize(&s->actionType, in);

        

    deserialize(&s->countSubactionPaths, in);

        

    deserialize_ptr(&s->subactionPaths, in);

        

    deserialize_array(s->localizedActionName, XR_MAX_LOCALIZED_ACTION_NAME_SIZE, in);

}




static void deserialize(XrActionSetCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->actionSetName, XR_MAX_ACTION_SET_NAME_SIZE, in);

        

    deserialize_array(s->localizedActionSetName, XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE, in);

        

    deserialize(&s->priority, in);

}




static void deserialize(XrActionSpaceCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

        

    deserialize(&s->subactionPath, in);

        

    deserialize(&s->poseInActionSpace, in);

}




static void deserialize(XrActionStateBoolean* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->currentState, in);

        

    deserialize(&s->changedSinceLastSync, in);

        

    deserialize(&s->lastChangeTime, in);

        

    deserialize(&s->isActive, in);

}




static void deserialize(XrActionStateFloat* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->currentState, in);

        

    deserialize(&s->changedSinceLastSync, in);

        

    deserialize(&s->lastChangeTime, in);

        

    deserialize(&s->isActive, in);

}




static void deserialize(XrActionStateGetInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

        

    deserialize(&s->subactionPath, in);

}




static void deserialize(XrActionStatePose* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->isActive, in);

}




static void deserialize(XrActionStateVector2f* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->currentState, in);

        

    deserialize(&s->changedSinceLastSync, in);

        

    deserialize(&s->lastChangeTime, in);

        

    deserialize(&s->isActive, in);

}




static void deserialize(XrActionSuggestedBinding* s, std::istream& in) {
        

    deserialize(&s->action, in);

        

    deserialize(&s->binding, in);

}




static void deserialize(XrActionsSyncInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->countActiveActionSets, in);

        

    deserialize_ptr(&s->activeActionSets, in);

}




static void deserialize(XrActiveActionSet* s, std::istream& in) {
        

    deserialize(&s->actionSet, in);

        

    deserialize(&s->subactionPath, in);

}




static void deserialize(XrApiLayerProperties* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->layerName, XR_MAX_API_LAYER_NAME_SIZE, in);

        

    deserialize(&s->specVersion, in);

        

    deserialize(&s->layerVersion, in);

        

    deserialize_array(s->description, XR_MAX_API_LAYER_DESCRIPTION_SIZE, in);

}




static void deserialize(XrApplicationInfo* s, std::istream& in) {
        

    deserialize_array(s->applicationName, XR_MAX_APPLICATION_NAME_SIZE, in);

        

    deserialize(&s->applicationVersion, in);

        

    deserialize_array(s->engineName, XR_MAX_ENGINE_NAME_SIZE, in);

        

    deserialize(&s->engineVersion, in);

        

    deserialize(&s->apiVersion, in);

}




static void deserialize(XrBodySkeletonJointHTC* s, std::istream& in) {
        

    deserialize(&s->pose, in);

}




static void deserialize(XrBoundSourcesForActionEnumerateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

}




static void deserialize(XrBoxf* s, std::istream& in) {
        

    deserialize(&s->center, in);

        

    deserialize(&s->extents, in);

}




static void deserialize(XrColor3f* s, std::istream& in) {
        

    deserialize(&s->r, in);

        

    deserialize(&s->g, in);

        

    deserialize(&s->b, in);

}




static void deserialize(XrColor4f* s, std::istream& in) {
        

    deserialize(&s->r, in);

        

    deserialize(&s->g, in);

        

    deserialize(&s->b, in);

        

    deserialize(&s->a, in);

}




static void deserialize(XrCompositionLayerBaseHeader* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

}




static void deserialize(XrCompositionLayerProjection* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->viewCount, in);

        

    deserialize_ptr(&s->views, in);

}




static void deserialize(XrCompositionLayerProjectionView* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->subImage, in);

}




static void deserialize(XrCompositionLayerQuad* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->layerFlags, in);

        

    deserialize(&s->space, in);

        

    deserialize(&s->eyeVisibility, in);

        

    deserialize(&s->subImage, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->size, in);

}




static void deserialize(XrEventDataBaseHeader* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrEventDataBuffer* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->varying, 4000, in);

}




static void deserialize(XrEventDataEventsLost* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->lostEventCount, in);

}




static void deserialize(XrEventDataInstanceLossPending* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->lossTime, in);

}




static void deserialize(XrEventDataInteractionProfileChanged* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

}




static void deserialize(XrEventDataReferenceSpaceChangePending* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->referenceSpaceType, in);

        

    deserialize(&s->changeTime, in);

        

    deserialize(&s->poseValid, in);

        

    deserialize(&s->poseInPreviousSpace, in);

}




static void deserialize(XrEventDataSessionStateChanged* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->session, in);

        

    deserialize(&s->state, in);

        

    deserialize(&s->time, in);

}




static void deserialize(XrExtensionProperties* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize_array(s->extensionName, XR_MAX_EXTENSION_NAME_SIZE, in);

        

    deserialize(&s->extensionVersion, in);

}




static void deserialize(XrExtent2Df* s, std::istream& in) {
        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrExtent2Di* s, std::istream& in) {
        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

}




static void deserialize(XrExtent3Df* s, std::istream& in) {
        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

        

    deserialize(&s->depth, in);

}




static void deserialize(XrFovf* s, std::istream& in) {
        

    deserialize(&s->angleLeft, in);

        

    deserialize(&s->angleRight, in);

        

    deserialize(&s->angleUp, in);

        

    deserialize(&s->angleDown, in);

}




static void deserialize(XrFrameBeginInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}






static void deserialize(XrFrameState* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->predictedDisplayTime, in);

        

    deserialize(&s->predictedDisplayPeriod, in);

        

    deserialize(&s->shouldRender, in);

}




static void deserialize(XrFrameWaitInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrFrustumf* s, std::istream& in) {
        

    deserialize(&s->pose, in);

        

    deserialize(&s->fov, in);

        

    deserialize(&s->nearZ, in);

        

    deserialize(&s->farZ, in);

}




static void deserialize(XrHapticActionInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->action, in);

        

    deserialize(&s->subactionPath, in);

}




static void deserialize(XrHapticBaseHeader* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrHapticVibration* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->duration, in);

        

    deserialize(&s->frequency, in);

        

    deserialize(&s->amplitude, in);

}




static void deserialize(XrInputSourceLocalizedNameGetInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->sourcePath, in);

        

    deserialize(&s->whichComponents, in);

}






static void deserialize(XrInstanceProperties* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->runtimeVersion, in);

        

    deserialize_array(s->runtimeName, XR_MAX_RUNTIME_NAME_SIZE, in);

}




static void deserialize(XrInteractionProfileState* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->interactionProfile, in);

}




static void deserialize(XrInteractionProfileSuggestedBinding* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->interactionProfile, in);

        

    deserialize(&s->countSuggestedBindings, in);

        

    deserialize_ptr(&s->suggestedBindings, in);

}




static void deserialize(XrOffset2Df* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

}




static void deserialize(XrOffset2Di* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

}




static void deserialize(XrPosef* s, std::istream& in) {
        

    deserialize(&s->orientation, in);

        

    deserialize(&s->position, in);

}




static void deserialize(XrQuaternionf* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

        

    deserialize(&s->z, in);

        

    deserialize(&s->w, in);

}




static void deserialize(XrRect2Df* s, std::istream& in) {
        

    deserialize(&s->offset, in);

        

    deserialize(&s->extent, in);

}




static void deserialize(XrRect2Di* s, std::istream& in) {
        

    deserialize(&s->offset, in);

        

    deserialize(&s->extent, in);

}




static void deserialize(XrReferenceSpaceCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->referenceSpaceType, in);

        

    deserialize(&s->poseInReferenceSpace, in);

}




static void deserialize(XrSessionActionSetsAttachInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->countActionSets, in);

        

    deserialize_ptr(&s->actionSets, in);

}




static void deserialize(XrSessionBeginInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->primaryViewConfigurationType, in);

}




static void deserialize(XrSessionCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->systemId, in);

}




static void deserialize(XrSpaceLocation* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSpaceLocationData* s, std::istream& in) {
        

    deserialize(&s->locationFlags, in);

        

    deserialize(&s->pose, in);

}




static void deserialize(XrSpaceLocations* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->locationCount, in);

        

    deserialize_ptr(&s->locations, in);

}




static void deserialize(XrSpaceVelocities* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->velocityCount, in);

        

    deserialize_ptr(&s->velocities, in);

}




static void deserialize(XrSpaceVelocity* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->velocityFlags, in);

        

    deserialize(&s->linearVelocity, in);

        

    deserialize(&s->angularVelocity, in);

}




static void deserialize(XrSpaceVelocityData* s, std::istream& in) {
        

    deserialize(&s->velocityFlags, in);

        

    deserialize(&s->linearVelocity, in);

        

    deserialize(&s->angularVelocity, in);

}




static void deserialize(XrSpacesLocateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->baseSpace, in);

        

    deserialize(&s->time, in);

        

    deserialize(&s->spaceCount, in);

        

    deserialize_ptr(&s->spaces, in);

}




static void deserialize(XrSpheref* s, std::istream& in) {
        

    deserialize(&s->center, in);

        

    deserialize(&s->radius, in);

}




static void deserialize(XrSwapchainCreateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->createFlags, in);

        

    deserialize(&s->usageFlags, in);

        

    deserialize(&s->format, in);

        

    deserialize(&s->sampleCount, in);

        

    deserialize(&s->width, in);

        

    deserialize(&s->height, in);

        

    deserialize(&s->faceCount, in);

        

    deserialize(&s->arraySize, in);

        

    deserialize(&s->mipCount, in);

}




static void deserialize(XrSwapchainImageAcquireInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSwapchainImageBaseHeader* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSwapchainImageReleaseInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

}




static void deserialize(XrSwapchainImageWaitInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->timeout, in);

}




static void deserialize(XrSwapchainSubImage* s, std::istream& in) {
        

    deserialize(&s->swapchain, in);

        

    deserialize(&s->imageRect, in);

        

    deserialize(&s->imageArrayIndex, in);

}




static void deserialize(XrSystemGetInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->formFactor, in);

}




static void deserialize(XrSystemGraphicsProperties* s, std::istream& in) {
        

    deserialize(&s->maxSwapchainImageHeight, in);

        

    deserialize(&s->maxSwapchainImageWidth, in);

        

    deserialize(&s->maxLayerCount, in);

}




static void deserialize(XrSystemProperties* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->systemId, in);

        

    deserialize(&s->vendorId, in);

        

    deserialize_array(s->systemName, XR_MAX_SYSTEM_NAME_SIZE, in);

        

    deserialize(&s->graphicsProperties, in);

        

    deserialize(&s->trackingProperties, in);

}




static void deserialize(XrSystemTrackingProperties* s, std::istream& in) {
        

    deserialize(&s->orientationTracking, in);

        

    deserialize(&s->positionTracking, in);

}




static void deserialize(XrUuid* s, std::istream& in) {
        

    deserialize_array(s->data, XR_UUID_SIZE, in);

}




static void deserialize(XrVector2f* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

}




static void deserialize(XrVector3f* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

        

    deserialize(&s->z, in);

}




static void deserialize(XrVector4f* s, std::istream& in) {
        

    deserialize(&s->x, in);

        

    deserialize(&s->y, in);

        

    deserialize(&s->z, in);

        

    deserialize(&s->w, in);

}




static void deserialize(XrView* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->pose, in);

        

    deserialize(&s->fov, in);

}




static void deserialize(XrViewConfigurationProperties* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->fovMutable, in);

}




static void deserialize(XrViewConfigurationView* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->recommendedImageRectWidth, in);

        

    deserialize(&s->maxImageRectWidth, in);

        

    deserialize(&s->recommendedImageRectHeight, in);

        

    deserialize(&s->maxImageRectHeight, in);

        

    deserialize(&s->recommendedSwapchainSampleCount, in);

        

    deserialize(&s->maxSwapchainSampleCount, in);

}




static void deserialize(XrViewLocateInfo* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewConfigurationType, in);

        

    deserialize(&s->displayTime, in);

        

    deserialize(&s->space, in);

}




static void deserialize(XrViewState* s, std::istream& in) {
        

    deserialize(&s->type, in);

        

    deserialize_xr(&s->next, in);

        

    deserialize(&s->viewStateFlags, in);

}




// Cleaners

#ifdef XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#endif // XRTRANSPORT_EXT_XR_KHR_android_thread_settings
#ifdef XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#endif // XRTRANSPORT_EXT_XR_KHR_android_surface_swapchain
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cube


static void cleanup(const XrCompositionLayerCubeKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->swapchain);

        

    cleanup(&s->imageArrayIndex);

        

    cleanup(&s->orientation);

}




static void cleanup(const XrCompositionLayerCubeKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->swapchain);

        

    cleanup(&s->imageArrayIndex);

        

    cleanup(&s->orientation);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cube
#ifdef XRTRANSPORT_EXT_XR_KHR_android_create_instance


static void cleanup(const XrInstanceCreateInfoAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->applicationVM, 1);

        

    
    cleanup_ptr(s->applicationActivity, 1);

}




static void cleanup(const XrInstanceCreateInfoAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->applicationVM, 1);

        

    
    cleanup_ptr(s->applicationActivity, 1);

}


#endif // XRTRANSPORT_EXT_XR_KHR_android_create_instance
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_depth


static void cleanup(const XrCompositionLayerDepthInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->subImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrCompositionLayerDepthInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->subImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_depth
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list


static void cleanup(const XrVulkanSwapchainFormatListCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewFormatCount);

        

    
    cleanup_ptr(s->viewFormats, s->viewFormatCount);

}




static void cleanup(const XrVulkanSwapchainFormatListCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewFormatCount);

        

    
    cleanup_ptr(s->viewFormats, s->viewFormatCount);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_swapchain_format_list
#ifdef XRTRANSPORT_EXT_XR_EXT_performance_settings


static void cleanup(const XrEventDataPerfSettingsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->domain);

        

    cleanup(&s->subDomain);

        

    cleanup(&s->fromLevel);

        

    cleanup(&s->toLevel);

}




static void cleanup(const XrEventDataPerfSettingsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->domain);

        

    cleanup(&s->subDomain);

        

    cleanup(&s->fromLevel);

        

    cleanup(&s->toLevel);

}


#endif // XRTRANSPORT_EXT_XR_EXT_performance_settings
#ifdef XRTRANSPORT_EXT_XR_EXT_thermal_query
#endif // XRTRANSPORT_EXT_XR_EXT_thermal_query
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder


static void cleanup(const XrCompositionLayerCylinderKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->centralAngle);

        

    cleanup(&s->aspectRatio);

}




static void cleanup(const XrCompositionLayerCylinderKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->centralAngle);

        

    cleanup(&s->aspectRatio);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_cylinder
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect


static void cleanup(const XrCompositionLayerEquirectKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->scale);

        

    cleanup(&s->bias);

}




static void cleanup(const XrCompositionLayerEquirectKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->scale);

        

    cleanup(&s->bias);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect
#ifdef XRTRANSPORT_EXT_XR_EXT_debug_utils


static void cleanup(const XrDebugUtilsObjectNameInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->objectType);

        

    cleanup(&s->objectHandle);

        

    
    cleanup_ptr(s->objectName, count_null_terminated(s->objectName));

}




static void cleanup(const XrDebugUtilsLabelEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->labelName, count_null_terminated(s->labelName));

}




static void cleanup(const XrDebugUtilsMessengerCallbackDataEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->messageId, count_null_terminated(s->messageId));

        

    
    cleanup_ptr(s->functionName, count_null_terminated(s->functionName));

        

    
    cleanup_ptr(s->message, count_null_terminated(s->message));

        

    cleanup(&s->objectCount);

        

    
    cleanup_ptr(s->objects, s->objectCount);

        

    cleanup(&s->sessionLabelCount);

        

    
    cleanup_ptr(s->sessionLabels, s->sessionLabelCount);

}




static void cleanup(const XrDebugUtilsMessengerCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->messageSeverities);

        

    cleanup(&s->messageTypes);

        

    cleanup(&s->userCallback);

        

    
    cleanup_ptr(s->userData, 1);

}




static void cleanup(const XrDebugUtilsObjectNameInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->objectType);

        

    cleanup(&s->objectHandle);

        

    
    cleanup_ptr(s->objectName, count_null_terminated(s->objectName));

}




static void cleanup(const XrDebugUtilsMessengerCallbackDataEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->messageId, count_null_terminated(s->messageId));

        

    
    cleanup_ptr(s->functionName, count_null_terminated(s->functionName));

        

    
    cleanup_ptr(s->message, count_null_terminated(s->message));

        

    cleanup(&s->objectCount);

        

    
    cleanup_ptr(s->objects, s->objectCount);

        

    cleanup(&s->sessionLabelCount);

        

    
    cleanup_ptr(s->sessionLabels, s->sessionLabelCount);

}




static void cleanup(const XrDebugUtilsMessengerCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->messageSeverities);

        

    cleanup(&s->messageTypes);

        

    cleanup(&s->userCallback);

        

    
    cleanup_ptr(s->userData, 1);

}




static void cleanup(const XrDebugUtilsLabelEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->labelName, count_null_terminated(s->labelName));

}


#endif // XRTRANSPORT_EXT_XR_EXT_debug_utils
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_enable


static void cleanup(const XrGraphicsBindingOpenGLWin32KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->hDC);

        

    cleanup(&s->hGLRC);

}




static void cleanup(const XrGraphicsBindingOpenGLXlibKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->xDisplay, 1);

        

    cleanup(&s->visualid);

        

    cleanup(&s->glxFBConfig);

        

    cleanup(&s->glxDrawable);

        

    cleanup(&s->glxContext);

}




static void cleanup(const XrGraphicsBindingOpenGLXcbKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->connection, 1);

        

    cleanup(&s->screenNumber);

        

    cleanup(&s->fbconfigid);

        

    cleanup(&s->visualid);

        

    cleanup(&s->glxDrawable);

        

    cleanup(&s->glxContext);

}




static void cleanup(const XrGraphicsBindingOpenGLWaylandKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->display, 1);

}




static void cleanup(const XrSwapchainImageOpenGLKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsOpenGLKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}




static void cleanup(const XrGraphicsBindingOpenGLWin32KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->hDC);

        

    cleanup(&s->hGLRC);

}




static void cleanup(const XrGraphicsBindingOpenGLXlibKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->xDisplay, 1);

        

    cleanup(&s->visualid);

        

    cleanup(&s->glxFBConfig);

        

    cleanup(&s->glxDrawable);

        

    cleanup(&s->glxContext);

}




static void cleanup(const XrGraphicsBindingOpenGLXcbKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->connection, 1);

        

    cleanup(&s->screenNumber);

        

    cleanup(&s->fbconfigid);

        

    cleanup(&s->visualid);

        

    cleanup(&s->glxDrawable);

        

    cleanup(&s->glxContext);

}




static void cleanup(const XrGraphicsBindingOpenGLWaylandKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->display, 1);

}




static void cleanup(const XrSwapchainImageOpenGLKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsOpenGLKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_opengl_es_enable


static void cleanup(const XrGraphicsBindingOpenGLESAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->display);

        

    cleanup(&s->config);

        

    cleanup(&s->context);

}




static void cleanup(const XrSwapchainImageOpenGLESKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsOpenGLESKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}




static void cleanup(const XrGraphicsBindingOpenGLESAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->display);

        

    cleanup(&s->config);

        

    cleanup(&s->context);

}




static void cleanup(const XrSwapchainImageOpenGLESKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsOpenGLESKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}


#endif // XRTRANSPORT_EXT_XR_KHR_opengl_es_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable


static void cleanup(const XrGraphicsBindingVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->instance);

        

    cleanup(&s->physicalDevice);

        

    cleanup(&s->device);

        

    cleanup(&s->queueFamilyIndex);

        

    cleanup(&s->queueIndex);

}




static void cleanup(const XrSwapchainImageVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}




static void cleanup(const XrGraphicsBindingVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->instance);

        

    cleanup(&s->physicalDevice);

        

    cleanup(&s->device);

        

    cleanup(&s->queueFamilyIndex);

        

    cleanup(&s->queueIndex);

}




static void cleanup(const XrSwapchainImageVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

}




static void cleanup(const XrGraphicsRequirementsVulkanKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minApiVersionSupported);

        

    cleanup(&s->maxApiVersionSupported);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D11_enable


static void cleanup(const XrGraphicsBindingD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->device, 1);

}




static void cleanup(const XrSwapchainImageD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->adapterLuid);

        

    cleanup(&s->minFeatureLevel);

}




static void cleanup(const XrGraphicsBindingD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->device, 1);

}




static void cleanup(const XrSwapchainImageD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsD3D11KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->adapterLuid);

        

    cleanup(&s->minFeatureLevel);

}


#endif // XRTRANSPORT_EXT_XR_KHR_D3D11_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_D3D12_enable


static void cleanup(const XrGraphicsBindingD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->device, 1);

        

    
    cleanup_ptr(s->queue, 1);

}




static void cleanup(const XrSwapchainImageD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->adapterLuid);

        

    cleanup(&s->minFeatureLevel);

}




static void cleanup(const XrGraphicsBindingD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->device, 1);

        

    
    cleanup_ptr(s->queue, 1);

}




static void cleanup(const XrSwapchainImageD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsD3D12KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->adapterLuid);

        

    cleanup(&s->minFeatureLevel);

}


#endif // XRTRANSPORT_EXT_XR_KHR_D3D12_enable
#ifdef XRTRANSPORT_EXT_XR_KHR_metal_enable


static void cleanup(const XrGraphicsBindingMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->commandQueue, 1);

}




static void cleanup(const XrSwapchainImageMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->metalDevice, 1);

}




static void cleanup(const XrGraphicsBindingMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->commandQueue, 1);

}




static void cleanup(const XrSwapchainImageMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->texture, 1);

}




static void cleanup(const XrGraphicsRequirementsMetalKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->metalDevice, 1);

}


#endif // XRTRANSPORT_EXT_XR_KHR_metal_enable
#ifdef XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction


static void cleanup(const XrSystemEyeGazeInteractionPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEyeGazeInteraction);

}




static void cleanup(const XrEyeGazeSampleTimeEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemEyeGazeInteractionPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEyeGazeInteraction);

}




static void cleanup(const XrEyeGazeSampleTimeEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}


#endif // XRTRANSPORT_EXT_XR_EXT_eye_gaze_interaction
#ifdef XRTRANSPORT_EXT_XR_KHR_visibility_mask


static void cleanup(const XrVisibilityMaskKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrEventDataVisibilityMaskChangedKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->viewIndex);

}




static void cleanup(const XrVisibilityMaskKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrEventDataVisibilityMaskChangedKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->viewIndex);

}


#endif // XRTRANSPORT_EXT_XR_KHR_visibility_mask
#ifdef XRTRANSPORT_EXT_XR_EXTX_overlay


static void cleanup(const XrSessionCreateInfoOverlayEXTX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->sessionLayersPlacement);

}




static void cleanup(const XrEventDataMainSessionVisibilityChangedEXTX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->visible);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSessionCreateInfoOverlayEXTX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->sessionLayersPlacement);

}




static void cleanup(const XrEventDataMainSessionVisibilityChangedEXTX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->visible);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_EXTX_overlay
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias


static void cleanup(const XrCompositionLayerColorScaleBiasKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorScale);

        

    cleanup(&s->colorBias);

}




static void cleanup(const XrCompositionLayerColorScaleBiasKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorScale);

        

    cleanup(&s->colorBias);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_color_scale_bias
#ifdef XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#endif // XRTRANSPORT_EXT_XR_KHR_win32_convert_performance_counter_time
#ifdef XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#endif // XRTRANSPORT_EXT_XR_KHR_convert_timespec_time
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor


static void cleanup(const XrSpatialAnchorCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->pose);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpatialAnchorSpaceCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchor);

        

    cleanup(&s->poseInAnchorSpace);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout


static void cleanup(const XrCompositionLayerImageLayoutFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrCompositionLayerImageLayoutFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_image_layout
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend


static void cleanup(const XrCompositionLayerAlphaBlendFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->srcFactorColor);

        

    cleanup(&s->dstFactorColor);

        

    cleanup(&s->srcFactorAlpha);

        

    cleanup(&s->dstFactorAlpha);

}




static void cleanup(const XrCompositionLayerAlphaBlendFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->srcFactorColor);

        

    cleanup(&s->dstFactorColor);

        

    cleanup(&s->srcFactorAlpha);

        

    cleanup(&s->dstFactorAlpha);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_alpha_blend
#ifdef XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range


static void cleanup(const XrViewConfigurationDepthRangeEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedNearZ);

        

    cleanup(&s->minNearZ);

        

    cleanup(&s->recommendedFarZ);

        

    cleanup(&s->maxFarZ);

}




static void cleanup(const XrViewConfigurationDepthRangeEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedNearZ);

        

    cleanup(&s->minNearZ);

        

    cleanup(&s->recommendedFarZ);

        

    cleanup(&s->maxFarZ);

}


#endif // XRTRANSPORT_EXT_XR_EXT_view_configuration_depth_range
#ifdef XRTRANSPORT_EXT_XR_EXT_conformance_automation
#endif // XRTRANSPORT_EXT_XR_EXT_conformance_automation
#ifdef XRTRANSPORT_EXT_XR_MNDX_egl_enable


static void cleanup(const XrGraphicsBindingEGLMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->getProcAddress);

        

    cleanup(&s->display);

        

    cleanup(&s->config);

        

    cleanup(&s->context);

}




static void cleanup(const XrGraphicsBindingEGLMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->getProcAddress);

        

    cleanup(&s->display);

        

    cleanup(&s->config);

        

    cleanup(&s->context);

}


#endif // XRTRANSPORT_EXT_XR_MNDX_egl_enable
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge


static void cleanup(const XrSpatialGraphNodeSpaceCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeType);

        

    cleanup_array(s->nodeId, XR_GUID_SIZE_MSFT);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialGraphNodeBindingPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->nodeId, XR_GUID_SIZE_MSFT);

        

    cleanup(&s->poseInNodeSpace);

}




static void cleanup(const XrSpatialGraphNodeSpaceCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeType);

        

    cleanup_array(s->nodeId, XR_GUID_SIZE_MSFT);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSpatialGraphStaticNodeBindingCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpatialGraphNodeBindingPropertiesGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialGraphNodeBindingPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->nodeId, XR_GUID_SIZE_MSFT);

        

    cleanup(&s->poseInNodeSpace);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_graph_bridge
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking


static void cleanup(const XrSystemHandTrackingPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsHandTracking);

}




static void cleanup(const XrHandTrackerCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->hand);

        

    cleanup(&s->handJointSet);

}




static void cleanup(const XrHandJointsLocateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrHandJointLocationEXT* s) {
        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

}




static void cleanup(const XrHandJointVelocityEXT* s) {
        

    cleanup(&s->velocityFlags);

        

    cleanup(&s->linearVelocity);

        

    cleanup(&s->angularVelocity);

}




static void cleanup(const XrHandJointLocationsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointCount);

}




static void cleanup(const XrHandJointVelocitiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointVelocities, s->jointCount);

}




static void cleanup(const XrSystemHandTrackingPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsHandTracking);

}




static void cleanup(const XrHandTrackerCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->hand);

        

    cleanup(&s->handJointSet);

}




static void cleanup(const XrHandJointsLocateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrHandJointLocationsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointCount);

}




static void cleanup(const XrHandJointVelocitiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointVelocities, s->jointCount);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking
#ifdef XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh


static void cleanup(const XrSystemHandTrackingMeshPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsHandTrackingMesh);

        

    cleanup(&s->maxHandMeshIndexCount);

        

    cleanup(&s->maxHandMeshVertexCount);

}




static void cleanup(const XrHandMeshSpaceCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handPoseType);

        

    cleanup(&s->poseInHandMeshSpace);

}




static void cleanup(const XrHandMeshUpdateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

        

    cleanup(&s->handPoseType);

}




static void cleanup(const XrHandMeshMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->indexBufferChanged);

        

    cleanup(&s->vertexBufferChanged);

        

    cleanup(&s->indexBuffer);

        

    cleanup(&s->vertexBuffer);

}




static void cleanup(const XrHandMeshIndexBufferMSFT* s) {
        

    cleanup(&s->indexBufferKey);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrHandMeshVertexBufferMSFT* s) {
        

    cleanup(&s->vertexUpdateTime);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrHandMeshVertexMSFT* s) {
        

    cleanup(&s->position);

        

    cleanup(&s->normal);

}




static void cleanup(const XrHandPoseTypeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handPoseType);

}




static void cleanup(const XrSystemHandTrackingMeshPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsHandTrackingMesh);

        

    cleanup(&s->maxHandMeshIndexCount);

        

    cleanup(&s->maxHandMeshVertexCount);

}




static void cleanup(const XrHandMeshSpaceCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handPoseType);

        

    cleanup(&s->poseInHandMeshSpace);

}




static void cleanup(const XrHandMeshUpdateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

        

    cleanup(&s->handPoseType);

}




static void cleanup(const XrHandMeshMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->indexBufferChanged);

        

    cleanup(&s->vertexBufferChanged);

        

    cleanup(&s->indexBuffer);

        

    cleanup(&s->vertexBuffer);

}




static void cleanup(const XrHandPoseTypeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handPoseType);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration


static void cleanup(const XrSecondaryViewConfigurationSessionBeginInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->enabledViewConfigurationTypes, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->active);

}




static void cleanup(const XrSecondaryViewConfigurationFrameStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->viewConfigurationStates, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationFrameEndInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->viewConfigurationLayersInfo, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationLayerInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->environmentBlendMode);

        

    cleanup(&s->layerCount);

        

    #error "auto-generator doesn't support double pointers (s->layers)"
    None
}




static void cleanup(const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

}




static void cleanup(const XrSecondaryViewConfigurationSessionBeginInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->enabledViewConfigurationTypes, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->active);

}




static void cleanup(const XrSecondaryViewConfigurationFrameStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->viewConfigurationStates, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationFrameEndInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationCount);

        

    
    cleanup_ptr(s->viewConfigurationLayersInfo, s->viewConfigurationCount);

}




static void cleanup(const XrSecondaryViewConfigurationLayerInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->environmentBlendMode);

        

    cleanup(&s->layerCount);

        

    #error "auto-generator doesn't support double pointers (s->layers)"
    None
}




static void cleanup(const XrSecondaryViewConfigurationSwapchainCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_secondary_view_configuration
#ifdef XRTRANSPORT_EXT_XR_MSFT_controller_model


static void cleanup(const XrControllerModelKeyStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->modelKey);

}




static void cleanup(const XrControllerModelNodePropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT);

        

    cleanup_array(s->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT);

}




static void cleanup(const XrControllerModelPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeCapacityInput);

        

    cleanup(&s->nodeCountOutput);

        

    
    cleanup_ptr(s->nodeProperties, s->nodeCapacityInput);

}




static void cleanup(const XrControllerModelNodeStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodePose);

}




static void cleanup(const XrControllerModelStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeCapacityInput);

        

    cleanup(&s->nodeCountOutput);

        

    
    cleanup_ptr(s->nodeStates, s->nodeCapacityInput);

}




static void cleanup(const XrControllerModelKeyStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->modelKey);

}




static void cleanup(const XrControllerModelNodePropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->parentNodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT);

        

    cleanup_array(s->nodeName, XR_MAX_CONTROLLER_MODEL_NODE_NAME_SIZE_MSFT);

}




static void cleanup(const XrControllerModelPropertiesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeCapacityInput);

        

    cleanup(&s->nodeCountOutput);

        

    
    cleanup_ptr(s->nodeProperties, s->nodeCapacityInput);

}




static void cleanup(const XrControllerModelNodeStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodePose);

}




static void cleanup(const XrControllerModelStateMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->nodeCapacityInput);

        

    cleanup(&s->nodeCountOutput);

        

    
    cleanup_ptr(s->nodeStates, s->nodeCapacityInput);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_controller_model
#ifdef XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#endif // XRTRANSPORT_EXT_XR_MSFT_perception_anchor_interop
#ifdef XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov


static void cleanup(const XrViewConfigurationViewFovEPIC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedFov);

        

    cleanup(&s->maxMutableFov);

}




static void cleanup(const XrViewConfigurationViewFovEPIC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedFov);

        

    cleanup(&s->maxMutableFov);

}


#endif // XRTRANSPORT_EXT_XR_EPIC_view_configuration_fov
#ifdef XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment


static void cleanup(const XrHolographicWindowAttachmentMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->holographicSpace, 1);

        

    
    cleanup_ptr(s->coreWindow, 1);

}




static void cleanup(const XrHolographicWindowAttachmentMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->holographicSpace, 1);

        

    
    cleanup_ptr(s->coreWindow, 1);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_holographic_window_attachment
#ifdef XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection


static void cleanup(const XrCompositionLayerReprojectionInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->reprojectionMode);

}




static void cleanup(const XrCompositionLayerReprojectionPlaneOverrideMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->position);

        

    cleanup(&s->normal);

        

    cleanup(&s->velocity);

}




static void cleanup(const XrCompositionLayerReprojectionInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->reprojectionMode);

}




static void cleanup(const XrCompositionLayerReprojectionPlaneOverrideMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->position);

        

    cleanup(&s->normal);

        

    cleanup(&s->velocity);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_composition_layer_reprojection
#ifdef XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create


static void cleanup(const XrAndroidSurfaceSwapchainCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}




static void cleanup(const XrAndroidSurfaceSwapchainCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}


#endif // XRTRANSPORT_EXT_XR_FB_android_surface_swapchain_create
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state


static void cleanup(const XrSwapchainStateBaseHeaderFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content


static void cleanup(const XrCompositionLayerSecureContentFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrCompositionLayerSecureContentFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_secure_content
#ifdef XRTRANSPORT_EXT_XR_FB_body_tracking


static void cleanup(const XrBodyJointLocationFB* s) {
        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSystemBodyTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}




static void cleanup(const XrBodyTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bodyJointSet);

}




static void cleanup(const XrBodySkeletonJointFB* s) {
        

    cleanup(&s->joint);

        

    cleanup(&s->parentJoint);

        

    cleanup(&s->pose);

}




static void cleanup(const XrBodySkeletonFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->joints, s->jointCount);

}




static void cleanup(const XrBodyJointsLocateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyJointLocationsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->confidence);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointCount);

        

    cleanup(&s->skeletonChangedCount);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bodyJointSet);

}




static void cleanup(const XrBodyJointsLocateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemBodyTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}




static void cleanup(const XrBodyJointLocationsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->confidence);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointCount);

        

    cleanup(&s->skeletonChangedCount);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodySkeletonFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->joints, s->jointCount);

}


#endif // XRTRANSPORT_EXT_XR_FB_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_dpad_binding


static void cleanup(const XrInteractionProfileDpadBindingEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->binding);

        

    cleanup(&s->actionSet);

        

    cleanup(&s->forceThreshold);

        

    cleanup(&s->forceThresholdReleased);

        

    cleanup(&s->centerRegion);

        

    cleanup(&s->wedgeAngle);

        

    cleanup(&s->isSticky);

        

    cleanup_xr(s->onHaptic);

        

    cleanup_xr(s->offHaptic);

}




static void cleanup(const XrInteractionProfileDpadBindingEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->binding);

        

    cleanup(&s->actionSet);

        

    cleanup(&s->forceThreshold);

        

    cleanup(&s->forceThresholdReleased);

        

    cleanup(&s->centerRegion);

        

    cleanup(&s->wedgeAngle);

        

    cleanup(&s->isSticky);

        

    cleanup_xr(s->onHaptic);

        

    cleanup_xr(s->offHaptic);

}


#endif // XRTRANSPORT_EXT_XR_EXT_dpad_binding
#ifdef XRTRANSPORT_EXT_XR_VALVE_analog_threshold


static void cleanup(const XrInteractionProfileAnalogThresholdVALVE* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

        

    cleanup(&s->binding);

        

    cleanup(&s->onThreshold);

        

    cleanup(&s->offThreshold);

        

    cleanup_xr(s->onHaptic);

        

    cleanup_xr(s->offHaptic);

}




static void cleanup(const XrInteractionProfileAnalogThresholdVALVE* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

        

    cleanup(&s->binding);

        

    cleanup(&s->onThreshold);

        

    cleanup(&s->offThreshold);

        

    cleanup_xr(s->onHaptic);

        

    cleanup_xr(s->offHaptic);

}


#endif // XRTRANSPORT_EXT_XR_VALVE_analog_threshold
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range


static void cleanup(const XrHandJointsMotionRangeInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handJointsMotionRange);

}




static void cleanup(const XrHandJointsMotionRangeInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->handJointsMotionRange);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_joints_motion_range
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init


static void cleanup(const XrLoaderInitInfoBaseHeaderKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init
#ifdef XRTRANSPORT_EXT_XR_KHR_loader_init_android


static void cleanup(const XrLoaderInitInfoAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->applicationVM, 1);

        

    
    cleanup_ptr(s->applicationContext, 1);

}




static void cleanup(const XrLoaderInitInfoAndroidKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->applicationVM, 1);

        

    
    cleanup_ptr(s->applicationContext, 1);

}


#endif // XRTRANSPORT_EXT_XR_KHR_loader_init_android
#ifdef XRTRANSPORT_EXT_XR_KHR_vulkan_enable2


static void cleanup(const XrVulkanInstanceCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->pfnGetInstanceProcAddr);

        

    
    cleanup_ptr(s->vulkanCreateInfo, 1);

        

    
    cleanup_ptr(s->vulkanAllocator, 1);

}




static void cleanup(const XrVulkanDeviceCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->pfnGetInstanceProcAddr);

        

    cleanup(&s->vulkanPhysicalDevice);

        

    
    cleanup_ptr(s->vulkanCreateInfo, 1);

        

    
    cleanup_ptr(s->vulkanAllocator, 1);

}




static void cleanup(const XrVulkanGraphicsDeviceGetInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->vulkanInstance);

}




static void cleanup(const XrVulkanInstanceCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->pfnGetInstanceProcAddr);

        

    
    cleanup_ptr(s->vulkanCreateInfo, 1);

        

    
    cleanup_ptr(s->vulkanAllocator, 1);

}




static void cleanup(const XrVulkanDeviceCreateInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->pfnGetInstanceProcAddr);

        

    cleanup(&s->vulkanPhysicalDevice);

        

    
    cleanup_ptr(s->vulkanCreateInfo, 1);

        

    
    cleanup_ptr(s->vulkanAllocator, 1);

}




static void cleanup(const XrVulkanGraphicsDeviceGetInfoKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->vulkanInstance);

}


#endif // XRTRANSPORT_EXT_XR_KHR_vulkan_enable2
#ifdef XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2


static void cleanup(const XrCompositionLayerEquirect2KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->centralHorizontalAngle);

        

    cleanup(&s->upperVerticalAngle);

        

    cleanup(&s->lowerVerticalAngle);

}




static void cleanup(const XrCompositionLayerEquirect2KHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->radius);

        

    cleanup(&s->centralHorizontalAngle);

        

    cleanup(&s->upperVerticalAngle);

        

    cleanup(&s->lowerVerticalAngle);

}


#endif // XRTRANSPORT_EXT_XR_KHR_composition_layer_equirect2
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding


static void cleanup(const XrUuidMSFT* s) {
        

    cleanup_array(s->bytes, 16);

}




static void cleanup(const XrSceneObserverCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSceneCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrNewSceneComputeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedFeatureCount);

        

    
    cleanup_ptr(s->requestedFeatures, s->requestedFeatureCount);

        

    cleanup(&s->consistency);

        

    cleanup(&s->bounds);

}




static void cleanup(const XrVisualMeshComputeLodInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->lod);

}




static void cleanup(const XrSceneSphereBoundMSFT* s) {
        

    cleanup(&s->center);

        

    cleanup(&s->radius);

}




static void cleanup(const XrSceneOrientedBoxBoundMSFT* s) {
        

    cleanup(&s->pose);

        

    cleanup(&s->extents);

}




static void cleanup(const XrSceneFrustumBoundMSFT* s) {
        

    cleanup(&s->pose);

        

    cleanup(&s->fov);

        

    cleanup(&s->farDistance);

}




static void cleanup(const XrSceneBoundsMSFT* s) {
        

    cleanup(&s->space);

        

    cleanup(&s->time);

        

    cleanup(&s->sphereCount);

        

    
    cleanup_ptr(s->spheres, s->sphereCount);

        

    cleanup(&s->boxCount);

        

    
    cleanup_ptr(s->boxes, s->boxCount);

        

    cleanup(&s->frustumCount);

        

    
    cleanup_ptr(s->frustums, s->frustumCount);

}




static void cleanup(const XrSceneComponentMSFT* s) {
        

    cleanup(&s->componentType);

        

    cleanup(&s->id);

        

    cleanup(&s->parentId);

        

    cleanup(&s->updateTime);

}




static void cleanup(const XrSceneComponentsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentCapacityInput);

        

    cleanup(&s->componentCountOutput);

        

    
    cleanup_ptr(s->components, s->componentCapacityInput);

}




static void cleanup(const XrSceneComponentsGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrSceneComponentLocationMSFT* s) {
        

    cleanup(&s->flags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSceneComponentLocationsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationCount);

        

    
    cleanup_ptr(s->locations, s->locationCount);

}




static void cleanup(const XrSceneComponentsLocateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->componentIdCount);

        

    
    cleanup_ptr(s->componentIds, s->componentIdCount);

}




static void cleanup(const XrSceneObjectMSFT* s) {
        

    cleanup(&s->objectType);

}




static void cleanup(const XrSceneObjectsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneObjectCount);

        

    
    cleanup_ptr(s->sceneObjects, s->sceneObjectCount);

}




static void cleanup(const XrSceneComponentParentFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->parentId);

}




static void cleanup(const XrSceneObjectTypesFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->objectTypeCount);

        

    
    cleanup_ptr(s->objectTypes, s->objectTypeCount);

}




static void cleanup(const XrScenePlaneMSFT* s) {
        

    cleanup(&s->alignment);

        

    cleanup(&s->size);

        

    cleanup(&s->meshBufferId);

        

    cleanup(&s->supportsIndicesUint16);

}




static void cleanup(const XrScenePlanesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->scenePlaneCount);

        

    
    cleanup_ptr(s->scenePlanes, s->scenePlaneCount);

}




static void cleanup(const XrScenePlaneAlignmentFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->alignmentCount);

        

    
    cleanup_ptr(s->alignments, s->alignmentCount);

}




static void cleanup(const XrSceneMeshMSFT* s) {
        

    cleanup(&s->meshBufferId);

        

    cleanup(&s->supportsIndicesUint16);

}




static void cleanup(const XrSceneMeshesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneMeshCount);

        

    
    cleanup_ptr(s->sceneMeshes, s->sceneMeshCount);

}




static void cleanup(const XrSceneMeshBuffersGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->meshBufferId);

}




static void cleanup(const XrSceneMeshBuffersMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSceneMeshVertexBufferMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSceneMeshIndicesUint32MSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSceneMeshIndicesUint16MSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSceneObserverCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSceneCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrNewSceneComputeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedFeatureCount);

        

    
    cleanup_ptr(s->requestedFeatures, s->requestedFeatureCount);

        

    cleanup(&s->consistency);

        

    cleanup(&s->bounds);

}




static void cleanup(const XrVisualMeshComputeLodInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->lod);

}




static void cleanup(const XrSceneComponentsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentCapacityInput);

        

    cleanup(&s->componentCountOutput);

        

    
    cleanup_ptr(s->components, s->componentCapacityInput);

}




static void cleanup(const XrSceneComponentsGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrSceneComponentLocationsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationCount);

        

    
    cleanup_ptr(s->locations, s->locationCount);

}




static void cleanup(const XrSceneComponentsLocateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->componentIdCount);

        

    
    cleanup_ptr(s->componentIds, s->componentIdCount);

}




static void cleanup(const XrSceneObjectsMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneObjectCount);

        

    
    cleanup_ptr(s->sceneObjects, s->sceneObjectCount);

}




static void cleanup(const XrSceneComponentParentFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->parentId);

}




static void cleanup(const XrSceneObjectTypesFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->objectTypeCount);

        

    
    cleanup_ptr(s->objectTypes, s->objectTypeCount);

}




static void cleanup(const XrScenePlanesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->scenePlaneCount);

        

    
    cleanup_ptr(s->scenePlanes, s->scenePlaneCount);

}




static void cleanup(const XrScenePlaneAlignmentFilterInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->alignmentCount);

        

    
    cleanup_ptr(s->alignments, s->alignmentCount);

}




static void cleanup(const XrSceneMeshesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneMeshCount);

        

    
    cleanup_ptr(s->sceneMeshes, s->sceneMeshCount);

}




static void cleanup(const XrSceneMeshBuffersGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->meshBufferId);

}




static void cleanup(const XrSceneMeshBuffersMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSceneMeshVertexBufferMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSceneMeshIndicesUint32MSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSceneMeshIndicesUint16MSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization


static void cleanup(const XrSerializedSceneFragmentDataGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneFragmentId);

}




static void cleanup(const XrDeserializeSceneFragmentMSFT* s) {
        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrSceneDeserializeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fragmentCount);

        

    
    cleanup_ptr(s->fragments, s->fragmentCount);

}




static void cleanup(const XrSerializedSceneFragmentDataGetInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneFragmentId);

}




static void cleanup(const XrSceneDeserializeInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fragmentCount);

        

    
    cleanup_ptr(s->fragments, s->fragmentCount);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_understanding_serialization
#ifdef XRTRANSPORT_EXT_XR_FB_display_refresh_rate


static void cleanup(const XrEventDataDisplayRefreshRateChangedFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fromDisplayRefreshRate);

        

    cleanup(&s->toDisplayRefreshRate);

}




static void cleanup(const XrEventDataDisplayRefreshRateChangedFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fromDisplayRefreshRate);

        

    cleanup(&s->toDisplayRefreshRate);

}


#endif // XRTRANSPORT_EXT_XR_FB_display_refresh_rate
#ifdef XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction


static void cleanup(const XrViveTrackerPathsHTCX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->persistentPath);

        

    cleanup(&s->rolePath);

}




static void cleanup(const XrEventDataViveTrackerConnectedHTCX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->paths, 1);

}




static void cleanup(const XrViveTrackerPathsHTCX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->persistentPath);

        

    cleanup(&s->rolePath);

}




static void cleanup(const XrEventDataViveTrackerConnectedHTCX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->paths, 1);

}


#endif // XRTRANSPORT_EXT_XR_HTCX_vive_tracker_interaction
#ifdef XRTRANSPORT_EXT_XR_HTC_facial_tracking


static void cleanup(const XrSystemFacialTrackingPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportEyeFacialTracking);

        

    cleanup(&s->supportLipFacialTracking);

}




static void cleanup(const XrFacialExpressionsHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->sampleTime);

        

    cleanup(&s->expressionCount);

        

    
    cleanup_ptr(s->expressionWeightings, 1);

}




static void cleanup(const XrFacialTrackerCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->facialTrackingType);

}




static void cleanup(const XrSystemFacialTrackingPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportEyeFacialTracking);

        

    cleanup(&s->supportLipFacialTracking);

}




static void cleanup(const XrFacialTrackerCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->facialTrackingType);

}




static void cleanup(const XrFacialExpressionsHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->sampleTime);

        

    cleanup(&s->expressionCount);

        

    
    cleanup_ptr(s->expressionWeightings, 1);

}


#endif // XRTRANSPORT_EXT_XR_HTC_facial_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_color_space


static void cleanup(const XrSystemColorSpacePropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorSpace);

}




static void cleanup(const XrSystemColorSpacePropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorSpace);

}


#endif // XRTRANSPORT_EXT_XR_FB_color_space
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh


static void cleanup(const XrVector4sFB* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

        

    cleanup(&s->z);

        

    cleanup(&s->w);

}




static void cleanup(const XrHandTrackingMeshFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCapacityInput);

        

    cleanup(&s->jointCountOutput);

        

    
    cleanup_ptr(s->jointBindPoses, s->jointCapacityInput);

        

    
    cleanup_ptr(s->jointRadii, s->jointCapacityInput);

        

    
    cleanup_ptr(s->jointParents, s->jointCapacityInput);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertexPositions, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexNormals, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexUVs, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexBlendIndices, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexBlendWeights, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrHandTrackingScaleFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sensorOutput);

        

    cleanup(&s->currentOutput);

        

    cleanup(&s->overrideHandScale);

        

    cleanup(&s->overrideValueInput);

}




static void cleanup(const XrHandTrackingMeshFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCapacityInput);

        

    cleanup(&s->jointCountOutput);

        

    
    cleanup_ptr(s->jointBindPoses, s->jointCapacityInput);

        

    
    cleanup_ptr(s->jointRadii, s->jointCapacityInput);

        

    
    cleanup_ptr(s->jointParents, s->jointCapacityInput);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertexPositions, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexNormals, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexUVs, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexBlendIndices, s->vertexCapacityInput);

        

    
    cleanup_ptr(s->vertexBlendWeights, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrHandTrackingScaleFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sensorOutput);

        

    cleanup(&s->currentOutput);

        

    cleanup(&s->overrideHandScale);

        

    cleanup(&s->overrideValueInput);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_aim


static void cleanup(const XrHandTrackingAimStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

        

    cleanup(&s->aimPose);

        

    cleanup(&s->pinchStrengthIndex);

        

    cleanup(&s->pinchStrengthMiddle);

        

    cleanup(&s->pinchStrengthRing);

        

    cleanup(&s->pinchStrengthLittle);

}




static void cleanup(const XrHandTrackingAimStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

        

    cleanup(&s->aimPose);

        

    cleanup(&s->pinchStrengthIndex);

        

    cleanup(&s->pinchStrengthMiddle);

        

    cleanup(&s->pinchStrengthRing);

        

    cleanup(&s->pinchStrengthLittle);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_aim
#ifdef XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules


static void cleanup(const XrHandCapsuleFB* s) {
        

    cleanup_array(s->points, XR_HAND_TRACKING_CAPSULE_POINT_COUNT_FB);

        

    cleanup(&s->radius);

        

    cleanup(&s->joint);

}




static void cleanup(const XrHandTrackingCapsulesStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->capsules, XR_HAND_TRACKING_CAPSULE_COUNT_FB);

}




static void cleanup(const XrHandTrackingCapsulesStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->capsules, XR_HAND_TRACKING_CAPSULE_COUNT_FB);

}


#endif // XRTRANSPORT_EXT_XR_FB_hand_tracking_capsules
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity


static void cleanup(const XrSystemSpatialEntityPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntity);

}




static void cleanup(const XrSpatialAnchorCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpaceComponentStatusSetInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

        

    cleanup(&s->enabled);

        

    cleanup(&s->timeout);

}




static void cleanup(const XrSpaceComponentStatusFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

        

    cleanup(&s->changePending);

}




static void cleanup(const XrEventDataSpatialAnchorCreateCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrEventDataSpaceSetStatusCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->componentType);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrSystemSpatialEntityPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntity);

}




static void cleanup(const XrSpatialAnchorCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpaceComponentStatusSetInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

        

    cleanup(&s->enabled);

        

    cleanup(&s->timeout);

}




static void cleanup(const XrSpaceComponentStatusFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

        

    cleanup(&s->changePending);

}




static void cleanup(const XrEventDataSpatialAnchorCreateCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrEventDataSpaceSetStatusCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->componentType);

        

    cleanup(&s->enabled);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity
#ifdef XRTRANSPORT_EXT_XR_FB_foveation


static void cleanup(const XrFoveationProfileCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSwapchainCreateInfoFoveationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSwapchainStateFoveationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->profile);

}




static void cleanup(const XrFoveationProfileCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSwapchainCreateInfoFoveationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSwapchainStateFoveationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->profile);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_configuration


static void cleanup(const XrFoveationLevelProfileCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->level);

        

    cleanup(&s->verticalOffset);

        

    cleanup(&s->dynamic);

}




static void cleanup(const XrFoveationLevelProfileCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->level);

        

    cleanup(&s->verticalOffset);

        

    cleanup(&s->dynamic);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation_configuration
#ifdef XRTRANSPORT_EXT_XR_FB_keyboard_tracking


static void cleanup(const XrSystemKeyboardTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsKeyboardTracking);

}




static void cleanup(const XrKeyboardTrackingDescriptionFB* s) {
        

    cleanup(&s->trackedKeyboardId);

        

    cleanup(&s->size);

        

    cleanup(&s->flags);

        

    cleanup_array(s->name, XR_MAX_KEYBOARD_TRACKING_NAME_SIZE_FB);

}




static void cleanup(const XrKeyboardSpaceCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->trackedKeyboardId);

}




static void cleanup(const XrKeyboardTrackingQueryFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrKeyboardSpaceCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->trackedKeyboardId);

}




static void cleanup(const XrKeyboardTrackingQueryFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSystemKeyboardTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsKeyboardTracking);

}


#endif // XRTRANSPORT_EXT_XR_FB_keyboard_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_triangle_mesh


static void cleanup(const XrTriangleMeshCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->windingOrder);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertexBuffer, 1);

        

    cleanup(&s->triangleCount);

        

    
    cleanup_ptr(s->indexBuffer, 1);

}




static void cleanup(const XrTriangleMeshCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->windingOrder);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertexBuffer, 1);

        

    cleanup(&s->triangleCount);

        

    
    cleanup_ptr(s->indexBuffer, 1);

}


#endif // XRTRANSPORT_EXT_XR_FB_triangle_mesh
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough


static void cleanup(const XrSystemPassthroughPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsPassthrough);

}




static void cleanup(const XrSystemPassthroughProperties2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->capabilities);

}




static void cleanup(const XrPassthroughCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrPassthroughLayerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->passthrough);

        

    cleanup(&s->flags);

        

    cleanup(&s->purpose);

}




static void cleanup(const XrCompositionLayerPassthroughFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->space);

        

    cleanup(&s->layerHandle);

}




static void cleanup(const XrGeometryInstanceCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layer);

        

    cleanup(&s->mesh);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrGeometryInstanceTransformFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrPassthroughStyleFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->textureOpacityFactor);

        

    cleanup(&s->edgeColor);

}




static void cleanup(const XrPassthroughColorMapMonoToRgbaFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB);

}




static void cleanup(const XrPassthroughColorMapMonoToMonoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB);

}




static void cleanup(const XrPassthroughBrightnessContrastSaturationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->brightness);

        

    cleanup(&s->contrast);

        

    cleanup(&s->saturation);

}




static void cleanup(const XrEventDataPassthroughStateChangedFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSystemPassthroughPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsPassthrough);

}




static void cleanup(const XrPassthroughCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrPassthroughLayerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->passthrough);

        

    cleanup(&s->flags);

        

    cleanup(&s->purpose);

}




static void cleanup(const XrCompositionLayerPassthroughFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->space);

        

    cleanup(&s->layerHandle);

}




static void cleanup(const XrGeometryInstanceCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layer);

        

    cleanup(&s->mesh);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrGeometryInstanceTransformFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrSystemPassthroughProperties2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->capabilities);

}




static void cleanup(const XrPassthroughStyleFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->textureOpacityFactor);

        

    cleanup(&s->edgeColor);

}




static void cleanup(const XrPassthroughColorMapMonoToRgbaFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB);

}




static void cleanup(const XrPassthroughColorMapMonoToMonoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->textureColorMap, XR_PASSTHROUGH_COLOR_MAP_MONO_SIZE_FB);

}




static void cleanup(const XrPassthroughBrightnessContrastSaturationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->brightness);

        

    cleanup(&s->contrast);

        

    cleanup(&s->saturation);

}




static void cleanup(const XrEventDataPassthroughStateChangedFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_FB_passthrough
#ifdef XRTRANSPORT_EXT_XR_FB_render_model


static void cleanup(const XrRenderModelPathInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->path);

}




static void cleanup(const XrRenderModelPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vendorId);

        

    cleanup_array(s->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB);

        

    cleanup(&s->modelKey);

        

    cleanup(&s->modelVersion);

        

    cleanup(&s->flags);

}




static void cleanup(const XrRenderModelBufferFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrRenderModelLoadInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->modelKey);

}




static void cleanup(const XrSystemRenderModelPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsRenderModelLoading);

}




static void cleanup(const XrRenderModelCapabilitiesRequestFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrRenderModelPathInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->path);

}




static void cleanup(const XrRenderModelPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vendorId);

        

    cleanup_array(s->modelName, XR_MAX_RENDER_MODEL_NAME_SIZE_FB);

        

    cleanup(&s->modelKey);

        

    cleanup(&s->modelVersion);

        

    cleanup(&s->flags);

}




static void cleanup(const XrRenderModelBufferFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrRenderModelLoadInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->modelKey);

}




static void cleanup(const XrSystemRenderModelPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsRenderModelLoading);

}




static void cleanup(const XrRenderModelCapabilitiesRequestFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_FB_render_model
#ifdef XRTRANSPORT_EXT_XR_KHR_binding_modification


static void cleanup(const XrBindingModificationsKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bindingModificationCount);

        

    #error "auto-generator doesn't support double pointers (s->bindingModifications)"
    None
}




static void cleanup(const XrBindingModificationBaseHeaderKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrBindingModificationsKHR* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bindingModificationCount);

        

    #error "auto-generator doesn't support double pointers (s->bindingModifications)"
    None
}


#endif // XRTRANSPORT_EXT_XR_KHR_binding_modification
#ifdef XRTRANSPORT_EXT_XR_VARJO_foveated_rendering


static void cleanup(const XrViewLocateFoveatedRenderingVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->foveatedRenderingActive);

}




static void cleanup(const XrFoveatedViewConfigurationViewVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->foveatedRenderingActive);

}




static void cleanup(const XrSystemFoveatedRenderingPropertiesVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFoveatedRendering);

}




static void cleanup(const XrViewLocateFoveatedRenderingVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->foveatedRenderingActive);

}




static void cleanup(const XrFoveatedViewConfigurationViewVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->foveatedRenderingActive);

}




static void cleanup(const XrSystemFoveatedRenderingPropertiesVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFoveatedRendering);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_foveated_rendering
#ifdef XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test


static void cleanup(const XrCompositionLayerDepthTestVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->depthTestRangeNearZ);

        

    cleanup(&s->depthTestRangeFarZ);

}




static void cleanup(const XrCompositionLayerDepthTestVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->depthTestRangeNearZ);

        

    cleanup(&s->depthTestRangeFarZ);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#endif // XRTRANSPORT_EXT_XR_VARJO_environment_depth_estimation
#ifdef XRTRANSPORT_EXT_XR_VARJO_marker_tracking


static void cleanup(const XrSystemMarkerTrackingPropertiesVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsMarkerTracking);

}




static void cleanup(const XrEventDataMarkerTrackingUpdateVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerId);

        

    cleanup(&s->isActive);

        

    cleanup(&s->isPredicted);

        

    cleanup(&s->time);

}




static void cleanup(const XrMarkerSpaceCreateInfoVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerId);

        

    cleanup(&s->poseInMarkerSpace);

}




static void cleanup(const XrSystemMarkerTrackingPropertiesVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsMarkerTracking);

}




static void cleanup(const XrEventDataMarkerTrackingUpdateVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerId);

        

    cleanup(&s->isActive);

        

    cleanup(&s->isPredicted);

        

    cleanup(&s->time);

}




static void cleanup(const XrMarkerSpaceCreateInfoVARJO* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerId);

        

    cleanup(&s->poseInMarkerSpace);

}


#endif // XRTRANSPORT_EXT_XR_VARJO_marker_tracking
#ifdef XRTRANSPORT_EXT_XR_VARJO_view_offset
#endif // XRTRANSPORT_EXT_XR_VARJO_view_offset
#ifdef XRTRANSPORT_EXT_XR_ML_frame_end_info


static void cleanup(const XrFrameEndInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->focusDistance);

        

    cleanup(&s->flags);

}




static void cleanup(const XrFrameEndInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->focusDistance);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_ML_frame_end_info
#ifdef XRTRANSPORT_EXT_XR_ML_global_dimmer


static void cleanup(const XrGlobalDimmerFrameEndInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->dimmerValue);

        

    cleanup(&s->flags);

}




static void cleanup(const XrGlobalDimmerFrameEndInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->dimmerValue);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_ML_global_dimmer
#ifdef XRTRANSPORT_EXT_XR_ML_compat


static void cleanup(const XrCoordinateSpaceCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->cfuid);

        

    cleanup(&s->poseInCoordinateSpace);

}


#endif // XRTRANSPORT_EXT_XR_ML_compat
#ifdef XRTRANSPORT_EXT_XR_ML_marker_understanding


static void cleanup(const XrSystemMarkerUnderstandingPropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsMarkerUnderstanding);

}




static void cleanup(const XrMarkerDetectorCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->profile);

        

    cleanup(&s->markerType);

}




static void cleanup(const XrMarkerDetectorArucoInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->arucoDict);

}




static void cleanup(const XrMarkerDetectorSizeInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerLength);

}




static void cleanup(const XrMarkerDetectorAprilTagInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->aprilTagDict);

}




static void cleanup(const XrMarkerDetectorCustomProfileInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fpsHint);

        

    cleanup(&s->resolutionHint);

        

    cleanup(&s->cameraHint);

        

    cleanup(&s->cornerRefineMethod);

        

    cleanup(&s->useEdgeRefinement);

        

    cleanup(&s->fullAnalysisIntervalHint);

}




static void cleanup(const XrMarkerDetectorSnapshotInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrMarkerDetectorStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->state);

}




static void cleanup(const XrMarkerSpaceCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerDetector);

        

    cleanup(&s->marker);

        

    cleanup(&s->poseInMarkerSpace);

}




static void cleanup(const XrSystemMarkerUnderstandingPropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsMarkerUnderstanding);

}




static void cleanup(const XrMarkerDetectorCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->profile);

        

    cleanup(&s->markerType);

}




static void cleanup(const XrMarkerDetectorArucoInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->arucoDict);

}




static void cleanup(const XrMarkerDetectorSizeInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerLength);

}




static void cleanup(const XrMarkerDetectorAprilTagInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->aprilTagDict);

}




static void cleanup(const XrMarkerDetectorCustomProfileInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fpsHint);

        

    cleanup(&s->resolutionHint);

        

    cleanup(&s->cameraHint);

        

    cleanup(&s->cornerRefineMethod);

        

    cleanup(&s->useEdgeRefinement);

        

    cleanup(&s->fullAnalysisIntervalHint);

}




static void cleanup(const XrMarkerDetectorSnapshotInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrMarkerDetectorStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->state);

}




static void cleanup(const XrMarkerSpaceCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerDetector);

        

    cleanup(&s->marker);

        

    cleanup(&s->poseInMarkerSpace);

}


#endif // XRTRANSPORT_EXT_XR_ML_marker_understanding
#ifdef XRTRANSPORT_EXT_XR_ML_localization_map


static void cleanup(const XrLocalizationMapML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML);

        

    cleanup(&s->mapUuid);

        

    cleanup(&s->mapType);

}




static void cleanup(const XrEventDataLocalizationChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->state);

        

    cleanup(&s->map);

        

    cleanup(&s->confidence);

        

    cleanup(&s->errorFlags);

}




static void cleanup(const XrLocalizationMapQueryInfoBaseHeaderML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrMapLocalizationRequestInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->mapUuid);

}




static void cleanup(const XrLocalizationMapImportInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->size);

        

    
    cleanup_ptr(s->data, s->size);

}




static void cleanup(const XrLocalizationEnableEventsInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrLocalizationMapML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->name, XR_MAX_LOCALIZATION_MAP_NAME_LENGTH_ML);

        

    cleanup(&s->mapUuid);

        

    cleanup(&s->mapType);

}




static void cleanup(const XrEventDataLocalizationChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->state);

        

    cleanup(&s->map);

        

    cleanup(&s->confidence);

        

    cleanup(&s->errorFlags);

}




static void cleanup(const XrMapLocalizationRequestInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->mapUuid);

}




static void cleanup(const XrLocalizationMapImportInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->size);

        

    
    cleanup_ptr(s->data, s->size);

}




static void cleanup(const XrLocalizationEnableEventsInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}


#endif // XRTRANSPORT_EXT_XR_ML_localization_map
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors


static void cleanup(const XrSpatialAnchorsCreateInfoBaseHeaderML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialAnchorsCreateInfoFromPoseML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->poseInBaseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrCreateSpatialAnchorsCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

}




static void cleanup(const XrSpatialAnchorStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->confidence);

}




static void cleanup(const XrSpatialAnchorsCreateInfoFromPoseML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->poseInBaseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrCreateSpatialAnchorsCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

}




static void cleanup(const XrSpatialAnchorStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->confidence);

}


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors
#ifdef XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage


static void cleanup(const XrSpatialAnchorsCreateStorageInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialAnchorsQueryInfoBaseHeaderML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialAnchorsQueryInfoRadiusML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->center);

        

    cleanup(&s->time);

        

    cleanup(&s->radius);

}




static void cleanup(const XrSpatialAnchorsQueryCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->uuidCapacityInput);

        

    cleanup(&s->uuidCountOutput);

        

    
    cleanup_ptr(s->uuids, s->uuidCapacityInput);

}




static void cleanup(const XrSpatialAnchorsCreateInfoFromUuidsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->storage);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsPublishInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchorCount);

        

    
    cleanup_ptr(s->anchors, s->anchorCount);

        

    cleanup(&s->expiration);

}




static void cleanup(const XrSpatialAnchorsPublishCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsDeleteInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsDeleteCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

        

    cleanup(&s->expiration);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrSpatialAnchorsPublishCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}




static void cleanup(const XrSpatialAnchorsDeleteCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}




static void cleanup(const XrSpatialAnchorCompletionResultML* s) {
        

    cleanup(&s->uuid);

        

    cleanup(&s->result);

}




static void cleanup(const XrSpatialAnchorsCreateStorageInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialAnchorsQueryInfoRadiusML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->center);

        

    cleanup(&s->time);

        

    cleanup(&s->radius);

}




static void cleanup(const XrSpatialAnchorsQueryCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->uuidCapacityInput);

        

    cleanup(&s->uuidCountOutput);

        

    
    cleanup_ptr(s->uuids, s->uuidCapacityInput);

}




static void cleanup(const XrSpatialAnchorsCreateInfoFromUuidsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->storage);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsPublishInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchorCount);

        

    
    cleanup_ptr(s->anchors, s->anchorCount);

        

    cleanup(&s->expiration);

}




static void cleanup(const XrSpatialAnchorsPublishCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsDeleteInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpatialAnchorsDeleteCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

        

    cleanup(&s->expiration);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrSpatialAnchorsPublishCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}




static void cleanup(const XrSpatialAnchorsDeleteCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}




static void cleanup(const XrSpatialAnchorsUpdateExpirationCompletionDetailsML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCount);

        

    
    cleanup_ptr(s->results, s->resultCount);

}


#endif // XRTRANSPORT_EXT_XR_ML_spatial_anchors_storage
#ifdef XRTRANSPORT_EXT_XR_ML_user_calibration


static void cleanup(const XrEventDataHeadsetFitChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

        

    cleanup(&s->time);

}




static void cleanup(const XrEventDataEyeCalibrationChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

}




static void cleanup(const XrUserCalibrationEnableEventsInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrEventDataHeadsetFitChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

        

    cleanup(&s->time);

}




static void cleanup(const XrEventDataEyeCalibrationChangedML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->status);

}




static void cleanup(const XrUserCalibrationEnableEventsInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}


#endif // XRTRANSPORT_EXT_XR_ML_user_calibration
#ifdef XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence


static void cleanup(const XrSpatialAnchorPersistenceNameMSFT* s) {
        

    cleanup_array(s->name, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_MSFT);

}




static void cleanup(const XrSpatialAnchorPersistenceInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spatialAnchorPersistenceName);

        

    cleanup(&s->spatialAnchor);

}




static void cleanup(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spatialAnchorStore);

        

    cleanup(&s->spatialAnchorPersistenceName);

}




static void cleanup(const XrSpatialAnchorPersistenceInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spatialAnchorPersistenceName);

        

    cleanup(&s->spatialAnchor);

}




static void cleanup(const XrSpatialAnchorFromPersistedAnchorCreateInfoMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spatialAnchorStore);

        

    cleanup(&s->spatialAnchorPersistenceName);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_spatial_anchor_persistence
#ifdef XRTRANSPORT_EXT_XR_MSFT_scene_marker


static void cleanup(const XrSceneMarkerMSFT* s) {
        

    cleanup(&s->markerType);

        

    cleanup(&s->lastSeenTime);

        

    cleanup(&s->center);

        

    cleanup(&s->size);

}




static void cleanup(const XrSceneMarkersMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneMarkerCapacityInput);

        

    
    cleanup_ptr(s->sceneMarkers, s->sceneMarkerCapacityInput);

}




static void cleanup(const XrSceneMarkerTypeFilterMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerTypeCount);

        

    
    cleanup_ptr(s->markerTypes, s->markerTypeCount);

}




static void cleanup(const XrSceneMarkerQRCodeMSFT* s) {
        

    cleanup(&s->symbolType);

        

    cleanup(&s->version);

}




static void cleanup(const XrSceneMarkerQRCodesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->qrCodeCapacityInput);

        

    
    cleanup_ptr(s->qrCodes, s->qrCodeCapacityInput);

}




static void cleanup(const XrSceneMarkersMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sceneMarkerCapacityInput);

        

    
    cleanup_ptr(s->sceneMarkers, s->sceneMarkerCapacityInput);

}




static void cleanup(const XrSceneMarkerTypeFilterMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->markerTypeCount);

        

    
    cleanup_ptr(s->markerTypes, s->markerTypeCount);

}




static void cleanup(const XrSceneMarkerQRCodesMSFT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->qrCodeCapacityInput);

        

    
    cleanup_ptr(s->qrCodes, s->qrCodeCapacityInput);

}


#endif // XRTRANSPORT_EXT_XR_MSFT_scene_marker
#ifdef XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#endif // XRTRANSPORT_EXT_XR_KHR_extended_struct_name_lengths
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_query


static void cleanup(const XrSpaceQueryInfoBaseHeaderFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpaceFilterInfoBaseHeaderFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpaceQueryInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->queryAction);

        

    cleanup(&s->maxResultCount);

        

    cleanup(&s->timeout);

        

    cleanup_xr(s->filter);

        

    cleanup_xr(s->excludeFilter);

}




static void cleanup(const XrSpaceStorageLocationFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

}




static void cleanup(const XrSpaceUuidFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpaceComponentFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrSpaceQueryResultFB* s) {
        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSpaceQueryResultsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCapacityInput);

        

    cleanup(&s->resultCountOutput);

        

    
    cleanup_ptr(s->results, s->resultCapacityInput);

}




static void cleanup(const XrEventDataSpaceQueryResultsAvailableFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

}




static void cleanup(const XrEventDataSpaceQueryCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSpaceQueryInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->queryAction);

        

    cleanup(&s->maxResultCount);

        

    cleanup(&s->timeout);

        

    cleanup_xr(s->filter);

        

    cleanup_xr(s->excludeFilter);

}




static void cleanup(const XrSpaceQueryResultsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->resultCapacityInput);

        

    cleanup(&s->resultCountOutput);

        

    
    cleanup_ptr(s->results, s->resultCapacityInput);

}




static void cleanup(const XrSpaceStorageLocationFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

}




static void cleanup(const XrSpaceUuidFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSpaceComponentFilterInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrEventDataSpaceQueryResultsAvailableFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

}




static void cleanup(const XrEventDataSpaceQueryCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_query
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage


static void cleanup(const XrSpaceSaveInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->location);

        

    cleanup(&s->persistenceMode);

}




static void cleanup(const XrSpaceEraseInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceSaveCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceEraseCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->location);

}




static void cleanup(const XrSpaceSaveInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->location);

        

    cleanup(&s->persistenceMode);

}




static void cleanup(const XrSpaceEraseInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceSaveCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceEraseCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

        

    cleanup(&s->space);

        

    cleanup(&s->uuid);

        

    cleanup(&s->location);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage
#ifdef XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#endif // XRTRANSPORT_EXT_XR_OCULUS_audio_device_guid
#ifdef XRTRANSPORT_EXT_XR_FB_foveation_vulkan


static void cleanup(const XrSwapchainImageFoveationVulkanFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrSwapchainImageFoveationVulkanFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->image);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}


#endif // XRTRANSPORT_EXT_XR_FB_foveation_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface


static void cleanup(const XrSwapchainStateAndroidSurfaceDimensionsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrSwapchainStateAndroidSurfaceDimensionsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_android_surface
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es


static void cleanup(const XrSwapchainStateSamplerOpenGLESFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minFilter);

        

    cleanup(&s->magFilter);

        

    cleanup(&s->wrapModeS);

        

    cleanup(&s->wrapModeT);

        

    cleanup(&s->swizzleRed);

        

    cleanup(&s->swizzleGreen);

        

    cleanup(&s->swizzleBlue);

        

    cleanup(&s->swizzleAlpha);

        

    cleanup(&s->maxAnisotropy);

        

    cleanup(&s->borderColor);

}




static void cleanup(const XrSwapchainStateSamplerOpenGLESFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minFilter);

        

    cleanup(&s->magFilter);

        

    cleanup(&s->wrapModeS);

        

    cleanup(&s->wrapModeT);

        

    cleanup(&s->swizzleRed);

        

    cleanup(&s->swizzleGreen);

        

    cleanup(&s->swizzleBlue);

        

    cleanup(&s->swizzleAlpha);

        

    cleanup(&s->maxAnisotropy);

        

    cleanup(&s->borderColor);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_opengl_es
#ifdef XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan


static void cleanup(const XrSwapchainStateSamplerVulkanFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minFilter);

        

    cleanup(&s->magFilter);

        

    cleanup(&s->mipmapMode);

        

    cleanup(&s->wrapModeS);

        

    cleanup(&s->wrapModeT);

        

    cleanup(&s->swizzleRed);

        

    cleanup(&s->swizzleGreen);

        

    cleanup(&s->swizzleBlue);

        

    cleanup(&s->swizzleAlpha);

        

    cleanup(&s->maxAnisotropy);

        

    cleanup(&s->borderColor);

}




static void cleanup(const XrSwapchainStateSamplerVulkanFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->minFilter);

        

    cleanup(&s->magFilter);

        

    cleanup(&s->mipmapMode);

        

    cleanup(&s->wrapModeS);

        

    cleanup(&s->wrapModeT);

        

    cleanup(&s->swizzleRed);

        

    cleanup(&s->swizzleGreen);

        

    cleanup(&s->swizzleBlue);

        

    cleanup(&s->swizzleAlpha);

        

    cleanup(&s->maxAnisotropy);

        

    cleanup(&s->borderColor);

}


#endif // XRTRANSPORT_EXT_XR_FB_swapchain_update_state_vulkan
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing


static void cleanup(const XrSpaceShareInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup(&s->userCount);

        

    
    cleanup_ptr(s->users, s->userCount);

}




static void cleanup(const XrEventDataSpaceShareCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSpaceShareInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup(&s->userCount);

        

    
    cleanup_ptr(s->users, s->userCount);

}




static void cleanup(const XrEventDataSpaceShareCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_FB_space_warp


static void cleanup(const XrCompositionLayerSpaceWarpInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->motionVectorSubImage);

        

    cleanup(&s->appSpaceDeltaPose);

        

    cleanup(&s->depthSubImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrSystemSpaceWarpPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedMotionVectorImageRectWidth);

        

    cleanup(&s->recommendedMotionVectorImageRectHeight);

}




static void cleanup(const XrCompositionLayerSpaceWarpInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->motionVectorSubImage);

        

    cleanup(&s->appSpaceDeltaPose);

        

    cleanup(&s->depthSubImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrSystemSpaceWarpPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedMotionVectorImageRectWidth);

        

    cleanup(&s->recommendedMotionVectorImageRectHeight);

}


#endif // XRTRANSPORT_EXT_XR_FB_space_warp
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope


static void cleanup(const XrHapticAmplitudeEnvelopeVibrationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->duration);

        

    cleanup(&s->amplitudeCount);

        

    
    cleanup_ptr(s->amplitudes, s->amplitudeCount);

}




static void cleanup(const XrHapticAmplitudeEnvelopeVibrationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->duration);

        

    cleanup(&s->amplitudeCount);

        

    
    cleanup_ptr(s->amplitudes, s->amplitudeCount);

}


#endif // XRTRANSPORT_EXT_XR_FB_haptic_amplitude_envelope
#ifdef XRTRANSPORT_EXT_XR_FB_scene


static void cleanup(const XrOffset3DfFB* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

        

    cleanup(&s->z);

}




static void cleanup(const XrRect3DfFB* s) {
        

    cleanup(&s->offset);

        

    cleanup(&s->extent);

}




static void cleanup(const XrSemanticLabelsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrRoomLayoutFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->floorUuid);

        

    cleanup(&s->ceilingUuid);

        

    cleanup(&s->wallUuidCapacityInput);

        

    cleanup(&s->wallUuidCountOutput);

        

    
    cleanup_ptr(s->wallUuids, s->wallUuidCapacityInput);

}




static void cleanup(const XrBoundary2DFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSemanticLabelsSupportInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    
    cleanup_ptr(s->recognizedLabels, count_null_terminated(s->recognizedLabels));

}




static void cleanup(const XrSemanticLabelsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrRoomLayoutFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->floorUuid);

        

    cleanup(&s->ceilingUuid);

        

    cleanup(&s->wallUuidCapacityInput);

        

    cleanup(&s->wallUuidCountOutput);

        

    
    cleanup_ptr(s->wallUuids, s->wallUuidCapacityInput);

}




static void cleanup(const XrBoundary2DFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSemanticLabelsSupportInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    
    cleanup_ptr(s->recognizedLabels, count_null_terminated(s->recognizedLabels));

}


#endif // XRTRANSPORT_EXT_XR_FB_scene
#ifdef XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control


static void cleanup(const XrDigitalLensControlALMALENCE* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_ALMALENCE_digital_lens_control
#ifdef XRTRANSPORT_EXT_XR_FB_scene_capture


static void cleanup(const XrEventDataSceneCaptureCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSceneCaptureRequestInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestByteCount);

        

    
    cleanup_ptr(s->request, s->requestByteCount);

}




static void cleanup(const XrEventDataSceneCaptureCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSceneCaptureRequestInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestByteCount);

        

    
    cleanup_ptr(s->request, s->requestByteCount);

}


#endif // XRTRANSPORT_EXT_XR_FB_scene_capture
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_container


static void cleanup(const XrSpaceContainerFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCapacityInput);

        

    cleanup(&s->uuidCountOutput);

        

    
    cleanup_ptr(s->uuids, s->uuidCapacityInput);

}




static void cleanup(const XrSpaceContainerFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCapacityInput);

        

    cleanup(&s->uuidCountOutput);

        

    
    cleanup_ptr(s->uuids, s->uuidCapacityInput);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_container
#ifdef XRTRANSPORT_EXT_XR_META_foveation_eye_tracked


static void cleanup(const XrFoveationEyeTrackedProfileCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrFoveationEyeTrackedStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->foveationCenter, XR_FOVEATION_CENTER_SIZE_META);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSystemFoveationEyeTrackedPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFoveationEyeTracked);

}




static void cleanup(const XrFoveationEyeTrackedProfileCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrFoveationEyeTrackedStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->foveationCenter, XR_FOVEATION_CENTER_SIZE_META);

        

    cleanup(&s->flags);

}




static void cleanup(const XrSystemFoveationEyeTrackedPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFoveationEyeTracked);

}


#endif // XRTRANSPORT_EXT_XR_META_foveation_eye_tracked
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking


static void cleanup(const XrSystemFaceTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFaceTracking);

}




static void cleanup(const XrFaceTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->faceExpressionSet);

}




static void cleanup(const XrFaceExpressionInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}




static void cleanup(const XrFaceExpressionStatusFB* s) {
        

    cleanup(&s->isValid);

        

    cleanup(&s->isEyeFollowingBlendshapesValid);

}




static void cleanup(const XrFaceExpressionWeightsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->weightCount);

        

    
    cleanup_ptr(s->weights, s->weightCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidences, s->confidenceCount);

        

    cleanup(&s->status);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemFaceTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFaceTracking);

}




static void cleanup(const XrFaceTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->faceExpressionSet);

}




static void cleanup(const XrFaceExpressionInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}




static void cleanup(const XrFaceExpressionWeightsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->weightCount);

        

    
    cleanup_ptr(s->weights, s->weightCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidences, s->confidenceCount);

        

    cleanup(&s->status);

        

    cleanup(&s->time);

}


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking
#ifdef XRTRANSPORT_EXT_XR_FB_eye_tracking_social


static void cleanup(const XrEyeGazeFB* s) {
        

    cleanup(&s->isValid);

        

    cleanup(&s->gazePose);

        

    cleanup(&s->gazeConfidence);

}




static void cleanup(const XrEyeTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEyeGazesInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemEyeTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEyeTracking);

}




static void cleanup(const XrEyeGazesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->gaze, XR_EYE_POSITION_COUNT_FB);

        

    cleanup(&s->time);

}




static void cleanup(const XrEyeTrackerCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEyeGazesInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrEyeGazesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->gaze, XR_EYE_POSITION_COUNT_FB);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemEyeTrackingPropertiesFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEyeTracking);

}


#endif // XRTRANSPORT_EXT_XR_FB_eye_tracking_social
#ifdef XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands


static void cleanup(const XrPassthroughKeyboardHandsIntensityFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->leftHandIntensity);

        

    cleanup(&s->rightHandIntensity);

}




static void cleanup(const XrPassthroughKeyboardHandsIntensityFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->leftHandIntensity);

        

    cleanup(&s->rightHandIntensity);

}


#endif // XRTRANSPORT_EXT_XR_FB_passthrough_keyboard_hands
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_settings


static void cleanup(const XrCompositionLayerSettingsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

}




static void cleanup(const XrCompositionLayerSettingsFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_settings
#ifdef XRTRANSPORT_EXT_XR_FB_haptic_pcm


static void cleanup(const XrHapticPcmVibrationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

        

    cleanup(&s->sampleRate);

        

    cleanup(&s->append);

        

    
    cleanup_ptr(s->samplesConsumed, 1);

}




static void cleanup(const XrDevicePcmSampleRateStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sampleRate);

}




static void cleanup(const XrHapticPcmVibrationFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

        

    cleanup(&s->sampleRate);

        

    cleanup(&s->append);

        

    
    cleanup_ptr(s->samplesConsumed, 1);

}




static void cleanup(const XrDevicePcmSampleRateStateFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sampleRate);

}


#endif // XRTRANSPORT_EXT_XR_FB_haptic_pcm
#ifdef XRTRANSPORT_EXT_XR_EXT_frame_synthesis


static void cleanup(const XrFrameSynthesisInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->motionVectorSubImage);

        

    cleanup(&s->motionVectorScale);

        

    cleanup(&s->motionVectorOffset);

        

    cleanup(&s->appSpaceDeltaPose);

        

    cleanup(&s->depthSubImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrFrameSynthesisConfigViewEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedMotionVectorImageRectWidth);

        

    cleanup(&s->recommendedMotionVectorImageRectHeight);

}




static void cleanup(const XrFrameSynthesisInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->motionVectorSubImage);

        

    cleanup(&s->motionVectorScale);

        

    cleanup(&s->motionVectorOffset);

        

    cleanup(&s->appSpaceDeltaPose);

        

    cleanup(&s->depthSubImage);

        

    cleanup(&s->minDepth);

        

    cleanup(&s->maxDepth);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrFrameSynthesisConfigViewEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedMotionVectorImageRectWidth);

        

    cleanup(&s->recommendedMotionVectorImageRectHeight);

}


#endif // XRTRANSPORT_EXT_XR_EXT_frame_synthesis
#ifdef XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test


static void cleanup(const XrCompositionLayerDepthTestFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->depthMask);

        

    cleanup(&s->compareOp);

}




static void cleanup(const XrCompositionLayerDepthTestFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->depthMask);

        

    cleanup(&s->compareOp);

}


#endif // XRTRANSPORT_EXT_XR_FB_composition_layer_depth_test
#ifdef XRTRANSPORT_EXT_XR_META_local_dimming


static void cleanup(const XrLocalDimmingFrameEndInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->localDimmingMode);

}




static void cleanup(const XrLocalDimmingFrameEndInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->localDimmingMode);

}


#endif // XRTRANSPORT_EXT_XR_META_local_dimming
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_preferences


static void cleanup(const XrPassthroughPreferencesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrPassthroughPreferencesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_preferences
#ifdef XRTRANSPORT_EXT_XR_META_virtual_keyboard


static void cleanup(const XrSystemVirtualKeyboardPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsVirtualKeyboard);

}




static void cleanup(const XrVirtualKeyboardCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrVirtualKeyboardSpaceCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationType);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

}




static void cleanup(const XrVirtualKeyboardLocationInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationType);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->scale);

}




static void cleanup(const XrVirtualKeyboardModelVisibilitySetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->visible);

}




static void cleanup(const XrVirtualKeyboardAnimationStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->animationIndex);

        

    cleanup(&s->fraction);

}




static void cleanup(const XrVirtualKeyboardModelAnimationStatesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->stateCapacityInput);

        

    cleanup(&s->stateCountOutput);

        

    
    cleanup_ptr(s->states, s->stateCapacityInput);

}




static void cleanup(const XrVirtualKeyboardTextureDataMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->textureWidth);

        

    cleanup(&s->textureHeight);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrVirtualKeyboardInputInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->inputSource);

        

    cleanup(&s->inputSpace);

        

    cleanup(&s->inputPoseInSpace);

        

    cleanup(&s->inputState);

}




static void cleanup(const XrVirtualKeyboardTextContextChangeInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->textContext, count_null_terminated(s->textContext));

}




static void cleanup(const XrEventDataVirtualKeyboardCommitTextMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

        

    cleanup_array(s->text, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META);

}




static void cleanup(const XrEventDataVirtualKeyboardBackspaceMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardEnterMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardShownMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardHiddenMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrSystemVirtualKeyboardPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsVirtualKeyboard);

}




static void cleanup(const XrVirtualKeyboardCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrVirtualKeyboardSpaceCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationType);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

}




static void cleanup(const XrVirtualKeyboardLocationInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationType);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->scale);

}




static void cleanup(const XrVirtualKeyboardModelVisibilitySetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->visible);

}




static void cleanup(const XrVirtualKeyboardAnimationStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->animationIndex);

        

    cleanup(&s->fraction);

}




static void cleanup(const XrVirtualKeyboardModelAnimationStatesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->stateCapacityInput);

        

    cleanup(&s->stateCountOutput);

        

    
    cleanup_ptr(s->states, s->stateCapacityInput);

}




static void cleanup(const XrVirtualKeyboardTextureDataMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->textureWidth);

        

    cleanup(&s->textureHeight);

        

    cleanup(&s->bufferCapacityInput);

        

    cleanup(&s->bufferCountOutput);

        

    
    cleanup_ptr(s->buffer, s->bufferCapacityInput);

}




static void cleanup(const XrVirtualKeyboardInputInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->inputSource);

        

    cleanup(&s->inputSpace);

        

    cleanup(&s->inputPoseInSpace);

        

    cleanup(&s->inputState);

}




static void cleanup(const XrVirtualKeyboardTextContextChangeInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    
    cleanup_ptr(s->textContext, count_null_terminated(s->textContext));

}




static void cleanup(const XrEventDataVirtualKeyboardCommitTextMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

        

    cleanup_array(s->text, XR_MAX_VIRTUAL_KEYBOARD_COMMIT_TEXT_SIZE_META);

}




static void cleanup(const XrEventDataVirtualKeyboardBackspaceMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardEnterMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardShownMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}




static void cleanup(const XrEventDataVirtualKeyboardHiddenMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->keyboard);

}


#endif // XRTRANSPORT_EXT_XR_META_virtual_keyboard
#ifdef XRTRANSPORT_EXT_XR_OCULUS_external_camera


static void cleanup(const XrExternalCameraIntrinsicsOCULUS* s) {
        

    cleanup(&s->lastChangeTime);

        

    cleanup(&s->fov);

        

    cleanup(&s->virtualNearPlaneDistance);

        

    cleanup(&s->virtualFarPlaneDistance);

        

    cleanup(&s->imageSensorPixelResolution);

}




static void cleanup(const XrExternalCameraExtrinsicsOCULUS* s) {
        

    cleanup(&s->lastChangeTime);

        

    cleanup(&s->cameraStatusFlags);

        

    cleanup(&s->attachedToDevice);

        

    cleanup(&s->relativePose);

}




static void cleanup(const XrExternalCameraOCULUS* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->name, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS);

        

    cleanup(&s->intrinsics);

        

    cleanup(&s->extrinsics);

}




static void cleanup(const XrExternalCameraOCULUS* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->name, XR_MAX_EXTERNAL_CAMERA_NAME_SIZE_OCULUS);

        

    cleanup(&s->intrinsics);

        

    cleanup(&s->extrinsics);

}


#endif // XRTRANSPORT_EXT_XR_OCULUS_external_camera
#ifdef XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info


static void cleanup(const XrVulkanSwapchainCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->additionalCreateFlags);

        

    cleanup(&s->additionalUsageFlags);

}




static void cleanup(const XrVulkanSwapchainCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->additionalCreateFlags);

        

    cleanup(&s->additionalUsageFlags);

}


#endif // XRTRANSPORT_EXT_XR_META_vulkan_swapchain_create_info
#ifdef XRTRANSPORT_EXT_XR_META_performance_metrics


static void cleanup(const XrPerformanceMetricsStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrPerformanceMetricsCounterMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->counterFlags);

        

    cleanup(&s->counterUnit);

        

    cleanup(&s->uintValue);

        

    cleanup(&s->floatValue);

}




static void cleanup(const XrPerformanceMetricsStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrPerformanceMetricsCounterMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->counterFlags);

        

    cleanup(&s->counterUnit);

        

    cleanup(&s->uintValue);

        

    cleanup(&s->floatValue);

}


#endif // XRTRANSPORT_EXT_XR_META_performance_metrics
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch


static void cleanup(const XrSpaceListSaveInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceListSaveCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSpaceListSaveInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup(&s->location);

}




static void cleanup(const XrEventDataSpaceListSaveCompleteFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_storage_batch
#ifdef XRTRANSPORT_EXT_XR_FB_spatial_entity_user


static void cleanup(const XrSpaceUserCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->userId);

}




static void cleanup(const XrSpaceUserCreateInfoFB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->userId);

}


#endif // XRTRANSPORT_EXT_XR_FB_spatial_entity_user
#ifdef XRTRANSPORT_EXT_XR_META_headset_id


static void cleanup(const XrSystemHeadsetIdPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->id);

}




static void cleanup(const XrSystemHeadsetIdPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->id);

}


#endif // XRTRANSPORT_EXT_XR_META_headset_id
#ifdef XRTRANSPORT_EXT_XR_META_recommended_layer_resolution


static void cleanup(const XrRecommendedLayerResolutionMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedImageDimensions);

        

    cleanup(&s->isValid);

}




static void cleanup(const XrRecommendedLayerResolutionGetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_xr(s->layer);

        

    cleanup(&s->predictedDisplayTime);

}




static void cleanup(const XrRecommendedLayerResolutionMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedImageDimensions);

        

    cleanup(&s->isValid);

}




static void cleanup(const XrRecommendedLayerResolutionGetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_xr(s->layer);

        

    cleanup(&s->predictedDisplayTime);

}


#endif // XRTRANSPORT_EXT_XR_META_recommended_layer_resolution
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_color_lut


static void cleanup(const XrPassthroughColorLutDataMETA* s) {
        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrPassthroughColorLutCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->channels);

        

    cleanup(&s->resolution);

        

    cleanup(&s->data);

}




static void cleanup(const XrPassthroughColorLutUpdateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->data);

}




static void cleanup(const XrPassthroughColorMapLutMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorLut);

        

    cleanup(&s->weight);

}




static void cleanup(const XrPassthroughColorMapInterpolatedLutMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sourceColorLut);

        

    cleanup(&s->targetColorLut);

        

    cleanup(&s->weight);

}




static void cleanup(const XrSystemPassthroughColorLutPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->maxColorLutResolution);

}




static void cleanup(const XrSystemPassthroughColorLutPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->maxColorLutResolution);

}




static void cleanup(const XrPassthroughColorLutCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->channels);

        

    cleanup(&s->resolution);

        

    cleanup(&s->data);

}




static void cleanup(const XrPassthroughColorLutUpdateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->data);

}




static void cleanup(const XrPassthroughColorMapLutMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->colorLut);

        

    cleanup(&s->weight);

}




static void cleanup(const XrPassthroughColorMapInterpolatedLutMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sourceColorLut);

        

    cleanup(&s->targetColorLut);

        

    cleanup(&s->weight);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_color_lut
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_mesh


static void cleanup(const XrSpaceTriangleMeshGetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpaceTriangleMeshMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSpaceTriangleMeshGetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpaceTriangleMeshMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_mesh
#ifdef XRTRANSPORT_EXT_XR_META_body_tracking_full_body


static void cleanup(const XrSystemPropertiesBodyTrackingFullBodyMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFullBodyTracking);

}




static void cleanup(const XrSystemPropertiesBodyTrackingFullBodyMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFullBodyTracking);

}


#endif // XRTRANSPORT_EXT_XR_META_body_tracking_full_body
#ifdef XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event


static void cleanup(const XrEventDataPassthroughLayerResumedMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layer);

}




static void cleanup(const XrEventDataPassthroughLayerResumedMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layer);

}


#endif // XRTRANSPORT_EXT_XR_META_passthrough_layer_resumed_event
#ifdef XRTRANSPORT_EXT_XR_FB_face_tracking2


static void cleanup(const XrSystemFaceTrackingProperties2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsVisualFaceTracking);

        

    cleanup(&s->supportsAudioFaceTracking);

}




static void cleanup(const XrFaceTrackerCreateInfo2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->faceExpressionSet);

        

    cleanup(&s->requestedDataSourceCount);

        

    
    cleanup_ptr(s->requestedDataSources, s->requestedDataSourceCount);

}




static void cleanup(const XrFaceExpressionInfo2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}




static void cleanup(const XrFaceExpressionWeights2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->weightCount);

        

    
    cleanup_ptr(s->weights, s->weightCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidences, s->confidenceCount);

        

    cleanup(&s->isValid);

        

    cleanup(&s->isEyeFollowingBlendshapesValid);

        

    cleanup(&s->dataSource);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemFaceTrackingProperties2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsVisualFaceTracking);

        

    cleanup(&s->supportsAudioFaceTracking);

}




static void cleanup(const XrFaceTrackerCreateInfo2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->faceExpressionSet);

        

    cleanup(&s->requestedDataSourceCount);

        

    
    cleanup_ptr(s->requestedDataSources, s->requestedDataSourceCount);

}




static void cleanup(const XrFaceExpressionInfo2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->time);

}




static void cleanup(const XrFaceExpressionWeights2FB* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->weightCount);

        

    
    cleanup_ptr(s->weights, s->weightCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidences, s->confidenceCount);

        

    cleanup(&s->isValid);

        

    cleanup(&s->isEyeFollowingBlendshapesValid);

        

    cleanup(&s->dataSource);

        

    cleanup(&s->time);

}


#endif // XRTRANSPORT_EXT_XR_FB_face_tracking2
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_sharing


static void cleanup(const XrSystemSpatialEntitySharingPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntitySharing);

}




static void cleanup(const XrShareSpacesRecipientBaseHeaderMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrShareSpacesInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup_xr(s->recipientInfo);

}




static void cleanup(const XrEventDataShareSpacesCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSystemSpatialEntitySharingPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntitySharing);

}




static void cleanup(const XrShareSpacesInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

        

    cleanup_xr(s->recipientInfo);

}




static void cleanup(const XrEventDataShareSpacesCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_sharing
#ifdef XRTRANSPORT_EXT_XR_META_environment_depth


static void cleanup(const XrEnvironmentDepthProviderCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}




static void cleanup(const XrEnvironmentDepthSwapchainCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}




static void cleanup(const XrEnvironmentDepthSwapchainStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrEnvironmentDepthImageAcquireInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->displayTime);

}




static void cleanup(const XrEnvironmentDepthImageViewMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fov);

        

    cleanup(&s->pose);

}




static void cleanup(const XrEnvironmentDepthImageMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->swapchainIndex);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

        

    cleanup_array(s->views, 2);

}




static void cleanup(const XrEnvironmentDepthHandRemovalSetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrSystemEnvironmentDepthPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEnvironmentDepth);

        

    cleanup(&s->supportsHandRemoval);

}




static void cleanup(const XrEnvironmentDepthProviderCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}




static void cleanup(const XrEnvironmentDepthSwapchainCreateInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

}




static void cleanup(const XrEnvironmentDepthSwapchainStateMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrEnvironmentDepthImageAcquireInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->displayTime);

}




static void cleanup(const XrEnvironmentDepthImageViewMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->fov);

        

    cleanup(&s->pose);

}




static void cleanup(const XrEnvironmentDepthImageMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->swapchainIndex);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

        

    cleanup_array(s->views, 2);

}




static void cleanup(const XrEnvironmentDepthHandRemovalSetInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->enabled);

}




static void cleanup(const XrSystemEnvironmentDepthPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsEnvironmentDepth);

        

    cleanup(&s->supportsHandRemoval);

}


#endif // XRTRANSPORT_EXT_XR_META_environment_depth
#ifdef XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#endif // XRTRANSPORT_EXT_XR_QCOM_tracking_optimization_settings
#ifdef XRTRANSPORT_EXT_XR_HTC_passthrough


static void cleanup(const XrPassthroughCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->form);

}




static void cleanup(const XrPassthroughColorHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->alpha);

}




static void cleanup(const XrPassthroughMeshTransformInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertices, s->vertexCount);

        

    cleanup(&s->indexCount);

        

    
    cleanup_ptr(s->indices, s->indexCount);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrCompositionLayerPassthroughHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->passthrough);

        

    cleanup(&s->color);

}




static void cleanup(const XrPassthroughCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->form);

}




static void cleanup(const XrPassthroughColorHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->alpha);

}




static void cleanup(const XrPassthroughMeshTransformInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertices, s->vertexCount);

        

    cleanup(&s->indexCount);

        

    
    cleanup_ptr(s->indices, s->indexCount);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->pose);

        

    cleanup(&s->scale);

}




static void cleanup(const XrCompositionLayerPassthroughHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->passthrough);

        

    cleanup(&s->color);

}


#endif // XRTRANSPORT_EXT_XR_HTC_passthrough
#ifdef XRTRANSPORT_EXT_XR_HTC_foveation


static void cleanup(const XrFoveationApplyInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->mode);

        

    cleanup(&s->subImageCount);

        

    
    cleanup_ptr(s->subImages, s->subImageCount);

}




static void cleanup(const XrFoveationConfigurationHTC* s) {
        

    cleanup(&s->level);

        

    cleanup(&s->clearFovDegree);

        

    cleanup(&s->focalCenterOffset);

}




static void cleanup(const XrFoveationDynamicModeInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->dynamicFlags);

}




static void cleanup(const XrFoveationCustomModeInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->configCount);

        

    
    cleanup_ptr(s->configs, s->configCount);

}




static void cleanup(const XrFoveationApplyInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->mode);

        

    cleanup(&s->subImageCount);

        

    
    cleanup_ptr(s->subImages, s->subImageCount);

}




static void cleanup(const XrFoveationDynamicModeInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->dynamicFlags);

}




static void cleanup(const XrFoveationCustomModeInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->configCount);

        

    
    cleanup_ptr(s->configs, s->configCount);

}


#endif // XRTRANSPORT_EXT_XR_HTC_foveation
#ifdef XRTRANSPORT_EXT_XR_HTC_anchor


static void cleanup(const XrSystemAnchorPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsAnchor);

}




static void cleanup(const XrSpatialAnchorCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->name);

}




static void cleanup(const XrSpatialAnchorNameHTC* s) {
        

    cleanup_array(s->name, XR_MAX_SPATIAL_ANCHOR_NAME_SIZE_HTC);

}




static void cleanup(const XrSystemAnchorPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsAnchor);

}




static void cleanup(const XrSpatialAnchorCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->poseInSpace);

        

    cleanup(&s->name);

}


#endif // XRTRANSPORT_EXT_XR_HTC_anchor
#ifdef XRTRANSPORT_EXT_XR_HTC_body_tracking


static void cleanup(const XrSystemBodyTrackingPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}




static void cleanup(const XrBodyTrackerCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bodyJointSet);

}




static void cleanup(const XrBodyJointsLocateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyJointLocationsHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->combinedLocationFlags);

        

    cleanup(&s->confidenceLevel);

        

    cleanup(&s->jointLocationCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointLocationCount);

        

    cleanup(&s->skeletonGenerationId);

}




static void cleanup(const XrBodyJointLocationHTC* s) {
        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrBodySkeletonHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->joints, s->jointCount);

}




static void cleanup(const XrSystemBodyTrackingPropertiesHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}




static void cleanup(const XrBodyTrackerCreateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bodyJointSet);

}




static void cleanup(const XrBodyJointsLocateInfoHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyJointLocationsHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->combinedLocationFlags);

        

    cleanup(&s->confidenceLevel);

        

    cleanup(&s->jointLocationCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointLocationCount);

        

    cleanup(&s->skeletonGenerationId);

}




static void cleanup(const XrBodySkeletonHTC* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointCount);

        

    
    cleanup_ptr(s->joints, s->jointCount);

}


#endif // XRTRANSPORT_EXT_XR_HTC_body_tracking
#ifdef XRTRANSPORT_EXT_XR_EXT_active_action_set_priority


static void cleanup(const XrActiveActionSetPrioritiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->actionSetPriorityCount);

        

    
    cleanup_ptr(s->actionSetPriorities, s->actionSetPriorityCount);

}




static void cleanup(const XrActiveActionSetPriorityEXT* s) {
        

    cleanup(&s->actionSet);

        

    cleanup(&s->priorityOverride);

}




static void cleanup(const XrActiveActionSetPrioritiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->actionSetPriorityCount);

        

    
    cleanup_ptr(s->actionSetPriorities, s->actionSetPriorityCount);

}


#endif // XRTRANSPORT_EXT_XR_EXT_active_action_set_priority
#ifdef XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl


static void cleanup(const XrSystemForceFeedbackCurlPropertiesMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsForceFeedbackCurl);

}




static void cleanup(const XrForceFeedbackCurlApplyLocationsMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationCount);

        

    
    cleanup_ptr(s->locations, s->locationCount);

}




static void cleanup(const XrForceFeedbackCurlApplyLocationMNDX* s) {
        

    cleanup(&s->location);

        

    cleanup(&s->value);

}




static void cleanup(const XrSystemForceFeedbackCurlPropertiesMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsForceFeedbackCurl);

}




static void cleanup(const XrForceFeedbackCurlApplyLocationsMNDX* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationCount);

        

    
    cleanup_ptr(s->locations, s->locationCount);

}


#endif // XRTRANSPORT_EXT_XR_MNDX_force_feedback_curl
#ifdef XRTRANSPORT_EXT_XR_BD_body_tracking


static void cleanup(const XrSystemBodyTrackingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}




static void cleanup(const XrBodyTrackerCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointSet);

}




static void cleanup(const XrBodyJointsLocateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyJointLocationsBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->allJointPosesTracked);

        

    cleanup(&s->jointLocationCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointLocationCount);

}




static void cleanup(const XrBodyJointLocationBD* s) {
        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrBodyTrackerCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->jointSet);

}




static void cleanup(const XrBodyJointsLocateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrBodyJointLocationsBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->allJointPosesTracked);

        

    cleanup(&s->jointLocationCount);

        

    
    cleanup_ptr(s->jointLocations, s->jointLocationCount);

}




static void cleanup(const XrSystemBodyTrackingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsBodyTracking);

}


#endif // XRTRANSPORT_EXT_XR_BD_body_tracking
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_sensing


static void cleanup(const XrSystemSpatialSensingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialSensing);

}




static void cleanup(const XrSpatialEntityComponentGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->entityId);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrSpatialEntityComponentDataBaseHeaderBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSpatialEntityLocationGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

}




static void cleanup(const XrSpatialEntityComponentDataLocationBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

}




static void cleanup(const XrSpatialEntityComponentDataSemanticBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->labelCapacityInput);

        

    cleanup(&s->labelCountOutput);

        

    
    cleanup_ptr(s->labels, s->labelCapacityInput);

}




static void cleanup(const XrSpatialEntityComponentDataBoundingBox2DBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->boundingBox2D);

}




static void cleanup(const XrSpatialEntityComponentDataPolygonBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSpatialEntityComponentDataBoundingBox3DBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->boundingBox3D);

}




static void cleanup(const XrSpatialEntityComponentDataTriangleMeshBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSenseDataProviderCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->providerType);

}




static void cleanup(const XrSenseDataProviderStartInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEventDataSenseDataProviderStateChangedBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->provider);

        

    cleanup(&s->newState);

}




static void cleanup(const XrEventDataSenseDataUpdatedBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->provider);

}




static void cleanup(const XrSenseDataQueryInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSenseDataQueryCompletionBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->snapshot);

}




static void cleanup(const XrQueriedSenseDataGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrQueriedSenseDataBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->stateCapacityInput);

        

    cleanup(&s->stateCountOutput);

        

    
    cleanup_ptr(s->states, s->stateCapacityInput);

}




static void cleanup(const XrSpatialEntityStateBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->entityId);

        

    cleanup(&s->lastUpdateTime);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSenseDataFilterUuidBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSenseDataFilterSemanticBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->labelCount);

        

    
    cleanup_ptr(s->labels, s->labelCount);

}




static void cleanup(const XrSpatialEntityAnchorCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->snapshot);

        

    cleanup(&s->entityId);

}




static void cleanup(const XrAnchorSpaceCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchor);

        

    cleanup(&s->poseInAnchorSpace);

}




static void cleanup(const XrSystemSpatialSensingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialSensing);

}




static void cleanup(const XrSpatialEntityComponentGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->entityId);

        

    cleanup(&s->componentType);

}




static void cleanup(const XrSpatialEntityLocationGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

}




static void cleanup(const XrSpatialEntityComponentDataLocationBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

}




static void cleanup(const XrSpatialEntityComponentDataSemanticBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->labelCapacityInput);

        

    cleanup(&s->labelCountOutput);

        

    
    cleanup_ptr(s->labels, s->labelCapacityInput);

}




static void cleanup(const XrSpatialEntityComponentDataBoundingBox2DBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->boundingBox2D);

}




static void cleanup(const XrSpatialEntityComponentDataPolygonBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSpatialEntityComponentDataBoundingBox3DBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->boundingBox3D);

}




static void cleanup(const XrSpatialEntityComponentDataTriangleMeshBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

        

    cleanup(&s->indexCapacityInput);

        

    cleanup(&s->indexCountOutput);

        

    
    cleanup_ptr(s->indices, s->indexCapacityInput);

}




static void cleanup(const XrSenseDataProviderCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->providerType);

}




static void cleanup(const XrSenseDataProviderStartInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEventDataSenseDataProviderStateChangedBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->provider);

        

    cleanup(&s->newState);

}




static void cleanup(const XrEventDataSenseDataUpdatedBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->provider);

}




static void cleanup(const XrSenseDataQueryInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSenseDataQueryCompletionBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->snapshot);

}




static void cleanup(const XrSenseDataFilterUuidBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuidCount);

        

    
    cleanup_ptr(s->uuids, s->uuidCount);

}




static void cleanup(const XrSenseDataFilterSemanticBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->labelCount);

        

    
    cleanup_ptr(s->labels, s->labelCount);

}




static void cleanup(const XrQueriedSenseDataGetInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrQueriedSenseDataBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->stateCapacityInput);

        

    cleanup(&s->stateCountOutput);

        

    
    cleanup_ptr(s->states, s->stateCapacityInput);

}




static void cleanup(const XrSpatialEntityStateBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->entityId);

        

    cleanup(&s->lastUpdateTime);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSpatialEntityAnchorCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->snapshot);

        

    cleanup(&s->entityId);

}




static void cleanup(const XrAnchorSpaceCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchor);

        

    cleanup(&s->poseInAnchorSpace);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_sensing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor


static void cleanup(const XrSystemSpatialAnchorPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialAnchor);

}




static void cleanup(const XrSpatialAnchorCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->pose);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpatialAnchorCreateCompletionBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->anchor);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSpatialAnchorPersistInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

        

    cleanup(&s->anchor);

}




static void cleanup(const XrSpatialAnchorUnpersistInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

        

    cleanup(&s->anchor);

}




static void cleanup(const XrSystemSpatialAnchorPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialAnchor);

}




static void cleanup(const XrSpatialAnchorCreateInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->space);

        

    cleanup(&s->pose);

        

    cleanup(&s->time);

}




static void cleanup(const XrSpatialAnchorCreateCompletionBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->anchor);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSpatialAnchorPersistInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

        

    cleanup(&s->anchor);

}




static void cleanup(const XrSpatialAnchorUnpersistInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->location);

        

    cleanup(&s->anchor);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing


static void cleanup(const XrSystemSpatialAnchorSharingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialAnchorSharing);

}




static void cleanup(const XrSpatialAnchorShareInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchor);

}




static void cleanup(const XrSharedSpatialAnchorDownloadInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

}




static void cleanup(const XrSystemSpatialAnchorSharingPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialAnchorSharing);

}




static void cleanup(const XrSpatialAnchorShareInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->anchor);

}




static void cleanup(const XrSharedSpatialAnchorDownloadInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_anchor_sharing
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_scene


static void cleanup(const XrSystemSpatialScenePropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialScene);

}




static void cleanup(const XrSceneCaptureInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSystemSpatialScenePropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialScene);

}




static void cleanup(const XrSceneCaptureInfoBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_scene
#ifdef XRTRANSPORT_EXT_XR_BD_spatial_mesh


static void cleanup(const XrSystemSpatialMeshPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialMesh);

}




static void cleanup(const XrSenseDataProviderCreateInfoSpatialMeshBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->configFlags);

        

    cleanup(&s->lod);

}




static void cleanup(const XrSystemSpatialMeshPropertiesBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialMesh);

}




static void cleanup(const XrSenseDataProviderCreateInfoSpatialMeshBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->configFlags);

        

    cleanup(&s->lod);

}


#endif // XRTRANSPORT_EXT_XR_BD_spatial_mesh
#ifdef XRTRANSPORT_EXT_XR_BD_future_progress


static void cleanup(const XrFuturePollResultProgressBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isSupported);

        

    cleanup(&s->progressPercentage);

}




static void cleanup(const XrFuturePollResultProgressBD* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isSupported);

        

    cleanup(&s->progressPercentage);

}


#endif // XRTRANSPORT_EXT_XR_BD_future_progress
#ifdef XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source


static void cleanup(const XrHandTrackingDataSourceInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedDataSourceCount);

        

    
    cleanup_ptr(s->requestedDataSources, s->requestedDataSourceCount);

}




static void cleanup(const XrHandTrackingDataSourceStateEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->dataSource);

}




static void cleanup(const XrHandTrackingDataSourceInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedDataSourceCount);

        

    
    cleanup_ptr(s->requestedDataSources, s->requestedDataSourceCount);

}




static void cleanup(const XrHandTrackingDataSourceStateEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

        

    cleanup(&s->dataSource);

}


#endif // XRTRANSPORT_EXT_XR_EXT_hand_tracking_data_source
#ifdef XRTRANSPORT_EXT_XR_EXT_plane_detection


static void cleanup(const XrSystemPlaneDetectionPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportedFeatures);

}




static void cleanup(const XrPlaneDetectorCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrPlaneDetectorBeginInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->orientationCount);

        

    
    cleanup_ptr(s->orientations, s->orientationCount);

        

    cleanup(&s->semanticTypeCount);

        

    
    cleanup_ptr(s->semanticTypes, s->semanticTypeCount);

        

    cleanup(&s->maxPlanes);

        

    cleanup(&s->minArea);

        

    cleanup(&s->boundingBoxPose);

        

    cleanup(&s->boundingBoxExtent);

}




static void cleanup(const XrPlaneDetectorGetInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrPlaneDetectorLocationEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->planeId);

        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

        

    cleanup(&s->extents);

        

    cleanup(&s->orientation);

        

    cleanup(&s->semanticType);

        

    cleanup(&s->polygonBufferCount);

}




static void cleanup(const XrPlaneDetectorLocationsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->planeLocationCapacityInput);

        

    cleanup(&s->planeLocationCountOutput);

        

    
    cleanup_ptr(s->planeLocations, s->planeLocationCapacityInput);

}




static void cleanup(const XrPlaneDetectorPolygonBufferEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrPlaneDetectorCreateInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

}




static void cleanup(const XrPlaneDetectorBeginInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->orientationCount);

        

    
    cleanup_ptr(s->orientations, s->orientationCount);

        

    cleanup(&s->semanticTypeCount);

        

    
    cleanup_ptr(s->semanticTypes, s->semanticTypeCount);

        

    cleanup(&s->maxPlanes);

        

    cleanup(&s->minArea);

        

    cleanup(&s->boundingBoxPose);

        

    cleanup(&s->boundingBoxExtent);

}




static void cleanup(const XrPlaneDetectorGetInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

}




static void cleanup(const XrPlaneDetectorLocationsEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->planeLocationCapacityInput);

        

    cleanup(&s->planeLocationCountOutput);

        

    
    cleanup_ptr(s->planeLocations, s->planeLocationCapacityInput);

}




static void cleanup(const XrPlaneDetectorLocationEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->planeId);

        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

        

    cleanup(&s->extents);

        

    cleanup(&s->orientation);

        

    cleanup(&s->semanticType);

        

    cleanup(&s->polygonBufferCount);

}




static void cleanup(const XrPlaneDetectorPolygonBufferEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->vertexCapacityInput);

        

    cleanup(&s->vertexCountOutput);

        

    
    cleanup_ptr(s->vertices, s->vertexCapacityInput);

}




static void cleanup(const XrSystemPlaneDetectionPropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportedFeatures);

}


#endif // XRTRANSPORT_EXT_XR_EXT_plane_detection
#ifdef XRTRANSPORT_EXT_XR_EXT_future


static void cleanup(const XrFutureCancelInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->future);

}




static void cleanup(const XrFuturePollInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->future);

}




static void cleanup(const XrFutureCompletionBaseHeaderEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrFutureCompletionEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrFuturePollResultEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->state);

}




static void cleanup(const XrFutureCancelInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->future);

}




static void cleanup(const XrFuturePollInfoEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->future);

}




static void cleanup(const XrFutureCompletionEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

}




static void cleanup(const XrFuturePollResultEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->state);

}


#endif // XRTRANSPORT_EXT_XR_EXT_future
#ifdef XRTRANSPORT_EXT_XR_EXT_user_presence


static void cleanup(const XrEventDataUserPresenceChangedEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->isUserPresent);

}




static void cleanup(const XrSystemUserPresencePropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsUserPresence);

}




static void cleanup(const XrEventDataUserPresenceChangedEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->isUserPresent);

}




static void cleanup(const XrSystemUserPresencePropertiesEXT* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsUserPresence);

}


#endif // XRTRANSPORT_EXT_XR_EXT_user_presence
#ifdef XRTRANSPORT_EXT_XR_ML_system_notifications


static void cleanup(const XrSystemNotificationsSetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->suppressNotifications);

}




static void cleanup(const XrSystemNotificationsSetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->suppressNotifications);

}


#endif // XRTRANSPORT_EXT_XR_ML_system_notifications
#ifdef XRTRANSPORT_EXT_XR_ML_world_mesh_detection


static void cleanup(const XrWorldMeshDetectorCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrWorldMeshBlockStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->meshBoundingBoxCenter);

        

    cleanup(&s->meshBoundingBoxExtents);

        

    cleanup(&s->lastUpdateTime);

        

    cleanup(&s->status);

}




static void cleanup(const XrWorldMeshStateRequestInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->boundingBoxCenter);

        

    cleanup(&s->boundingBoxExtents);

}




static void cleanup(const XrWorldMeshStateRequestCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->timestamp);

        

    cleanup(&s->meshBlockStateCapacityInput);

        

    cleanup(&s->meshBlockStateCountOutput);

        

    
    cleanup_ptr(s->meshBlockStates, s->meshBlockStateCapacityInput);

}




static void cleanup(const XrWorldMeshBufferRecommendedSizeInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->maxBlockCount);

}




static void cleanup(const XrWorldMeshBufferSizeML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->size);

}




static void cleanup(const XrWorldMeshBufferML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrWorldMeshBlockRequestML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->lod);

}




static void cleanup(const XrWorldMeshGetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->fillHoleLength);

        

    cleanup(&s->disconnectedComponentArea);

        

    cleanup(&s->blockCount);

        

    
    cleanup_ptr(s->blocks, s->blockCount);

}




static void cleanup(const XrWorldMeshBlockML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->blockResult);

        

    cleanup(&s->lod);

        

    cleanup(&s->flags);

        

    cleanup(&s->indexCount);

        

    
    cleanup_ptr(s->indexBuffer, s->indexCount);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertexBuffer, s->vertexCount);

        

    cleanup(&s->normalCount);

        

    
    cleanup_ptr(s->normalBuffer, s->normalCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidenceBuffer, s->confidenceCount);

}




static void cleanup(const XrWorldMeshRequestCompletionInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->meshSpace);

        

    cleanup(&s->meshSpaceLocateTime);

}




static void cleanup(const XrWorldMeshRequestCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->blockCount);

        

    
    cleanup_ptr(s->blocks, s->blockCount);

}




static void cleanup(const XrWorldMeshDetectorCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrWorldMeshStateRequestInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->boundingBoxCenter);

        

    cleanup(&s->boundingBoxExtents);

}




static void cleanup(const XrWorldMeshBlockStateML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->meshBoundingBoxCenter);

        

    cleanup(&s->meshBoundingBoxExtents);

        

    cleanup(&s->lastUpdateTime);

        

    cleanup(&s->status);

}




static void cleanup(const XrWorldMeshStateRequestCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->timestamp);

        

    cleanup(&s->meshBlockStateCapacityInput);

        

    cleanup(&s->meshBlockStateCountOutput);

        

    
    cleanup_ptr(s->meshBlockStates, s->meshBlockStateCapacityInput);

}




static void cleanup(const XrWorldMeshBufferRecommendedSizeInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->maxBlockCount);

}




static void cleanup(const XrWorldMeshBufferSizeML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->size);

}




static void cleanup(const XrWorldMeshBufferML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrWorldMeshBlockRequestML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->lod);

}




static void cleanup(const XrWorldMeshGetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->flags);

        

    cleanup(&s->fillHoleLength);

        

    cleanup(&s->disconnectedComponentArea);

        

    cleanup(&s->blockCount);

        

    
    cleanup_ptr(s->blocks, s->blockCount);

}




static void cleanup(const XrWorldMeshBlockML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->uuid);

        

    cleanup(&s->blockResult);

        

    cleanup(&s->lod);

        

    cleanup(&s->flags);

        

    cleanup(&s->indexCount);

        

    
    cleanup_ptr(s->indexBuffer, s->indexCount);

        

    cleanup(&s->vertexCount);

        

    
    cleanup_ptr(s->vertexBuffer, s->vertexCount);

        

    cleanup(&s->normalCount);

        

    
    cleanup_ptr(s->normalBuffer, s->normalCount);

        

    cleanup(&s->confidenceCount);

        

    
    cleanup_ptr(s->confidenceBuffer, s->confidenceCount);

}




static void cleanup(const XrWorldMeshRequestCompletionML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->futureResult);

        

    cleanup(&s->blockCount);

        

    
    cleanup_ptr(s->blocks, s->blockCount);

}




static void cleanup(const XrWorldMeshRequestCompletionInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->meshSpace);

        

    cleanup(&s->meshSpaceLocateTime);

}


#endif // XRTRANSPORT_EXT_XR_ML_world_mesh_detection
#ifdef XRTRANSPORT_EXT_XR_ML_facial_expression


static void cleanup(const XrSystemFacialExpressionPropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFacialExpression);

}




static void cleanup(const XrFacialExpressionClientCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedCount);

        

    
    cleanup_ptr(s->requestedFacialBlendShapes, s->requestedCount);

}




static void cleanup(const XrFacialExpressionBlendShapeGetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrFacialExpressionBlendShapePropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedFacialBlendShape);

        

    cleanup(&s->weight);

        

    cleanup(&s->flags);

        

    cleanup(&s->time);

}




static void cleanup(const XrSystemFacialExpressionPropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsFacialExpression);

}




static void cleanup(const XrFacialExpressionClientCreateInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedCount);

        

    
    cleanup_ptr(s->requestedFacialBlendShapes, s->requestedCount);

}




static void cleanup(const XrFacialExpressionBlendShapeGetInfoML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrFacialExpressionBlendShapePropertiesML* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestedFacialBlendShape);

        

    cleanup(&s->weight);

        

    cleanup(&s->flags);

        

    cleanup(&s->time);

}


#endif // XRTRANSPORT_EXT_XR_ML_facial_expression
#ifdef XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers


static void cleanup(const XrSystemSimultaneousHandsAndControllersPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSimultaneousHandsAndControllers);

}




static void cleanup(const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSystemSimultaneousHandsAndControllersPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSimultaneousHandsAndControllers);

}




static void cleanup(const XrSimultaneousHandsAndControllersTrackingResumeInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSimultaneousHandsAndControllersTrackingPauseInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}


#endif // XRTRANSPORT_EXT_XR_META_simultaneous_hands_and_controllers
#ifdef XRTRANSPORT_EXT_XR_META_colocation_discovery


static void cleanup(const XrColocationDiscoveryStartInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrColocationDiscoveryStopInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrColocationAdvertisementStartInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrColocationAdvertisementStopInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEventDataStartColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->advertisementRequestId);

        

    cleanup(&s->result);

        

    cleanup(&s->advertisementUuid);

}




static void cleanup(const XrEventDataStopColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->advertisementRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataStartColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataColocationDiscoveryResultMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->advertisementUuid);

        

    cleanup(&s->bufferSize);

        

    cleanup_array(s->buffer, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META);

}




static void cleanup(const XrEventDataColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataStopColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSystemColocationDiscoveryPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsColocationDiscovery);

}




static void cleanup(const XrColocationDiscoveryStartInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrColocationDiscoveryStopInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrColocationAdvertisementStartInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->bufferSize);

        

    
    cleanup_ptr(s->buffer, s->bufferSize);

}




static void cleanup(const XrColocationAdvertisementStopInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEventDataStartColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->advertisementRequestId);

        

    cleanup(&s->result);

        

    cleanup(&s->advertisementUuid);

}




static void cleanup(const XrEventDataStopColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataColocationAdvertisementCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->advertisementRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataStartColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataColocationDiscoveryResultMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->advertisementUuid);

        

    cleanup(&s->bufferSize);

        

    cleanup_array(s->buffer, XR_MAX_COLOCATION_DISCOVERY_BUFFER_SIZE_META);

}




static void cleanup(const XrEventDataColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->discoveryRequestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrEventDataStopColocationDiscoveryCompleteMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->requestId);

        

    cleanup(&s->result);

}




static void cleanup(const XrSystemColocationDiscoveryPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsColocationDiscovery);

}


#endif // XRTRANSPORT_EXT_XR_META_colocation_discovery
#ifdef XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void cleanup(const XrSystemSpatialEntityGroupSharingPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntityGroupSharing);

}




static void cleanup(const XrShareSpacesRecipientGroupsMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->groupCount);

        

    
    cleanup_ptr(s->groups, s->groupCount);

}




static void cleanup(const XrSpaceGroupUuidFilterInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->groupUuid);

}




static void cleanup(const XrShareSpacesRecipientGroupsMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->groupCount);

        

    
    cleanup_ptr(s->groups, s->groupCount);

}




static void cleanup(const XrSpaceGroupUuidFilterInfoMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->groupUuid);

}




static void cleanup(const XrSystemSpatialEntityGroupSharingPropertiesMETA* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->supportsSpatialEntityGroupSharing);

}


#endif // XRTRANSPORT_EXT_XR_META_spatial_entity_group_sharing


static void cleanup(const XrActionCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->actionName, XR_MAX_ACTION_NAME_SIZE);

        

    cleanup(&s->actionType);

        

    cleanup(&s->countSubactionPaths);

        

    
    cleanup_ptr(s->subactionPaths, s->countSubactionPaths);

        

    cleanup_array(s->localizedActionName, XR_MAX_LOCALIZED_ACTION_NAME_SIZE);

}




static void cleanup(const XrActionSetCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->actionSetName, XR_MAX_ACTION_SET_NAME_SIZE);

        

    cleanup_array(s->localizedActionSetName, XR_MAX_LOCALIZED_ACTION_SET_NAME_SIZE);

        

    cleanup(&s->priority);

}




static void cleanup(const XrActionSpaceCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

        

    cleanup(&s->subactionPath);

        

    cleanup(&s->poseInActionSpace);

}




static void cleanup(const XrActionStateBoolean* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->currentState);

        

    cleanup(&s->changedSinceLastSync);

        

    cleanup(&s->lastChangeTime);

        

    cleanup(&s->isActive);

}




static void cleanup(const XrActionStateFloat* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->currentState);

        

    cleanup(&s->changedSinceLastSync);

        

    cleanup(&s->lastChangeTime);

        

    cleanup(&s->isActive);

}




static void cleanup(const XrActionStateGetInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

        

    cleanup(&s->subactionPath);

}




static void cleanup(const XrActionStatePose* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->isActive);

}




static void cleanup(const XrActionStateVector2f* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->currentState);

        

    cleanup(&s->changedSinceLastSync);

        

    cleanup(&s->lastChangeTime);

        

    cleanup(&s->isActive);

}




static void cleanup(const XrActionSuggestedBinding* s) {
        

    cleanup(&s->action);

        

    cleanup(&s->binding);

}




static void cleanup(const XrActionsSyncInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->countActiveActionSets);

        

    
    cleanup_ptr(s->activeActionSets, s->countActiveActionSets);

}




static void cleanup(const XrActiveActionSet* s) {
        

    cleanup(&s->actionSet);

        

    cleanup(&s->subactionPath);

}




static void cleanup(const XrApiLayerProperties* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->layerName, XR_MAX_API_LAYER_NAME_SIZE);

        

    cleanup(&s->specVersion);

        

    cleanup(&s->layerVersion);

        

    cleanup_array(s->description, XR_MAX_API_LAYER_DESCRIPTION_SIZE);

}




static void cleanup(const XrApplicationInfo* s) {
        

    cleanup_array(s->applicationName, XR_MAX_APPLICATION_NAME_SIZE);

        

    cleanup(&s->applicationVersion);

        

    cleanup_array(s->engineName, XR_MAX_ENGINE_NAME_SIZE);

        

    cleanup(&s->engineVersion);

        

    cleanup(&s->apiVersion);

}




static void cleanup(const XrBodySkeletonJointHTC* s) {
        

    cleanup(&s->pose);

}




static void cleanup(const XrBoundSourcesForActionEnumerateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

}




static void cleanup(const XrBoxf* s) {
        

    cleanup(&s->center);

        

    cleanup(&s->extents);

}




static void cleanup(const XrColor3f* s) {
        

    cleanup(&s->r);

        

    cleanup(&s->g);

        

    cleanup(&s->b);

}




static void cleanup(const XrColor4f* s) {
        

    cleanup(&s->r);

        

    cleanup(&s->g);

        

    cleanup(&s->b);

        

    cleanup(&s->a);

}




static void cleanup(const XrCompositionLayerBaseHeader* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

}




static void cleanup(const XrCompositionLayerProjection* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->viewCount);

        

    
    cleanup_ptr(s->views, s->viewCount);

}




static void cleanup(const XrCompositionLayerProjectionView* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->pose);

        

    cleanup(&s->fov);

        

    cleanup(&s->subImage);

}




static void cleanup(const XrCompositionLayerQuad* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->layerFlags);

        

    cleanup(&s->space);

        

    cleanup(&s->eyeVisibility);

        

    cleanup(&s->subImage);

        

    cleanup(&s->pose);

        

    cleanup(&s->size);

}




static void cleanup(const XrEventDataBaseHeader* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrEventDataBuffer* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->varying, 4000);

}




static void cleanup(const XrEventDataEventsLost* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->lostEventCount);

}




static void cleanup(const XrEventDataInstanceLossPending* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->lossTime);

}




static void cleanup(const XrEventDataInteractionProfileChanged* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

}




static void cleanup(const XrEventDataReferenceSpaceChangePending* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->referenceSpaceType);

        

    cleanup(&s->changeTime);

        

    cleanup(&s->poseValid);

        

    cleanup(&s->poseInPreviousSpace);

}




static void cleanup(const XrEventDataSessionStateChanged* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->session);

        

    cleanup(&s->state);

        

    cleanup(&s->time);

}




static void cleanup(const XrExtensionProperties* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup_array(s->extensionName, XR_MAX_EXTENSION_NAME_SIZE);

        

    cleanup(&s->extensionVersion);

}




static void cleanup(const XrExtent2Df* s) {
        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrExtent2Di* s) {
        

    cleanup(&s->width);

        

    cleanup(&s->height);

}




static void cleanup(const XrExtent3Df* s) {
        

    cleanup(&s->width);

        

    cleanup(&s->height);

        

    cleanup(&s->depth);

}




static void cleanup(const XrFovf* s) {
        

    cleanup(&s->angleLeft);

        

    cleanup(&s->angleRight);

        

    cleanup(&s->angleUp);

        

    cleanup(&s->angleDown);

}




static void cleanup(const XrFrameBeginInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}






static void cleanup(const XrFrameState* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->predictedDisplayTime);

        

    cleanup(&s->predictedDisplayPeriod);

        

    cleanup(&s->shouldRender);

}




static void cleanup(const XrFrameWaitInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrFrustumf* s) {
        

    cleanup(&s->pose);

        

    cleanup(&s->fov);

        

    cleanup(&s->nearZ);

        

    cleanup(&s->farZ);

}




static void cleanup(const XrHapticActionInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->action);

        

    cleanup(&s->subactionPath);

}




static void cleanup(const XrHapticBaseHeader* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrHapticVibration* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->duration);

        

    cleanup(&s->frequency);

        

    cleanup(&s->amplitude);

}




static void cleanup(const XrInputSourceLocalizedNameGetInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->sourcePath);

        

    cleanup(&s->whichComponents);

}






static void cleanup(const XrInstanceProperties* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->runtimeVersion);

        

    cleanup_array(s->runtimeName, XR_MAX_RUNTIME_NAME_SIZE);

}




static void cleanup(const XrInteractionProfileState* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->interactionProfile);

}




static void cleanup(const XrInteractionProfileSuggestedBinding* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->interactionProfile);

        

    cleanup(&s->countSuggestedBindings);

        

    
    cleanup_ptr(s->suggestedBindings, s->countSuggestedBindings);

}




static void cleanup(const XrOffset2Df* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

}




static void cleanup(const XrOffset2Di* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

}




static void cleanup(const XrPosef* s) {
        

    cleanup(&s->orientation);

        

    cleanup(&s->position);

}




static void cleanup(const XrQuaternionf* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

        

    cleanup(&s->z);

        

    cleanup(&s->w);

}




static void cleanup(const XrRect2Df* s) {
        

    cleanup(&s->offset);

        

    cleanup(&s->extent);

}




static void cleanup(const XrRect2Di* s) {
        

    cleanup(&s->offset);

        

    cleanup(&s->extent);

}




static void cleanup(const XrReferenceSpaceCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->referenceSpaceType);

        

    cleanup(&s->poseInReferenceSpace);

}




static void cleanup(const XrSessionActionSetsAttachInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->countActionSets);

        

    
    cleanup_ptr(s->actionSets, s->countActionSets);

}




static void cleanup(const XrSessionBeginInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->primaryViewConfigurationType);

}




static void cleanup(const XrSessionCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->systemId);

}




static void cleanup(const XrSpaceLocation* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSpaceLocationData* s) {
        

    cleanup(&s->locationFlags);

        

    cleanup(&s->pose);

}




static void cleanup(const XrSpaceLocations* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->locationCount);

        

    
    cleanup_ptr(s->locations, s->locationCount);

}




static void cleanup(const XrSpaceVelocities* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->velocityCount);

        

    
    cleanup_ptr(s->velocities, s->velocityCount);

}




static void cleanup(const XrSpaceVelocity* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->velocityFlags);

        

    cleanup(&s->linearVelocity);

        

    cleanup(&s->angularVelocity);

}




static void cleanup(const XrSpaceVelocityData* s) {
        

    cleanup(&s->velocityFlags);

        

    cleanup(&s->linearVelocity);

        

    cleanup(&s->angularVelocity);

}




static void cleanup(const XrSpacesLocateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->baseSpace);

        

    cleanup(&s->time);

        

    cleanup(&s->spaceCount);

        

    
    cleanup_ptr(s->spaces, s->spaceCount);

}




static void cleanup(const XrSpheref* s) {
        

    cleanup(&s->center);

        

    cleanup(&s->radius);

}




static void cleanup(const XrSwapchainCreateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->createFlags);

        

    cleanup(&s->usageFlags);

        

    cleanup(&s->format);

        

    cleanup(&s->sampleCount);

        

    cleanup(&s->width);

        

    cleanup(&s->height);

        

    cleanup(&s->faceCount);

        

    cleanup(&s->arraySize);

        

    cleanup(&s->mipCount);

}




static void cleanup(const XrSwapchainImageAcquireInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSwapchainImageBaseHeader* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSwapchainImageReleaseInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

}




static void cleanup(const XrSwapchainImageWaitInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->timeout);

}




static void cleanup(const XrSwapchainSubImage* s) {
        

    cleanup(&s->swapchain);

        

    cleanup(&s->imageRect);

        

    cleanup(&s->imageArrayIndex);

}




static void cleanup(const XrSystemGetInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->formFactor);

}




static void cleanup(const XrSystemGraphicsProperties* s) {
        

    cleanup(&s->maxSwapchainImageHeight);

        

    cleanup(&s->maxSwapchainImageWidth);

        

    cleanup(&s->maxLayerCount);

}




static void cleanup(const XrSystemProperties* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->systemId);

        

    cleanup(&s->vendorId);

        

    cleanup_array(s->systemName, XR_MAX_SYSTEM_NAME_SIZE);

        

    cleanup(&s->graphicsProperties);

        

    cleanup(&s->trackingProperties);

}




static void cleanup(const XrSystemTrackingProperties* s) {
        

    cleanup(&s->orientationTracking);

        

    cleanup(&s->positionTracking);

}




static void cleanup(const XrUuid* s) {
        

    cleanup_array(s->data, XR_UUID_SIZE);

}




static void cleanup(const XrVector2f* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

}




static void cleanup(const XrVector3f* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

        

    cleanup(&s->z);

}




static void cleanup(const XrVector4f* s) {
        

    cleanup(&s->x);

        

    cleanup(&s->y);

        

    cleanup(&s->z);

        

    cleanup(&s->w);

}




static void cleanup(const XrView* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->pose);

        

    cleanup(&s->fov);

}




static void cleanup(const XrViewConfigurationProperties* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->fovMutable);

}




static void cleanup(const XrViewConfigurationView* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->recommendedImageRectWidth);

        

    cleanup(&s->maxImageRectWidth);

        

    cleanup(&s->recommendedImageRectHeight);

        

    cleanup(&s->maxImageRectHeight);

        

    cleanup(&s->recommendedSwapchainSampleCount);

        

    cleanup(&s->maxSwapchainSampleCount);

}




static void cleanup(const XrViewLocateInfo* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewConfigurationType);

        

    cleanup(&s->displayTime);

        

    cleanup(&s->space);

}




static void cleanup(const XrViewState* s) {
        

    cleanup(&s->type);

        

    cleanup_xr(s->next);

        

    cleanup(&s->viewStateFlags);

}




// Custom implementations
#include "custom/deserializer.h"

} // namespace xrtransport

#endif // XRTRANSPORT_DESERIALIZER_GENERATED_H