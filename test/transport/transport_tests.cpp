#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_section_info.hpp>

#include "xrtransport/transport/transport.h"
#include "test_duplex_stream.h"

#define ASIO_STANDALONE
#include "asio/io_context.hpp"

#include <thread>
#include <chrono>
#include <atomic>
#include <future>
#include <cstdint>

using namespace xrtransport;
using namespace xrtransport::test;

TEST_CASE("Transport basic sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    std::thread b_thread([&](){
        auto msg_in = transport_b.await_message(100);
        msg_in.stream.read_some(asio::buffer(&message_received, sizeof(message_received)));
    });

    auto msg_out = transport_a.start_message(100);
    msg_out.stream.write_some(asio::buffer(&message_sent, sizeof(message_sent)));

    b_thread.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Transport round trip sync sending and awaiting", "[transport][sync]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    std::thread b_thread([&](){
        auto msg_in = transport_b.await_message(100);
        uint32_t tmp;
        msg_in.stream.read_some(asio::buffer(&tmp, sizeof(tmp)));
        auto msg_out = transport_b.start_message(101);
        msg_out.stream.write_some(asio::buffer(&tmp, sizeof(tmp)));
    });

    auto msg_out = transport_a.start_message(100);
    msg_out.stream.write_some(asio::buffer(&message_sent, sizeof(message_sent)));

    auto msg_in = transport_a.await_message(101);
    msg_in.stream.read_some(asio::buffer(&message_received, sizeof(message_received)));

    b_thread.join();

    REQUIRE(message_received == message_sent);
}

TEST_CASE("Transport basic async handler", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    uint32_t message_sent = 1000;
    uint32_t message_received = 0;

    transport_b.register_handler(100, [&](MessageLockIn msg_in){
        msg_in.stream.read_some(asio::buffer(&message_received, sizeof(message_received)));
    });

    auto msg_out = transport_a.start_message(100);
    msg_out.stream.write_some(asio::buffer(&message_sent, sizeof(message_sent)));

    // run async loop until handler is invoked
    while (!message_received) {
        io_context.run_one();
    }

    REQUIRE(message_received == message_sent);
}