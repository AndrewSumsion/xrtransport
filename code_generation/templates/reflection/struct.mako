#ifndef XRT_REFLECTION_STRUCT_H
#define XRT_REFLECTION_STRUCT_H

<%def name="list_struct(struct)">\
% if struct.custom and struct.xr_type:
(${struct.name}, XR_CUSTOM, ${struct.xr_type})\
% elif struct.custom:
(${struct.name}, CUSTOM, ${struct.xr_type})\
% elif struct.xr_type:
(${struct.name}, XR, ${struct.xr_type})\
% elif struct.header:
(${struct.name}, XR_HEADER)\
% else:
(${struct.name}, PLAIN)\
% endif
</%def>

<%def name="enumerate_member(member)">\
<% member_struct = spec.find_struct(member.type) %>\
% if member.is_next_ptr() or (member.pointer and member_struct and member_struct.header):
(${member.name}, ${member.full_type()}, XR)\
% elif member.pointer:
(${member.name}, ${member.full_type()}, POINTER, \
${"true" if member.qualifier == "const" else "false"}, \
% if member.len == "null-terminated":
count_null_terminated(s->${member.name})\
% elif member.len:
s->${member.len}\
% else:
1\
% endif
)\
% elif member.array:
(${member.name}, ${member.full_type()}, ARRAY, \
${member.array})\
% else:
(${member.name}, ${member.full_type()}, PLAIN)\
% endif
</%def>

// Toggleable lists of structs for each extension
% for ext_name, ext in spec.extensions.items():
% if len(ext.structs) == 0:
#define XRT_STRUCT_LIST_${ext_name}(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_${ext_name}(_)
% elif ext_name != None:
#ifdef XRT_ENABLE_${ext_name}
#define XRT_STRUCT_LIST_${ext_name}(_) ${"\\"}
% for struct in ext.structs:
    _${list_struct(struct)} ${"\\" if not loop.last else ""}
% endfor
#define XRT_STRUCT_LIST_UNAVAILABLE_${ext_name}(_)
#else
#define XRT_STRUCT_LIST_${ext_name}(_)
#define XRT_STRUCT_LIST_UNAVAILABLE_${ext_name}(_) ${"\\"}
% for struct in ext.structs:
    _(${struct.name}) ${"\\" if not loop.last else ""}
% endfor
#endif
% endif
% endfor

// List of base structs and all enabled extension structs
#define XRT_STRUCT_LIST_ALL(_) ${"\\"}
% for struct in spec.extensions[None].structs:
    _${list_struct(struct)} ${"\\"}
% endfor
% for ext_name in spec.extensions:
% if ext_name != None:
    XRT_STRUCT_LIST_${ext_name}(_) ${"\\" if not loop.last else ""}
% endif
% endfor

// List of all non-enabled extension structs
#define XRT_STRUCT_LIST_UNAVAILABLE(_) ${"\\"}
% for ext_name in spec.extensions:
% if ext_name != None:
    XRT_STRUCT_LIST_UNAVAILABLE_${ext_name}(_) ${"\\" if not loop.last else ""}
% endif
% endfor

% for ext_name, ext in spec.extensions.items():
% for struct in ext.structs:
#define XRT_ENUMERATE_${struct.name}(_) ${"\\"}
% for member in struct.members:
    _${enumerate_member(member)} ${"\\" if not loop.last else ""}
% endfor
% endfor
% endfor

#endif // XRT_REFLECTION_STRUCT_H