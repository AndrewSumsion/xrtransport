<%namespace name="utils" file="utils.mako"/>\
#include "rpc.h"
#include "runtime.h"
#include "synchronization.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/time.h"
#include "xrtransport/util.h"

#include <openxr/openxr.h>
#include <spdlog/spdlog.h>

#include <string>
#include <stdexcept>

namespace xrtransport {

namespace rpc {

static XrTime start_rpc_timer() {
    return get_time();
}

static void end_rpc_timer(XrTime start_time, std::string tag) {
    XrTime end_time = get_time();
    float duration_ms = (float)(end_time - start_time) / 1000000;
    if (duration_ms > 1) {
        spdlog::warn("RPC call {} took too long: {:.3f} ms", tag, duration_ms);
    }
}

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} try {
    XrTime start_time = start_rpc_timer();
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

    end_rpc_timer(start_time, "${function.name}");

    return result;
}
catch (const std::exception& e) {
    spdlog::error("Exception in ${function.name}: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

</%utils:for_grouped_functions>

} // namespace rpc

} // namespace xrtransport