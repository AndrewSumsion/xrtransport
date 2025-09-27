<%namespace name="utils" file="utils.mako"/>

<%def name="forward_deserializer(struct)">
void deserialize(${struct.name}* s, std::istream& in);
</%def>

<%def name="forward_cleaner(struct)">
void cleanup(const ${struct.name}* s);
</%def>

#ifndef XRTRANSPORT_DESERIALIZER_GENERATED_H
#define XRTRANSPORT_DESERIALIZER_GENERATED_H

#include "openxr/openxr.h"

#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <cassert>
#include <cstring>

namespace xrtransport {

// Forward declarations (deserializers)
<%utils:for_grouped_structs args="struct">
${forward_deserializer(struct)}
</%utils:for_grouped_structs>

// Forward declarations (cleaners)
<%utils:for_grouped_structs args="struct">
${forward_cleaner(struct)}
</%utils:for_grouped_structs>

// Struct deserializer lookup
// Only to be used with OpenXR pNext structs
using StructDeserializer = void(*)(XrBaseOutStructure*, std::istream&);
#define STRUCT_DESERIALIZER_PTR(t) (reinterpret_cast<StructDeserializer>(static_cast<void(*)(t*, std::istream&)>(&deserialize)))

extern std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table;

StructDeserializer deserializer_lookup(XrStructureType struct_type);

// Struct cleaner lookup
// Only to be used with OpenXR pNext structs
using StructCleaner = void(*)(const XrBaseOutStructure*);
#define STRUCT_CLEANER_PTR(t) (reinterpret_cast<StructCleaner>(static_cast<void(*)(const t*)>(&cleanup)))

extern std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table;

StructCleaner cleaner_lookup(XrStructureType struct_type);

// Struct size lookup
// Only to be used with OpenXR pNext structs
extern std::unordered_map<XrStructureType, std::size_t> size_lookup_table;

std::size_t size_lookup(XrStructureType struct_type);

// Generic deserializers
template <typename T>
void deserialize(T* x, std::istream& in) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    in.read(reinterpret_cast<char*>(x), sizeof(T));
}

template <typename T>
void deserialize_array(T* x, std::size_t len, std::istream& in) {
    for (std::size_t i = 0; i < len; i++) {
        deserialize(&x[i], in);
    }
}

// For weird const-correctness reasons, we need a const and non-const version
template <typename T>
void deserialize_ptr(const T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

template <typename T>
void deserialize_ptr(T** x, std::istream& in) {
    std::uint32_t len{};
    deserialize(&len, in);
    if (len) {
        T* data = static_cast<T*>(std::malloc(sizeof(T) * len));
        deserialize_array(data, len, in);
        *x = data;
    }
    else {
        *x = nullptr;
    }
}

void deserialize_xr(const void** p_s, std::istream& in);
void deserialize_xr(void** p_s, std::istream& in);

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

void cleanup_xr(const void* untyped);

} // namespace xrtransport

#endif // XRTRANSPORT_DESERIALIZER_GENERATED_H