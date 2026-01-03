#include "validate_frame_end.h"
#include "session_state.h"

#include <openxr/openxr.h>
#include <spdlog/spdlog.h>

#include <unordered_set>

namespace {

XrResult validate_swapchain(XrSwapchain swapchain) {
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();

    if (swapchain_state.get_last_released_index() == -1 || 
        swapchain_state.get_size() == swapchain_state.get_images().size()) {
        // no image has ever been released, or all images are currently acquired
        return XR_ERROR_LAYER_INVALID;
    }

    return XR_SUCCESS;
}

XrResult validate_swapchain_subimage(const XrSwapchainSubImage* subimage) {
    XrSwapchain swapchain = subimage->swapchain;
    
    XrResult result = validate_swapchain(swapchain);
    if (result != XR_SUCCESS) {
        return result;
    }

    SwapchainState& swapchain_state = get_swapchain_state(swapchain).value();
    const XrRect2Di& rect = subimage->imageRect;

    if (rect.extent.width < 0 || rect.extent.height < 0) {
        // rect has negative area
        return XR_ERROR_SWAPCHAIN_RECT_INVALID;
    }

    if (rect.offset.x < 0 || rect.offset.x > swapchain_state.width ||
        rect.offset.y < 0 || rect.offset.y > swapchain_state.height ||
        rect.offset.x + rect.extent.width > swapchain_state.width ||
        rect.offset.y + rect.extent.height > swapchain_state.height) {
        return XR_ERROR_SWAPCHAIN_RECT_INVALID;
    }

    return XR_SUCCESS;
}

XrResult validate_space_warp_info(const XrCompositionLayerSpaceWarpInfoFB* info) {
    XrResult result = validate_swapchain_subimage(&info->motionVectorSubImage);
    if (result != XR_SUCCESS) {
        return result;
    }

    return validate_swapchain_subimage(&info->depthSubImage);
}

XrResult validate_frame_synthesis_info(const XrFrameSynthesisInfoEXT* info) {
    XrResult result = validate_swapchain_subimage(&info->motionVectorSubImage);
    if (result != XR_SUCCESS) {
        return result;
    }

    return validate_swapchain_subimage(&info->depthSubImage);
}

XrResult validate_depth_info(const XrCompositionLayerDepthInfoKHR* info) {
    return validate_swapchain_subimage(&info->subImage);
}

XrResult validate_projection_view(const XrCompositionLayerProjectionView* view) {
    // validate structs in next chain
    // according to spec, these can include:
    // - XrCompositionLayerSpaceWarpInfoFB
    // - XrFrameSynthesisInfoEXT
    // - XrCompositionLayerDepthInfoKHR

    auto chain = reinterpret_cast<const XrBaseInStructure*>(view->next);
    while (chain != nullptr) {
        XrResult result{};
        switch (chain->type) {
            case XR_TYPE_COMPOSITION_LAYER_SPACE_WARP_INFO_FB:
                result = validate_space_warp_info(reinterpret_cast<const XrCompositionLayerSpaceWarpInfoFB*>(chain));
                break;
            case XR_TYPE_FRAME_SYNTHESIS_INFO_EXT:
                result = validate_frame_synthesis_info(reinterpret_cast<const XrFrameSynthesisInfoEXT*>(chain));
                break;
            case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR:
                result = validate_depth_info(reinterpret_cast<const XrCompositionLayerDepthInfoKHR*>(chain));
                break;
            default:
                spdlog::warn("Unknown XrCompositionLayerProjectionView extension: {}", (int)chain->type);
                spdlog::warn("This may lead to a stall because the swapchain references cannot be extracted");
                // allow this to pass with a warning, maybe it's a struct with no swapchains
        }

        if (result != XR_SUCCESS) {
            return result;
        }
    }

    // now, validate this struct
    return validate_swapchain_subimage(&view->subImage);
}

XrResult validate_layer(const XrCompositionLayerProjection* layer) {
    for (uint32_t i = 0; i < layer->viewCount; i++) {
        XrResult result = validate_projection_view(&layer->views[i]);
        if (result != XR_SUCCESS) {
            return result;
        }
    }

    return XR_SUCCESS;
}

XrResult validate_layer(const XrCompositionLayerQuad* layer) {
    return validate_swapchain_subimage(&layer->subImage);
}

XrResult validate_layer(const XrCompositionLayerCylinderKHR* layer) {
    return validate_swapchain_subimage(&layer->subImage);
}

XrResult validate_layer(const XrCompositionLayerCubeKHR* layer) {
    return validate_swapchain(layer->swapchain);
}

XrResult validate_layer(const XrCompositionLayerEquirectKHR* layer) {
    return validate_swapchain_subimage(&layer->subImage);
}

XrResult validate_layer(const XrCompositionLayerEquirect2KHR* layer) {
    return validate_swapchain_subimage(&layer->subImage);
}

XrResult validate_layer(const XrCompositionLayerPassthroughFB* layer) {
    return XR_SUCCESS;
}

XrResult validate_layer(const XrCompositionLayerPassthroughHTC* layer) {
    return XR_SUCCESS;
}

} // namespace

XrResult validate_frame_end(const XrFrameEndInfo* frame_end_info) {
    for (uint32_t i = 0; i < frame_end_info->layerCount; i++) {
        const XrCompositionLayerBaseHeader* layer = frame_end_info->layers[i];
        XrResult result{};
        switch (layer->type) {
            case XR_TYPE_COMPOSITION_LAYER_PROJECTION:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerProjection*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_QUAD:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerQuad*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerCylinderKHR*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_CUBE_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerCubeKHR*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerEquirectKHR*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerEquirect2KHR*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerPassthroughFB*>(layer));
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerPassthroughHTC*>(layer));
                break;
            default:
                spdlog::error("Unknown XrCompositionLayer type: {}", (int)layer->type);
                spdlog::error("This would lead to a stall because the swapchain references cannot be extracted");
                // according to the spec this error must be returned
                result = XR_ERROR_LAYER_INVALID;
        }
        
        if (result != XR_SUCCESS) {
            return result;
        }
    }

    return XR_SUCCESS;
}