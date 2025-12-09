<%def name="serialize_member(member, binding_prefix='s->', ctx_var='ctx')">\
<% member_struct = spec.find_struct(member.type) %>\
## First, check for cases that must be manually implemented
% if member.pointer and member.array:
#error "auto-generator doesn't support array of pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.pointer and member.pointer != "*":
#error "auto-generator doesn't support double pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.len and "," in member.len:
#error "auto-generator doesn't support multi-variable lengths (${binding_prefix}${member.name})"\
<% return %>\
% endif
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
serialize_xr_array(${binding_prefix}${member.name}, ${binding_prefix}${member.len}, ${ctx_var});\
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
serialize_xr(${binding_prefix}${member.name}, ${ctx_var});\
% elif member.pointer and member.len:
<%
    if member.len == "null-terminated":
        count = f"count_null_terminated({binding_prefix}{member.name})"
    else:
        count = f"{binding_prefix}{member.len}"
%>\
serialize_ptr(${binding_prefix}${member.name}, ${count}, ${ctx_var});\
% elif member.pointer:
serialize_ptr(${binding_prefix}${member.name}, 1, ${ctx_var});\
% elif member.array:
serialize_array(${binding_prefix}${member.name}, ${member.array}, ${ctx_var});\
% elif member.type == "XrTime":
serialize_time(&${binding_prefix}${member.name}, ${ctx_var});\
% else:
serialize(&${binding_prefix}${member.name}, ${ctx_var});\
% endif
</%def>

<%def name="deserialize_member(member, binding_prefix='s->', ctx_var='ctx')">\
<% member_struct = spec.find_struct(member.type) %>\
## First, check for cases that must be manually implemented
% if member.pointer and member.array:
#error "auto-generator doesn't support array of pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.pointer and member.pointer != "*":
#error "auto-generator doesn't support double pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.len and "," in member.len:
#error "auto-generator doesn't support multi-variable lengths (${binding_prefix}${member.name})"\
<% return %>\
% endif
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
deserialize_xr_array(&${binding_prefix}${member.name}, ${ctx_var});\
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
deserialize_xr(&${binding_prefix}${member.name}, ${ctx_var});\
% elif member.pointer:
deserialize_ptr(&${binding_prefix}${member.name}, ${ctx_var});\
% elif member.array:
deserialize_array(${binding_prefix}${member.name}, ${member.array}, ${ctx_var});\
% elif member.type == "XrTime":
deserialize_time(&${binding_prefix}${member.name}, ${ctx_var});\
% else:
deserialize(&${binding_prefix}${member.name}, ${ctx_var});\
% endif
</%def>

<%def name="cleanup_member(member, binding_prefix='s->')">\
<% member_struct = spec.find_struct(member.type) %>\
## First, check for cases that must be manually implemented
% if member.pointer and member.array:
#error "auto-generator doesn't support array of pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.pointer and member.pointer != "*":
#error "auto-generator doesn't support double pointers (${binding_prefix}${member.name})"\
<% return %>\
% endif
% if member.len and "," in member.len:
#error "auto-generator doesn't support multi-variable lengths (${binding_prefix}${member.name})"\
<% return %>\
% endif
## Now handle valid members
% if member.pointer and member.len and member_struct and member_struct.header:
cleanup_xr_array(${binding_prefix}${member.name}, ${binding_prefix}${member.len});\
% elif (member.type == "void" and member.pointer == "*" and member.name == "next") or (member_struct and member_struct.header):
cleanup_xr(${binding_prefix}${member.name});\
% elif member.pointer and member.len:
<%
    if member.len == "null-terminated":
        count = f"count_null_terminated({binding_prefix}{member.name})"
    else:
        count = f"{binding_prefix}{member.len}"
%>\
cleanup_ptr(${binding_prefix}${member.name}, ${count});\
% elif member.pointer:
cleanup_ptr(${binding_prefix}${member.name}, 1);\
% elif member.array:
cleanup_array(${binding_prefix}${member.name}, ${member.array});\
% else:
cleanup(&${binding_prefix}${member.name});\
% endif
</%def>

<%def name="serialize_binding(binding, ctx_var='ctx')">\
% for _loop in binding.loops:
for (int ${_loop.var} = ${_loop.base}; ${_loop.var} < ${_loop.end}; ${_loop.var}++) {\
% endfor
% if binding.type == "xr_array":
serialize_xr_array(${binding.binding_str}, ${binding.len}, ${ctx_var});\
% elif binding.type == "xr":
serialize_xr(${binding.binding_str}, ${ctx_var});\
% elif binding.type == "sized_ptr" or binding.type == "array":
serialize_ptr(${binding.binding_str}, ${binding.len}, ${ctx_var});\
% elif binding.type == "ptr":
serialize_ptr(${binding.binding_str}, 1, ${ctx_var});\
% elif binding.param.type == "XrTime":
serialize_time(&${binding.binding_str}, ${ctx_var});\
% else:
serialize(&${binding.binding_str}, ${ctx_var});\
% endif
% for _loop in binding.loops:
}\
% endfor
</%def>

<%def name="deserialize_binding(binding, ctx_var='ctx')">\
% for _loop in binding.loops:
for (int ${_loop.var} = ${_loop.base}; ${_loop.var} < ${_loop.end}; ${_loop.var}++) {\
% endfor
% if binding.type == "xr_array":
deserialize_xr_array(&${binding.binding_str}, ${ctx_var});\
% elif binding.type == "xr":
deserialize_xr(&${binding.binding_str}, ${ctx_var});\
% elif binding.type == "sized_ptr" or binding.type == "ptr" or binding.type == "array":
deserialize_ptr(&${binding.binding_str}, ${ctx_var});\
% elif binding.param.type == "XrTime":
deserialize_time(&${binding.binding_str}, ${ctx_var});\
% else:
deserialize(&${binding.binding_str}, ${ctx_var});\
% endif
% for _loop in binding.loops:
}\
% endfor
</%def>

<%def name="for_grouped_structs(xr_structs_only=False)">\
% for ext_name, extension in spec.extensions.items():
% if extension.structs:
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
% endif
% for struct in extension.structs:
% if not xr_structs_only or struct.xr_type:
${caller.body(struct=struct)}\
% endif
% endfor
% if ext_name:
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endif
% endfor
</%def>

<%def name="for_grouped_functions()">\
% for ext_name, extension in spec.extensions.items():
% if extension.functions:
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
% endif
% for function in extension.functions:
${caller.body(function=function)}\
% endfor
% if ext_name:
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endif
% endfor
</%def>