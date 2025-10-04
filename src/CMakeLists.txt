cmake_minimum_required(VERSION 3.10)

add_subdirectory(common/serialization)
add_subdirectory(common/transport)

# Conditional inclusion based on build flags
if(XRTRANSPORT_BUILD_CLIENT)
    add_subdirectory(client)
endif()

if(XRTRANSPORT_BUILD_SERVER)
    add_subdirectory(server)
endif()
