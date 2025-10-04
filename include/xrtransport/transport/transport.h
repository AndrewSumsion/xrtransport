#ifndef XRTRANSPORT_TRANSPORT_H
#define XRTRANSPORT_TRANSPORT_H

#include "xrtransport/asio_compat.h"

#include "asio/write.hpp"
#include "asio/read.hpp"

#include <mutex>
#include <thread>
#include <functional>
#include <unordered_map>
#include <cstdint>
#include <memory>
#include <atomic>
#include <stdexcept>

namespace xrtransport {

// Exception for Transport-specific errors
class TransportException : public std::runtime_error {
public:
    explicit TransportException(const std::string& message) : std::runtime_error(message) {}
};

// Message type constants
constexpr uint16_t FUNCTION_CALL = 1;
constexpr uint16_t FUNCTION_RETURN = 2;
constexpr uint16_t CUSTOM_BASE = 100;

// RAII stream lock classes
template <typename Stream>
struct [[nodiscard]] MessageLock {
    std::unique_lock<std::recursive_mutex> lock;
    Stream& stream;

    MessageLock(std::unique_lock<std::recursive_mutex>&& lock, Stream& stream)
        : lock(std::move(lock)), stream(stream) {}

    MessageLock(const MessageLock&) = delete;
    MessageLock& operator=(const MessageLock&) = delete;
    MessageLock(MessageLock&&) = default;
    MessageLock& operator=(MessageLock&&) = default;
};

using MessageLockOut = MessageLock<SyncWriteStream>;
using MessageLockIn = MessageLock<SyncReadStream>;

// Transport class for message-based communication
class Transport {
private:
    std::unique_ptr<DuplexStream> stream;
    mutable std::recursive_mutex stream_mutex;
    std::atomic<bool> should_stop;
    std::unordered_map<uint16_t, std::function<void(Transport&, MessageLockIn)>> handlers;

    // Internal helper to dispatch messages to handlers
    void dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock);

    // Async worker cycle function
    void worker_cycle();

public:
    explicit Transport(std::unique_ptr<DuplexStream> stream);
    ~Transport();

    // Disable copy/assignment
    Transport(const Transport&) = delete;
    Transport& operator=(const Transport&) = delete;

    // Message operations
    MessageLockOut start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(Transport&, MessageLockIn)> handler);
    void unregister_handler(uint16_t header);
    void clear_handlers();
    MessageLockIn await_message(uint16_t header);

    // Worker management
    void start_worker();
    void stop_worker();

    // Stream status
    bool is_open() const;
    void close();
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_H