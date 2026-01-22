// SPDX-License-Identifier: LGPL-3.0-or-later

#include "xrtransport/transport/transport.h"
#include "xrtransport/asio_compat.h"

#include "asio.hpp"

#include <iostream>
#include <thread>
#include <random>
#include <cstdint>

using namespace xrtransport;
using asio::ip::tcp;

// Type alias for TCP socket wrapped in SyncDuplexStreamImpl
using TcpSyncDuplexStream = SyncDuplexStreamImpl<tcp::socket>;

class TransportServer {
private:
    asio::io_context io_context_;
    tcp::acceptor acceptor_;
    std::mt19937 rng_;
    std::thread io_thread_;

public:
    TransportServer(uint16_t port)
        : acceptor_(io_context_, tcp::endpoint(tcp::v4(), port))
        , rng_(std::random_device{}()) {
        std::cout << "Transport server listening on port " << port << std::endl;
    }

    void run() {
        while (true) {
            try {
                tcp::socket socket(io_context_);
                acceptor_.accept(socket);
                socket.set_option(tcp::no_delay(true));

                std::cout << "Client connected from " << socket.remote_endpoint() << std::endl;

                // Handle client in separate thread
                std::thread client_thread([this](tcp::socket sock) {
                    handle_client(std::move(sock));
                }, std::move(socket));
                client_thread.detach();

            } catch (const std::exception& e) {
                std::cerr << "Accept error: " << e.what() << std::endl;
            }
        }
    }

private:
    void handle_client(tcp::socket socket) {
        try {
            // Create DuplexStream wrapper around TCP socket
            Transport transport(std::make_unique<TcpSyncDuplexStream>(std::move(socket)));

            // Register protocol handlers
            register_handlers(transport);

            transport.start();
            transport.join();

        } catch (const std::exception& e) {
            std::cerr << "Client handler error: " << e.what() << std::endl;
        }

        std::cout << "Client disconnected" << std::endl;
    }

    void register_handlers(Transport& transport) {
        // Protocol 1: Simple Echo (100 -> 101)
        transport.register_handler(100, [&transport](MessageLockIn msg_in) {
            std::cout << "Protocol 1: Simple echo" << std::endl;

            // Read 4 bytes
            uint32_t data;
            asio::read(msg_in.buffer, asio::buffer(&data, sizeof(data)));

            // Echo back with message 101
            auto msg_out = transport.start_message(101);
            asio::write(msg_out.buffer, asio::buffer(&data, sizeof(data)));
        });

        // Protocol 2: Variable Length Data (102 -> 103)
        transport.register_handler(102, [&transport, this](MessageLockIn msg_in) {
            std::cout << "Protocol 2: Variable length data" << std::endl;

            // Generate random N between 1 and 20
            std::uniform_int_distribution<uint32_t> dist(1, 20);
            uint32_t n = dist(rng_);

            // Send response with message 103
            auto msg_out = transport.start_message(103);

            // Write N
            asio::write(msg_out.buffer, asio::buffer(&n, sizeof(n)));

            // Write N zero bytes
            std::vector<uint8_t> zeros(n, 0);
            asio::write(msg_out.buffer, asio::buffer(zeros));

            std::cout << "Sent " << n << " zero bytes" << std::endl;
        });

        // Protocol 3: Intermediate Packets (104 -> 105 + 106)
        transport.register_handler(104, [&transport](MessageLockIn msg_in) {
            std::cout << "Protocol 3: Intermediate packets" << std::endl;

            // Read input integer
            uint32_t input;
            asio::read(msg_in.buffer, asio::buffer(&input, sizeof(input)));

            // Send message 105 with input * 2
            uint32_t doubled = input * 2;
            auto msg_out1 = transport.start_message(105);
            asio::write(msg_out1.buffer, asio::buffer(&doubled, sizeof(doubled)));
            msg_out1.flush(); // need to flush these separately because of destructor ordering

            // Send message 106 with input echoed
            auto msg_out2 = transport.start_message(106);
            asio::write(msg_out2.buffer, asio::buffer(&input, sizeof(input)));
            msg_out2.flush();

            std::cout << "Sent doubled value " << (input * 2) << " and echo " << input << std::endl;
        });
    }
};

int main(int argc, char* argv[]) {
    try {
        uint16_t port = 12345;
        if (argc > 1) {
            port = static_cast<uint16_t>(std::stoi(argv[1]));
        }

        TransportServer server(port);
        server.run();

    } catch (const std::exception& e) {
        std::cerr << "Server error: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}