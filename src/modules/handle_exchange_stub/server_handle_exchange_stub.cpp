#include "xrtransport/server/module_interface.h"
#include "xrtransport/handle_exchange.h"

#include <spdlog/spdlog.h>

bool on_init(
    xrtp_Transport transport,
    xrtransport::FunctionLoader* function_loader,
    std::uint32_t num_extensions,
    const XrExtensionProperties* extensions
) {
    return true;
}

void get_required_extensions(
    std::uint32_t* num_extensions_out,
    const char** extensions_out
) {
    *num_extensions_out = 0;
}

void on_instance(
    xrtp_Transport transport,
    xrtransport::FunctionLoader* function_loader,
    XrInstance instance
) {

}

void on_shutdown() {

}

xrtp_Handle xrtp_read_handle() {
    spdlog::error("You are using a stub handle exchange!");
    return 0;
}

void xrtp_write_handle(xrtp_Handle handle) {
    spdlog::error("You are using a stub handle exchange!");
}