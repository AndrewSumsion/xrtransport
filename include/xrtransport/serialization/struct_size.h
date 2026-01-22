// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_STRUCT_SIZE_H
#define XRTRANSPORT_STRUCT_SIZE_H

#include "openxr/openxr.h"
#include <cstddef>

namespace xrtransport {

// Struct size lookup
// Only to be used with OpenXR pNext structs
std::size_t size_lookup(XrStructureType struct_type);

} // namespace xrtransport

#endif // XRTRANSPORT_STRUCT_SIZE_H