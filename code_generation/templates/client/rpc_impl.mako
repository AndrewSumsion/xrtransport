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

#include <string_view>
#include <stdexcept>

namespace xrtransport {

namespace rpc {

static XrTime start_rpc_timer() {
    return get_time();
}

static void end_rpc_timer(XrTime start_time, XrDuration runtime_duration, std::string_view tag) {
    XrTime end_time = get_time();
    XrDuration total_duration = end_time - start_time;
    XrDuration rpc_duration = total_duration - runtime_duration;
    float duration_ms = (float)(rpc_duration) / 1000000;
    if (duration_ms > 1) {
        spdlog::debug("RPC call {} took too long: {:.3f} ms", tag, duration_ms);
    }
}

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} try {
    auto& transport = get_runtime().get_transport();

    // synchronize if needed and get time offset
    XrDuration time_offset = get_time_offset(true);

    // start timer after synchronization
    XrTime start_time = start_rpc_timer();

    auto msg_out = transport.start_message(XRTP_MSG_FUNCTION_CALL);
    SerializeContext s_ctx(msg_out.buffer, time_offset);

    uint32_t function_id = ${function.id};
    serialize(&function_id, s_ctx);
    % for param in function.params:
    ${utils.serialize_member(param, binding_prefix='', ctx_var='s_ctx')}
    % endfor
    msg_out.flush();

    auto msg_in = transport.await_message(XRTP_MSG_FUNCTION_RETURN);
    DeserializeContext d_ctx(msg_in.buffer, true, time_offset);

    XrResult result;
    deserialize(&result, d_ctx);
    XrDuration runtime_duration;
    deserialize(&runtime_duration, d_ctx);
    % for binding in function.modifiable_bindings:
    ${utils.deserialize_binding(binding, ctx_var='d_ctx')}
    % endfor

    end_rpc_timer(start_time, runtime_duration, "${function.name}");

    return result;
}
catch (const std::exception& e) {
    spdlog::error("Exception in ${function.name}: {}", e.what());
    return XR_ERROR_RUNTIME_FAILURE;
}

</%utils:for_grouped_functions>

} // namespace rpc

} // namespace xrtransport