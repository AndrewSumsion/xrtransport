#ifndef XRTRANSPORT_AVAILABLE_EXTENSIONS_H
#define XRTRANSPORT_AVAILABLE_EXTENSIONS_H

#include <unordered_map>
#include <string>
#include <cstdint>

namespace xrtransport {

std::unordered_map<std::string, std::uint32_t>& get_available_extensions();

}

#endif // XRTRANSPORT_AVAILABLE_EXTENSIONS_H