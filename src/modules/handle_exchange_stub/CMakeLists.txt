if(XRTRANSPORT_BUILD_CLIENT)
    add_library(module_client_handle_exchange_stub SHARED
        client_handle_exchange_stub.cpp
    )
    set_target_properties(module_client_handle_exchange_stub PROPERTIES
        OUTPUT_NAME module_client_handle_exchange
    )
    target_compile_definitions(module_client_handle_exchange_stub PRIVATE
        XRTRANSPORT_EXPORT_API
    )
endif()
if(XRTRANSPORT_BUILD_SERVER)
    add_library(module_server_handle_exchange_stub SHARED
        server_handle_exchange_stub.cpp
    )
    set_target_properties(module_server_handle_exchange_stub PROPERTIES
        OUTPUT_NAME module_server_handle_exchange
    )
    target_compile_definitions(module_server_handle_exchange_stub PRIVATE
        XRTRANSPORT_EXPORT_API
    )
endif()
