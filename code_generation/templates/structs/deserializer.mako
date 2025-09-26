<%namespace name="utils" file="utils.mako"/>

<%def name="forward_deserializer(struct)">
static void deserialize(${struct.name}* s, std::istream& in);
</%def>

<%def name="forward_cleaner(struct)">
static void cleanup(const ${struct.name}* s);
</%def>

<%def name="deserialize_member(member, binding_prefix='s->')">
<% member_struct = spec.find_struct(member.type) %>
## First, check for cases that must be manually implemented
% if member.pointer and member.array:
    #error "auto-generator doesn't support array of pointers (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.pointer and member.pointer != "*":
    #error "auto-generator doesn't support double pointers (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.len and "," in member.len:
    #error "auto-generator doesn't support multi-variable lengths (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.pointer and member.len and member_struct and member_struct.header:
    #error "auto-generator doesn't support arrays of header structs (${binding_prefix}${member.name})"
    <% return %>
% endif
## Now handle valid members
% if (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
    deserialize_xr(&${binding_prefix}next, in);
% elif member.pointer:
    deserialize_ptr(&${binding_prefix}${member.name}, in);
% elif member.array:
    deserialize_array(${binding_prefix}${member.name}, ${member.array}, in);
% else:
    deserialize(&${binding_prefix}${member.name}, in);
% endif
</%def>

<%def name="deserializer(struct)">
static void deserialize(${struct.name}* s, std::istream& in) {
    % for member in struct.members:
        ${deserialize_member(member)}
    % endfor
}
</%def>

<%def name="cleanup_member(member, binding_prefix='s->')">
<% member_struct = spec.find_struct(member.type) %>
## First, check for cases that must be manually implemented
% if member.pointer and member.array:
    #error "auto-generator doesn't support array of pointers (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.pointer and member.pointer != "*":
    #error "auto-generator doesn't support double pointers (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.len and "," in member.len:
    #error "auto-generator doesn't support multi-variable lengths (${binding_prefix}${member.name})"
    <% return %>
% endif
% if member.pointer and member.len and member_struct and member_struct.header:
    #error "auto-generator doesn't support arrays of header structs (${binding_prefix}${member.name})"
    <% return %>
% endif
## Now handle valid members
% if (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
    cleanup_xr(${binding_prefix}${member.name});
% elif member.pointer:
    <%
        if member.len:
            if member.len == "null-terminated":
                count = f"count_null_terminated({binding_prefix}{member.name})"
            else:
                count = f"{binding_prefix}{member.len}"
        else:
            count = "1"
    %>
    cleanup_ptr(${binding_prefix}${member.name}, ${count});
% elif member.array:
    cleanup_array(${binding_prefix}${member.name}, ${member.array});
% else:
    cleanup(&${binding_prefix}${member.name});
% endif
</%def>

<%def name="cleaner(struct)">
static void cleanup(const ${struct.name}* s) {
    % for member in struct.members:
        ${cleanup_member(member)}
    % endfor
}
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

static std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_DESERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

static StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    assert(deserializer_lookup_table.find(struct_type) != deserializer_lookup_table.end());
    return deserializer_lookup_table[struct_type];
}

// Struct cleaner lookup
// Only to be used with OpenXR pNext structs
using StructCleaner = void(*)(const XrBaseOutStructure*);
#define STRUCT_CLEANER_PTR(t) (reinterpret_cast<StructCleaner>(static_cast<void(*)(const t*)>(&cleanup)))

static std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_CLEANER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

static StructCleaner cleaner_lookup(XrStructureType struct_type) {
    assert(cleaner_lookup_table.find(struct_type) != cleaner_lookup_table.end());
    return cleaner_lookup_table.at(struct_type);
}

// Struct size lookup
// Only to be used with OpenXR pNext structs
static std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, sizeof(${struct.name})},
</%utils:for_grouped_structs>
};

static std::size_t size_lookup(XrStructureType struct_type) {
    assert(size_lookup_table.find(struct_type) != size_lookup_table.end());
    return size_lookup_table.at(struct_type);
}

// Generic deserializers
template <typename T>
static void deserialize(T* x, std::istream& in) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    in.read(reinterpret_cast<char*>(x), sizeof(T));
}

template <typename T>
static void deserialize_array(T* x, std::size_t len, std::istream& in) {
    for (std::size_t i = 0; i < len; i++) {
        deserialize(&x[i], in);
    }
}

// For weird const-correctness reasons, we need a const and non-const version
template <typename T>
static void deserialize_ptr(const T** x, std::istream& in) {
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
static void deserialize_ptr(T** x, std::istream& in) {
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

static void deserialize_xr(const void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

static void deserialize_xr(void** p_s, std::istream& in) {
    XrStructureType type{};
    deserialize(&type, in);
    if (type) {
        XrBaseOutStructure* s = static_cast<XrBaseOutStructure*>(std::malloc(size_lookup(type)));
        deserializer_lookup(type)(s, in);
        *p_s = s;
    }
    else {
        *p_s = nullptr;
    }
}

// Generic cleaners
template <typename T>
static void cleanup(const T* x) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    // no-op for primitive types
    (void)x;
}

template <typename T>
static void cleanup_array(const T* x, std::size_t len) {
    for (std::size_t i = 0; i < len; i++) {
        cleanup(&x[i]);
    }
}

template <typename T>
static void cleanup_ptr(const T* x, std::size_t len) {
    if (!x) {
        return; // do not clean up null pointer
    }
    cleanup_array(x, len);
    std::free(const_cast<T*>(x));
}

static void cleanup_xr(const void* untyped) {
    if (!untyped) {
        return; // do not clean up null pointer
    }
    const XrBaseOutStructure* x = static_cast<const XrBaseOutStructure*>(untyped);
    cleaner_lookup(x->type)(x);
    std::free(const_cast<void*>(untyped));
}

// Deserializers
<%utils:for_grouped_structs args="struct">
% if not struct.custom:
${deserializer(struct)}
% endif
</%utils:for_grouped_structs>

// Cleaners
<%utils:for_grouped_structs args="struct">
% if not struct.custom:
${cleaner(struct)}
% endif
</%utils:for_grouped_structs>

// Custom implementations
#include "custom/deserializer.h"

} // namespace xrtransport

#endif // XRTRANSPORT_DESERIALIZER_GENERATED_H