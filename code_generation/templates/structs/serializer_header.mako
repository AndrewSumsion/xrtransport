// SPDX-License-Identifier: LGPL-3.0-or-later

<%namespace name="utils" file="utils.mako"/>\
<%def name="forward_serializer(struct)">\
void serialize(const ${struct.name}* s, SerializeContext& ctx);\
</%def>

#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport/asio_compat.h"
#include "struct_size.h"
#include "error.h"

#include "asio/write.hpp"
#include <spdlog/spdlog.h>

#include <cstdint>
#include <unordered_map>
#include <cassert>
#include <cstring>

namespace xrtransport {

struct SerializeContext {
    SyncWriteStream& out;
    XrDuration time_offset;
    bool skip_unknown_structs;

    explicit SerializeContext(SyncWriteStream& out)
        : out(out), time_offset(0), skip_unknown_structs(false)
    {}

    explicit SerializeContext(SyncWriteStream& out, XrTime time_offset)
        : out(out), time_offset(time_offset), skip_unknown_structs(false)
    {}

    explicit SerializeContext(SyncWriteStream& out, bool skip_unknown_structs)
        : out(out), time_offset(0), skip_unknown_structs(skip_unknown_structs)
    {}

    explicit SerializeContext(SyncWriteStream& out, bool skip_unknown_structs, XrTime time_offset)
        : out(out), time_offset(time_offset), skip_unknown_structs(skip_unknown_structs)
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
    if (x) {
        XrStructureType type = x->type;
        StructSerializer serializer = serializer_lookup(type);
        if (!serializer) {
            if (ctx.skip_unknown_structs) {
                spdlog::warn("Skipping serializing unknown XR struct: {}", (int)type);
                // serialize the next item in the chain
                serialize_xr(x->next, ctx);
                return;
            }
            else {
                throw UnknownXrStructureTypeException("Unknown XrStructureType in serialize: " + std::to_string(type));
            }
        }
        serialize(&type, ctx);
        serializer(x, ctx);
    }
    else {
        // XR_TYPE_UNKNOWN signifies nullptr
        XrStructureType type = XR_TYPE_UNKNOWN;
        serialize(&type, ctx);
    }
}

template <typename T>
void serialize_xr_array(const T* untyped, std::size_t len, SerializeContext& ctx) {
    const XrBaseInStructure* first = reinterpret_cast<const XrBaseInStructure*>(untyped);
    if (first) {
        XrStructureType type = first->type;
        StructSerializer serializer = serializer_lookup(type);
        if (!serializer) {
            if (ctx.skip_unknown_structs) {
                spdlog::warn("Skipping serializing unknown XR struct array: {}", (int)type);
                // in this case, we should just serialize as if the array was null
                std::uint32_t count = 0;
                serialize(&count, ctx);
                return;
            }
            else {
                throw UnknownXrStructureTypeException("Unknown XrStructureType in serialize: " + std::to_string(type));
            }
        }

        std::uint32_t count = static_cast<std::uint32_t>(len);
        serialize(&count, ctx);
        serialize(&type, ctx);
        
        std::size_t struct_size = size_lookup(type);
        const char* buffer = reinterpret_cast<const char*>(first);
        for(std::uint32_t i = 0; i < count; i++) {
            serializer(reinterpret_cast<const XrBaseInStructure*>(buffer), ctx);
            buffer += struct_size;
        }
    }
    else {
        std::uint32_t count = 0;
        serialize(&count, ctx);
    }
}

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H