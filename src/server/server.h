#ifndef XRTRANSPORT_SERVER_H
#define XRTRANSPORT_SERVER_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"

#include "module.h"
#include "function_dispatch.h"

#include "asio/io_context.hpp"

#include <vector>
#include <string>
#include <memory>

namespace xrtransport {

class Server {
private:
    Transport transport;
    FunctionLoader function_loader;
    FunctionDispatch function_dispatch;
    std::vector<Module> modules;
    asio::io_context& transport_io_context;
    XrInstance instance;

public:
    explicit Server(std::unique_ptr<DuplexStream> stream, asio::io_context& stream_io_context, std::vector<std::string> module_paths);

    bool do_handshake();
    void run();
};

} // namespace xrtransport

#endif // XRTRANSPORT_SERVER_H