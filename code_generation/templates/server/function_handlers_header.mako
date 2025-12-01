<%namespace name="utils" file="utils.mako"/>\
${utils.header_comment("server/function_handlers_header.mako")}

#ifndef XRTRANSPORT_FUNCTION_HANDLERS_H
#define XRTRANSPORT_FUNCTION_HANDLERS_H

#include "xrtransport/transport/transport.h"

#include "function_loader.h"

#include <cstdint>
#include <stdexcept>

namespace xrtransport {

class UnknownFunctionIdException : public std::runtime_error {
public:
    explicit UnknownFunctionIdException(const std::string& message) : std::runtime_error(message) {}
};

typedef void (*FunctionHandler)(MessageLockIn, Transport&, FunctionLoader& function_loader);

<%utils:for_grouped_functions args="function">
void handle_${function.name}(MessageLockIn msg_in, Transport& transport, FunctionLoader& function_loader);
</%utils:for_grouped_functions>

FunctionHandler function_handler_lookup(std::uint32_t function_id);

} // namespace xrtransport

#endif // XRTRANSPORT_FUNCTION_HANDLERS_H