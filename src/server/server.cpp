#include "server.h"

#include "module.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/asio_compat.h"

#include "openxr/openxr.h"

#include <cstdint>
#include <cstring>

using std::uint32_t;
using std::uint64_t;

namespace xrtransport {

Server::Server(std::unique_ptr<DuplexStream> stream, asio::io_context& stream_io_context, std::vector<std::string> module_paths) :
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
    transport.register_handler(FUNCTION_CALL, [this](Transport& transport, MessageLockIn msg_in){
        uint32_t function_id{};
        asio::read(msg_in.stream, asio::buffer(&function_id, sizeof(uint32_t)));
        function_dispatch.handle_function(function_id, std::move(msg_in));
    });

    // initialize all modules (which may add handlers)
    for (auto& module : modules) {
        module.on_init(&transport, &function_loader);
    }

    // queue up first iteration of worker loop
    transport.start_worker();

    // run worker loop synchronously
    transport_io_context.run();

    // Once handler loop terminates or io_context is stopped, close the connection
    transport.close();
}

void Server::instance_handler(MessageLockIn msg_in) {
    function_loader.ensure_function_loaded("xrCreateInstance", reinterpret_cast<PFN_xrVoidFunction*>(&function_loader.pfn_xrCreateInstance));
    
    // Read in args sent by client
    XrInstanceCreateInfo* createInfo{};
    deserialize_ptr(&createInfo, msg_in.stream, false);
    XrInstance* instance{};
    deserialize_ptr(&instance, msg_in.stream, false);

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
        const char** end = enabled_extensions.data() + enabled_extensions.size();
        enabled_extensions.resize(enabled_extensions.size() + num_extensions);

        // Fill in new slots
        module.get_required_extensions(&num_extensions, end);
    }

    // Update createInfo
    createInfo->enabledExtensionCount = enabled_extensions.size();
    createInfo->enabledExtensionNames = enabled_extensions.data();

    // Call xrCreateInstance
    XrResult _result = function_loader.pfn_xrCreateInstance(createInfo, instance);

    // Send response to client
    auto msg_out = transport.start_message(FUNCTION_RETURN);
    serialize(&_result, msg_out.buffer);
    serialize_ptr(instance, 1, msg_out.buffer);
    msg_out.flush();

    if (XR_SUCCEEDED(_result)) {
        function_loader.loader_instance = *instance;

        // Notify modules that XrInstance was created
        for (auto& module : modules) {
            module.on_instance(&transport, &function_loader, *instance);
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