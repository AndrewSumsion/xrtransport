#ifndef XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H
#define XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H

#include "session_state.h"

#include <openxr/openxr.h>

#include <unordered_set>
#include <unordered_map>

struct ValidateContext {
    std::unordered_set<XrSwapchain> referenced_swapchains;
};

XrResult validate_frame_end(const XrFrameEndInfo* frame_end_info, ValidateContext& ctx);

#endif // XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H
