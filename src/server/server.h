#ifndef XRTRANSPORT_SERVER_H
#define XRTRANSPORT_SERVER_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"

#include "module.h"

#include <vector>
#include <string>
#include <memory>

namespace xrtransport {

class Server {
private:
    Transport transport;
    FunctionLoader function_loader;
    std::vector<Module> modules;

public:
    explicit Server(std::unique_ptr<DuplexStream> stream, std::vector<std::string> module_paths);

    bool do_handshake();
    void run();
};

} // namespace xrtransport

#endif // XRTRANSPORT_SERVER_H