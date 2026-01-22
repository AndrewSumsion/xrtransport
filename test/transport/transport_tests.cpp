// SPDX-License-Identifier: LGPL-3.0-or-later

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_section_info.hpp>

#include "xrtransport/transport/transport.h"
#include "test_duplex_stream.h"

#include "asio/io_context.hpp"
#include "asio/read.hpp"
#include "asio/write.hpp"

#include <spdlog/spdlog.h>
#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <thread>
#include <chrono>
#include <atomic>
#include <future>
#include <cstdint>
#include <memory>

using namespace xrtransport;
using namespace xrtransport::test;

TEST_CASE("Basic sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    {
        auto msg_out = transport_a.start_message(100);
        asio::write(msg_out.buffer, asio::buffer(&message_sent, sizeof(message_sent)));
        msg_out.flush();
    }

    {
        auto msg_in = transport_b.await_message(100);
        asio::read(msg_in.buffer, asio::buffer(&message_received, sizeof(message_received)));
    }

    transport_a.shutdown();
    transport_a.join();
    transport_b.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Round trip sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    // lock transport b until message is sent to avoid race condition
    auto b_lock = std::make_unique<MessageLock>(transport_b.acquire_message_lock());

    std::thread b_thread([&](){
        auto msg_in = transport_b.await_message(100);
        uint32_t tmp;
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.buffer, asio::buffer(&tmp, sizeof(tmp)));
    });

    // short wait to allow b to start waiting on the lock.
    // this is a bit of a hack, but it's necessary in this pathological case.
    // in real usage, you would never await a message without already owning
    // the lock from sending the message that is being responded to.
    std::this_thread::sleep_for(std::chrono::milliseconds(5));

    {
        auto msg_out = transport_a.start_message(100);
        asio::write(msg_out.buffer, asio::buffer(&message_sent, sizeof(message_sent)));
        msg_out.flush();

        // allow transport b to resume
        b_lock.reset();

        auto msg_in = transport_a.await_message(101);
        asio::read(msg_in.buffer, asio::buffer(&message_received, sizeof(message_received)));

        // release lock so that shutdown handler can run
    }

    b_thread.join();

    transport_a.shutdown();
    transport_a.join();
    transport_b.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Basic async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    uint32_t message_sent = 1000;
    std::atomic<uint32_t> message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t tmp{};
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        message_received = tmp;
    });

    {
        auto msg_out = transport_a.start_message(100);
        asio::write(msg_out.buffer, asio::buffer(&message_sent, sizeof(message_sent)));
        msg_out.flush();

        // release lock to allow shutdown handler to run
    }

    // shut down transport_a and wait for transport_b to handle message and close
    transport_a.shutdown();
    transport_a.join();
    transport_b.join();

    REQUIRE(message_received.load() == message_sent);
}

TEST_CASE("Round trip async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    uint32_t message_sent = 1000;
    std::atomic<uint32_t> message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.buffer, asio::buffer(&tmp, sizeof(tmp)));
        msg_out.flush();
        transport_b.shutdown();
    });

    transport_a.register_handler(101, [&](MessageLockIn msg_in){
        uint32_t tmp{};
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        message_received = tmp;
    });

    {
        auto msg_out = transport_a.start_message(100);
        asio::write(msg_out.buffer, asio::buffer(&message_sent, sizeof(message_sent)));
        msg_out.flush();
    }

    // transport_b will receive the message and send it back, then shut itself down.
    // wait for transport_a to receive it and send a shutdown back
    transport_b.join();
    transport_a.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Handler registration and removal", "[transport][handlers]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    std::atomic<bool> handler_called = false;

    // Register a handler
    transport_b.register_handler(200, [&](MessageLockIn msg_in){
        handler_called = true;
    });

    // Send message - handler should be called
    {
        auto msg_out = transport_a.start_message(200);
    }

    // Busy wait for handler to be called
    while (!handler_called.load());

    REQUIRE(handler_called.load() == true);

    // Reset flag and unregister handler
    handler_called = false;
    transport_b.unregister_handler(200);

    // Send message again - handler should NOT be called
    {
        auto msg_out = transport_a.start_message(200);
    }

    transport_a.shutdown();
    transport_a.join();
    transport_b.join();

    REQUIRE(handler_called.load() == false);
}

TEST_CASE("Clear all handlers", "[transport][handlers]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    std::atomic<int> handler_calls = 0;

    // Register multiple handlers
    transport_b.register_handler(300, [&](MessageLockIn msg_in){ handler_calls++; });
    transport_b.register_handler(301, [&](MessageLockIn msg_in){ handler_calls++; });
    transport_b.register_handler(302, [&](MessageLockIn msg_in){ handler_calls++; });

    // Clear all handlers
    transport_b.clear_handlers();

    // Try sending to all of the unregistered handlers - should not update handler_calls
    {
        auto msg_out1 = transport_a.start_message(300);
        msg_out1.flush();
        auto msg_out2 = transport_a.start_message(301);
        msg_out2.flush();
        auto msg_out3 = transport_a.start_message(302);
        msg_out3.flush();
    }

    transport_a.shutdown();
    transport_a.join();
    transport_b.join();

    REQUIRE(handler_calls.load() == 0);
}

TEST_CASE("await_message handler takeover", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(std::move(stream_a));
    Transport transport_b(std::move(stream_b));
    transport_a.start();
    transport_b.start();

    std::atomic<bool> intermediate_received = false;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        uint32_t intermediate_message = 36356;
        auto intermediate_msg_out = transport_b.start_message(102);
        asio::write(intermediate_msg_out.buffer, asio::buffer(&intermediate_message, sizeof(intermediate_message)));
        intermediate_msg_out.flush();

        uint32_t tmp;
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        asio::write(msg_out.buffer, asio::buffer(&tmp, sizeof(tmp)));
        msg_out.flush();

        transport_b.shutdown();
    });

    transport_a.register_handler(102, [&](MessageLockIn msg_in){
        uint32_t tmp;
        asio::read(msg_in.buffer, asio::buffer(&tmp, sizeof(tmp)));
        intermediate_received = true;
    });

    {
        auto msg_out = transport_a.start_message(100);
        uint32_t message_sent = 1000;
        asio::write(msg_out.buffer, asio::buffer(&message_sent, sizeof(message_sent)));
        msg_out.flush();
    
        // message 102 should have been read and handled before this returns
        // no need to release prior lock, because it should be handled from this thread in this call
        auto msg_in = transport_a.await_message(101);
        REQUIRE(intermediate_received); // handler should have processed intermediate
        uint32_t message_received{};
        asio::read(msg_in.buffer, asio::buffer(&message_received, sizeof(message_received)));

        REQUIRE(message_received == message_sent);
    }

    transport_b.join();
    transport_a.join();
}