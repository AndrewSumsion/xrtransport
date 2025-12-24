cmake_minimum_required(VERSION 3.10)

# Client-side OpenXR transport implementation
message(STATUS "Building xrtransport client components")

# Client library
add_library(xrtransport_client SHARED
    rpc.cpp
    exports.cpp
    runtime.cpp
    entry.cpp
    available_extensions.cpp
    synchronization.cpp
    function_table.cpp
)

# Dependencies
target_link_libraries(xrtransport_client
    xrtransport_transport
    xrtransport_serialization
    xrtransport_config
)

# Include directories
target_include_directories(xrtransport_client PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/asio/asio/include
)

add_openxr_manifest(xrtransport_client_manifest.json $<TARGET_FILE:xrtransport_client>)

# setup install directory
install(TARGETS xrtransport_client
    LIBRARY DESTINATION client
    RUNTIME DESTINATION client # needed for Windows, for some reason it's not considered a LIBRARY target on Windows
)
install(TARGETS xrtransport_transport
    LIBRARY DESTINATION client
    RUNTIME DESTINATION client
)

if(UNIX)
    set_target_properties(xrtransport_client PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()