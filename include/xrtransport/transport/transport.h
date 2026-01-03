#ifndef XRTRANSPORT_TRANSPORT_H
#define XRTRANSPORT_TRANSPORT_H

#include "transport_c_api.h"
#include "error.h"

#include "xrtransport/asio_compat.h"

#include <cstdint>
#include <unordered_map>
#include <functional>
#include <memory>

namespace xrtransport {

namespace {
    void check_for_transport_exception(xrtp_Result result) {
        if (result == -1) { // special marker for TransportException
            throw TransportException("non-IO exception happened in Transport implementation; see logs");
        }
    }

    void check_xrtp_result(xrtp_Result result) {
        check_for_transport_exception(result);
        if (result) {
            throw asio::system_error(result, asio::system_category());
        }
    }
}
#define CHK_XRTP(expr) \
do { \
    xrtp_Result _result = expr; \
    check_xrtp_result(_result); \
} while (0)

struct MessageLockInStream : public SyncReadStream {
private:
    xrtp_MessageLockIn wrapped;

public:
    MessageLockInStream(xrtp_MessageLockIn wrapped)
        : wrapped(wrapped)
    {}

    // don't allow copying or moving. the parent MessageLockIn can be moved
    MessageLockInStream(const MessageLockInStream&) = delete;
    MessageLockInStream& operator=(const MessageLockInStream&) = delete;
    MessageLockInStream(MessageLockInStream&&) = delete;
    MessageLockInStream& operator=(MessageLockInStream&&) = delete;

    std::size_t read_some(const asio::mutable_buffer& buffer, asio::error_code& ec) override {
        std::uint64_t size_read{};
        xrtp_Result result = xrtp_msg_in_read_some(wrapped, buffer.data(), buffer.size(), &size_read);
        check_for_transport_exception(result);
        ec = asio::error_code(result, asio::system_category());
        return size_read;
    }

    std::size_t read_some(const asio::mutable_buffer& buffer) override {
        asio::error_code ec;
        std::size_t size_read = read_some(buffer, ec);
        if (ec) {
            throw asio::system_error(ec);
        }
        return size_read;
    }

    std::size_t available() override { throw InvalidOperationException(); }
    std::size_t available(asio::error_code& ec) override { throw InvalidOperationException(); }
    void non_blocking(bool mode) override { throw InvalidOperationException(); }
    bool non_blocking() const override { throw InvalidOperationException(); }
    bool is_open() const override { throw InvalidOperationException(); }
    void close() override { throw InvalidOperationException(); }
    void close(asio::error_code& ec) override { throw InvalidOperationException(); }

    friend struct MessageLockIn;
};

struct [[nodiscard]] MessageLockIn {
private:
    xrtp_MessageLockIn wrapped;

public:
    MessageLockInStream stream;

    MessageLockIn(xrtp_MessageLockIn wrapped)
        : wrapped(wrapped), stream(wrapped)
    {}

    // delete copy constructors
    MessageLockIn(const MessageLockIn&) = delete;
    MessageLockIn& operator=(const MessageLockIn&) = delete;

    // move constructors
    MessageLockIn(MessageLockIn&& other)
        : wrapped(other.wrapped), stream(other.wrapped)
    {
        other.wrapped = nullptr;
        other.stream.wrapped = nullptr;
    };

    MessageLockIn& operator=(MessageLockIn&& other) {
        if (this != &other) {
            if (wrapped) {
                CHK_XRTP(xrtp_msg_in_release(wrapped));
            }
            wrapped = other.wrapped;
            stream.wrapped = other.wrapped;
            other.wrapped = nullptr;
            other.stream.wrapped = nullptr;
        }

        return *this;
    };

    ~MessageLockIn() {
        if (wrapped) {
            CHK_XRTP(xrtp_msg_in_release(wrapped));
        }
    }
};

struct MessageLockOutStream : public SyncWriteStream {
private:
    xrtp_MessageLockOut wrapped;

public:
    MessageLockOutStream(xrtp_MessageLockOut wrapped)
        : wrapped(wrapped)
    {}

    // don't allow copying or moving. the parent MessageLockOut can be moved
    MessageLockOutStream(const MessageLockOutStream&) = delete;
    MessageLockOutStream& operator=(const MessageLockOutStream&) = delete;
    MessageLockOutStream(MessageLockOutStream&&) = delete;
    MessageLockOutStream& operator=(MessageLockOutStream&&) = delete;

    std::size_t write_some(const asio::const_buffer& buffer, asio::error_code& ec) override {
        std::uint64_t size_written{};
        xrtp_Result result = xrtp_msg_out_write_some(wrapped, buffer.data(), buffer.size(), &size_written);
        check_for_transport_exception(result);
        ec = asio::error_code(result, asio::system_category());
        return size_written;
    }

    std::size_t write_some(const asio::const_buffer& buffer) override {
        asio::error_code ec;
        std::size_t size_written = write_some(buffer, ec);
        if (ec) {
            throw asio::system_error(ec);
        }
        return size_written;
    }

