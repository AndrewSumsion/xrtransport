<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("structs/deserializer_impl.mako")}

<%def name="deserializer(struct)">
void deserialize(${struct.name}* s, SyncReadStream& in, bool in_place) {
    % for member in struct.members:
        ${utils.deserialize_member(member)}
    % endfor
}
</%def>

<%def name="cleaner(struct)">
void cleanup(const ${struct.name}* s) {
    % for member in struct.members:
        ${utils.cleanup_member(member)}
    % endfor
}
</%def>

#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"
#include "xrtransport/fatal_error.h"

namespace xrtransport {

std::unordered_map<XrStructureType, StructDeserializer> deserializer_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_DESERIALIZER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructDeserializer deserializer_lookup(XrStructureType struct_type) {
    if (deserializer_lookup_table.find(struct_type) == deserializer_lookup_table.end()) {
        fatal_error("Unknown XrStructureType in deserializer_lookup: " + std::to_string(struct_type));
    }
    return deserializer_lookup_table[struct_type];
}

std::unordered_map<XrStructureType, StructCleaner> cleaner_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, STRUCT_CLEANER_PTR(${struct.name})},
</%utils:for_grouped_structs>
};

StructCleaner cleaner_lookup(XrStructureType struct_type) {
    if (cleaner_lookup_table.find(struct_type) == cleaner_lookup_table.end()) {
        fatal_error("Unknown XrStructureType in cleaner_lookup: " + std::to_string(struct_type));
    }
    return cleaner_lookup_table.at(struct_type);
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