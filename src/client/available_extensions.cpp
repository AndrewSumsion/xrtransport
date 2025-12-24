#include "available_extensions.h"

#include "xrtransport/extensions/enabled_extensions.h"

#include "exports.h"

#include "openxr/openxr.h"

#include <unordered_map>
#include <string>
#include <cstdint>
#include <vector>
#include <algorithm>

using std::uint32_t;

namespace xrtransport {

static bool available_extensions_filled = false;
static std::unordered_map<std::string, uint32_t> available_extensions;

static void fill_available_extensions() {
    uint32_t extension_count{};
    // TODO: handle potential errors on these XR calls
    exports::xrEnumerateInstanceExtensionProperties(nullptr, 0, &extension_count, nullptr);
    std::vector<XrExtensionProperties> extension_properties_vector(extension_count, {XR_TYPE_EXTENSION_PROPERTIES});
    exports::xrEnumerateInstanceExtensionProperties(nullptr, extension_count, &extension_count, extension_properties_vector.data());

    for (auto& extension_properties : extension_properties_vector) {
        std::string extension_name(extension_properties.extensionName);

        // available extensions is the intersection of enabled (compiled) extensions and the extensions the server runtime reports
        if (enabled_extensions.find(extension_name) == enabled_extensions.end()) continue;

        uint32_t transport_version = enabled_extensions.at(extension_name);
        uint32_t server_version = extension_properties.extensionVersion;

        // OpenXR extensions are backwards-compatible, so choose the lowest common version
        uint32_t available_version = std::min(transport_version, server_version);

        available_extensions.emplace(extension_name, available_version);
    }

    // extensions built into the runtime
#ifdef _WIN32
    available_extensions.emplace("XR_KHR_win32_convert_performance_counter_time", 1);
#else
    available_extensions.emplace("XR_KHR_convert_timespec_time", 1);
#endif
#ifdef __ANDROID__
    available_extensions.emplace("XR_KHR_android_create_instance", 3);
#endif
    available_extensions.emplace("XR_EXT_debug_utils", 5);

    available_extensions_filled = true;
}

std::unordered_map<std::string, std::uint32_t>& get_available_extensions() {
    if (!available_extensions_filled) {
        fill_available_extensions();
    }
    return available_extensions;
}

} // namespace xrtransport