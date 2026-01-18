<%namespace name="utils" file="utils.mako"/>\
#include "function_dispatch.h"

#include "xrtransport/server/function_loader.h"
#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"
#include "xrtransport/time.h"

#include "openxr/openxr.h"

#include <spdlog/spdlog.h>

#include <unordered_map>
#include <string>

using std::uint32_t;

namespace xrtransport {

static XrTime start_runtime_timer() {
    return get_time();
}

static XrDuration end_runtime_timer(XrTime start_time) {
    return get_time() - start_time;
}

<%utils:for_grouped_functions args="function">\
void FunctionDispatch::handle_${function.name}(MessageLockIn msg_in) {
% if not function.name in ["xrCreateInstance", "xrDestroyInstance"]:
    function_loader.ensure_function_loaded("${function.name}", function_loader.${function.name[2:]});
    // by this point, the function id has already been read, now read the params
    DeserializeContext d_ctx(msg_in.buffer);
    % for param in function.params:
    ${param.declaration(with_qualifier=False, value_initialize=True)};
    ${utils.deserialize_member(param, binding_prefix='', ctx_var='d_ctx')}
    % endfor

    XrTime start_time = start_runtime_timer();
    XrResult _result = function_loader.${function.name[2:]}(${', '.join(param.name for param in function.params)});
    XrDuration runtime_duration = end_runtime_timer(start_time);
    
    auto msg_out = transport.start_message(XRTP_MSG_FUNCTION_RETURN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&_result, s_ctx);
    serialize(&runtime_duration, s_ctx);
    % for binding in function.modifiable_bindings:
    ${utils.serialize_binding(binding, ctx_var='s_ctx')}
    % endfor
    msg_out.flush();

    % for param in function.params:
    ${utils.cleanup_member(param, binding_prefix='')}
    % endfor
% elif function.name == "xrCreateInstance":
    // redirect to supplied xrCreateInstance handler
    create_instance_handler(std::move(msg_in));
% elif function.name == "xrDestroyInstance":
    // redirect to supplied xrDestroyInstance handler
    destroy_instance_handler(std::move(msg_in));
% endif
}

</%utils:for_grouped_functions>

std::unordered_map<uint32_t, FunctionDispatch::Handler> FunctionDispatch::handlers = {
<%utils:for_grouped_functions args="function">\
    {${function.id}, &FunctionDispatch::handle_${function.name}},
</%utils:for_grouped_functions>
};

} // namespace xrtransport