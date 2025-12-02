#ifndef XRTRANSPORT_MODULE_INTERFACE_H
#define XRTRANSPORT_MODULE_INTERFACE_H

#include "xrtransport/transport/transport.h"
#include "xrtransport/server/function_loader.h"
#include "openxr/openxr.h"

extern "C" {

bool on_init(xrtransport::Transport* transport, xrtransport::FunctionLoader* function_loader);
bool on_instance(xrtransport::Transport* transport, xrtransport::FunctionLoader* function_loader, XrInstance instance);
void on_shutdown();

}

#endif // XRTRANSPORT_MODULE_INTERFACE_H