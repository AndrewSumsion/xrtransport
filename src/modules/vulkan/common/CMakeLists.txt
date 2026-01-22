# SPDX-License-Identifier: LGPL-3.0-or-later

add_library(module_common_vulkan INTERFACE)

target_include_directories(module_common_vulkan INTERFACE
    ${CMAKE_CURRENT_SOURCE_DIR}
)
