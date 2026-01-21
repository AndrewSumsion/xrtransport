add_subdirectory(common)

if(XRTRANSPORT_BUILD_CLIENT)
    add_subdirectory(client)
endif()
if(XRTRANSPORT_BUILD_SERVER)
    add_subdirectory(server)
endif()