# SPDX-License-Identifier: LGPL-3.0-or-later

if(XRTRANSPORT_BUILD_CLIENT)
    add_library(module_client_handle_exchange SHARED
        client_handle_exchange_linux.cpp
    )
    target_compile_definitions(module_client_handle_exchange PRIVATE
        XRTRANSPORT_EXPORT_API
    )
    target_link_libraries(module_client_handle_exchange PRIVATE
        xrtransport_transport
        xrtransport_serialization
    )
    install(TARGETS module_client_handle_exchange
        LIBRARY DESTINATION ${XRTRANSPORT_CLIENT_INSTALL_PATH}
        RUNTIME DESTINATION ${XRTRANSPORT_CLIENT_INSTALL_PATH}
    )
    if (ANDROID)
        target_link_options(module_client_handle_exchange PRIVATE
            "-Wl,-rpath,$ORIGIN"
        )
    else()
        set_target_properties(module_client_handle_exchange PROPERTIES
            INSTALL_RPATH "$ORIGIN"
        )
    endif()
endif()
if(XRTRANSPORT_BUILD_SERVER)
    add_library(module_server_handle_exchange SHARED
        server_handle_exchange_linux.cpp
    )
    target_compile_definitions(module_server_handle_exchange PRIVATE
        XRTRANSPORT_EXPORT_API
    )
    target_link_libraries(module_server_handle_exchange PRIVATE
        xrtransport_transport
        xrtransport_serialization
    )
    install(TARGETS module_server_handle_exchange
        LIBRARY DESTINATION ${XRTRANSPORT_SERVER_INSTALL_PATH}
        RUNTIME DESTINATION ${XRTRANSPORT_SERVER_INSTALL_PATH}
    )
    set_target_properties(module_server_handle_exchange PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()
