<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("structs/struct_size.mako")}

#include "xrtransport/serialization/struct_size.h"
#include "xrtransport/serialization/error.h"

#include <unordered_map>
#include <cstddef>
#include <string>

namespace xrtransport {

std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">
    {${struct.xr_type}, sizeof(${struct.name})},
</%utils:for_grouped_structs>
};

std::size_t size_lookup(XrStructureType struct_type) {
    if (size_lookup_table.find(struct_type) == size_lookup_table.end()) {
        throw UnknownXrStructureTypeException("Unknown XrStructureType in size_lookup: " + std::to_string(struct_type));
    }
    return size_lookup_table[struct_type];
}

} // namespace xrtransport