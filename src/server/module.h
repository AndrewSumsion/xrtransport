#ifndef XRTRANSPORT_MODULE_H
#define XRTRANSPORT_MODULE_H

#ifdef _WIN32
    #include <windows.h>
    #define MODULE_HANDLE HMODULE
    #define MODULE_LOAD(path) LoadLibraryA(path)
    #define MODULE_SYM(handle, name) GetProcAddress(handle, name)
    #define MODULE_UNLOAD(handle) FreeLibrary(handle)
    #define MODULE_EXT ".dll"
#else
    #include <dlfcn.h>
    #define MODULE_HANDLE void*
    #define MODULE_LOAD(path) dlopen(path, RTLD_LAZY)
    #define MODULE_SYM(handle, name) dlsym(handle, name)
    #define MODULE_UNLOAD(handle) dlclose(handle)
    #define MODULE_EXT ".so"
#endif

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "openxr/openxr.h"

namespace xrtransport {

// Module function signatures
typedef void (*PFN_module_on_init)(xrtp_Transport transport, FunctionLoader* function_loader);
typedef void (*PFN_module_get_required_extensions)(std::uint32_t* num_extensions_out, const char** extensions_out);
typedef void (*PFN_module_on_instance)(xrtp_Transport transport, FunctionLoader* function_loader, XrInstance instance);
typedef void (*PFN_module_on_shutdown)();

class Module {
private:
    MODULE_HANDLE handle;
    PFN_module_on_init pfn_on_init;
    PFN_module_get_required_extensions pfn_get_required_extensions;
    PFN_module_on_instance pfn_on_instance;
    PFN_module_on_shutdown pfn_on_shutdown;

public:
    explicit Module(std::string module_path) {
        handle = MODULE_LOAD(module_path.c_str());
        pfn_on_init = reinterpret_cast<PFN_module_on_init>(MODULE_SYM(handle, "on_init"));
        pfn_get_required_extensions = reinterpret_cast<PFN_module_get_required_extensions>(MODULE_SYM(handle, "get_required_extensions"));
        pfn_on_instance = reinterpret_cast<PFN_module_on_instance>(MODULE_SYM(handle, "on_instance"));
        pfn_on_shutdown = reinterpret_cast<PFN_module_on_shutdown>(MODULE_SYM(handle, "on_shutdown"));
    }

    ~Module() {
        // handle may be null if module was moved
        if (handle) {
            on_shutdown();
            MODULE_UNLOAD(handle);
        }
    }

    Module(const Module&) = delete;
    Module& operator=(const Module&) = delete;

    Module(Module&& other) noexcept {
        handle = other.handle;
        pfn_on_init = other.pfn_on_init;
        pfn_on_instance = other.pfn_on_instance;
        pfn_on_shutdown = other.pfn_on_shutdown;
        other.handle = nullptr;
        other.pfn_on_init = nullptr;
        other.pfn_on_instance = nullptr;
        other.pfn_on_shutdown = nullptr;
    }

    Module& operator=(Module&& other) noexcept {
        if (handle) {
            MODULE_UNLOAD(handle);
        }

        handle = other.handle;
        pfn_on_init = other.pfn_on_init;
        pfn_on_instance = other.pfn_on_instance;
        pfn_on_shutdown = other.pfn_on_shutdown;
        other.handle = nullptr;
        other.pfn_on_init = nullptr;
        other.pfn_on_instance = nullptr;
        other.pfn_on_shutdown = nullptr;

        return *this;
    }

    inline void on_init(xrtp_Transport transport, FunctionLoader* function_loader) { return pfn_on_init(transport, function_loader); }
    inline void get_required_extensions(std::uint32_t* num_extensions_out, const char** extensions_out) { return pfn_get_required_extensions(num_extensions_out, extensions_out); }
    inline void on_instance(xrtp_Transport transport, FunctionLoader* function_loader, XrInstance instance) { return pfn_on_instance(transport, function_loader, instance); }
    inline void on_shutdown() { return pfn_on_shutdown(); }
};

} // namespace xrtransport

#endif // XRTRANSPORT_MODULE_H