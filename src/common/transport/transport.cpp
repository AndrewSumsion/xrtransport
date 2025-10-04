#include "xrtransport/transport/transport.h"

#include <spdlog/spdlog.h>
#include "xrtransport/fatal_error.h"
#include <chrono>
#include <thread>

namespace xrtransport {

// Transport implementation
Transport::Transport(std::unique_ptr<DuplexStream> stream)
    : stream(std::move(stream)), should_stop(false) {
}

Transport::~Transport() {
    stop_worker();
}

MessageLockOut Transport::start_message(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);

    // Write the header first
    try {
        asio::write(*stream, asio::const_buffer(&header, sizeof(header)));
    } catch (const std::exception& e) {
        spdlog::error("Failed to write message header in start_message: {}", e.what());
        throw;
    }

    return MessageLockOut(std::move(lock), *stream);
}

void Transport::register_handler(uint16_t header, std::function<void(Transport&, MessageLockIn)> handler) {
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

        if (stream->available() >= sizeof(header)) {
            uint16_t received_header;
            try {
                asio::read(*stream, asio::mutable_buffer(&received_header, sizeof(received_header)));
            } catch (const std::exception& e) {
                spdlog::error("Failed to read message header in await_message: {}", e.what());
                throw;
            }

            if (received_header == header) {
                // This is our message
                return MessageLockIn(std::move(lock), *stream);
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
        // Create MessageLockIn and call handler with Transport reference
        MessageLockIn message_lock(std::move(lock), *stream);
        it->second(*this, std::move(message_lock));
    } else {
        // No handler for this message type - stream is corrupted
        // We don't know how many bytes to read, so stream is permanently out of sync
        fatal_error("No handler registered for message type: " + std::to_string(header));
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
    stream->async_wait(asio::socket_base::wait_read, [this](asio::error_code ec) {
        if (should_stop) {
            return;
        }
        if (ec) {
            spdlog::error("Async wait error in worker_cycle: {}", ec.message());
            return;
        }

        // Acquire lock for synchronous operations
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        // Check if enough bytes are available for the header
        if (stream->available() >= sizeof(uint16_t)) {
            // Enough data available, read the header synchronously
            uint16_t header;
            try {
                asio::read(*stream, asio::mutable_buffer(&header, sizeof(header)));
            } catch (const std::exception& e) {
                spdlog::error("Failed to read message header in worker_cycle: {}", e.what());
                lock.unlock();
                return; // Stop worker on read error
            }

            // Dispatch to handler (will fatal_error if unknown message type)
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

bool Transport::is_open() const {
    return stream->is_open();
}

void Transport::close() {
    stream->close();
}

} // namespace xrtransport