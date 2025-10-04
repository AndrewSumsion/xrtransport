<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("client/runtime_impl.mako")}

#include "runtime.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"

#include "openxr/openxr.h"

#include <spdlog/spdlog.h>
#include <stdexcept>

namespace xrtransport {

<%utils:for_grouped_functions args="function">
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} {
    try {
    auto msg_out = transport.start_message(FUNCTION_CALL);
    uint32_t function_id = ${function.id};
    serialize(&function_id, msg_out.stream);
    % for param in function.params:
    ${utils.serialize_member(param, binding_prefix='', stream_var='msg_out.stream')}
    % endfor

    auto msg_in = transport.await_message(FUNCTION_RETURN);
    XrResult result;
    deserialize(&result, msg_in.stream);
    % for binding in function.modifiable_bindings:
    ${utils.deserialize_binding(binding, stream_var='msg_in.stream', in_place_var='true')}
    % endfor

    return result;
    }
    catch (const std::exception& e) {
        spdlog::error("Exception in ${function.name}: {}", e.what());
        return XR_ERROR_RUNTIME_FAILURE;
    }
}
</%utils:for_grouped_functions>

}