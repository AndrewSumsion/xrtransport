<%namespace name="utils" file="utils.mako"/>\
#ifndef XRTRANSPORT_CLIENT_EXPORTS_H
#define XRTRANSPORT_CLIENT_EXPORTS_H

#include "xrtransport/transport/transport.h"

#include "openxr/openxr.h"

#include <unordered_map>

namespace xrtransport {

namespace exports {

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()};
</%utils:for_grouped_functions>

} // namespace exports

static const std::unordered_map<std::string, PFN_xrVoidFunction> function_exports_table = {
<%utils:for_grouped_functions args="function">\
    {"${function.name}", (PFN_xrVoidFunction)exports::${function.name}},
</%utils:for_grouped_functions>
};

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_EXPORTS_H