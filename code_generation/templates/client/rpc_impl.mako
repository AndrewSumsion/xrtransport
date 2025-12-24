<%namespace name="utils" file="utils.mako"/>\
#include "rpc.h"
#include "runtime.h"
#include "synchronization.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"

#include "openxr/openxr.h"

#include <spdlog/spdlog.h>
#include <stdexcept>

namespace xrtransport {

namespace rpc {

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} {
    auto& transport = get_runtime().get_transport();

    // synchronize if needed and get time offset
    XrDuration time_offset = get_time_offset(true);

    auto msg_out = transport.start_message(XRTP_MSG_FUNCTION_CALL);
    SerializeContext s_ctx(msg_out.buffer, time_offset);

    uint32_t function_id = ${function.id};
    serialize(&function_id, s_ctx);
    % for param in function.params:
    ${utils.serialize_member(param, binding_prefix='', ctx_var='s_ctx')}
    % endfor
    msg_out.flush();

    auto msg_in = transport.await_message(XRTP_MSG_FUNCTION_RETURN);
    DeserializeContext d_ctx(msg_in.stream, true, time_offset);

    XrResult result;
    deserialize(&result, d_ctx);
    % for binding in function.modifiable_bindings:
    ${utils.deserialize_binding(binding, ctx_var='d_ctx')}
    % endfor

    return result;
}

</%utils:for_grouped_functions>

} // namespace rpc

} // namespace xrtransport