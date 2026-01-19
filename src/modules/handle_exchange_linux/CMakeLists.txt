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
        LIBRARY DESTINATION client
        RUNTIME DESTINATION client
    )
    set_target_properties(module_client_handle_exchange PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
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
        LIBRARY DESTINATION server
        RUNTIME DESTINATION server
    )
    set_target_properties(module_server_handle_exchange PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()
