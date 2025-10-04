<%namespace name="utils" file="utils.mako"/>

#include "dispatch.h"
#include "runtime.h"

#include "openxr/openxr.h"

#include <stdexcept>

namespace xrtransport {

<%utils:for_grouped_functions args="function">
XRAPI_ATTR XrResult XRAPI_CALL ${function.signature()} {
    try {
        return runtime.${function.call()};
    }
    catch (const std::exception& e) {
        return XR_ERROR_RUNTIME_FAILURE;
    }
}
</%utils:for_grouped_functions>

}