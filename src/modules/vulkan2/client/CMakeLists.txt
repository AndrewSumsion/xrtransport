cmake_minimum_required(VERSION 3.15)

find_package(Vulkan REQUIRED)

add_library(module_client_vulkan2 SHARED
    vulkan2_client_module.cpp
)

target_include_directories(module_client_vulkan2 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/external/OpenXR-SDK/include
    ${CMAKE_SOURCE_DIR}/external/spdlog/include
    ${Vulkan_INCLUDE_DIRS}
)

target_link_libraries(module_client_vulkan2 PRIVATE
    xrtransport_transport
    Vulkan::Vulkan
)

install(TARGETS module_client_vulkan2
    LIBRARY DESTINATION client
    RUNTIME DESTINATION client
)

if(UNIX)
    set_target_properties(module_client_vulkan2 PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()