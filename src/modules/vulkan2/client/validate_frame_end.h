#ifndef XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H
#define XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H

#include "session_state.h"

#include <openxr/openxr.h>

#include <unordered_set>
#include <unordered_map>

XrResult validate_frame_end(const XrFrameEndInfo* frame_end_info);

#endif // XRTRANSPORT_VULKAN2_VALIDATE_FRAME_END_H
