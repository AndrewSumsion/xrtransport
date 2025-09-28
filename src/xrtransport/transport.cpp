#include "xrtransport/transport.h"

#include <cassert>
#include <chrono>
#include <thread>

namespace xrtransport {

// MessageLockOut implementation
MessageLockOut::MessageLockOut(std::unique_lock<std::recursive_mutex>&& lock, SyncWriteStream& stream)
    : lock(std::move(lock)), stream(stream) {
}

MessageLockOut::~MessageLockOut() {
    // Lock is automatically released when unique_lock destructor runs
}

// MessageLockIn implementation
MessageLockIn::MessageLockIn(std::unique_lock<std::recursive_mutex>&& lock, SyncReadStream& stream)
    : lock(std::move(lock)), stream(stream) {
}

MessageLockIn::~MessageLockIn() {
    // Lock is automatically released when unique_lock destructor runs
}

// Transport implementation
Transport::Transport(SyncDuplexStream& stream)
    : stream(stream), should_stop(false) {
}

Transport::~Transport() {
    stop_worker_thread();
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

MessageLockIn Transport::await_message(uint16_t header) {
    while (true) {
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        // Set to non-blocking mode to check for available data
        bool original_blocking = stream.blocking_mode();
        stream.blocking_mode(false);

        uint16_t received_header;
        asio::error_code ec;
        std::size_t bytes_read = asio::read(stream, asio::mutable_buffer(&received_header, sizeof(received_header)), ec);

        // Restore original blocking mode
        stream.blocking_mode(original_blocking);

        if (bytes_read == sizeof(received_header)) {
            if (received_header == header) {
                // This is our message
                return MessageLockIn(std::move(lock), stream);
            } else {
                // Dispatch to handler for this message type
                dispatch_to_handler(received_header, std::move(lock));
                // lock is now invalid, continue loop to try again
            }
        } else {
            // No data available or incomplete read, release lock and yield
            lock.unlock();
            std::this_thread::yield();
        }
    }
}

void Transport::dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock) {
    auto it = handlers.find(header);
    if (it != handlers.end()) {
        // Create MessageLockIn and call handler
        MessageLockIn message_lock(std::move(lock), stream);
        it->second(std::move(message_lock));
    } else {
        // No handler registered, just consume the message by reading until end
        // This is a simple approach - in practice you might want more sophisticated handling
        lock.unlock();
    }
}

void Transport::start_worker_thread() {
    should_stop = false;
    worker_thread = std::thread(&Transport::worker_loop, this);
}

void Transport::stop_worker_thread() {
    should_stop = true;
    if (worker_thread.joinable()) {
        worker_thread.join();
    }
}

void Transport::worker_loop() {
    while (!should_stop) {
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        // Check if enough bytes are available for the header
        if (stream.available() >= sizeof(uint16_t)) {
            // Enough data available, read the header
            uint16_t header;
            asio::read(stream, asio::mutable_buffer(&header, sizeof(header)));

            // Dispatch to handler
            dispatch_to_handler(header, std::move(lock));
        } else {
            // Not enough data available, release lock and yield
            lock.unlock();
            std::this_thread::yield();
        }
    }
}

} // namespace xrtransport