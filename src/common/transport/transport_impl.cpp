#include "transport_impl.h"

#include "xrtransport/transport/transport_c_api.h" // for message headers and status
#include "xrtransport/transport/error.h" // for TransportException

#include <spdlog/spdlog.h>
#include <chrono>
#include <thread>

namespace xrtransport {

// TransportImpl implementation
TransportImpl::TransportImpl(std::unique_ptr<SyncDuplexStream> stream)
    : stream(std::move(stream)),
    status(XRTP_STATUS_CREATED)
{}

TransportImpl::~TransportImpl() {
    if (status == XRTP_STATUS_OPEN || status == XRTP_STATUS_WRITE_CLOSED)
        close();
    join();
}

void TransportImpl::producer_loop() {
    try {
        while (status != XRTP_STATUS_CLOSED) {
            MessageHeader header{};
            asio::read(*stream, asio::buffer(&header, sizeof(MessageHeader)));
            
            std::vector<uint8_t> payload(header.size);
            asio::read(*stream, asio::buffer(payload.data(), header.size));

            MessageIn msg_in(header.header, std::move(payload));
            {
                std::lock_guard<std::mutex> lock(queue_mutex);
                queue.emplace(std::move(msg_in));
            }

            // notify_all so that if the user and the consumer thread are both waiting, the user is guaranteed
            // to be woken up
            queue_cv.notify_all();

            if (header.header == XRTP_MSG_SHUTDOWN) {
                // if we've queued up a shutdown message, we shouldn't try to read anything else
                break;
            }
        }
    }
    catch(const asio::system_error& e) {
        close();
        spdlog::error("Connection closed due to IO error: {}", e.what());
    }
    catch (const std::exception& e) {
        close();
        spdlog::error("Connection closed due to unhandled exception: {}", e.what());
    }
    spdlog::info("Finished reading messages");
}

/**
 * Designed to always defer to the user (anyone owning the message lock)
 */
void TransportImpl::consumer_loop() {
    while (status != XRTP_STATUS_CLOSED) {
        std::unique_lock<std::recursive_mutex> message_lock(message_mutex);

        // we got the message lock, meaning no user is using the transport
        // now check if there's any work to do

        std::unique_lock<std::mutex> queue_lock(queue_mutex);
        // always check if the transport has been closed after acquiring the queue lock
        if (status == XRTP_STATUS_CLOSED)
            break;
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
    if (status == XRTP_STATUS_CREATED)
        throw TransportException("You must start the transport before using");
    if (status != XRTP_STATUS_OPEN)
        throw TransportException("cannot start message: transport write closed");

    std::unique_lock<std::recursive_mutex> lock(message_mutex);
    return MessageLockOutImpl(header, std::move(lock), this);
}

void TransportImpl::flush_to_stream(const void* data, size_t size) {
    if (status != XRTP_STATUS_OPEN)
        throw TransportException("cannot flush message: transport write closed");
    // this is only ever called by MessageLockOut which already has the message lock
    asio::write(*stream, asio::buffer(data, size));
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
    if (status == XRTP_STATUS_CLOSED)
        throw TransportException("Await aborted: transport closed");

    queue_cv.wait(queue_lock, [&]{
        return !queue.empty() || status == XRTP_STATUS_CLOSED;
    });

    if (status == XRTP_STATUS_CLOSED)
        throw TransportException("Await aborted: transport closed");

    MessageIn msg_in = std::move(queue.front());
    queue.pop();

    return std::move(msg_in);
}

MessageLockInImpl TransportImpl::await_message(uint16_t header) {
    if (status == XRTP_STATUS_CREATED)
        throw TransportException("You must start the transport before using");

    std::unique_lock<std::recursive_mutex> message_lock(message_mutex);
    if (header == XRTP_MSG_SHUTDOWN) {
        throw TransportException("Can't await shutdown message");
    }
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
    if (status == XRTP_STATUS_CREATED)
        throw TransportException("You must start the transport before using");

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

    if (msg_in.header == XRTP_MSG_SHUTDOWN) {
        // this happens once the message have been reached in the queue, *not* read in by the producer,
        if (status == XRTP_STATUS_OPEN) {
            // only respond if we're not in WRITE_CLOSED status, meaning we didn't initiate the shutdown
            auto msg_out = start_message(XRTP_MSG_SHUTDOWN);
            msg_out.flush();
        }
        // if we received this, we've read the last message so close the transport
        close();
    }
    else {
        auto it = handlers.find(msg_in.header);
        if (it != handlers.end()) {
            // Create MessageLockInImpl and call handler
            it->second(MessageLockInImpl(std::move(msg_in.payload), std::move(lock)));
        } else {
            // no registered handler, log a warning and skip it
            spdlog::warn("No handler registered for message type: {}, ignoring", msg_in.header);
        }
    }
}

void TransportImpl::start() {
    if (status != XRTP_STATUS_CREATED)
        throw TransportException("This transport has already been started");
    status = XRTP_STATUS_OPEN;
    producer_thread = std::thread(&TransportImpl::producer_loop, this);
    consumer_thread = std::thread(&TransportImpl::consumer_loop, this);
}

void TransportImpl::join() {
    if (producer_thread.joinable()) {
        producer_thread.join();
    }
    if (consumer_thread.joinable()) {
        consumer_thread.join();
    }
}

xrtp_TransportStatus TransportImpl::get_status() {
    return status;
}

void TransportImpl::shutdown() {
    if (status != XRTP_STATUS_OPEN)
        throw TransportException("Transport is either already shut down or not yet started");
    
    auto msg_out = start_message(XRTP_MSG_SHUTDOWN);
    msg_out.flush();
    status = XRTP_STATUS_WRITE_CLOSED;
    // TODO: call shutdown on the native stream, if possible
}

void TransportImpl::close() {
    // only close the underlying stream if we haven't already
    bool should_close_stream = status != XRTP_STATUS_CLOSED;

    // Acquiring this mutex guarantees that all consumers are right before a status check. It is internally
    // enforced that all consumers must check the status after acquiring the queue lock, including in the
    // predicate and after returning from a wait. That means that setting the status to closed and notifying
    // them will not cause a race condition, e.g. falling into a wait after this is set.
    {
        std::lock_guard<std::mutex> queue_lock(queue_mutex);
        status = XRTP_STATUS_CLOSED;
    }
    queue_cv.notify_all();

    // close the stream to interrupt its read if necessary
    if (should_close_stream)
        stream->close();
}

} // namespace xrtransport