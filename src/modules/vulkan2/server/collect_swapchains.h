#ifndef XRTRANSPORT_VULKAN2_COLLECT_SWAPCHAINS_H
#define XRTRANSPORT_VULKAN2_COLLECT_SWAPCHAINS_H

#include "session_state.h"

#include <openxr/openxr.h>

#include <unordered_set>

void collect_swapchains(const XrFrameEndInfo* frame_end_info, std::unordered_set<XrSwapchain>& swapchains);

#endif // XRTRANSPORT_VULKAN2_COLLECT_SWAPCHAINS_H
