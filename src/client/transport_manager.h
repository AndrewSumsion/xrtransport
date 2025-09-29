#ifndef XRTRANSPORT_CLIENT_TRANSPORT_MANAGER_H
#define XRTRANSPORT_CLIENT_TRANSPORT_MANAGER_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/asio_compat.h"
#include <memory>

namespace xrtransport {

/**
 * Get the singleton Transport instance for the client.
 * Creates the connection and Transport on first call.
 * @return Reference to the Transport instance
 */
Transport& get_transport();

/**
 * Create a new TCP connection to the xrtransport server.
 * @return Unique pointer to DuplexStream wrapping the TCP connection
 */
std::unique_ptr<DuplexStream> create_connection();

/**
 * Close the current connection and stop the io_context thread.
 * This will clean up the Transport and connection resources.
 */
void close_connection();

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_TRANSPORT_MANAGER_H