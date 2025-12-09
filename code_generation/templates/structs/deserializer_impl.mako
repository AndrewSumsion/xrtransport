<%namespace name="utils" file="utils.mako"/>\
<%def name="deserializer(struct)">\
void deserialize(${struct.name}* s, DeserializeContext& ctx) {
% for member in struct.members:
    ${utils.deserialize_member(member)}
% endfor
}\
</%def>

<%def name="cleaner(struct)">\
void cleanup(const ${struct.name}* s) {
% for member in struct.members:
    ${utils.cleanup_member(member)}
% endfor
}\
</%def>

#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/serialization/error.h"
#include "xrtransport/util.h"

namespace xrtransport {

std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">\
    {${struct.xr_type}, STRUCT_DESERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    if (deserializer_lookup_table.find(struct_type) == deserializer_lookup_table.end()) {
        throw UnknownXrStructureTypeException("Unknown XrStructureType in deserializer_lookup: " + std::to_string(struct_type));
    }
    return deserializer_lookup_table[struct_type];
}

std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">\
    {${struct.xr_type}, STRUCT_CLEANER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructCleaner cleaner_lookup(XrStructureType struct_type) {
    if (cleaner_lookup_table.find(struct_type) == cleaner_lookup_table.end()) {
        throw UnknownXrStructureTypeException("Unknown XrStructureType in cleaner_lookup: " + std::to_string(struct_type));
    }
    return cleaner_lookup_table.at(struct_type);
}

// Deserializers
<%utils:for_grouped_structs args="struct">\
% if not struct.custom:
${deserializer(struct)}

% endif
</%utils:for_grouped_structs>

// reads a remote time, converts it to local time, and applies it
void deserialize_time(XrTime* time, DeserializeContext& ctx) {
    // time_offset = local - remote => local = remote + time_offset
    XrTime remote_time{};
    deserialize(&remote_time, ctx);
    *time = remote_time + ctx.time_offset;
}

// Cleaners
<%utils:for_grouped_structs args="struct">\
% if not struct.custom:
${cleaner(struct)}

% endif
</%utils:for_grouped_structs>

} // namespace xrtransport