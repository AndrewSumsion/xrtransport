#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_section_info.hpp>

#include "xrtransport/transport/transport.h"
#include "test_duplex_stream.h"

#define ASIO_STANDALONE
#include "asio/io_context.hpp"
#include "asio/read.hpp"
#include "asio/write.hpp"

#include <thread>
#include <chrono>
#include <atomic>
#include <future>
#include <cstdint>

using namespace xrtransport;
using namespace xrtransport::test;

TEST_CASE("Basic sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    std::thread b_thread([&](){
        auto msg_in = transport_b.await_message(100);
        asio::read(msg_in.stream, asio::buffer(&message_received, sizeof(message_received)));
    });

    auto msg_out = transport_a.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    b_thread.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Round trip sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    std::thread b_thread([&](){
        auto msg_in = transport_b.await_message(100);
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.stream, asio::buffer(&tmp, sizeof(tmp)));
    });

    auto msg_out = transport_a.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    auto msg_in = transport_a.await_message(101);
    asio::read(msg_in.stream, asio::buffer(&message_received, sizeof(message_received)));

    b_thread.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Basic async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        asio::read(msg_in.stream, asio::buffer(&message_received, sizeof(message_received)));
    });
    transport_b.start_worker();

    auto msg_out = transport_a.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    // run async loop until handler is invoked
    while (!message_received) {
        io_context.run_one();
    }

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Round trip async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.stream, asio::buffer(&tmp, sizeof(tmp)));
    });
    transport_b.start_worker();

    transport_a.register_handler(101, [&](MessageLockIn msg_in){
        asio::read(msg_in.stream, asio::buffer(&message_received, sizeof(message_received)));
    });
    transport_a.start_worker();

    auto msg_out = transport_a.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    // run async loop until handler is invoked
    while (!message_received) {
        io_context.run_one();
    }

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Thread-safe async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    std::atomic<uint32_t> message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        message_received = tmp;
    });
    transport_b.start_worker();

    auto msg_out = transport_a.start_message(100);
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    // run async loop until handler is invoked
    std::thread io_thread([&](){
        while (!message_received.load()) {
            io_context.run_one();
        }
    });

    io_thread.join();

    REQUIRE(message_received.load() == message_sent);
}

TEST_CASE("Thread-safe round trip async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    std::atomic<uint32_t> message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.stream, asio::buffer(&tmp, sizeof(tmp)));
    });
    transport_b.start_worker();

    transport_a.register_handler(101, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        message_received = tmp;
    });
    transport_a.start_worker();

    {
        // this lock needs to be released so that transport_a's handler can run
        auto msg_out = transport_a.start_message(100);
        asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));
    }

    // run async loop until handler is invoked
    std::thread io_thread([&](){
        while (!message_received.load()) {
            io_context.run_one();
        }
    });

    io_thread.join();

    REQUIRE(message_received.load() == message_sent);
}

TEST_CASE("Handler registration and removal", "[transport][handlers]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    std::atomic<bool> handler_called = false;

    // Register a handler
    transport_b.register_handler(200, [&](MessageLockIn msg_in){
        handler_called = true;
    });
    transport_b.start_worker();

    // Send message - handler should be called
    {
        auto msg_out = transport_a.start_message(200);
    }

    // Wait for handler to be called
    std::thread io_thread([&](){
        while (!handler_called.load()) {
            io_context.run_one();
        }
    });
    io_thread.join();

    REQUIRE(handler_called.load() == true);

    // Reset flag and unregister handler
    handler_called = false;
    transport_b.unregister_handler(200);

    // Send message again - handler should NOT be called
    // This should throw since no handler is registered
    REQUIRE_THROWS_AS([&](){
        auto msg_out = transport_a.start_message(200);
        // Run io_context briefly to process the message
        for (int i = 0; i < 10; ++i) {
            io_context.run_one();
        }
    }(), TransportException);

    REQUIRE(handler_called.load() == false);
}

TEST_CASE("Clear all handlers", "[transport][handlers]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    std::atomic<int> handler_calls = 0;

    // Register multiple handlers
    transport_b.register_handler(300, [&](MessageLockIn msg_in){ handler_calls++; });
    transport_b.register_handler(301, [&](MessageLockIn msg_in){ handler_calls++; });
    transport_b.register_handler(302, [&](MessageLockIn msg_in){ handler_calls++; });
    transport_b.start_worker();

    // Clear all handlers
    transport_b.clear_handlers();

    // Try sending to any of the registered handlers - should all throw
    REQUIRE_THROWS_AS([&](){
        auto msg_out = transport_a.start_message(300);
        for (int i = 0; i < 10; ++i) {
            io_context.run_one();
        }
    }(), TransportException);

    REQUIRE(handler_calls.load() == 0);
}

TEST_CASE("await_message handler takeover", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    std::atomic<bool> intermediate_received = false;
    std::atomic<bool> message_echoed = false;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t intermediate_message = 36356;
        auto intermediate_msg_out = transport_b.start_message(102);
        asio::write(intermediate_msg_out.stream, asio::buffer(&intermediate_message, sizeof(intermediate_message)));

        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.stream, asio::buffer(&tmp, sizeof(tmp)));
        message_echoed = true;
    });
    transport_b.start_worker();

    transport_a.register_handler(102, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.stream, asio::buffer(&tmp, sizeof(tmp)));
        intermediate_received = true;
    });
    transport_a.start_worker();

    // run async loop until handler is invoked
    std::thread io_thread([&](){
        while (!message_echoed.load()) {
            io_context.run_one();
        }
    });

    auto msg_out = transport_a.start_message(100);
    uint32_t message_sent = 1000;
    asio::write(msg_out.stream, asio::buffer(&message_sent, sizeof(message_sent)));

    // message 102 should have been read and handled before this returns
    // no need to release prior lock, because it should be handled from this thread in this call
    auto msg_in = transport_a.await_message(101);
    REQUIRE(intermediate_received);
    uint32_t message_received;
    asio::read(msg_in.stream, asio::buffer(&message_received, sizeof(message_received)));

    io_thread.join();

    REQUIRE(message_received == message_sent);
}