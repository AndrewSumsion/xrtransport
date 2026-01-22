// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_SERIALIZATION_ERROR_H
#define XRTRANSPORT_SERIALIZATION_ERROR_H

#include <string>
#include <stdexcept>

namespace xrtransport {

class UnknownXrStructureTypeException : public std::runtime_error {
public:
    explicit UnknownXrStructureTypeException(const std::string& message) : std::runtime_error(message) {}
};

} // namespace xrtransport

#endif // XRTRANSPORT_SERIALIZATION_ERROR_H