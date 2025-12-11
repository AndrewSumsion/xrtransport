<%namespace name="utils" file="utils.mako"/>\
#include "exports.h"
#include "runtime.h"

#include "openxr/openxr.h"

#include <spdlog/spdlog.h>
#include <stdexcept>

namespace xrtransport {

namespace exports {

<%utils:for_grouped_functions args="function">\
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} {
    try {
        return runtime::${function.name}(${', '.join(param.name for param in function.params)});
    }
    catch (const std::exception& e) {
        spdlog::error("Exception in ${function.name}: {}", e.what());
        return XR_ERROR_RUNTIME_FAILURE;
    }
}

</%utils:for_grouped_functions>

} // namespace exports

} // namespace xrtransport