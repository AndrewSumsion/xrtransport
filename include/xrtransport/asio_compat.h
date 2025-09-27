#ifndef XRTRANSPORT_ASIO_COMPAT_H
#define XRTRANSPORT_ASIO_COMPAT_H

#define ASIO_STANDALONE
#include "asio/buffer.hpp"
#include "asio/error_code.hpp"

#include <cstddef>

namespace xrtransport {

// Base abstract class for non-blocking stream operations
class NonBlockingStream {
public:
    virtual ~NonBlockingStream() = default;

    // Set or get blocking mode
    virtual void blocking_mode(bool mode) = 0;
    virtual bool blocking_mode() const = 0;
};

// Abstract class for read operations
class ReadStream : virtual public NonBlockingStream {
public:
    virtual ~ReadStream() = default;

    // Read some data from the stream
    virtual std::size_t read_some(const asio::mutable_buffer& buffers) = 0;
    virtual std::size_t read_some(const asio::mutable_buffer& buffers, asio::error_code& ec) = 0;

    // Template convenience methods for ASIO compatibility
    template<typename MutableBufferSequence>
    std::size_t read_some(const MutableBufferSequence& buffers) {
        return read_some(asio::mutable_buffer(buffers));
    }

    template<typename MutableBufferSequence>
    std::size_t read_some(const MutableBufferSequence& buffers, asio::error_code& ec) {
        return read_some(asio::mutable_buffer(buffers), ec);
    }
};

// Abstract class for write operations
class WriteStream : virtual public NonBlockingStream {
public:
    virtual ~WriteStream() = default;

    // Write some data to the stream
    virtual std::size_t write_some(const asio::const_buffer& buffers) = 0;
    virtual std::size_t write_some(const asio::const_buffer& buffers, asio::error_code& ec) = 0;

    // Template convenience methods for ASIO compatibility
    template<typename ConstBufferSequence>
    std::size_t write_some(const ConstBufferSequence& buffers) {
        return write_some(asio::const_buffer(buffers));
    }

    template<typename ConstBufferSequence>
    std::size_t write_some(const ConstBufferSequence& buffers, asio::error_code& ec) {
        return write_some(asio::const_buffer(buffers), ec);
    }
};

// Abstract class for read/write operations
class ReadWriteStream : public ReadStream, public WriteStream {
public:
    virtual ~ReadWriteStream() = default;
};

} // namespace xrtransport

#endif // XRTRANSPORT_ASIO_COMPAT_H