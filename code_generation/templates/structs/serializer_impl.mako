// SPDX-License-Identifier: LGPL-3.0-or-later

<%namespace name="utils" file="utils.mako"/>\
<%def name="serializer(struct)">
void serialize(const ${struct.name}* s, SerializeContext& ctx) {
% if struct.header:
    serialize_xr(s, ctx);
% else:
% for member in struct.members:
    ${utils.serialize_member(member)}
% endfor
% endif
}\
</%def>

#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/error.h"
#include "xrtransport/util.h"

namespace xrtransport {

std::unordered_map<XrStructureType, StructSerializer> serializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">\
    {${struct.xr_type}, STRUCT_SERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructSerializer serializer_lookup(XrStructureType struct_type) {
    auto it = serializer_lookup_table.find(struct_type);
    if (it == serializer_lookup_table.end()) {
        return nullptr;
    }
    else {
        return it->second;
    }
}

// Serializers
<%utils:for_grouped_structs args="struct">\
% if not struct.custom:
${serializer(struct)}

% endif
</%utils:for_grouped_structs>

// takes a local time, converts it to remote time, and puts it on the stream
void serialize_time(const XrTime* local_time, SerializeContext& ctx) {
    // time_offset = local - remote => remote = local - offset
    XrTime remote_time = *local_time - ctx.time_offset;
    serialize(&remote_time, ctx);
}

} // namespace xrtransport