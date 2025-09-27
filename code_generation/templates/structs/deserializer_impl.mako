<%namespace name="utils" file="utils.mako"/>

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
void deserialize(${struct.name}* s, std::istream& in) {
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
    cleanup_xr(${binding_prefix}next);
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
void cleanup(const ${struct.name}* s) {
    % for member in struct.members:
        ${cleanup_member(member)}
    % endfor
}
</%def>

#include "xrtransport/deserializer.h"

namespace xrtransport {

std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_DESERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    assert(deserializer_lookup_table.find(struct_type) != deserializer_lookup_table.end());
    return deserializer_lookup_table[struct_type];
}

std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_CLEANER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructCleaner cleaner_lookup(XrStructureType struct_type) {
    assert(cleaner_lookup_table.find(struct_type) != cleaner_lookup_table.end());
    return cleaner_lookup_table.at(struct_type);
}

std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, sizeof(${struct.name})},
</%utils:for_grouped_structs>
};

std::size_t size_lookup(XrStructureType struct_type) {
    assert(size_lookup_table.find(struct_type) != size_lookup_table.end());
    return size_lookup_table.at(struct_type);
}

void deserialize_xr(const void** p_s, std::istream& in) {
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

void deserialize_xr(void** p_s, std::istream& in) {
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

void cleanup_xr(const void* untyped) {
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

} // namespace xrtransport