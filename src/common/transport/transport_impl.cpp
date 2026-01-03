#include "transport_impl.h"

#include "xrtransport/transport/error.h" // for TransportException

#include <spdlog/spdlog.h>
#include <chrono>
#include <thread>

namespace xrtransport {

// TransportImpl implementation
TransportImpl::TransportImpl(std::unique_ptr<SyncDuplexStream> stream)
    : stream(std::move(stream)),
    stopping(false),
    producer_thread(&TransportImpl::producer_loop, this),
    consumer_thread(&TransportImpl::consumer_loop, this)
{}

TransportImpl::~TransportImpl() {
    cleanup();
    if (producer_thread.joinable()) {
        producer_thread.join();
    }
    if (consumer_thread.joinable()) {
        consumer_thread.join();
    }
}

void TransportImpl::cleanup() {
    // make sure stream is closed and ignore error
    asio::error_code ec;
    stream->close(ec);

    stopping = true;
    queue_cv.notify_all();
}

void TransportImpl::producer_loop() {
    while (!stopping) try {
        MessageHeader header{};
        asio::read(*stream, asio::buffer(&header, sizeof(MessageHeader)));

        // check if we're stopping after the long header read
        if (stopping)
            break;
        
        std::vector<uint8_t> payload(header.size);
        asio::read(*stream, asio::buffer(payload.data(), header.size));

        MessageIn msg_in(header.header, std::move(payload));

        std::unique_lock<std::mutex> lock(queue_mutex);
        queue.emplace(std::move(msg_in));
        lock.unlock();
        // notify_all so that if the user and the consumer thread are both waiting, the user is guaranteed
        // to be woken up
        queue_cv.notify_all();
    }
    catch(const asio::system_error& e) {
        if (e.code() == asio::error::eof) {
            spdlog::info("Connection closed (EOF)");
        }
        else if (e.code() == asio::error::operation_aborted) {
            spdlog::info("Connection closed (Operation Aborted)");
        }
        else {
            spdlog::error("Connection closed due to IO error: {}", e.what());
        }
    }
    catch (const std::exception& e) {
        spdlog::error("Connection closed due to unhandled exception: {}", e.what());
    }

    cleanup();
}

/**
 * Designed to always defer to the user (anyone owning the message lock)
 */
void TransportImpl::consumer_loop() {
    while (!stopping) {
        std::unique_lock<std::recursive_mutex> message_lock(message_mutex);

        // we got the message lock, meaning no user is using the transport
        // now check if there's any work to do

        std::unique_lock<std::mutex> queue_lock(queue_mutex);
        if (stopping) {
            break; // stop point after blocking mutex acquire
        }
        if (!queue.empty()) {
            // there is work to do
            // consume from the queue and release it
            MessageIn msg_in = std::move(queue.front());
            queue.pop();
            queue_lock.unlock();

            // now handle it while we still have the message lock
            // it is very important that the queue lock is unlocked so that producer can start again and
            // handlers can await responses
            dispatch_to_handler(std::move(msg_in));
        }
        else {
            // there is nothing to do...
            // wait until there is something to do to avoid busy waiting, but don't do it in case the user
            // wants to consume it

            // allow the user to acquire the message lock while we're waiting
            message_lock.unlock();

            // note: no predicate because we don't actually need to use the queue after this, it's just to
            // avoid busy waiting
            queue_cv.wait(queue_lock);
        }
    }
}

MessageLockOutImpl TransportImpl::start_message(uint16_t header) {
    if (stopping) {
        throw TransportException("cannot start message: transport closed");
    }

    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    return MessageLockOutImpl(header, std::move(lock), *stream);
}

void TransportImpl::register_handler(uint16_t header, std::function<void(MessageLockInImpl)> handler) {
    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    handlers[header] = std::move(handler);
}

void TransportImpl::unregister_handler(uint16_t header) {
    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    handlers.erase(header);
}

void TransportImpl::clear_handlers() {
    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    handlers.clear();
}

MessageIn TransportImpl::await_any_message() {
    std::unique_lock<std::mutex> queue_lock(queue_mutex);
    queue_cv.wait(queue_lock, [&]{
        return stopping || !queue.empty();
    });

    if (stopping) {
        throw TransportException("Await aborted: transport closed");
    }

    MessageIn msg_in = std::move(queue.front());
    queue.pop();

    return std::move(msg_in);
}

MessageLockInImpl TransportImpl::await_message(uint16_t header) {
    std::unique_lock<std::recursive_mutex> message_lock(message_mutex);
    while (true) {
        MessageIn msg_in = await_any_message();

        // keep reading and handling messages synchronously until we find the one we want
        if (msg_in.header == header) {
            return MessageLockInImpl(std::move(msg_in.payload), std::move(message_lock));
        }
        else {
            dispatch_to_handler(std::move(msg_in));
        }
    }
}

void TransportImpl::handle_message(uint16_t header) {
    // keep reading and handling messages synchronously until we've handled the one we want
    std::unique_lock<std::recursive_mutex> message_lock(message_mutex);
    while (true) {
        MessageIn msg_in = await_any_message();
        uint16_t msg_header = msg_in.header;

        // keep reading and handling messages synchronously until we find the one we want
        dispatch_to_handler(std::move(msg_in));
        if (msg_header == header) {
            return;
        }
    }
}

MessageLockImpl TransportImpl::acquire_message_lock() {
    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    return MessageLockImpl(std::move(lock));
}

void TransportImpl::dispatch_to_handler(MessageIn msg_in) {
    // this must be called by a thread that already owns the message lock, so make sure
    std::unique_lock<std::recursive_mutex> lock(message_mutex, std::try_to_lock);
    if (!lock.owns_lock()) {
        throw TransportException("Cannot dispatch to handler without owning message lock");
    }

    auto it = handlers.find(msg_in.header);
    if (it != handlers.end()) {
        // Create MessageLockInImpl and call handler
        it->second(MessageLockInImpl(std::move(msg_in.payload), std::move(lock)));
    } else {
        // no registered handler, log a warning and skip it
        spdlog::warn("No handler registered for message type: {}, ignoring", msg_in.header);
    }
}

void TransportImpl::join() {
    if (producer_thread.joinable()) {
        producer_thread.join();
    }
}

bool TransportImpl::is_open() const {
    return !stopping;
}

void TransportImpl::close() {
    stopping = true;
    stream->close();
}

} // namespace xrtransport