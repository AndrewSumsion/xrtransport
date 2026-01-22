// SPDX-License-Identifier: LGPL-3.0-or-later

<%namespace name="utils" file="utils.mako"/>\
<%def name="forward_deserializer(struct)">\
void deserialize(${struct.name}* s, DeserializeContext& ctx);\
</%def>

<%def name="forward_cleaner(struct)">\
void cleanup(const ${struct.name}* s);\
</%def>

#ifndef XRTRANSPORT_DESERIALIZER_GENERATED_H
#define XRTRANSPORT_DESERIALIZER_GENERATED_H

#include "openxr/openxr.h"
#include "xrtransport/asio_compat.h"
#include "struct_size.h"

#include "asio/read.hpp"
#include "asio/write.hpp"

#include <cstdint>
#include <unordered_map>
#include <cstring>
#include <stdexcept>

namespace xrtransport {

struct DeserializeContext {
    SyncReadStream& in;
    bool in_place;
    XrDuration time_offset;

    explicit DeserializeContext(SyncReadStream& in)
        : in(in), in_place(false), time_offset(0)
    {}

    explicit DeserializeContext(SyncReadStream& in, bool in_place, XrDuration time_offset)
        : in(in), in_place(in_place), time_offset(time_offset)
    {}
};

// Forward declarations (deserializers)
<%utils:for_grouped_structs args="struct">\
${forward_deserializer(struct)}
</%utils:for_grouped_structs>

// Forward declarations (cleaners)
<%utils:for_grouped_structs args="struct">\
${forward_cleaner(struct)}
</%utils:for_grouped_structs>

// Struct deserializer lookup
// Only to be used with OpenXR pNext structs
using StructDeserializer = void(*)(XrBaseOutStructure*, DeserializeContext&);
#define STRUCT_DESERIALIZER_PTR(t) (reinterpret_cast<StructDeserializer>(static_cast<void(*)(t*, DeserializeContext&)>(&deserialize)))

StructDeserializer deserializer_lookup(XrStructureType struct_type);

// Struct cleaner lookup
// Only to be used with OpenXR pNext structs
using StructCleaner = void(*)(const XrBaseOutStructure*);
#define STRUCT_CLEANER_PTR(t) (reinterpret_cast<StructCleaner>(static_cast<void(*)(const t*)>(&cleanup)))

StructCleaner cleaner_lookup(XrStructureType struct_type);

void deserialize_time(XrTime* time, DeserializeContext& ctx);

// Generic deserializers
template <typename T>
void deserialize(T* x, DeserializeContext& ctx) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    asio::read(ctx.in, asio::buffer(x, sizeof(T)));
}

template <typename T>
void deserialize(const T* x, DeserializeContext& ctx) {
    deserialize(const_cast<typename std::remove_const<T>::type*>(x), ctx);
}

template <typename T>
void deserialize_array(T* x, std::size_t len, DeserializeContext& ctx) {
    for (std::size_t i = 0; i < len; i++) {
        deserialize(&x[i], ctx);
    }
}

// For weird const-correctness reasons, we need a const and non-const version
template <typename T>
void deserialize_ptr(const T** x, DeserializeContext& ctx) {
    std::uint32_t len{};
    deserialize(&len, ctx);
    if (len) {
        if (ctx.in_place) {
            if (!*x) {
                throw std::runtime_error("Attempted to deserialize in-place into nullptr");
            }
            deserialize_array(*x, len, ctx);
        }
        else {
            T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
            deserialize_array(data, len, ctx);
            *x = data;
        }
    }
    else {
        if (ctx.in_place) {
            if (*x) {
                throw std::runtime_error("Attempted to deserialize in-place nullptr but pointer is allocated");
            }
        }
        else {
            *x = nullptr;
        }
    }
}

template <typename T>
void deserialize_ptr(T** x, DeserializeContext& ctx) {
    std::uint32_t len{};
    deserialize(&len, ctx);
    if (len) {
        if (ctx.in_place) {
            if (!*x) {
                throw std::runtime_error("Attempted to deserialize in-place into nullptr");
            }
            deserialize_array(*x, len, ctx);
        }
        else {
            T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
            deserialize_array(data, len, ctx);
            *x = data;
        }
    }
    else {
        if (ctx.in_place) {
            if (*x) {
                throw std::runtime_error("Attempted to deserialize in-place nullptr but pointer is allocated");
            }
        }
        else {
            *x = nullptr;
        }
    }
}

template <typename T>
void deserialize_xr(const T** p_s, DeserializeContext& ctx) {
    XrStructureType type{};
    deserialize(&type, ctx);
    if (type) {
        const void* dest = ctx.in_place ? *p_s : std::malloc(size_lookup(type));
        if (ctx.in_place && !dest) {
            throw std::runtime_error("Attempted to deserialize in-place to nullptr");
        }
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(const_cast<void*>(dest));
        deserializer_lookup(type)(s, ctx);
        if (!ctx.in_place) {
            *p_s = reinterpret_cast<T*>(s);
        }
    }
    else {
        if (ctx.in_place && *p_s) {
            throw std::runtime_error("Attempted to deserialize in-place nullptr into allocated pointer");
        }
        if (!ctx.in_place) {
            *p_s = nullptr;
        }
    }
}

