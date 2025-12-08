<%namespace name="utils" file="utils.mako"/>\
#ifndef XRTRANSPORT_CLIENT_DISPATCH_H
#define XRTRANSPORT_CLIENT_DISPATCH_H

#include "xrtransport/transport/transport.h"

#include "openxr/openxr.h"

namespace xrtransport {

namespace runtime {

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()};
</%utils:for_grouped_functions>

} // namespace runtime

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_DISPATCH_H