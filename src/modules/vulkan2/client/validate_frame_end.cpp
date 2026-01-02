#include "validate_frame_end.h"
#include "session_state.h"

#include <openxr/openxr.h>
#include <spdlog/spdlog.h>

#include <unordered_set>

namespace {

XrResult validate_swapchain(XrSwapchain swapchain, ValidateContext& ctx) {
    auto opt_swapchain_state = get_swapchain_state(swapchain);
    if (!opt_swapchain_state.has_value()) {
        return XR_ERROR_HANDLE_INVALID;
    }

    SwapchainState& swapchain_state = opt_swapchain_state.value();

    // there must be at least one image that was just released
    // TODO: there should be a better way to check this, because it's possible that the swapchain
    // isn't full but has had no images released
    if (swapchain_state.get_size() == swapchain_state.get_images().size()) {
        return XR_ERROR_LAYER_INVALID;
    }

    return XR_SUCCESS;
}

XrResult validate_swapchain_subimage(const XrSwapchainSubImage* subimage, ValidateContext& ctx) {
    XrSwapchain swapchain = subimage->swapchain;
    
    XrResult result = validate_swapchain(swapchain, ctx);
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

XrResult validate_space_warp_info(const XrCompositionLayerSpaceWarpInfoFB* info, ValidateContext& ctx) {
    XrResult result = validate_swapchain_subimage(&info->motionVectorSubImage, ctx);
    if (result != XR_SUCCESS) {
        return result;
    }

    return validate_swapchain_subimage(&info->depthSubImage, ctx);
}

XrResult validate_frame_synthesis_info(const XrFrameSynthesisInfoEXT* info, ValidateContext& ctx) {
    XrResult result = validate_swapchain_subimage(&info->motionVectorSubImage, ctx);
    if (result != XR_SUCCESS) {
        return result;
    }

    return validate_swapchain_subimage(&info->depthSubImage, ctx);
}

XrResult validate_depth_info(const XrCompositionLayerDepthInfoKHR* info, ValidateContext& ctx) {
    return validate_swapchain_subimage(&info->subImage, ctx);
}

XrResult validate_projection_view(const XrCompositionLayerProjectionView* view, ValidateContext& ctx) {
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
                result = validate_space_warp_info(reinterpret_cast<const XrCompositionLayerSpaceWarpInfoFB*>(chain), ctx);
                break;
            case XR_TYPE_FRAME_SYNTHESIS_INFO_EXT:
                result = validate_frame_synthesis_info(reinterpret_cast<const XrFrameSynthesisInfoEXT*>(chain), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_DEPTH_INFO_KHR:
                result = validate_depth_info(reinterpret_cast<const XrCompositionLayerDepthInfoKHR*>(chain), ctx);
                break;
            default:
                spdlog::warn("Unknown XrCompositionLayerProjectionView extension: {}", chain->type);
                spdlog::warn("This may lead to a stall because the swapchain references cannot be extracted");
                // allow this to pass with a warning, maybe it's a struct with no swapchains
        }

        if (result != XR_SUCCESS) {
            return result;
        }
    }

    // now, validate this struct
    return validate_swapchain_subimage(&view->subImage, ctx);
}

XrResult validate_layer(const XrCompositionLayerProjection* layer, ValidateContext& ctx) {
    for (uint32_t i = 0; i < layer->viewCount; i++) {
        XrResult result = validate_projection_view(&layer->views[i], ctx);
        if (result != XR_SUCCESS) {
            return result;
        }
    }

    return XR_SUCCESS;
}

XrResult validate_layer(const XrCompositionLayerQuad* layer, ValidateContext& ctx) {
    return validate_swapchain_subimage(&layer->subImage, ctx);
}

XrResult validate_layer(const XrCompositionLayerCylinderKHR* layer, ValidateContext& ctx) {
    return validate_swapchain_subimage(&layer->subImage, ctx);
}

XrResult validate_layer(const XrCompositionLayerCubeKHR* layer, ValidateContext& ctx) {
    return validate_swapchain(layer->swapchain, ctx);
}

XrResult validate_layer(const XrCompositionLayerEquirectKHR* layer, ValidateContext& ctx) {
    return validate_swapchain_subimage(&layer->subImage, ctx);
}

XrResult validate_layer(const XrCompositionLayerEquirect2KHR* layer, ValidateContext& ctx) {
    return validate_swapchain_subimage(&layer->subImage, ctx);
}

XrResult validate_layer(const XrCompositionLayerPassthroughFB* layer, ValidateContext& ctx) {
    return XR_SUCCESS;
}

XrResult validate_layer(const XrCompositionLayerPassthroughHTC* layer, ValidateContext& ctx) {
    return XR_SUCCESS;
}

} // namespace

XrResult validate_frame_end(const XrFrameEndInfo* frame_end_info, ValidateContext& ctx) {
    for (uint32_t i = 0; i < frame_end_info->layerCount; i++) {
        const XrCompositionLayerBaseHeader* layer = frame_end_info->layers[i];
        XrResult result{};
        switch (layer->type) {
            case XR_TYPE_COMPOSITION_LAYER_PROJECTION:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerProjection*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_QUAD:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerQuad*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_CYLINDER_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerCylinderKHR*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_CUBE_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerCubeKHR*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerEquirectKHR*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_EQUIRECT2_KHR:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerEquirect2KHR*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_FB:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerPassthroughFB*>(layer), ctx);
                break;
            case XR_TYPE_COMPOSITION_LAYER_PASSTHROUGH_HTC:
                result = validate_layer(reinterpret_cast<const XrCompositionLayerPassthroughHTC*>(layer), ctx);
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