#include "xrtransport/transport/transport.h"

#include <chrono>
#include <thread>

namespace xrtransport {

// Transport implementation
Transport::Transport(DuplexStream& stream)
    : stream(stream), should_stop(false) {
}

Transport::~Transport() {
    stop_worker();
}

MessageLockOut Transport::start_message(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);

    // Write the header first
    asio::write(stream, asio::const_buffer(&header, sizeof(header)));

    return MessageLockOut(std::move(lock), stream);
}

void Transport::register_handler(uint16_t header, std::function<void(MessageLockIn)> handler) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers[header] = std::move(handler);
}

void Transport::unregister_handler(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers.erase(header);
}

void Transport::clear_handlers() {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers.clear();
}

MessageLockIn Transport::await_message(uint16_t header) {
    while (true) {
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        if (stream.available() >= sizeof(header)) {
            uint16_t received_header;
            // TODO: proper error handling
            asio::read(stream, asio::mutable_buffer(&received_header, sizeof(received_header)));

            if (received_header == header) {
                // This is our message
                return MessageLockIn(std::move(lock), stream);
            } else {
                // Dispatch to handler for this message type
                dispatch_to_handler(received_header, std::move(lock));
            }
            // lock is now invalid, continue loop to try again
        } else {
            // No data available or incomplete read, release lock and try again
            lock.unlock();
        }

        // Yield at each iteration
        std::this_thread::yield();
    }
}

void Transport::dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock) {
    auto it = handlers.find(header);
    if (it != handlers.end()) {
        // Create MessageLockIn and call handler
        MessageLockIn message_lock(std::move(lock), stream);
        it->second(std::move(message_lock));
    } else {
        throw TransportException("No handler registered for message type: " + std::to_string(header));
    }
}

void Transport::start_worker() {
    should_stop = false;
    worker_cycle();
}

void Transport::stop_worker() {
    should_stop = true;
}

void Transport::worker_cycle() {
    // Guard clause to stop the async cycle
    if (should_stop) {
        return;
    }

    // Async wait for read availability
    stream.async_wait(asio::socket_base::wait_read, [this](asio::error_code ec) {
        if (ec || should_stop) {
            return; // Stop on error or when requested
        }

        // Acquire lock for synchronous operations
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        // Check if enough bytes are available for the header
        if (stream.available() >= sizeof(uint16_t)) {
            // Enough data available, read the header synchronously
            uint16_t header;
            asio::read(stream, asio::mutable_buffer(&header, sizeof(header)));

            // Dispatch to handler
            dispatch_to_handler(header, std::move(lock));
        } else {
            // Release lock since we're not reading
            // Note: lock is released in other branch at the end of the handler
            lock.unlock();
        }

        // Continue the async cycle
        worker_cycle();
    });
}

} // namespace xrtransport