    void non_blocking(bool mode) override { throw InvalidOperationException(); }
    bool non_blocking() const override { throw InvalidOperationException(); }
    bool is_open() const override { throw InvalidOperationException(); }
    void close() override { throw InvalidOperationException(); }
    void close(asio::error_code& ec) override { throw InvalidOperationException(); }

    friend struct MessageLockOut;
};

struct [[nodiscard]] MessageLockOut {
private:
    xrtp_MessageLockOut wrapped;

public:
    MessageLockOutStream buffer;

    MessageLockOut(xrtp_MessageLockOut wrapped)
        : wrapped(wrapped), buffer(wrapped)
    {}

    // delete copy constructors
    MessageLockOut(const MessageLockOut&) = delete;
    MessageLockOut& operator=(const MessageLockOut&) = delete;

    // move constructors
    MessageLockOut(MessageLockOut&& other)
        : wrapped(other.wrapped), buffer(other.wrapped)
    {
        other.wrapped = nullptr;
        other.buffer.wrapped = nullptr;
    };

    MessageLockOut& operator=(MessageLockOut&& other) {
        if (this != &other) {
            if (wrapped) {
                CHK_XRTP(xrtp_msg_out_release(wrapped));
            }
            wrapped = other.wrapped;
            buffer.wrapped = other.wrapped;
            other.wrapped = nullptr;
            other.buffer.wrapped = nullptr;
        }

        return *this;
    };

    void flush() {
        CHK_XRTP(xrtp_msg_out_flush(wrapped));
    }

    ~MessageLockOut() {
        if (wrapped) {
            flush();
            CHK_XRTP(xrtp_msg_out_release(wrapped));
        }
    }
};

struct StreamLockStream : public SyncDuplexStream {
private:
    xrtp_StreamLock wrapped;

public:
    StreamLockStream(xrtp_StreamLock wrapped)
        : wrapped(wrapped)
    {}

    // don't allow copying or moving. the parent StreamLock can be moved
    StreamLockStream(const StreamLockStream&) = delete;
    StreamLockStream& operator=(const StreamLockStream&) = delete;
    StreamLockStream(StreamLockStream&&) = delete;
    StreamLockStream& operator=(StreamLockStream&&) = delete;

    std::size_t read_some(const asio::mutable_buffer& buffer, asio::error_code& ec) override {
        std::uint64_t size_read{};
        xrtp_Result result = xrtp_stream_lock_read_some(wrapped, buffer.data(), buffer.size(), &size_read);
        check_for_transport_exception(result);
        ec = asio::error_code(result, asio::system_category());
        return size_read;
    }

    std::size_t read_some(const asio::mutable_buffer& buffer) override {
        asio::error_code ec;
        std::size_t size_read = read_some(buffer, ec);
        if (ec) {
            throw asio::system_error(ec);
        }
        return size_read;
    }

    std::size_t write_some(const asio::const_buffer& buffer, asio::error_code& ec) override {
        std::uint64_t size_written{};
        xrtp_Result result = xrtp_stream_lock_write_some(wrapped, buffer.data(), buffer.size(), &size_written);
        check_for_transport_exception(result);
        ec = asio::error_code(result, asio::system_category());
        return size_written;
    }

    std::size_t write_some(const asio::const_buffer& buffer) override {
        asio::error_code ec;
        std::size_t size_written = write_some(buffer, ec);
        if (ec) {
            throw asio::system_error(ec);
        }
        return size_written;
    }

    std::size_t available() override { throw InvalidOperationException(); }
    std::size_t available(asio::error_code& ec) override { throw InvalidOperationException(); }
    void non_blocking(bool mode) override { throw InvalidOperationException(); }
    bool non_blocking() const override { throw InvalidOperationException(); }
    bool is_open() const override { throw InvalidOperationException(); }
    void close() override { throw InvalidOperationException(); }
    void close(asio::error_code& ec) override { throw InvalidOperationException(); }

    friend struct StreamLock;
};

struct [[nodiscard]] StreamLock {
private:
    xrtp_StreamLock wrapped;

public:
    StreamLockStream stream;

    StreamLock(xrtp_StreamLock wrapped)
        : wrapped(wrapped), stream(wrapped)
    {}

    // delete copy constructors
    StreamLock(const StreamLock&) = delete;
    StreamLock& operator=(const StreamLock&) = delete;

    // move constructors
    StreamLock(StreamLock&& other)
        : wrapped(other.wrapped), stream(other.wrapped)
    {
        other.wrapped = nullptr;
        other.stream.wrapped = nullptr;
    };

    StreamLock& operator=(StreamLock&& other) {
        if (this != &other) {
            if (wrapped) {
                CHK_XRTP(xrtp_stream_lock_release(wrapped));
            }
            wrapped = other.wrapped;
            stream.wrapped = other.wrapped;
            other.wrapped = nullptr;
            other.stream.wrapped = nullptr;
        }

        return *this;
    };

