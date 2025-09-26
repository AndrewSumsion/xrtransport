<%namespace name="utils" file="utils.mako"/>

<%def name="forward_serializer(struct)">
static void serialize(const ${struct.name}* s, std::ostream& out);
</%def>

<%def name="serialize_member(member, binding_prefix='s->')">
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
% if member.type == "void" and member.pointer == "*" and member.name == "next":
    serialize_xr(${binding_prefix}next, out);
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
    serialize_ptr(${binding_prefix}${member.name}, ${count}, out);
% elif member.array:
    serialize_array(${binding_prefix}${member.name}, ${member.array}, out);
% else:
    serialize(&${binding_prefix}${member.name}, out);
% endif
</%def>

<%def name="serializer(struct)">
static void serialize(const ${struct.name}* s, std::ostream& out) {
    % if struct.header:
        serialize_xr(s, out);
    % else:
        % for member in struct.members:
            ${serialize_member(member)}
        % endfor
    % endif
}
</%def>

#ifndef XRTRANSPORT_SERIALIZER_GENERATED_H
#define XRTRANSPORT_SERIALIZER_GENERATED_H

#include "openxr/openxr.h"

#include <iostream>
#include <cstdint>
#include <unordered_map>
#include <cassert>
#include <cstring>

namespace xrtransport {

// Forward declarations
<%utils:for_grouped_structs args="struct">
${forward_serializer(struct)}
</%utils:for_grouped_structs>

// Only to be used with OpenXR pNext structs
using StructSerializer = void(*)(const XrBaseInStructure*, std::ostream&);
#define STRUCT_SERIALIZER_PTR(t) (reinterpret_cast<StructSerializer>(static_cast<void(*)(const t*, std::ostream&)>(&serialize)))

static std::unordered_map<XrStructureType, StructSerializer> serializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_SERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

static StructSerializer serializer_lookup(XrStructureType struct_type) {
    assert(serializer_lookup_table.find(struct_type) != serializer_lookup_table.end());
    return serializer_lookup_table[struct_type];
}

// Generic serializers
template <typename T>
static void serialize(const T* x, std::ostream& out) {
    static_assert(
        !std::is_class<T>::value,
        "T must be a supported type"
    );
    out.write(reinterpret_cast<const char*>(x), sizeof(T));
}

template <typename T>
static void serialize_array(const T* x, std::size_t len, std::ostream& out) {
    for (std::size_t i = 0; i < len; i++) {
        serialize(&x[i], out);
    }
}

template <typename T>
static void serialize_ptr(const T* x, std::size_t len, std::ostream& out) {
    std::uint32_t marker = x != nullptr ? len : 0;
    serialize(&marker, out);
    if (marker) {
        serialize_array(x, len, out);
    }
}

static void serialize_xr(const void* untyped, std::ostream& out) {
    const XrBaseInStructure* x = static_cast<const XrBaseInStructure*>(untyped);
    XrStructureType type = x != nullptr ? x->type : XR_TYPE_UNKNOWN;
    serialize(&type, out);
    if (type != XR_TYPE_UNKNOWN) {
        serializer_lookup(type)(x, out);
    }
}

// Serializers
<%utils:for_grouped_structs args="struct">
% if not struct.custom:
${serializer(struct)}
% endif
</%utils:for_grouped_structs>

// Custom implementations
#include "custom/serializer.h"

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZER_GENERATED_H