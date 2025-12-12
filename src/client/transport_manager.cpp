#include "transport_manager.h"

#include "asio.hpp"
#include "openxr/openxr.h"

#include <stdexcept>
#include <iostream>
#include <thread>
#include <cstdint>

using asio::ip::tcp;
using std::uint64_t;
using std::uint32_t;

namespace xrtransport {

static asio::io_context io_context;
static std::unique_ptr<Transport> transport;

static bool do_handshake(Transport& transport) {
    auto lock = transport.lock_stream();

    // handle magic
    uint32_t client_magic = XRTRANSPORT_MAGIC;
    asio::write(lock.stream, asio::buffer(&client_magic, sizeof(uint32_t)));
    uint32_t server_magic{};
    asio::read(lock.stream, asio::buffer(&server_magic, sizeof(uint32_t)));
    if (client_magic != server_magic) {
        transport.close();
        return false;
    }

    // write client's version numbers
    uint64_t client_xr_api_version = XR_CURRENT_API_VERSION;
    asio::write(lock.stream, asio::buffer(&client_xr_api_version, sizeof(uint64_t)));
    uint32_t client_xrtransport_protocol_version = XRTRANSPORT_PROTOCOL_VERSION;
    asio::write(lock.stream, asio::buffer(&client_xrtransport_protocol_version, sizeof(uint32_t)));

    // read server's version numbers
    uint64_t server_xr_api_version{};
    asio::read(lock.stream, asio::buffer(&server_xr_api_version, sizeof(uint64_t)));
    uint32_t server_xrtransport_protocol_version{};
    asio::read(lock.stream, asio::buffer(&server_xrtransport_protocol_version, sizeof(uint32_t)));

    // for now, only allow exact match
    uint32_t client_ok =
        client_xr_api_version == server_xr_api_version &&
        client_xrtransport_protocol_version == server_xrtransport_protocol_version;
    asio::write(lock.stream, asio::buffer(&client_ok, sizeof(uint32_t)));
    if (!client_ok) {
        transport.close();
        return false;
    }

    uint32_t server_ok{};
    asio::read(lock.stream, asio::buffer(&server_ok, sizeof(uint32_t)));
    if (!server_ok) {
        transport.close();
        return false;
    }

    return true;
}

Transport& get_transport() {
    // Lazy initialization
    if (!transport) {
        // Create the Transport instance
        transport = std::make_unique<Transport>(std::move(create_connection()));

        // Do the initial handshake
        if (!do_handshake(*transport)) {
            throw std::runtime_error("Transport handshake failed");
        }
    }

    return *transport;
}

std::unique_ptr<SyncDuplexStream> create_connection() {
    // Error if connection already exists
    if (transport) {
        throw std::runtime_error("Connection already exists - call close_connection() first");
    }

    tcp::socket socket(io_context);

    try {
        // Resolve the server address
        tcp::resolver resolver(io_context);
        auto endpoints = resolver.resolve("127.0.0.1", "5892");

        // Connect to the server
        asio::connect(socket, endpoints);
        socket.set_option(tcp::no_delay(true));

    } catch (const std::exception& e) {
        throw std::runtime_error("Failed to connect to server at 127.0.0.1:5892: " + std::string(e.what()));
    }

    // Wrap the socket in a DuplexStream
    return std::make_unique<SyncDuplexStreamImpl<tcp::socket>>(std::move(socket));
}

void close_connection() {
    transport->clear_handlers();
    transport->stop();
    transport->close();
    transport.reset();
}

} // namespace xrtransport