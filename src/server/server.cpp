#include "server.h"

#include "module.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/function_loader.h"
#include "xrtransport/asio_compat.h"

#include "openxr/openxr.h"

#include <cstdint>
#include <cstring>

using std::uint32_t;
using std::uint64_t;

namespace xrtransport {

Server::Server(std::unique_ptr<DuplexStream> stream, std::vector<std::string> module_paths) :
    transport(std::move(stream)), function_loader(xrGetInstanceProcAddr)
{
    for (auto& module_path : module_paths) {
        modules.push_back(Module(module_path));
    }
}

bool Server::do_handshake() {
    auto lock = transport.lock_stream();

    uint32_t client_magic{};
    asio::read(lock.stream, asio::buffer(&client_magic, sizeof(uint32_t)));
    uint32_t server_magic = XRTRANSPORT_MAGIC;
    // make sure magic matches
    if (server_magic != client_magic) {
        transport.close();
        return false;
    }
    asio::write(lock.stream, asio::buffer(&server_magic, sizeof(uint32_t)));
    
    // read version numbers from client
    uint64_t client_xr_api_version{};
    asio::read(lock.stream, asio::buffer(&client_xr_api_version, sizeof(uint64_t)));
    uint32_t client_xrtransport_protocol_version{};
    asio::read(lock.stream, asio::buffer(&client_xrtransport_protocol_version, sizeof(uint32_t)));

    // write server's version numbers
    uint64_t server_xr_api_version = XR_CURRENT_API_VERSION;
    asio::write(lock.stream, asio::buffer(&server_xr_api_version, sizeof(uint64_t)));
    uint32_t server_xrtransport_protocol_version = XRTRANSPORT_PROTOCOL_VERSION;
    asio::write(lock.stream, asio::buffer(&server_xrtransport_protocol_version, sizeof(uint32_t)));

    uint32_t client_ok{};
    asio::read(lock.stream, asio::buffer(&client_ok, sizeof(uint32_t)));
    if (!client_ok) {
        transport.close();
        return false;
    }

    // for now, only allow exact match
    uint32_t server_ok =
        client_xr_api_version == server_xr_api_version &&
        client_xrtransport_protocol_version == server_xrtransport_protocol_version;
    asio::write(lock.stream, asio::buffer(&server_ok, sizeof(uint32_t)));
    if (!server_ok) {
        transport.close();
        return false;
    }

    return true;
}

void Server::run() {
    
}

}