#include "module_loader.h"

#include <spdlog/spdlog.h>

// dll loading
#if defined(__linux__)
#include <dlfcn.h>
#elif defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#else
#error Windows, Linux, or Android required
#endif

#include <filesystem>
#include <optional>
#include <cassert>
#include <cstring>
#include <stdexcept>

namespace fs = std::filesystem;

namespace xrtransport {

typedef void (*PFN_module_get_extensions)(uint32_t* capacity_out, LayerExtension* extensions_out);

static std::optional<fs::path> get_runtime_folder() {
#if defined(_WIN32)
    HMODULE handle = nullptr;
    if (GetModuleHandleEx(
        GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS |
        GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
        (LPCTSTR)get_runtime_folder,
        &handle
    )) {
        char path[MAX_PATH];
        if (GetModuleFileNameA(handle, path, MAX_PATH)) {
            return fs::path(std::string(path)).parent_path();
        }
    }
    return std::nullopt;
#elif defined(__linux__)
    Dl_info info;
    if (dladdr(get_runtime_folder, &info)) {
        return fs::path(std::string(info.dli_fname)).parent_path();
    }
    return std::nullopt;
#endif
}

static inline bool is_filename_module(std::string_view filename) {
#if defined(_WIN32)
    constexpr std::string_view module_prefix = "module_";
    constexpr std::string_view module_ext = ".dll";
#elif defined(__linux__)
    constexpr std::string_view module_prefix = "libmodule_";
    constexpr std::string_view module_ext = ".so";
#endif
    bool prefix_matches = filename.size() >= module_prefix.size()
        && std::equal(module_prefix.begin(), module_prefix.end(), filename.begin());
    bool ext_matches = filename.size() >= module_ext.size()
        && std::equal(module_ext.rbegin(), module_ext.rend(), filename.rbegin());
    
    return prefix_matches && ext_matches;
}

static PFN_module_get_extensions load_module(fs::path module_path) {
    // Note: this function intentionally doesn't provide any way to unload the modules.
    // they should be loaded for the duration of the program.

    spdlog::info("Loading module at {}", module_path.string());

#if defined(_WIN32)
    #error TODO: implement
#elif defined(__linux__)
    void* module = dlopen(module_path.c_str(), RTLD_LAZY);
    auto result = reinterpret_cast<PFN_module_get_extensions>(dlsym(module, "module_get_extensions"));
    return result;
#endif
}

static bool modules_loaded = false;

std::vector<LayerExtension> load_modules() {
    if (modules_loaded) {
        throw std::runtime_error("Attempted to load modules twice");
    }

    auto opt_runtime_folder = get_runtime_folder();
    if (!opt_runtime_folder.has_value()) {
        spdlog::warn("Unable to detect runtime folder, not loading any modules");
        return {};
    }

    fs::path runtime_folder = opt_runtime_folder.value();
    assert(fs::exists(runtime_folder) && fs::is_directory(runtime_folder));

    std::vector<LayerExtension> result;

    for (const auto& entry : fs::directory_iterator(runtime_folder)) {
        if (!entry.is_regular_file()) continue;
        if (!is_filename_module(entry.path().filename().string())) continue;

        auto pfn_module_get_extensions = load_module(entry.path());

        uint32_t num_extensions{};
        pfn_module_get_extensions(&num_extensions, nullptr);
        auto old_size = result.size();
        result.resize(old_size + num_extensions);
        pfn_module_get_extensions(&num_extensions, result.data() + old_size);
    }

    modules_loaded = true;
    return result;
}

static void apply_extension(FunctionTable& function_table, const LayerExtension& extension) {
    for (uint32_t i = 0; i < extension.num_functions; i++) {
        const auto& function = extension.functions[i];
        function_table.add_function_layer(function.function_name, function.new_function, *function.old_function);
    }
}

void apply_modules(FunctionTable& function_table, const XrInstanceCreateInfo& create_info, const std::vector<LayerExtension>& layer_extensions) {
    for (uint32_t i = 0; i < create_info.enabledExtensionCount; i++) {
        const char* extension_name = create_info.enabledExtensionNames[i];
        // find all module extensions with this name and apply them in order
        for (const auto& layer_extension : layer_extensions) {
            if (strncmp(layer_extension.extension_name, extension_name, XR_MAX_EXTENSION_NAME_SIZE) != 0)
                continue;
            apply_extension(function_table, layer_extension);
        }
    }
}

} // namespace xrtransport