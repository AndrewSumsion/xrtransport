#include "transport_impl.h"

#include "xrtransport/transport/error.h" // for TransportException

#include <spdlog/spdlog.h>
#include <chrono>
#include <thread>

namespace xrtransport {

// TransportImpl implementation
TransportImpl::TransportImpl(std::unique_ptr<SyncDuplexStream> stream)
    : stream(std::move(stream)), should_stop(false), worker_running(false) {
}

TransportImpl::~TransportImpl() {
    close();
    stop();
}

MessageLockOutImpl TransportImpl::start_message(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);

    return MessageLockOutImpl(header, std::move(lock), *stream);
}

void TransportImpl::register_handler(uint16_t header, std::function<void(MessageLockInImpl)> handler) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers[header] = std::move(handler);
}

void TransportImpl::unregister_handler(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers.erase(header);
}

void TransportImpl::clear_handlers() {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    handlers.clear();
}

MessageLockInImpl TransportImpl::await_message(uint16_t header) {
    while (true) {
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        uint16_t received_header{};
        asio::read(*stream, asio::mutable_buffer(&received_header, sizeof(uint16_t)));

        // keep reading and handling messages synchronously until we find the one we want
        if (received_header == header) {
            return MessageLockInImpl(std::move(lock), *stream);
        }
        else {
            dispatch_to_handler(received_header, std::move(lock));
        }
    }
}

StreamLockImpl TransportImpl::lock_stream() {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    return StreamLockImpl(std::move(lock), *stream);
}

void TransportImpl::dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock) {
    auto it = handlers.find(header);
    if (it != handlers.end()) {
        // Create MessageLockInImpl and call handler
        MessageLockInImpl message_lock(std::move(lock), *stream);
        it->second(std::move(message_lock));
    } else {
        // No handler for this message type - stream is corrupted
        // We don't know how many bytes to read, so stream is permanently out of sync
        throw TransportException("No handler registered for message type: " + std::to_string(header));
    }
}

void TransportImpl::stop() {
    should_stop = true;
    if (worker_thread.joinable()) {
        worker_thread.join();
    }
}

void TransportImpl::run(bool synchronous) {
    if (worker_running) {
        throw TransportException("Transport already running");
    }
    if (!synchronous) {
        worker_thread = std::thread([&]{
            // run synchronously on another thread
            run(true);
        });
        return;
    }

    worker_running = true;
    try {
        while (!should_stop) {
            run_once_internal();
        }
    }
    catch (const asio::system_error& e) {
        // don't propagate stream errors, just let the stream close
        spdlog::error("Transport worker exiting due to exception: {}", e.what());
    }
    worker_running = false;
}

void TransportImpl::run_once() {
    try {
        run_once_internal();
    }
    catch (const asio::system_error& e) {
        // don't propagate stream errors, just let the stream close
        spdlog::error("Transport worker exiting due to exception: {}", e.what());
    }
}

void TransportImpl::run_once_internal() {
    // Acquire lock for synchronous operations
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);

    uint16_t header;
    asio::read(*stream, asio::buffer(&header, sizeof(uint16_t)));

    // Dispatch to handler (will throw TransportException if unknown message type)
    dispatch_to_handler(header, std::move(lock));
}

bool TransportImpl::is_open() const {
    return stream->is_open();
}

void TransportImpl::close() {
    stream->close();
}

} // namespace xrtransport