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