#include "transport_manager.h"

#define ASIO_STANDALONE
#include "asio.hpp"

#include <stdexcept>
#include <iostream>
#include <thread>

using asio::ip::tcp;

namespace xrtransport {

static asio::io_context io_context;
static std::unique_ptr<asio::executor_work_guard<asio::io_context::executor_type>> work_guard;
static std::thread io_thread;
static std::unique_ptr<tcp::socket> socket;
static std::unique_ptr<DuplexStream> stream;
static std::unique_ptr<Transport> transport;

Transport& get_transport() {
    // Lazy initialization
    if (!transport) {
        try {
            // Create the connection
            stream = create_connection();

            // Create the Transport instance
            transport = std::make_unique<Transport>(*stream);
        } catch (const std::exception& e) {
            throw std::runtime_error("Failed to initialize transport: " + std::string(e.what()));
        }
    }

    return *transport;
}

std::unique_ptr<DuplexStream> create_connection() {
    // Error if connection already exists
    if (socket) {
        throw std::runtime_error("Connection already exists - call close_connection() first");
    }

    // Set up work guard to keep io_context alive
    work_guard = std::make_unique<asio::executor_work_guard<asio::io_context::executor_type>>(
        asio::make_work_guard(io_context)
    );

    // Start io_context thread if not already running
    io_thread = std::thread([&]() {
        io_context.run();
    });

    socket = std::make_unique<tcp::socket>(io_context);

    try {
        // Resolve the server address
        tcp::resolver resolver(io_context);
        auto endpoints = resolver.resolve("127.0.0.1", "5892");

        // Connect to the server
        asio::connect(*socket, endpoints);

    } catch (const std::exception& e) {
        socket.reset(); // Clean up on failure
        throw std::runtime_error("Failed to connect to server at 127.0.0.1:5892: " + std::string(e.what()));
    }

    // Wrap the socket in a DuplexStream
    return std::make_unique<DuplexStreamImpl<tcp::socket>>(*socket);
}

void close_connection() {
    transport->clear_handlers();
    transport->stop_worker();
    if (stream->is_open()) {
        stream->close();
    }
    work_guard.reset();
    io_context.stop();
    if (io_thread.joinable()) {
        io_thread.join();
    }

    transport.reset();
    stream.reset();
    socket.reset();
}

} // namespace xrtransport