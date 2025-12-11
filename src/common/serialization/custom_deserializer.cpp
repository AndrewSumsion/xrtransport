#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"

namespace xrtransport {

void deserialize(XrInstanceCreateInfo* s, DeserializeContext& ctx) {
    deserialize(&s->type, ctx);
    deserialize_xr(&s->next, ctx);
    deserialize(&s->createFlags, ctx);
    deserialize(&s->applicationInfo, ctx);
    deserialize(&s->enabledApiLayerCount, ctx);
    if (!ctx.in_place) {
        s->enabledApiLayerNames = reinterpret_cast<char**>(std::malloc(s->enabledApiLayerCount * sizeof(char*)));
    }
    for (uint32_t i = 0; i < s->enabledApiLayerCount; i++) {
        deserialize_ptr(const_cast<const char**>(&s->enabledApiLayerNames[i]), ctx);
    }
    deserialize(&s->enabledExtensionCount, ctx);
    if (!ctx.in_place) {
        s->enabledExtensionNames = reinterpret_cast<char**>(std::malloc(s->enabledExtensionCount * sizeof(char*)));
    }
    for(uint32_t i = 0; i < s->enabledExtensionCount; i++) {
        deserialize_ptr(const_cast<const char**>(&s->enabledExtensionNames[i]), ctx);
    }
}

void cleanup(const XrInstanceCreateInfo* s) {
    cleanup_xr(s->next);
    for (uint32_t i = 0; i < s->enabledApiLayerCount; i++) {
        cleanup_ptr(s->enabledApiLayerNames[i], count_null_terminated(s->enabledApiLayerNames[i]));
    }
    std::free(const_cast<const char**>(s->enabledApiLayerNames));
    for (uint32_t i = 0; i < s->enabledExtensionCount; i++) {
        cleanup_ptr(s->enabledExtensionNames[i], count_null_terminated(s->enabledExtensionNames[i]));
    }
    std::free(const_cast<const char**>(s->enabledExtensionNames));
}

void deserialize(XrFrameEndInfo* s, DeserializeContext& ctx) {
    deserialize(&s->type, ctx);
    deserialize_xr(&s->next, ctx);
    deserialize_time(&s->displayTime, ctx);
    deserialize(&s->environmentBlendMode, ctx);
    deserialize(&s->layerCount, ctx);
    if (!ctx.in_place) {
        s->layers = reinterpret_cast<XrCompositionLayerBaseHeader**>(std::malloc(s->layerCount * sizeof(XrCompositionLayerBaseHeader*)));
    }
    for (uint32_t i = 0; i < s->layerCount; i++) {
        deserialize_xr(const_cast<const XrCompositionLayerBaseHeader**>(&s->layers[i]), ctx);
    }
}

void cleanup(const XrFrameEndInfo* s) {
    cleanup_xr(s->next);
    for (uint32_t i = 0; i < s->layerCount; i++) {
        cleanup_xr(s->layers[i]);
    }
    std::free(const_cast<const XrCompositionLayerBaseHeader**>(s->layers));
}

} // namespace xrtransport