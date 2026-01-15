cmake_minimum_required(VERSION 3.15)

find_package(Vulkan REQUIRED)

add_library(module_server_vulkan2 SHARED
    vulkan2_server_module.cpp
    session_state.cpp
    timeline_semaphore_executor.cpp
)

target_include_directories(module_server_vulkan2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/spdlog/include
)

target_link_libraries(module_server_vulkan2 PRIVATE
    module_common_vulkan2
    module_server_handle_exchange_stub
    xrtransport_transport
    xrtransport_serialization
    Vulkan::Vulkan
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
