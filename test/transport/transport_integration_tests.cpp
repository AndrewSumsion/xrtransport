#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>

#include "xrtransport/transport/transport.h"
#include "xrtransport/asio_compat.h"

#define ASIO_STANDALONE
#include "asio.hpp"
#include "asio/read.hpp"
#include "asio/write.hpp"

#include <thread>
#include <chrono>
#include <cstdint>
#include <vector>
#include <memory>
#include <iostream>

using namespace xrtransport;
using asio::ip::tcp;

// Type alias for TCP socket wrapped in DuplexStreamImpl
using TcpDuplexStream = DuplexStreamImpl<tcp::socket>;

class IntegrationTestFixture {
private:
    static std::unique_ptr<asio::io_context> io_context_;
    static std::unique_ptr<tcp::socket> client_socket_;
    static std::unique_ptr<TcpDuplexStream> client_stream_;
    static std::unique_ptr<Transport> transport_;
    static std::thread io_thread_;
    static constexpr uint16_t SERVER_PORT = 12345;

public:
    static void SetUpTestSuite() {
        std::cout << "Connecting to transport server on port " << SERVER_PORT << "..." << std::endl;
        std::cout << "Note: Make sure transport_server is running before running these tests!" << std::endl;

        // Connect to server (assumes server is already running)
        io_context_ = std::make_unique<asio::io_context>();
        client_socket_ = std::make_unique<tcp::socket>(*io_context_);

        try {
            tcp::resolver resolver(*io_context_);
            auto endpoints = resolver.resolve("localhost", std::to_string(SERVER_PORT));
            asio::connect(*client_socket_, endpoints);

            std::cout << "Connected to server on port " << SERVER_PORT << std::endl;

        } catch (const std::exception& e) {
            std::cerr << "Failed to connect to server: " << e.what() << std::endl;
            std::cerr << "Please start the server with: ./transport_server" << std::endl;
            throw;
        }

        // Create Transport
        client_stream_ = std::make_unique<TcpDuplexStream>(*client_socket_);
        transport_ = std::make_unique<Transport>(*client_stream_);

        // Start async worker
        transport_->start_worker();

        // Start io_context in background thread to handle async operations
        io_thread_ = std::thread([]() {
            try {
                io_context_->run();
            } catch (const std::exception& e) {
                std::cerr << "IO context error: " << e.what() << std::endl;
            }
        });
    }

    static void TearDownTestSuite() {
        std::cout << "Cleaning up integration test..." << std::endl;

        transport_->clear_handlers();
        transport_->stop_worker();
        if (client_socket_->is_open()) {
            client_socket_->close();
        }
        io_context_->stop();

        // Join io thread
        if (io_thread_.joinable()) {
            io_thread_.join();
        }
    }

    static Transport& GetTransport() {
        return *transport_;
    }

    static asio::io_context& GetIoContext() {
        return *io_context_;
    }
};

// Static member definitions
std::unique_ptr<asio::io_context> IntegrationTestFixture::io_context_;
std::unique_ptr<tcp::socket> IntegrationTestFixture::client_socket_;
std::unique_ptr<TcpDuplexStream> IntegrationTestFixture::client_stream_;
std::unique_ptr<Transport> IntegrationTestFixture::transport_;
std::thread IntegrationTestFixture::io_thread_;

TEST_CASE_METHOD(IntegrationTestFixture, "Protocol 1: Simple Echo", "[integration][protocol1]") {
    auto& transport = GetTransport();

    uint32_t test_data = 0x12345678;
    uint32_t received_data = 0;

    // Send message 100 with test data
    auto msg_out = transport.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&test_data, sizeof(test_data)));

    // Receive response message 101
    auto msg_in = transport.await_message(101);
    asio::read(msg_in.stream, asio::buffer(&received_data, sizeof(received_data)));

    REQUIRE(received_data == test_data);
}

TEST_CASE_METHOD(IntegrationTestFixture, "Protocol 2: Variable Length Data", "[integration][protocol2]") {
    auto& transport = GetTransport();

    // Send message 102 (no payload)
    auto msg_out = transport.start_message(102);
    // No data to write

    // Receive response message 103
    auto msg_in = transport.await_message(103);

    // Read N
    uint32_t n;
    asio::read(msg_in.stream, asio::buffer(&n, sizeof(n)));

    REQUIRE(n >= 1);
    REQUIRE(n <= 20);

    // Read N zero bytes
    std::vector<uint8_t> received_data(n);
    asio::read(msg_in.stream, asio::buffer(received_data));

    // Verify all bytes are zero
    for (size_t i = 0; i < n; ++i) {
        REQUIRE(received_data[i] == 0);
    }
}

TEST_CASE_METHOD(IntegrationTestFixture, "Protocol 3: Intermediate Packets", "[integration][protocol3]") {
    auto& transport = GetTransport();

    uint32_t test_input = 42;
    uint32_t doubled_result = 0;
    uint32_t echoed_result = 0;

    transport.register_handler(105, [&](MessageLockIn msg_in){
        asio::read(msg_in.stream, asio::buffer(&doubled_result, sizeof(doubled_result)));
    });

    // Send message 104 with test input
    auto msg_out = transport.start_message(104);
    asio::write(msg_out.stream, asio::buffer(&test_input, sizeof(test_input)));

    // Receive message 106 (echoed value)
    // 105 packet should be received and handled while waiting
    auto msg_in = transport.await_message(106);
    asio::read(msg_in.stream, asio::buffer(&echoed_result, sizeof(echoed_result)));

    transport.unregister_handler(105);

    REQUIRE(doubled_result == test_input * 2);
    REQUIRE(echoed_result == test_input);
}

TEST_CASE_METHOD(IntegrationTestFixture, "Multiple Sequential Requests", "[integration][sequential]") {
    auto& transport = GetTransport();

    // Test multiple protocol 1 requests
    for (int i = 1; i <= 3; ++i) {
        uint32_t test_data = static_cast<uint32_t>(i * 1000);
        uint32_t received_data = 0;

        auto msg_out = transport.start_message(100);
        asio::write(msg_out.stream, asio::buffer(&test_data, sizeof(test_data)));

        auto msg_in = transport.await_message(101);
        asio::read(msg_in.stream, asio::buffer(&received_data, sizeof(received_data)));

        REQUIRE(received_data == test_data);
    }
}

// Custom main function to set up and tear down the test fixture
int main(int argc, char* argv[]) {
    Catch::Session session;

    // Parse command line arguments
    int returnCode = session.applyCommandLine(argc, argv);
    if (returnCode != 0) return returnCode;

    // Set up test suite
    IntegrationTestFixture::SetUpTestSuite();

    // Run tests
    int result = session.run();

    // Tear down test suite
    IntegrationTestFixture::TearDownTestSuite();

    return result;
}