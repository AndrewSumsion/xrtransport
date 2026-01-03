#include "transport_impl.h"

#include "xrtransport/transport/error.h" // for TransportException

#include <spdlog/spdlog.h>
#include <chrono>
#include <thread>

namespace xrtransport {

// TransportImpl implementation
TransportImpl::TransportImpl(std::unique_ptr<SyncDuplexStream> stream)
    : stream(std::move(stream)) {
}

TransportImpl::~TransportImpl() {
    close();
    {
        std::lock_guard<std::mutex> lock(worker_state.mutex);
        worker_state.stopping = true;
        worker_state.should_restart = false;
    }
    if (worker_thread.joinable()) {
        worker_thread.join();
    }
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

        MessageInHeader received_header = read_header();

        // keep reading and handling messages synchronously until we find the one we want
        if (received_header.header == header) {
            return MessageLockInImpl(received_header.size, std::move(lock), *stream);
        }
        else {
            dispatch_to_handler(received_header.header, received_header.size, std::move(lock));
        }
    }
}

void TransportImpl::handle_message(uint16_t header) {
    // keep reading and handling messages synchronously until we've handled the one we want
    while (true) {
        std::unique_lock<std::recursive_mutex> lock(stream_mutex);

        MessageInHeader received_header = read_header();
        dispatch_to_handler(received_header.header, received_header.size, std::move(lock));

        if (received_header.header == header) {
            return;
        }
    }
}

StreamLockImpl TransportImpl::lock_stream() {
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    return StreamLockImpl(std::move(lock), *stream);
}

void TransportImpl::dispatch_to_handler(uint16_t header, uint32_t size, std::unique_lock<std::recursive_mutex>&& lock) {
    auto it = handlers.find(header);
    if (it != handlers.end()) {
        // Create MessageLockInImpl and call handler
        MessageLockInImpl message_lock(size, std::move(lock), *stream);
        it->second(std::move(message_lock));
    } else {
        // No handler for this message type - stream is corrupted
        // We don't know how many bytes to read, so stream is permanently out of sync
        throw TransportException("No handler registered for message type: " + std::to_string(header));
    }
}

void TransportImpl::stop() {
    std::lock_guard<std::mutex> lock(worker_state.mutex);
    if (worker_state.reference_count > 0) {
        worker_state.reference_count -= 1;
    }
    if (worker_state.reference_count == 0) {
        worker_state.stopping = true;
    }
}

void TransportImpl::run(bool synchronous) {
    // Warning: horrifically smelly code ahead
    // This is essentially a state machine based on WorkerState
    // See the header comment on WorkerState to understand the possible states and how they transition
    // into each other.
    // If it makes it any easier to understand, control flow cannot fall through any of the innermost
    // scopes, each innermost scope describes the behavior of the whole method.
    std::lock_guard lock(worker_state.mutex);
    if (synchronous) {
        if (worker_state.running) {
            throw TransportException("Worker is already running");
        }
        else {
            // start the worker synchronously
            worker_state.running = true;
            worker_state.running_on_worker_thread = false;
            worker_state.stopping = false;
            worker_state.should_restart = false;
            worker_state.reference_count = 1;
            worker_loop();
            return;
        }
    }
    else {
        if (worker_state.running) {
            if (worker_state.stopping) {
                // worker is stopping, either on worker thread or otherwise
                // make the worker restart on worker thread
                // this works because we got the lock before it could mark worker_state.running as false,
                // so we still have time to tell it to restart
                worker_state.should_restart = true;
                return;
            }
            else {
                if (worker_state.running_on_worker_thread) {
                    // worker is running on worker thread and not stopping
                    // increment reference count (meaning we are expecting another stop call) and return
                    worker_state.reference_count += 1;
                    return;
                }
                else {
                    // worker is running on another thread and not stopping
                    throw TransportException("Worker is already running synchronously on another thread");
                }
            }
        }
        else {
            if (worker_thread.joinable()) {
                worker_thread.join();
            }
            // start worker on worker thread
            worker_state.running = true;
            worker_state.running_on_worker_thread = true;
            worker_state.stopping = false;
            worker_state.should_restart = false;
            worker_state.reference_count = 1;
            worker_thread = std::thread([&]{
                worker_loop();
            });
            return;
        }
    }
}

void TransportImpl::worker_loop() {
    try {
        while (true) {
            {
                std::lock_guard<std::mutex> lock(worker_state.mutex);
                if (worker_state.stopping) {
                    break;
                }
            }

            std::unique_lock<std::recursive_mutex> lock(stream_mutex);

            MessageInHeader header = read_header();
            {
                std::lock_guard<std::mutex> lock(worker_state.mutex);
                if (worker_state.stopping) {
                    buffered_header = header;
                    has_buffered_header = true;
                    break;
                }
            }

            // Dispatch to handler (will throw TransportException if unknown message type)
            dispatch_to_handler(header.header, header.size, std::move(lock));
        }
    }
    catch (const asio::system_error& e) {
        // don't propagate stream errors, just let the stream close
        spdlog::error("Transport worker exiting due to exception: {}", e.what());
    }

    std::unique_lock<std::mutex> lock(worker_state.mutex);

    // if should_restart was set between stopping being set and now, restart on the worker thread
    if (worker_state.should_restart) {
        // reset state to reflect running on the worker thread
        worker_state.running = true;
        worker_state.running_on_worker_thread = true;
        worker_state.stopping = false;
        worker_state.should_restart = false;
        worker_state.reference_count = 1;

        if (worker_state.running_on_worker_thread) {
            assert(std::this_thread::get_id() == worker_thread.get_id());
            // we're already on the worker thread, just reset the state and start over
            // note: hopefully this gets tail-call optimized, although this will probably happen so rarely
            // that it doesn't matter
            worker_loop();
        }
        else {
            // we're on another thread but it was requested to restart on the worker thread
            if (worker_thread.joinable()) {
                worker_thread.join();
            }
            worker_thread = std::thread([&]{
                worker_loop();
            });
        }
    }
}

MessageInHeader TransportImpl::read_header() {
    std::lock_guard<std::recursive_mutex> lock(stream_mutex);
    if (has_buffered_header) {
        has_buffered_header = false;
        return buffered_header;
    }
    else {
        MessageInHeader header{};
        asio::read(*stream, asio::buffer(&header, sizeof(header)));
        return header;
    }
}

void TransportImpl::run_once() {
    {
        std::lock_guard<std::mutex> lock(worker_state.mutex);
        if (worker_state.running) {
            throw TransportException("Cannot run once when worker is running");
        }
    }
    std::unique_lock<std::recursive_mutex> lock(stream_mutex);
    MessageInHeader header = read_header();
    dispatch_to_handler(header.header, header.size, std::move(lock));
}

bool TransportImpl::is_open() const {
    return stream->is_open();
}

void TransportImpl::close() {
    stream->close();
}

} // namespace xrtransport