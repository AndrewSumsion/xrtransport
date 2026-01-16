if(XRTRANSPORT_BUILD_CLIENT)
    add_library(module_client_handle_exchange_linux SHARED
        client_handle_exchange_linux.cpp
    )
    set_target_properties(module_client_handle_exchange_linux PROPERTIES
        OUTPUT_NAME module_client_handle_exchange
    )
    target_compile_definitions(module_client_handle_exchange_linux PRIVATE
        XRTRANSPORT_EXPORT_API
    )
    target_link_libraries(module_client_handle_exchange_linux PRIVATE
        xrtransport_transport
        xrtransport_serialization
    )
    install(TARGETS module_client_handle_exchange_linux
        LIBRARY DESTINATION client
        RUNTIME DESTINATION client
    )
    set_target_properties(module_client_handle_exchange_linux PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()
if(XRTRANSPORT_BUILD_SERVER)
    add_library(module_server_handle_exchange_linux SHARED
        server_handle_exchange_linux.cpp
    )
    set_target_properties(module_server_handle_exchange_linux PROPERTIES
        OUTPUT_NAME module_server_handle_exchange
    )
    target_compile_definitions(module_server_handle_exchange_linux PRIVATE
        XRTRANSPORT_EXPORT_API
    )
    target_link_libraries(module_server_handle_exchange_linux PRIVATE
        xrtransport_transport
        xrtransport_serialization
    )
    install(TARGETS module_server_handle_exchange_linux
        LIBRARY DESTINATION server
        RUNTIME DESTINATION server
    )
    set_target_properties(module_server_handle_exchange_linux PROPERTIES
        INSTALL_RPATH "$ORIGIN"
    )
endif()
