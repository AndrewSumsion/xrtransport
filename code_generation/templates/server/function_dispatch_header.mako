<%namespace name="utils" file="utils.mako"/>
#ifndef XRTRANSPORT_FUNCTION_DISPATCH_H
#define XRTRANSPORT_FUNCTION_DISPATCH_H

#include "xrtransport/transport/transport.h"

#include "xrtransport/server/function_loader.h"

#include "openxr/openxr.h"

#include <cstdint>
#include <stdexcept>
#include <unordered_map>
#include <vector>
#include <functional>
#include <string>

namespace xrtransport {

class UnknownFunctionIdException : public std::runtime_error {
public:
    explicit UnknownFunctionIdException(const std::string& message) : std::runtime_error(message) {}
};

class FunctionDispatch {
public:
    using Handler = void (FunctionDispatch::*)(MessageLockIn);
private:
    Transport& transport;
    FunctionLoader& function_loader;
    std::vector<std::function<void(XrInstance)>> instance_callbacks;
    static std::unordered_map<std::uint32_t, Handler> handlers;

public:
    explicit FunctionDispatch(Transport& transport, FunctionLoader& function_loader)
        : transport(transport), function_loader(function_loader)
    {}

<%utils:for_grouped_functions args="function">
    void handle_${function.name}(MessageLockIn msg_in);
</%utils:for_grouped_functions>

    void handle_function(std::uint32_t function_id, MessageLockIn msg_in) {
        if (handlers.find(function_id) == handlers.end()) {
            throw UnknownFunctionIdException("Unknown function id in handle_function: " + std::to_string(function_id));
        }
        Handler handler = handlers.at(function_id);
        (this->*handler)(std::move(msg_in));
    }

    void register_instance_callback(std::function<void(XrInstance)> callback) {
        instance_callbacks.push_back(std::move(callback));
    }
};

} // namespace xrtransport

#endif // XRTRANSPORT_FUNCTION_DISPATCH_H