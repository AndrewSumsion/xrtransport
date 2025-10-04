#ifndef XRTRANSPORT_FATAL_ERROR_H
#define XRTRANSPORT_FATAL_ERROR_H

#include <spdlog/spdlog.h>
#include <cstdlib>
#include <string>

namespace xrtransport {

// Fatal error: logs critical error and aborts the program
// Use this for unrecoverable errors like stream corruption
[[noreturn]] inline void fatal_error(const std::string& message) {
    spdlog::critical("FATAL ERROR: {}", message);
    std::abort();
}

} // namespace xrtransport

#endif // XRTRANSPORT_FATAL_ERROR_H
