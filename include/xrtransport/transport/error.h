// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_TRANSPORT_ERROR_H
#define XRTRANSPORT_TRANSPORT_ERROR_H

#include <string>
#include <stdexcept>

namespace xrtransport {

// Exceptions for Transport-specific errors
class TransportException : public std::runtime_error {
public:
    explicit TransportException(const std::string& message) : std::runtime_error(message) {}
};

// TODO: rethink the ASIO compatibility layer so MessageLockInStream doesn't need to implement
// all of SyncReadStream and this exception is not necessary
class InvalidOperationException : public std::runtime_error {
public:
    explicit InvalidOperationException() : std::runtime_error("operation not supported") {}
};

} // namespace xrtransport

#endif // XRTRANSPORT_TRANSPORT_ERROR_H