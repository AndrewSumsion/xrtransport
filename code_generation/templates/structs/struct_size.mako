// SPDX-License-Identifier: LGPL-3.0-or-later

<%namespace name="utils" file="utils.mako"/>\
#include "xrtransport/serialization/struct_size.h"
#include "xrtransport/serialization/error.h"

#include <unordered_map>
#include <cstddef>
#include <string>

namespace xrtransport {

std::unordered_map<XrStructureType, std::size_t> size_lookup_table = {
<%utils:for_grouped_structs xr_structs_only="True" args="struct">\
    {${struct.xr_type}, sizeof(${struct.name})},
</%utils:for_grouped_structs>
};

std::size_t size_lookup(XrStructureType struct_type) {
    auto it = size_lookup_table.find(struct_type);
    if (it == size_lookup_table.end()) {
        return 0;
    }
    else {
        return it->second;
    }
}

} // namespace xrtransport