    ~StreamLock() {
        if (wrapped) {
            CHK_XRTP(xrtp_stream_lock_release(wrapped));
        }
    }
};

// RAII class to make sure that the worker gets stopped when running asynchronously
class [[nodiscard]] TransportWorker {
private:
    bool is_valid;
    xrtp_Transport transport_handle;

public:
    TransportWorker(xrtp_Transport transport_handle)
        : is_valid(true), transport_handle(transport_handle) {
        CHK_XRTP(xrtp_run(transport_handle, false));
    }

    // delete copy constructors
    TransportWorker(const TransportWorker&) = delete;
    TransportWorker& operator=(const TransportWorker&) = delete;

    TransportWorker(TransportWorker&& other) {
        is_valid = other.is_valid;
        transport_handle = other.transport_handle;
        other.is_valid = false;
        other.transport_handle = nullptr;
    }

    TransportWorker& operator=(TransportWorker&& other) {
        if (this != &other) {
            if (is_valid) {
                CHK_XRTP(xrtp_stop(transport_handle));
            }
            is_valid = other.is_valid;
            transport_handle = other.transport_handle;
            other.is_valid = false;
            other.transport_handle = nullptr;
        }

        return *this;
    }

    ~TransportWorker() {
        CHK_XRTP(xrtp_stop(transport_handle));
    }
};

class Transport {
private:
    bool owns_transport;
    xrtp_Transport wrapped;

    // pointer-stable storage of passed in std::functions so that the handler
    // we pass to the C API can reference whatever might be captured by the function
    std::unordered_map<xrtp_MessageHeader, std::unique_ptr<std::function<void(MessageLockIn)>>> handlers;

public:
    explicit Transport(std::unique_ptr<SyncDuplexStream> stream) : owns_transport(true) {
        xrtp_create_transport(stream.release(), &wrapped);
    }

    explicit Transport(xrtp_Transport wrapped)
         : wrapped(wrapped), owns_transport(false)
    {}

    // don't allow copying or moving
    Transport(const Transport&) = delete;
    Transport& operator=(const Transport&) = delete;
    Transport(Transport&&) = delete;
    Transport& operator=(Transport&&) = delete;

    MessageLockOut start_message(xrtp_MessageHeader header) {
        xrtp_MessageLockOut raw_msg_out{};
        CHK_XRTP(xrtp_start_message(wrapped, header, &raw_msg_out));
        return MessageLockOut(raw_msg_out);
    }

    MessageLockIn await_message(xrtp_MessageHeader header) {
        xrtp_MessageLockIn raw_msg_in{};
        CHK_XRTP(xrtp_await_message(wrapped, header, &raw_msg_in));
        return MessageLockIn(raw_msg_in);
    }

    void handle_message(xrtp_MessageHeader header) {
        CHK_XRTP(xrtp_handle_message(wrapped, header));
    }

    StreamLock lock_stream() {
        xrtp_StreamLock raw_lock{};
        CHK_XRTP(xrtp_lock_stream(wrapped, &raw_lock));
        return StreamLock(raw_lock);
    }

    void register_handler(xrtp_MessageHeader header, std::function<void(MessageLockIn)> handler) {
        // This is a bit of a mess because we need to make sure that the raw handler, which cannot
        // use lambda captures because it is a function pointer, can call this std::function so we'll
        // store the std::function somewhere stable and use its address as the handler_data parameter.
        handlers[header] = std::make_unique<std::function<void(MessageLockIn)>>(std::move(handler));
        void* stored_handler_data = handlers[header].get();

        static void (*raw_handler)(xrtp_MessageLockIn, void*) = [](xrtp_MessageLockIn msg_in_raw, void* handler_data) {
            auto handler_function = reinterpret_cast<std::function<void(MessageLockIn)>*>(handler_data);
            (*handler_function)(MessageLockIn(msg_in_raw));
            // ~MessageLockIn() called xrtp_msg_in_release
        };

        CHK_XRTP(xrtp_register_handler(wrapped, header, raw_handler, stored_handler_data));
    }

    void unregister_handler(xrtp_MessageHeader header) {
        CHK_XRTP(xrtp_unregister_handler(wrapped, header));
        handlers.erase(header);
    }

    void clear_handlers() {
        CHK_XRTP(xrtp_clear_handlers(wrapped));
        handlers.clear();
    }

    void run_synchronously() {
        CHK_XRTP(xrtp_run(wrapped, true));
    }

    TransportWorker run_asynchronously() {
        return TransportWorker(wrapped);
    }

    void run_once() {
        CHK_XRTP(xrtp_run_once(wrapped));
    }

    void stop() {
        CHK_XRTP(xrtp_stop(wrapped));
    }

    bool is_open() const {
        bool result{};
        CHK_XRTP(xrtp_is_open(wrapped, &result));
        return result;
    }

    void close() {
        CHK_XRTP(xrtp_close(wrapped));
    }

    xrtp_Transport get_handle() const {
        return wrapped;
    }

    ~Transport() {
        if (owns_transport) {
            CHK_XRTP(xrtp_release_transport(wrapped));
        }
    }
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_H