#ifndef XRTRANSPORT_VULKAN2_IMAGE_HANDLES_H
#define XRTRANSPORT_VULKAN2_IMAGE_HANDLES_H

#include "xrtransport/handle_exchange.h"

struct ImageHandles {
    xrtp_Handle memory_handle;
    xrtp_Handle rendering_done_handle;
    xrtp_Handle copying_done_handle;
};

static inline void write_image_handles(const ImageHandles& handles) {
    xrtp_write_handle(handles.memory_handle);
    xrtp_write_handle(handles.rendering_done_handle);
    xrtp_write_handle(handles.copying_done_handle);
}

static inline ImageHandles read_image_handles() {
    xrtp_Handle memory_handle = xrtp_read_handle();
    xrtp_Handle rendering_done_handle = xrtp_read_handle();
    xrtp_Handle copying_done_handle = xrtp_read_handle();
    return {
        memory_handle,
        rendering_done_handle,
        copying_done_handle
    };
}

#endif // XRTRANSPORT_VULKAN2_IMAGE_HANDLES_H