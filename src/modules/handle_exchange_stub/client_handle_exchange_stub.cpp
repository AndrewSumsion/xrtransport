#include "xrtransport/client/module_interface.h"
#include "xrtransport/handle_exchange.h"

#include <spdlog/spdlog.h>

static ModuleInfo module_info = {
    .num_extensions = 0,
    .extensions = nullptr,
    .num_functions = 0,
    .functions = nullptr,
    .instance_callback = nullptr
};

void module_get_info(
    xrtp_Transport transport,
    const ModuleInfo** info_out
) {
    *info_out = &module_info;
}

xrtp_Handle xrtp_read_handle() {
    spdlog::error("You are using a stub handle exchange!");
    return 0;
}

void xrtp_write_handle(xrtp_Handle handle) {
    spdlog::error("You are using a stub handle exchange!");
}