<%def name="serialize_member(member, binding_prefix='s->', stream_var='out')">
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
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
    serialize_xr_array(${binding_prefix}${member.name}, ${binding_prefix}${member.len}, ${stream_var});
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
    serialize_xr(${binding_prefix}${member.name}, ${stream_var});
% elif member.pointer and member.len:
    <%
        if member.len == "null-terminated":
            count = f"count_null_terminated({binding_prefix}{member.name})"
        else:
            count = f"{binding_prefix}{member.len}"
    %>
    serialize_ptr(${binding_prefix}${member.name}, ${count}, ${stream_var});
% elif member.pointer:
    serialize_ptr(${binding_prefix}${member.name}, 1, ${stream_var});
% elif member.array:
    serialize_array(${binding_prefix}${member.name}, ${member.array}, ${stream_var});
% else:
    serialize(&${binding_prefix}${member.name}, ${stream_var});
% endif
</%def>

<%def name="deserialize_member(member, binding_prefix='s->', stream_var='in', in_place_var='in_place')">
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
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
    deserialize_xr_array(&${binding_prefix}${member.name}, ${stream_var}, ${in_place_var});
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
    deserialize_xr(&${binding_prefix}${member.name}, ${stream_var}, ${in_place_var});
% elif member.pointer:
    deserialize_ptr(&${binding_prefix}${member.name}, ${stream_var}, ${in_place_var});
% elif member.array:
    deserialize_array(${binding_prefix}${member.name}, ${member.array}, ${stream_var}, ${in_place_var});
% else:
    deserialize(&${binding_prefix}${member.name}, ${stream_var}, ${in_place_var});
% endif
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
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
    cleanup_xr_array(${binding_prefix}${member.name}, ${binding_prefix}${member.len});
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
    cleanup_xr(${binding_prefix}${member.name});
% elif member.pointer and member.len:
    <%
        if member.len == "null-terminated":
            count = f"count_null_terminated({binding_prefix}{member.name})"
        else:
            count = f"{binding_prefix}{member.len}"
    %>
    cleanup_ptr(${binding_prefix}${member.name}, ${count});
% elif member.pointer:
    cleanup_ptr(${binding_prefix}${member.name}, 1);
% elif member.array:
    cleanup_array(${binding_prefix}${member.name}, ${member.array});
% else:
    cleanup(&${binding_prefix}${member.name});
% endif
</%def>

<%def name="for_grouped_structs(xr_structs_only=False)">
% for ext_name, extension in spec.extensions.items():
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
% endif
% for struct in extension.structs:
% if not xr_structs_only or struct.xr_type:
${caller.body(struct=struct)}
% endif
% endfor
% if ext_name:
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endfor
</%def>

<%def name="for_grouped_functions()">
% for ext_name, extension in spec.extensions.items():
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
% endif
% for function in extension.functions:
${caller.body(function=function)}
% endfor
% if ext_name:
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endfor
</%def>