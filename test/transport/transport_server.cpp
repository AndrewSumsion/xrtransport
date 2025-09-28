#include "xrtransport/transport/transport.h"
#include "xrtransport/asio_compat.h"

#define ASIO_STANDALONE
#include "asio.hpp"

#include <iostream>
#include <thread>
#include <random>
#include <cstdint>

using namespace xrtransport;
using asio::ip::tcp;

// Type alias for TCP socket wrapped in DuplexStreamImpl
using TcpDuplexStream = DuplexStreamImpl<tcp::socket>;

class TransportServer {
private:
    asio::io_context io_context_;
    tcp::acceptor acceptor_;
    std::mt19937 rng_;

public:
    TransportServer(uint16_t port)
        : acceptor_(io_context_, tcp::endpoint(tcp::v4(), port))
        , rng_(std::random_device{}()) {
        std::cout << "Transport server listening on port " << port << std::endl;
    }

    void run() {
        while (true) {
            try {
                auto socket = std::make_unique<tcp::socket>(io_context_);
                acceptor_.accept(*socket);

                std::cout << "Client connected from " << socket->remote_endpoint() << std::endl;

                // Handle client in separate thread
                std::thread client_thread([this](std::unique_ptr<tcp::socket> sock) {
                    handle_client(std::move(sock));
                }, std::move(socket));
                client_thread.detach();

            } catch (const std::exception& e) {
                std::cerr << "Accept error: " << e.what() << std::endl;
            }
        }
    }

private:
    void handle_client(std::unique_ptr<tcp::socket> socket) {
        try {
            // Create DuplexStream wrapper around TCP socket
            TcpDuplexStream stream(*socket);
            Transport transport(stream);

            // Register protocol handlers
            register_handlers(transport);

            // Start async worker
            transport.start_worker();

            // Keep connection alive by running io_context
            asio::io_context client_context;
            client_context.run();

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
            asio::read(msg_in.stream, asio::buffer(&data, sizeof(data)));

            // Echo back with message 101
            auto msg_out = transport.start_message(101);
            asio::write(msg_out.stream, asio::buffer(&data, sizeof(data)));
        });

        // Protocol 2: Variable Length Data (102 -> 103)
        transport.register_handler(102, [this, &transport](MessageLockIn msg_in) {
            std::cout << "Protocol 2: Variable length data" << std::endl;

            // Generate random N between 1 and 20
            std::uniform_int_distribution<uint32_t> dist(1, 20);
            uint32_t n = dist(rng_);

            // Send response with message 103
            auto msg_out = transport.start_message(103);

            // Write N
            asio::write(msg_out.stream, asio::buffer(&n, sizeof(n)));

            // Write N zero bytes
            std::vector<uint8_t> zeros(n, 0);
            asio::write(msg_out.stream, asio::buffer(zeros));

            std::cout << "Sent " << n << " zero bytes" << std::endl;
        });

        // Protocol 3: Intermediate Packets (104 -> 105 + 106)
        transport.register_handler(104, [&transport](MessageLockIn msg_in) {
            std::cout << "Protocol 3: Intermediate packets" << std::endl;

            // Read input integer
            uint32_t input;
            asio::read(msg_in.stream, asio::buffer(&input, sizeof(input)));

            // Send message 105 with input * 2
            {
                uint32_t doubled = input * 2;
                auto msg_out = transport.start_message(105);
                asio::write(msg_out.stream, asio::buffer(&doubled, sizeof(doubled)));
            }

            // Send message 106 with input echoed
            {
                auto msg_out = transport.start_message(106);
                asio::write(msg_out.stream, asio::buffer(&input, sizeof(input)));
            }

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