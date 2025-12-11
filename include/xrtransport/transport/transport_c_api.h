#ifndef XRTRANSPORT_TRANSPORT_C_API_H
#define XRTRANSPORT_TRANSPORT_C_API_H

#include "xrtransport/api.h"

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// opaque types
typedef struct xrtp_Transport_T xrtp_Transport_T;
typedef struct xrtp_MessageLockOut_T xrtp_MessageLockOut_T;
typedef struct xrtp_MessageLockIn_T xrtp_MessageLockIn_T;
typedef struct xrtp_StreamLock_T xrtp_StreamLock_T;

typedef xrtp_Transport_T* xrtp_Transport;
typedef xrtp_MessageLockOut_T* xrtp_MessageLockOut;
typedef xrtp_MessageLockIn_T* xrtp_MessageLockIn;
typedef xrtp_StreamLock_T* xrtp_StreamLock;

// message headers
typedef uint16_t xrtp_MessageHeader;
#define XRTP_MSG_FUNCTION_CALL 1
#define XRTP_MSG_FUNCTION_RETURN 2
#define XRTP_MSG_SYNCHRONIZATION_REQUEST 3
#define XRTP_MSG_SYNCHRONIZATION_RESPONSE 4
#define XRTP_MSG_CUSTOM_BASE 100

// protocol values
#define XRTRANSPORT_PROTOCOL_VERSION 1
#define XRTRANSPORT_MAGIC 0x50545258 // "XRTP" as a little-endian uint32_t

typedef int32_t xrtp_Result;

/**
 * Must be called with a class that implements DuplexStream from asio_compat.h
 * This function takes memory ownership of the DuplexStream.
 */
XRTP_API xrtp_Result xrtp_create_transport(
    void* duplex_stream,
    xrtp_Transport* transport_out);

/**
 * Starts the worker loop of the Transport that handles incoming messages when
 * no one is awaiting a message. It is an async loop that operates by scheduling
 * itself with the duplex stream's io_context. This function returns immediately.
 */
XRTP_API xrtp_Result xrtp_start_worker(
    xrtp_Transport transport);

/**
 * Sets a flag inside the Transport to stop handling messages and stop queuing
 * work on the io_context.
 */
XRTP_API xrtp_Result xrtp_stop_worker(
    xrtp_Transport transport);

/**
 * Destruct the Transport instance
 */
XRTP_API xrtp_Result xrtp_release_transport(
    xrtp_Transport transport);

/**
 * Acquires lock on the Transport's stream, and adds the header to msg_out's
 * buffer.
 * 
 * msg_out can be written to and *must* be released.
 */
XRTP_API xrtp_Result xrtp_start_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockOut* msg_out);

/**
 * Sets the handler for the given message header.
 * 
 * The xrtp_MessageLockIn *must* be released by the handler before finishing
 */
XRTP_API xrtp_Result xrtp_register_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    void (*handler)(xrtp_MessageLockIn, void*),
    void* handler_data);

/**
 * Unsets the handler for the given message header
 */
XRTP_API xrtp_Result xrtp_unregister_handler(
    xrtp_Transport transport,
    xrtp_MessageHeader header);

/**
 * Clears all handlers in the Transport
 */
XRTP_API xrtp_Result xrtp_clear_handlers(
    xrtp_Transport transport);

/**
 * Acquires Transport's stream lock and handles messages synchronously until
 * the requested header is detected.
 * 
 * msg_in can be read from and *must* be released.
 */
XRTP_API xrtp_Result xrtp_await_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockIn* msg_in);

/**
 * Acquires Transport's stream lock and exposes raw read-write access.
 * 
 * lock can be written to and read from, and *must* be released.
 */
XRTP_API xrtp_Result xrtp_lock_stream(
    xrtp_Transport transport,
    xrtp_StreamLock* lock);

/**
 * Returns whether the underlying stream of the Transport is still open.
 */
XRTP_API xrtp_Result xrtp_is_open(
    xrtp_Transport transport,
    bool* is_open);

/**
 * Closes the Transport's underlying stream.
 */
XRTP_API xrtp_Result xrtp_close(
    xrtp_Transport transport);

/**
 * Blocking read of the underlying stream
 */
XRTP_API xrtp_Result xrtp_msg_in_read_some(
    xrtp_MessageLockIn msg_in,
    void* dst,
    uint64_t size,
    uint64_t* size_read);

/**
 * Releases the Transport's lock and destructs the MessageLockIn
 */
XRTP_API xrtp_Result xrtp_msg_in_release(
    xrtp_MessageLockIn msg_in);

/**
 * Write to the message's outbound buffer
 */
XRTP_API xrtp_Result xrtp_msg_out_write_some(
    xrtp_MessageLockOut msg_out,
    const void* src,
    uint64_t size,
    uint64_t* size_written);

/**
 * Writes the message's outbound buffer to the stream
 */
XRTP_API xrtp_Result xrtp_msg_out_flush(
    xrtp_MessageLockOut msg_out);

/**
 * Flushes the message's buffer, releases the Transport's lock,
 * and destructs the MessageLockOut
 */
XRTP_API xrtp_Result xrtp_msg_out_release(
    xrtp_MessageLockOut msg_out);

/**
 * Blocking write to the underlying stream
 */
XRTP_API xrtp_Result xrtp_stream_lock_write_some(
    xrtp_StreamLock stream_lock,
    const void* src,
    uint64_t size,
    uint64_t* size_written);

/**
 * Blocking read from the underlying stream
 */
XRTP_API xrtp_Result xrtp_stream_lock_read_some(
    xrtp_StreamLock stream_lock,
    void* src,
    uint64_t size,
    uint64_t* size_read);

/**
 * Release the Transport's lock and destruct the StreamLock
 */
XRTP_API xrtp_Result xrtp_stream_lock_release(
    xrtp_StreamLock stream_lock);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // XRTRANSPORT_TRANSPORT_C_API_H