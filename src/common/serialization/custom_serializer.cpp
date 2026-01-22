// SPDX-License-Identifier: LGPL-3.0-or-later

#include "xrtransport/serialization/serializer.h"
#include "xrtransport/util.h"

namespace xrtransport {

void serialize(const XrInstanceCreateInfo* s, SerializeContext& ctx) {
    serialize(&s->type, ctx);
    serialize_xr(s->next, ctx);
    serialize(&s->createFlags, ctx);
    serialize(&s->applicationInfo, ctx);
    serialize(&s->enabledApiLayerCount, ctx);
    for (uint32_t i = 0; i < s->enabledApiLayerCount; i++) {
        serialize_ptr(s->enabledApiLayerNames[i], count_null_terminated(s->enabledApiLayerNames[i]), ctx);
    }
    serialize(&s->enabledExtensionCount, ctx);
    for (uint32_t i = 0; i < s->enabledExtensionCount; i++) {
        serialize_ptr(s->enabledExtensionNames[i], count_null_terminated(s->enabledExtensionNames[i]), ctx);
    }
}

void serialize(const XrFrameEndInfo* s, SerializeContext& ctx) {
    serialize(&s->type, ctx);
    serialize_xr(s->next, ctx);
    serialize_time(&s->displayTime, ctx);
    serialize(&s->environmentBlendMode, ctx);
    serialize(&s->layerCount, ctx);
    for (uint32_t i = 0; i < s->layerCount; i++) {
        serialize_xr(s->layers[i], ctx);
    }
}

} // namespace xrtransport