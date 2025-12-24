#ifndef XRTRANSPORT_CLIENT_RUNTIME_H
#define XRTRANSPORT_CLIENT_RUNTIME_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/asio_compat.h"

#include "function_table.h"

#include <memory>

namespace xrtransport {

class Runtime {
private:
    Transport transport;
    FunctionTable function_table;

public:
    explicit Runtime(std::unique_ptr<SyncDuplexStream> stream)
        : transport(std::move(stream))
    {}

    Transport& get_transport() {
        return transport;
    }

    FunctionTable& get_function_table() {
        return function_table;
    }
};

/**
 * Get the singleton Runtime instance for the client.
 * Creates the connection and Transport on first call.
 * @return Reference to the Runtime instance
 */
Runtime& get_runtime();

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_RUNTIME_H