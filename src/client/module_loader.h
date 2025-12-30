#ifndef XRTRANSPORT_CLIENT_MODULE_LOADER_H
#define XRTRANSPORT_CLIENT_MODULE_LOADER_H

#include "xrtransport/client/module_types.h"
#include "xrtransport/transport/transport_c_api.h"

#include "function_table.h"

#include <openxr/openxr.h>

#include <vector>

namespace xrtransport {

std::vector<ModuleInfo> load_modules(xrtp_Transport transport);

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_MODULE_LOADER_H