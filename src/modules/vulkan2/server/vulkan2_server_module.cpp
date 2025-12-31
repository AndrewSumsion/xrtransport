#include "xrtransport/server/module_interface.h"

#include "xrtransport/transport/transport.h"

#include <vulkan/vulkan.h>
#define XR_USE_GRAPHICS_API_VULKAN
#include <openxr/openxr_platform.h>
#include <openxr/openxr.h>

#include <spdlog/spdlog.h>

#include <string>
#include <memory>

using namespace xrtransport;

namespace {

std::unique_ptr<Transport> transport;
const FunctionLoader* function_loader;
XrInstance saved_instance;

} // namespace

bool on_init(
    xrtp_Transport _transport,
    const FunctionLoader* _function_loader,
    uint32_t num_extensions,
    const XrExtensionProperties* extensions)
{
    bool vulkan2_found = false;
    for (uint32_t i = 0; i < num_extensions; i++) {
        const auto& extension = extensions[i];
        if (extension.extensionName == std::string(XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME)) {
            vulkan2_found = true;
        }
    }

    if (!vulkan2_found) {
        return false; // don't enable if runtime doesn't support XR_KHR_vulkan_enable2
    }

    transport = std::make_unique<Transport>(_transport);
    function_loader = _function_loader;

    return true;
}

void get_required_extensions(
    uint32_t* num_extensions_out,
    const char** extensions_out)
{
    *num_extensions_out = 1;
    if (extensions_out) {
        extensions_out[0] = XR_KHR_VULKAN_ENABLE2_EXTENSION_NAME;
    }
}

void on_instance(
    xrtp_Transport transport,
    const FunctionLoader* function_loader,
    XrInstance instance)
{

}

void on_shutdown() {
    // no-op
}