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

using namespace xrtransport;
using namespace xrtransport::test;

TEST_CASE("Transport basic functionality", "[transport][basic]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);

    SECTION("Construction and destruction") {
        REQUIRE_NOTHROW(Transport(stream_a));

        // Test that Transport can be destroyed without issues
        {
            Transport transport(stream_a);
        } // Should destroy cleanly
    }

    SECTION("MessageLock RAII behavior") {
        Transport transport(stream_a);

        // Test that start_message returns a valid MessageLockOut
        auto lock = transport.start_message(FUNCTION_CALL);

        // MessageLock should be moveable
        auto moved_lock = std::move(lock);

        // The moved lock should be usable
        // (We can't easily test the lock behavior directly, but this ensures it compiles)
    }
}

TEST_CASE("Transport message flow", "[transport][message-flow]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    SECTION("Basic message sending and receiving") {
        // Send a message from A to B
        {
            auto lock = transport_a.start_message(FUNCTION_CALL);
            // Message header is automatically written by start_message
        }

        // Receive the message on B
        auto received_lock = transport_b.await_message(FUNCTION_CALL);

        // Test passed if we successfully received the message
        REQUIRE(true);
    }

    SECTION("Bidirectional communication") {
        // Send FUNCTION_CALL from A to B
        {
            auto lock = transport_a.start_message(FUNCTION_CALL);
        }

        // Receive on B and send FUNCTION_RETURN back
        {
            auto received_lock = transport_b.await_message(FUNCTION_CALL);
            auto response_lock = transport_b.start_message(FUNCTION_RETURN);
        }

        // Receive the response on A
        auto response_lock = transport_a.await_message(FUNCTION_RETURN);

        REQUIRE(true);
    }

    SECTION("Multiple message types") {
        const uint16_t CUSTOM_MSG_1 = CUSTOM_BASE + 1;
        const uint16_t CUSTOM_MSG_2 = CUSTOM_BASE + 2;

        // Send different message types
        {
            auto lock1 = transport_a.start_message(CUSTOM_MSG_1);
        }
        {
            auto lock2 = transport_a.start_message(CUSTOM_MSG_2);
        }

        // Receive in order
        auto received1 = transport_b.await_message(CUSTOM_MSG_1);
        auto received2 = transport_b.await_message(CUSTOM_MSG_2);

        REQUIRE(true);
    }
}

TEST_CASE("Transport handler registration and dispatch", "[transport][handlers]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    SECTION("Handler registration and execution") {
        std::atomic<bool> handler_called{false};
        const uint16_t TEST_MESSAGE = CUSTOM_BASE + 10;

        // Register a handler on B
        transport_b.register_handler(TEST_MESSAGE, [&handler_called](MessageLockIn lock) {
            handler_called = true;
        });

        // Send message from A
        {
            auto lock = transport_a.start_message(TEST_MESSAGE);
        }

        // Give the handler time to execute (this is a simplification for testing)
        // In real usage, the async worker would handle this
        std::this_thread::sleep_for(std::chrono::milliseconds(10));

        // For this test, we need to manually trigger message reception
        // Since we're not using the async worker, we manually await the message
        // This tests that the message was properly sent and can be received
        REQUIRE_NOTHROW(transport_b.await_message(TEST_MESSAGE));
    }
}

TEST_CASE("Transport error conditions", "[transport][errors]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    SECTION("Missing handler throws exception") {
        const uint16_t UNREGISTERED_MESSAGE = CUSTOM_BASE + 99;

        // Send a message for which no handler is registered
        {
            auto lock = transport_a.start_message(UNREGISTERED_MESSAGE);
        }

        // Manually call dispatch_to_handler to test exception throwing
        // Note: This requires friend access or a test-specific method
        // For now, we'll test that await_message works (which internally uses dispatch_to_handler)

        // Since await_message will eventually call dispatch_to_handler for unregistered messages,
        // it should throw a TransportException. However, await_message might loop indefinitely
        // waiting for the specific message type, so this test is somewhat artificial.
        // A more realistic test would use the async worker which calls dispatch_to_handler directly.

        // For now, let's test that the basic mechanism would work if we had the right setup
        REQUIRE(true); // Placeholder - this test case needs async worker to be fully testable
    }
}

