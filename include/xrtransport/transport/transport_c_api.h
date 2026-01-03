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
typedef struct xrtp_MessageLock_T xrtp_MessageLock_T;

typedef xrtp_Transport_T* xrtp_Transport;
typedef xrtp_MessageLockOut_T* xrtp_MessageLockOut;
typedef xrtp_MessageLockIn_T* xrtp_MessageLockIn;
typedef xrtp_MessageLock_T* xrtp_MessageLock;

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
 * Must be called with a class that implements SyncDuplexStream from asio_compat.h
 * This function takes memory ownership of the SyncDuplexStream.
 * 
 * The transport will start reading the stream immediately.
 */
XRTP_API xrtp_Result xrtp_create_transport(
    void* sync_duplex_stream,
    xrtp_Transport* transport_out);

/**
 * Destruct the Transport instance
 * 
 * This will stop the transport's producer and consumer threads, and
 * interrupt any calls awaiting a message
 */
XRTP_API xrtp_Result xrtp_release_transport(
    xrtp_Transport transport);

/**
 * Acquires the Transport's message lock, and returns a buffer that can be
 * written to.
 * 
 * msg_out *must* be released.
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
 * Acquires Transport's message lock and handles messages synchronously
 * until the requested header is detected.
 * 
 * msg_in can be read from and *must* be released.
 */
XRTP_API xrtp_Result xrtp_await_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header,
    xrtp_MessageLockIn* msg_in);

/**
 * Similar to xrtp_await_message, but handles the requested message using
 * a registered handler instead of exposing a MessageLockIn.
 */
XRTP_API xrtp_Result xrtp_handle_message(
    xrtp_Transport transport,
    xrtp_MessageHeader header);

/**
 * Acquires the Transport's message lock without any input/output buffers
 * 
 * This is useful for e.g. maintaining the lock while repeatedly locking and
 * unlocking in a loop.
 * 
 * The lock *must* be released.
 */
XRTP_API xrtp_Result xrtp_acquire_message_lock(
    xrtp_Transport transport,
    xrtp_MessageLock* lock);

/**
 * Allows the handlers to run and waits for the transport to close
 */
XRTP_API xrtp_Result xrtp_join_transport(
    xrtp_Transport transport);

/**
 * Returns whether the Transport is still running.
 */
XRTP_API xrtp_Result xrtp_is_open(
    xrtp_Transport transport,
    bool* is_open);

/**
 * Stops the Transport and closes the underlying stream.
 */
XRTP_API xrtp_Result xrtp_close(
    xrtp_Transport transport);

/**
 * Reads some of the MessageLockIn's buffered data
 */
XRTP_API xrtp_Result xrtp_msg_in_read_some(
    xrtp_MessageLockIn msg_in,
    void* dst,
    uint64_t size,
    uint64_t* size_read);

/**
 * Releases the message lock and destructs the MessageLockIn
 */
XRTP_API xrtp_Result xrtp_msg_in_release(
    xrtp_MessageLockIn msg_in);

/**
 * Writes to the MessageLockOut's outbound buffer
 */
XRTP_API xrtp_Result xrtp_msg_out_write_some(
    xrtp_MessageLockOut msg_out,
    const void* src,
    uint64_t size,
    uint64_t* size_written);

/**
 * Writes the MessageLockOut's outbound buffer to the stream
 */
XRTP_API xrtp_Result xrtp_msg_out_flush(
    xrtp_MessageLockOut msg_out);

/**
 * Flushes the MessageLockOut's buffer, releases the message lock,
 * and destructs the MessageLockOut
 */
XRTP_API xrtp_Result xrtp_msg_out_release(
    xrtp_MessageLockOut msg_out);

/**
 * Releases the message lock acquired by xrtp_acquire_message_lock
 */
XRTP_API xrtp_Result xrtp_release_message_lock(
    xrtp_MessageLock lock);

#ifdef __cplusplus
} // extern "C"
#endif

#endif // XRTRANSPORT_TRANSPORT_C_API_H