template <typename T>
void deserialize_xr(T** p_s, DeserializeContext& ctx) {
    XrStructureType type{};
    deserialize(&type, ctx);
    if (type) {
        void* dest = ctx.in_place ? *p_s : std::malloc(size_lookup(type));
        if (ctx.in_place && !dest) {
            assert(false && "Attempted to deserialize in-place to nullptr");
        }
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(dest);
        deserializer_lookup(type)(s, ctx);
        if (!ctx.in_place) {
            *p_s = reinterpret_cast<T*>(s);
        }
    }
    else {
        if (ctx.in_place && *p_s) {
            assert(false && "Attempted to deserialize in-place nullptr into allocated pointer");
        }
        if (!ctx.in_place) {
            *p_s = nullptr;
        }
    }
}

template <typename T>
void deserialize_xr_array(T** p_s, DeserializeContext& ctx) {
    std::uint32_t count{};
    deserialize(&count, ctx);
    if (count) {
        XrStructureType type{};
        deserialize(&type, ctx);
        std::size_t struct_size = size_lookup(type);
        StructDeserializer deserializer = deserializer_lookup(type);
        T* dest;
        if (ctx.in_place) {
            dest = *p_s;
        }
        else {
            dest = reinterpret_cast<T*>(std::malloc(struct_size * count));
            *p_s = dest;
        }
        char* buffer = reinterpret_cast<char*>(dest);
        XrBaseOutStructure* first = reinterpret_cast<XrBaseOutStructure*>(dest);
        for(std::uint32_t i = 0; i < count; i++) {
            XrBaseOutStructure* s = reinterpret_cast<XrBaseOutStructure*>(buffer);
            deserializer(s, ctx);
            buffer += struct_size;
        }
    }
    else {
        *p_s = nullptr;
    }
}

template <typename T>
void deserialize_xr_array(const T** p_s, DeserializeContext& ctx) {
    std::uint32_t count{};
    deserialize(&count, ctx);
    if (count) {
        XrStructureType type{};
        deserialize(&type, ctx);
        std::size_t struct_size = size_lookup(type);
        StructDeserializer deserializer = deserializer_lookup(type);
        T* dest;
        if (ctx.in_place) {
            dest = *p_s;
        }
        else {
            dest = reinterpret_cast<T*>(std::malloc(struct_size * count));
            *p_s = dest;
        }
        char* buffer = reinterpret_cast<char*>(dest);
        XrBaseOutStructure* first = reinterpret_cast<XrBaseOutStructure*>(dest);
        for(std::uint32_t i = 0; i < count; i++) {
            XrBaseOutStructure* s = reinterpret_cast<XrBaseOutStructure*>(buffer);
            deserializer(s, ctx);
            buffer += struct_size;
        }
    }
    else {
        *p_s = nullptr;
    }
}

// Generic cleaners
template <typename T>
void cleanup(const T* x) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    // no-op for primitive types
    (void)x;
}

template <typename T>
void cleanup_array(const T* x, std::size_t len) {
    for (std::size_t i = 0; i < len; i++) {
        cleanup(&x[i]);
    }
}

template <typename T>
void cleanup_ptr(const T* x, std::size_t len) {
    if (!x) {
        return; // do not clean up null pointer
    }
    cleanup_array(x, len);
    std::free(const_cast<T*>(x));
}

template <typename T>
void cleanup_xr(const T* untyped) {
    if (!untyped) {
        return; // do not clean up null pointer
    }
    const XrBaseOutStructure* x = reinterpret_cast<const XrBaseOutStructure*>(untyped);
    cleaner_lookup(x->type)(x);
    std::free(const_cast<XrBaseOutStructure*>(x));
}

template <typename T>
void cleanup_xr_array(const T* untyped, std::size_t count) {
    if (!untyped) {
        return; // do not clean up null pointer
    }
    const XrBaseOutStructure* first = reinterpret_cast<const XrBaseOutStructure*>(untyped);
    XrStructureType type = first->type;
    std::size_t struct_size = size_lookup(type);
    StructCleaner cleaner = cleaner_lookup(type);
    const char* buffer = reinterpret_cast<const char*>(untyped);
    for(std::size_t i = 0; i < count; i++) {
        cleaner(reinterpret_cast<const XrBaseOutStructure*>(buffer));
        buffer += struct_size;
    }
    std::free(const_cast<XrBaseOutStructure*>(first));
}

} // namespace xrtransport

#endif // XRTRANSPORT_DESERIALIZER_GENERATED_H