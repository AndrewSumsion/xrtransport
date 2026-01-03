#include "validate_frame_end.h"
#include "session_state.h"

#include <openxr/openxr.h>
#include <spdlog/spdlog.h>

#include <unordered_set>

namespace {

void collect_swapchain_subimage(const XrSwapchainSubImage* subimage, std::unordered_set<XrSwapchain>& swapchains) {
    swapchains.emplace(subimage->swapchain);
}

void collect_space_warp_info(const XrCompositionLayerSpaceWarpInfoFB* info, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&info->motionVectorSubImage, swapchains);
    collect_swapchain_subimage(&info->depthSubImage, swapchains);
}

void collect_frame_synthesis_info(const XrFrameSynthesisInfoEXT* info, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&info->motionVectorSubImage, swapchains);
    collect_swapchain_subimage(&info->depthSubImage, swapchains);
}

void collect_depth_info(const XrCompositionLayerDepthInfoKHR* info, std::unordered_set<XrSwapchain>& swapchains) {
    return collect_swapchain_subimage(&info->subImage, swapchains);
}

void collect_projection_view(const XrCompositionLayerProjectionView* view, std::unordered_set<XrSwapchain>& swapchains) {
    // check structs in next chain
    // according to spec, these can include:
    // - XrCompositionLayerSpaceWarpInfoFB
    // - XrFrameSynthesisInfoEXT
    // - XrCompositionLayerDepthInfoKHR

    auto chain = reinterpret_cast<const XrBaseInStructure*>(view->next);
    while (chain != nullptr) {
        switch (chain->type) {
            case XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB:
                collect_space_warp_info(reinterpret_cast<const XrCompositionLayerSpaceWarpInfoFB*>(chain), swapchains);
                break;
            case XR_TYPE_FRAME_SYNTHESIS_INFO_EXT:
                collect_frame_synthesis_info(reinterpret_cast<const XrFrameSynthesisInfoEXT*>(chain), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR:
                collect_depth_info(reinterpret_cast<const XrCompositionLayerDepthInfoKHR*>(chain), swapchains);
                break;
            default:
                spdlog::warn("Unknown XrCompositionLayerProjectionView extension: {}", chain->type);
                spdlog::warn("This may lead to corruption because the swapchain references cannot be extracted");
                // allow this to pass with a warning, maybe it's a struct with no swapchains
        }
    }

    // now, validate this struct
    collect_swapchain_subimage(&view->subImage, swapchains);
}

void collect_layer(const XrCompositionLayerProjection* layer, std::unordered_set<XrSwapchain>& swapchains) {
    for (uint32_t i = 0; i < layer->viewCount; i++) {
        collect_projection_view(&layer->views[i], swapchains);
    }
}

void collect_layer(const XrCompositionLayerQuad* layer, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&layer->subImage, swapchains);
}

void collect_layer(const XrCompositionLayerCylinderKHR* layer, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&layer->subImage, swapchains);
}

void collect_layer(const XrCompositionLayerCubeKHR* layer, std::unordered_set<XrSwapchain>& swapchains) {
    swapchains.emplace(layer->swapchain);
}

void collect_layer(const XrCompositionLayerEquirectKHR* layer, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&layer->subImage, swapchains);
}

void collect_layer(const XrCompositionLayerEquirect2KHR* layer, std::unordered_set<XrSwapchain>& swapchains) {
    collect_swapchain_subimage(&layer->subImage, swapchains);
}

void collect_layer(const XrCompositionLayerPassthroughFB* layer, std::unordered_set<XrSwapchain>& swapchains) {
    // no-op, included for completeness
}

void collect_layer(const XrCompositionLayerPassthroughHTC* layer, std::unordered_set<XrSwapchain>& swapchains) {
    // no-op, included for completeness
}

} // namespace

void collect_swapchains(const XrFrameEndInfo* frame_end_info, std::unordered_set<XrSwapchain>& swapchains) {
    for (uint32_t i = 0; i < frame_end_info->layerCount; i++) {
        const XrCompositionLayerBaseHeader* layer = frame_end_info->layers[i];
        switch (layer->type) {
            case XR_TYPE_COMPOSITION_LAYER_PROJECTION:
                collect_layer(reinterpret_cast<const XrCompositionLayerProjection*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_QUAD:
                collect_layer(reinterpret_cast<const XrCompositionLayerQuad*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR:
                collect_layer(reinterpret_cast<const XrCompositionLayerCylinderKHR*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_CUBE_KHR:
                collect_layer(reinterpret_cast<const XrCompositionLayerCubeKHR*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR:
                collect_layer(reinterpret_cast<const XrCompositionLayerEquirectKHR*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR:
                collect_layer(reinterpret_cast<const XrCompositionLayerEquirect2KHR*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB:
                collect_layer(reinterpret_cast<const XrCompositionLayerPassthroughFB*>(layer), swapchains);
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC:
                collect_layer(reinterpret_cast<const XrCompositionLayerPassthroughHTC*>(layer), swapchains);
                break;
            default:
                spdlog::error("Unknown XrCompositionLayer type: {}", (int)layer->type);
                spdlog::error("This may lead to corruption because the swapchain references cannot be extracted");
        }
    }
}