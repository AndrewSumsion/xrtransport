#ifndef XRTRANSPORT_EXTENSION_FUNCTIONS_H
#define XRTRANSPORT_EXTENSION_FUNCTIONS_H

#include <unordered_map>
#include <string>
#include <vector>

namespace xrtransport {

static const std::unordered_map<std::string, std::vector<std::string>> extension_functions = {
% for ext_name, extension in spec.extensions.items():
% if ext_name:
#ifdef XRTRANSPORT_EXT_${ext_name}
    {"${ext_name}", {
% for function in extension.functions:
        "${function.name}",
% endfor
    }},
#endif // XRTRANSPORT_EXT_${ext_name}
% endif
% endfor
};

static const std::vector<std::string> core_functions = {
% for function in spec.extensions[None].functions:
    "${function.name}",
% endfor
};

} // namespace xrtransport

#endif // XRTRANSPORT_EXTENSION_FUNCTIONS_H