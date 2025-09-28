#ifndef XRTRANSPORT_TRANSPORT_H
#define XRTRANSPORT_TRANSPORT_H

#include "xrtransport/asio_compat.h"

#define ASIO_STANDALONE
#include "asio/write.hpp"
#include "asio/read.hpp"

#include <mutex>
#include <thread>
#include <functional>
#include <unordered_map>
#include <cstdint>
#include <memory>
#include <atomic>

namespace xrtransport {

// Forward declarations
struct MessageLockOut;
struct MessageLockIn;

// Message type constants
constexpr uint16_t FUNCTION_CALL = 1;
constexpr uint16_t FUNCTION_RETURN = 2;
constexpr uint16_t CUSTOM_BASE = 100;

// RAII stream lock classes
struct MessageLockOut {
    const std::unique_lock<std::recursive_mutex> lock;
    SyncWriteStream& stream;

    MessageLockOut(std::unique_lock<std::recursive_mutex>&& lock, SyncWriteStream& stream);
    ~MessageLockOut(); // Release lock
    MessageLockOut(const MessageLockOut&) = delete;
    MessageLockOut& operator=(const MessageLockOut&) = delete;
    MessageLockOut(MessageLockOut&&) = default;
    MessageLockOut& operator=(MessageLockOut&&) = default;
};

struct MessageLockIn {
    const std::unique_lock<std::recursive_mutex> lock;
    SyncReadStream& stream;

    MessageLockIn(std::unique_lock<std::recursive_mutex>&& lock, SyncReadStream& stream);
    ~MessageLockIn(); // Release lock
    MessageLockIn(const MessageLockIn&) = delete;
    MessageLockIn& operator=(const MessageLockIn&) = delete;
    MessageLockIn(MessageLockIn&&) = default;
    MessageLockIn& operator=(MessageLockIn&&) = default;
};

// Transport class for message-based communication
class Transport {
private:
    DuplexStream& stream;
    mutable std::recursive_mutex stream_mutex;
    std::atomic<bool> should_stop;
    std::unordered_map<uint16_t, std::function<void(MessageLockIn)>> handlers;

    // Internal helper to dispatch messages to handlers
    void dispatch_to_handler(uint16_t header, std::unique_lock<std::recursive_mutex>&& lock);

    // Async worker cycle function
    void worker_cycle();

public:
    explicit Transport(DuplexStream& stream);
    ~Transport();

    // Disable copy/assignment
    Transport(const Transport&) = delete;
    Transport& operator=(const Transport&) = delete;

    // Message operations
    MessageLockOut start_message(uint16_t header);
    void register_handler(uint16_t header, std::function<void(MessageLockIn)> handler);
    MessageLockIn await_message(uint16_t header);

    // Worker management
    void start_worker();
    void stop_worker();
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_H