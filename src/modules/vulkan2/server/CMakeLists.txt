cmake_minimum_required(VERSION 3.15)

add_library(module_server_vulkan2 SHARED
    vulkan2_server_module.cpp
)

target_include_directories(module_server_vulkan2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/spdlog/include
)

target_link_libraries(module_server_vulkan2 PRIVATE
    xrtransport_transport
)

install(TARGETS module_server_vulkan2
    LIBRARY DESTINATION server
    RUNTIME DESTINATION server
)

if(UNIX)
    set_target_properties(module_server_vulkan2 PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()
