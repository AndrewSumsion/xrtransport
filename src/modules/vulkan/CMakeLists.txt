# SPDX-License-Identifier: LGPL-3.0-or-later

add_subdirectory(common)

if(XRTRANSPORT_BUILD_CLIENT)
    add_subdirectory(client)
endif()
if(XRTRANSPORT_BUILD_SERVER)
    add_subdirectory(server)
endif()