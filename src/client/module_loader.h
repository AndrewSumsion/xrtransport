#ifndef XRTRANSPORT_CLIENT_MODULE_LOADER_H
#define XRTRANSPORT_CLIENT_MODULE_LOADER_H

#include "xrtransport/client/module_types.h"

#include "function_table.h"

#include <openxr/openxr.h>

#include <vector>

namespace xrtransport {

std::vector<LayerExtension> load_modules();
void apply_modules(FunctionTable& function_table, const XrInstanceCreateInfo& create_info, const std::vector<LayerExtension>& layer_extensions);

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_MODULE_LOADER_H