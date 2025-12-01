<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("server/function_handlers_impl.mako")}

#include "function_handlers.h"

#include "function_loader.h"

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
void handle_${function.name}(MessageLockIn msg_in, Transport& transport) {
    ensure_function_loaded("${function.name}", reinterpret_cast<PFN_xrVoidFunction*>(&pfn_${function.name}));
    // by this point, the function id has already been read, now read the params
    % for param in function.params:
    ${param.declaration()};
    ${utils.deserialize_member(param, binding_prefix='', stream_var='msg_in.stream', in_place_var='false')}
    % endfor

    XrResult _result = pfn_${function.name}(${', '.join(param.name for param in function.params)});
    
    auto msg_out = transport.start_message(FUNCTION_RETURN);
    serialize(&_result, msg_out.buffer);
    % for binding in function.modifiable_bindings:
    ${utils.serialize_binding(binding, stream_var="msg_out.buffer")}
    % endfor
}
</%utils:for_grouped_functions>

static std::unordered_map<uint32_t, FunctionHandler> function_handler_lookup_table = {
<%utils:for_grouped_functions args="function">
    {${function.id}, &handle_${function.name}},
</%utils:for_grouped_functions>
};

FunctionHandler function_handler_lookup(uint32_t function_id) {
    if (function_handler_lookup_table.find(function_id) == function_handler_lookup_table.end()) {
        throw UnknownFunctionIdException("Unknown function id in function_handler_lookup: " + std::to_string(function_id));
    }
    return function_handler_lookup_table.at(function_id);
}

} // namespace xrtransport