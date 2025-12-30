#include "server.h"

#include "module.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/asio_compat.h"
#include "xrtransport/time.h"

#include "openxr/openxr.h"

#include <cstdint>
#include <cstring>

using std::uint32_t;
using std::uint64_t;

namespace xrtransport {

Server::Server(std::unique_ptr<SyncDuplexStream> stream, asio::io_context& stream_io_context, std::vector<std::string> module_paths) :
    transport(std::move(stream)),
    function_loader(xrGetInstanceProcAddr),
    function_dispatch(transport, function_loader, [this](MessageLockIn msg_in){instance_handler(std::move(msg_in));}),
    transport_io_context(stream_io_context)
{
    for (auto& module_path : module_paths) {
        modules.push_back(Module(module_path));
    }
}

bool Server::do_handshake() {
    auto lock = transport.lock_stream();

    uint32_t client_magic{};
    asio::read(lock.stream, asio::buffer(&client_magic, sizeof(uint32_t)));
    uint32_t server_magic = XRTRANSPORT_MAGIC;
    // make sure magic matches
    if (server_magic != client_magic) {
        transport.close();
        return false;
    }
    asio::write(lock.stream, asio::buffer(&server_magic, sizeof(uint32_t)));
    
    // read version numbers from client
    uint64_t client_xr_api_version{};
    asio::read(lock.stream, asio::buffer(&client_xr_api_version, sizeof(uint64_t)));
    uint32_t client_xrtransport_protocol_version{};
    asio::read(lock.stream, asio::buffer(&client_xrtransport_protocol_version, sizeof(uint32_t)));

    // write server's version numbers
    uint64_t server_xr_api_version = XR_CURRENT_API_VERSION;
    asio::write(lock.stream, asio::buffer(&server_xr_api_version, sizeof(uint64_t)));
    uint32_t server_xrtransport_protocol_version = XRTRANSPORT_PROTOCOL_VERSION;
    asio::write(lock.stream, asio::buffer(&server_xrtransport_protocol_version, sizeof(uint32_t)));

    uint32_t client_ok{};
    asio::read(lock.stream, asio::buffer(&client_ok, sizeof(uint32_t)));
    if (!client_ok) {
        transport.close();
        return false;
    }

    // for now, only allow exact match
    uint32_t server_ok =
        client_xr_api_version == server_xr_api_version &&
        client_xrtransport_protocol_version == server_xrtransport_protocol_version;
    asio::write(lock.stream, asio::buffer(&server_ok, sizeof(uint32_t)));
    if (!server_ok) {
        transport.close();
        return false;
    }

    return true;
}

void Server::run() {
    transport.register_handler(XRTP_MSG_FUNCTION_CALL, [this](MessageLockIn msg_in){
        uint32_t function_id{};
        asio::read(msg_in.stream, asio::buffer(&function_id, sizeof(uint32_t)));
        function_dispatch.handle_function(function_id, std::move(msg_in));
    });

    transport.register_handler(XRTP_MSG_SYNCHRONIZATION_REQUEST, [this](MessageLockIn msg_in) {
        // load timer functions
#ifdef _WIN32
        function_loader.ensure_function_loaded(
            "xrConvertWin32PerformanceCounterToTimeKHR",
            reinterpret_cast<PFN_xrVoidFunction*>(&from_platform_time));
        function_loader.ensure_function_loaded(
            "xrConvertTimeToWin32PerformanceCounterKHR",
            reinterpret_cast<PFN_xrVoidFunction*>(&to_platform_time));
#else
        function_loader.ensure_function_loaded(
            "xrConvertTimespecTimeToTimeKHR",
            reinterpret_cast<PFN_xrVoidFunction*>(&from_platform_time));
        function_loader.ensure_function_loaded(
            "xrConvertTimeToTimespecTimeKHR",
            reinterpret_cast<PFN_xrVoidFunction*>(&to_platform_time));
#endif

        // read incoming time
        XrTime client_time{};
        asio::read(msg_in.stream, asio::buffer(&client_time, sizeof(XrTime)));

        // get server time
        XRTRANSPORT_PLATFORM_TIME server_platform_time{};
        get_platform_time(&server_platform_time);
        XrTime server_time{};
        from_platform_time(saved_instance, &server_platform_time, &server_time);

        auto msg_out = transport.start_message(XRTP_MSG_SYNCHRONIZATION_RESPONSE);
        asio::write(msg_out.buffer, asio::buffer(&server_time, sizeof(XrTime)));
        msg_out.flush();
    });

    // gather supported extensions so modules can decide whether to enable
    function_loader.ensure_function_loaded("xrEnumerateInstanceExtensionProperties", reinterpret_cast<PFN_xrVoidFunction*>(&function_loader.pfn_xrEnumerateInstanceExtensionProperties));
    uint32_t num_extensions{};
    function_loader.pfn_xrEnumerateInstanceExtensionProperties(nullptr, 0, &num_extensions, nullptr);
    std::vector<XrExtensionProperties> extensions(num_extensions, {XR_TYPE_EXTENSION_PROPERTIES});
    function_loader.pfn_xrEnumerateInstanceExtensionProperties(nullptr, num_extensions, &num_extensions, extensions.data());

    // initialize all modules (which may add handlers)
    std::vector<Module> enabled_modules;
    for (auto& module : modules) {
        if (module.on_init(transport.get_handle(), &function_loader, num_extensions, extensions.data())) {
            // move module into new enabled vector
            enabled_modules.emplace_back(std::move(module));
        }
    }

    // update set of enabled extensions
    modules = std::move(enabled_modules);

    // run transport worker loop synchronously
    transport.run(true);

    // Once handler loop terminates, close the connection
    transport.close();
}

void Server::instance_handler(MessageLockIn msg_in) {
    function_loader.ensure_function_loaded("xrCreateInstance", reinterpret_cast<PFN_xrVoidFunction*>(&function_loader.pfn_xrCreateInstance));
    
    // Read in args sent by client
    DeserializeContext d_ctx(msg_in.stream);
    XrInstanceCreateInfo* createInfo{};
    deserialize_ptr(&createInfo, d_ctx);
    XrInstance* instance{};
    deserialize_ptr(&instance, d_ctx);

    // Put existing extensions into vector
    uint32_t old_enabled_extension_count = createInfo->enabledExtensionCount;
    const char* const* old_enabled_extension_names = createInfo->enabledExtensionNames;
    std::vector<const char*> enabled_extensions(old_enabled_extension_names, old_enabled_extension_names + old_enabled_extension_count);

    // Collect requested extensions from modules
    for (auto& module : modules) {
        // Get count to resize vector
        uint32_t num_extensions{};
        module.get_required_extensions(&num_extensions, nullptr);

        // Get pointer to end of vector and resize
        auto old_size = enabled_extensions.size();
        enabled_extensions.resize(old_size + num_extensions);

        // Fill in new slots
        module.get_required_extensions(&num_extensions, enabled_extensions.data() + old_size);
    }

    // Request timer extension
#ifdef _WIN32
    enabled_extensions.push_back("XR_KHR_win32_convert_performance_counter_time");
#else
    enabled_extensions.push_back("XR_KHR_convert_timespec_time");
#endif

    // Update createInfo
    createInfo->enabledExtensionCount = enabled_extensions.size();
    createInfo->enabledExtensionNames = enabled_extensions.data();

    // Call xrCreateInstance
    XrResult _result = function_loader.pfn_xrCreateInstance(createInfo, instance);

    // Send response to client
    auto msg_out = transport.start_message(XRTP_MSG_FUNCTION_RETURN);
    SerializeContext s_ctx(msg_out.buffer);
    serialize(&_result, s_ctx);
    serialize_ptr(instance, 1, s_ctx);
    msg_out.flush();

    if (XR_SUCCEEDED(_result)) {
        saved_instance = *instance;
        function_loader.loader_instance = saved_instance;

        // Notify modules that XrInstance was created
        for (auto& module : modules) {
            module.on_instance(transport.get_handle(), &function_loader, *instance);
        }
    }

    // Restore createInfo to make sure cleanup works as expected
    createInfo->enabledExtensionCount = old_enabled_extension_count;
    createInfo->enabledExtensionNames = old_enabled_extension_names;

    // Cleanup from deserializer
    cleanup_ptr(createInfo, 1);
    cleanup_ptr(instance, 1);
}

}