<%namespace name="utils" file="utils.mako"/>\
<%def name="forward_serializer(struct)">\
void serialize(const ${struct.name}* s, SerializeContext& ctx);\
</%def>

#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport/asio_compat.h"
#include "struct_size.h"

#include "asio/write.hpp"

#include <cstdint>
#include <unordered_map>
#include <cassert>
#include <cstring>

namespace xrtransport {

struct SerializeContext {
    SyncWriteStream& out;
    XrDuration time_offset;

    explicit SerializeContext(SyncWriteStream& out)
        : out(out), time_offset(0)
    {}

    explicit SerializeContext(SyncWriteStream& out, XrTime time_offset)
        : out(out), time_offset(time_offset)
    {}
};

// Forward declarations
<%utils:for_grouped_structs args="struct">\
${forward_serializer(struct)}
</%utils:for_grouped_structs>

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, SerializeContext& ctx);
#define STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, SerializeContext& ctx)>(&serialize)))

extern std::unordered_map<XrStructureType, StructSerializer> serializer_lookup_table;

StructSerializer serializer_lookup(XrStructureType struct_type);

void serialize_time(const XrTime* local_time, SerializeContext& ctx);

// Generic serializers
template <typename T>
void serialize(const T* x, SerializeContext& ctx) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    asio::write(ctx.out, asio::buffer(x, sizeof(T)));
}

template <typename T>
void serialize_array(const T* x, std::size_t len, SerializeContext& ctx) {
    for (std::size_t i = 0; i < len; i++) {
        serialize(&x[i], ctx);
    }
}

template <typename T>
void serialize_ptr(const T* x, std::size_t len, SerializeContext& ctx) {
    std::uint32_t marker = x != nullptr ? len : 0;
    serialize(&marker, ctx);
    if (marker) {
        serialize_array(x, len, ctx);
    }
}

template <typename T>
void serialize_xr(const T* untyped, SerializeContext& ctx) {
    const XrBaseInStructure* x = reinterpret_cast<const XrBaseInStructure*>(untyped);
    XrStructureType type = x != nullptr ? x->type : XR_TYPE_UNKNOWN;
    serialize(&type, ctx);
    if (type != XR_TYPE_UNKNOWN) {
        serializer_lookup(type)(x, ctx);
    }
}

template <typename T>
void serialize_xr_array(const T* untyped, std::size_t len, SerializeContext& ctx) {
    const XrBaseInStructure* first = reinterpret_cast<const XrBaseInStructure*>(untyped);
    std::uint32_t count = first != nullptr ? len : 0;
    serialize(&count, ctx);
    if (count) {
        XrStructureType type = first->type;
        serialize(&type, ctx);
        std::size_t struct_size = size_lookup(type);
        StructSerializer serializer = serializer_lookup(type);
        const char* buffer = reinterpret_cast<const char*>(first);
        for(std::uint32_t i = 0; i < count; i++) {
            serializer(reinterpret_cast<const XrBaseInStructure*>(buffer), ctx);
            buffer += struct_size;
        }
    }
}

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H