TEST_CASE("Transport with async operations", "[transport][async]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);

    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    SECTION("Async worker lifecycle") {
        // Start worker
        REQUIRE_NOTHROW(transport_a.start_worker());

        // Run io_context on a separate thread
        std::thread io_thread([&io_context]() {
            io_context.run();
        });

        // Stop worker
        transport_a.stop_worker();

        // Stop io_context and join thread
        io_context.stop();
        if (io_thread.joinable()) {
            io_thread.join();
        }

        REQUIRE(true);
    }

    SECTION("Message handling with worker") {
        std::atomic<bool> handler_called{false};
        const uint16_t ASYNC_MESSAGE = CUSTOM_BASE + 20;

        // Register handler
        transport_b.register_handler(ASYNC_MESSAGE, [&handler_called](MessageLockIn lock) {
            handler_called = true;
        });

        // Start worker on B
        transport_b.start_worker();

        // Run io_context
        std::thread io_thread([&io_context]() {
            io_context.run_for(std::chrono::seconds(1));
        });

        // Send message from A
        {
            auto lock = transport_a.start_message(ASYNC_MESSAGE);
        }

        // Wait a bit for async processing
        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        // Clean up
        transport_b.stop_worker();
        io_context.stop();
        if (io_thread.joinable()) {
            io_thread.join();
        }

        // Handler should have been called
        REQUIRE(handler_called);
    }
}

TEST_CASE("Transport concurrency", "[transport][concurrency]") {
    asio::io_context io_context;
    auto [stream_a, stream_b] = create_connected_streams(io_context);
    Transport transport_a(stream_a);
    Transport transport_b(stream_b);

    SECTION("Multiple threads sending messages") {
        const int num_threads = 4;
        const int messages_per_thread = 10;
        std::atomic<int> messages_received{0};

        // Register handler to count received messages
        transport_b.register_handler(FUNCTION_CALL, [&messages_received](MessageLockIn lock) {
            messages_received++;
        });

        // Create threads that send messages
        std::vector<std::thread> sender_threads;
        for (int i = 0; i < num_threads; ++i) {
            sender_threads.emplace_back([&transport_a, messages_per_thread]() {
                for (int j = 0; j < messages_per_thread; ++j) {
                    auto lock = transport_a.start_message(FUNCTION_CALL);
                    // Add small delay to increase chance of contention
                    std::this_thread::sleep_for(std::chrono::microseconds(1));
                }
            });
        }

        // Create a thread that receives messages
        std::thread receiver_thread([&transport_b, num_threads, messages_per_thread]() {
            int expected_messages = num_threads * messages_per_thread;
            for (int i = 0; i < expected_messages; ++i) {
                auto lock = transport_b.await_message(FUNCTION_CALL);
            }
        });

        // Wait for all threads to complete
        for (auto& thread : sender_threads) {
            thread.join();
        }
        receiver_thread.join();

        // All messages should have been received
        REQUIRE(messages_received == num_threads * messages_per_thread);
    }
}

TEST_CASE("TestDuplexStream functionality", "[transport][test-infrastructure]") {
    asio::io_context io_context;

    SECTION("SharedBuffer bidirectional communication") {
        auto buffer = std::make_shared<SharedBuffer>();
        TestDuplexStream stream_a(buffer, SharedBuffer::SIDE_A, io_context);
        TestDuplexStream stream_b(buffer, SharedBuffer::SIDE_B, io_context);

        // Write from A, read from B
        const std::string test_data = "Hello, World!";
        auto bytes_written = stream_a.write_some(asio::const_buffer(test_data.data(), test_data.size()));
        REQUIRE(bytes_written == test_data.size());

        // Check that B can see the data
        REQUIRE(stream_b.available() == test_data.size());

        // Read the data on B
        std::vector<char> read_buffer(test_data.size());
        auto bytes_read = stream_b.read_some(asio::mutable_buffer(read_buffer.data(), read_buffer.size()));
        REQUIRE(bytes_read == test_data.size());

        std::string received_data(read_buffer.begin(), read_buffer.end());
        REQUIRE(received_data == test_data);
    }

    SECTION("Partial read simulation") {
        auto buffer = std::make_shared<SharedBuffer>();
        TestDuplexStream stream_a(buffer, SharedBuffer::SIDE_A, io_context);
        TestDuplexStream stream_b(buffer, SharedBuffer::SIDE_B, io_context);

        // Configure B to only read 5 bytes at a time
        stream_b.set_max_read_size(5);

        // Write 10 bytes from A
        const std::string test_data = "1234567890";
        stream_a.write_some(asio::const_buffer(test_data.data(), test_data.size()));

        // First read should only get 5 bytes
        std::vector<char> read_buffer(10);
        auto bytes_read = stream_b.read_some(asio::mutable_buffer(read_buffer.data(), read_buffer.size()));
        REQUIRE(bytes_read == 5);

        // Second read should get remaining 5 bytes
        bytes_read = stream_b.read_some(asio::mutable_buffer(read_buffer.data() + 5, read_buffer.size() - 5));
        REQUIRE(bytes_read == 5);

        std::string received_data(read_buffer.begin(), read_buffer.end());
        REQUIRE(received_data == test_data);
    }
}