<%namespace name="utils" file="utils.mako"/>
#include "function_dispatch.h"

#include "xrtransport/server/function_loader.h"
#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"

#include "openxr/openxr.h"

#include <spdlog/spdlog.h>

#include <unordered_map>
#include <string>

using std::uint32_t;

namespace xrtransport {

<%utils:for_grouped_functions args="function">
void FunctionDispatch::handle_${function.name}(MessageLockIn msg_in) {
% if function.name != "xrCreateInstance":
    function_loader.ensure_function_loaded("${function.name}", reinterpret_cast<PFN_xrVoidFunction*>(&function_loader.pfn_${function.name}));
    // by this point, the function id has already been read, now read the params
    % for param in function.params:
    ${param.declaration(with_qualifier=False, value_initialize=True)};
    ${utils.deserialize_member(param, binding_prefix='', stream_var='msg_in.stream', in_place_var='false')}
    % endfor

    XrResult _result = function_loader.pfn_${function.name}(${', '.join(param.name for param in function.params)});
    
    auto msg_out = transport.start_message(FUNCTION_RETURN);
    serialize(&_result, msg_out.buffer);
    % for binding in function.modifiable_bindings:
    ${utils.serialize_binding(binding, stream_var="msg_out.buffer")}
    % endfor
    msg_out.flush();

    % for param in function.params:
    ${utils.cleanup_member(param, binding_prefix='')}
    % endfor
% else:
    // redirect to supplied xrCreateInstance handler
    instance_handler(std::move(msg_in));
% endif
}
</%utils:for_grouped_functions>

std::unordered_map<uint32_t, FunctionDispatch::Handler> FunctionDispatch::handlers = {
<%utils:for_grouped_functions args="function">
    {${function.id}, &FunctionDispatch::handle_${function.name}},
</%utils:for_grouped_functions>
};

} // namespace xrtransport