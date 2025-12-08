#ifndef XRTRANSPORT_ENABLED_EXTENSIONS_H
#define XRTRANSPORT_ENABLED_EXTENSIONS_H

#include <unordered_map>
#include <string>
#include <cstdint>

namespace xrtransport {

// Map of extension name to extension version
static const std::unordered_map<std::string, std::uint32_t> enabled_extensions = {
% for ext_name, extension in spec.extensions.items():
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
    {"${ext_name}", ${ext_name}_SPEC_VERSION},
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endfor
};

} // namespace xrtransport

#endif // XRTRANSPORT_ENABLED_EXTENSIONS_H