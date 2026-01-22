// SPDX-License-Identifier: LGPL-3.0-or-later

<%namespace name="utils" file="utils.mako"/>\
#include "function_table.h"
#include "rpc.h"

namespace xrtransport {

void FunctionTable::init_with_rpc_functions() {
<%utils:for_grouped_functions args="function">\
    table.emplace("${function.name}", reinterpret_cast<PFN_xrVoidFunction>(rpc::${function.name}));
</%utils:for_grouped_functions>
}

} // namespace xrtransport