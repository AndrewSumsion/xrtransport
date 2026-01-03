#ifndef XRTRANSPORT_VULKAN2_CLIENT_DMA_BUF_EXCHANGE_H
#define XRTRANSPORT_VULKAN2_CLIENT_DMA_BUF_EXCHANGE_H

#include "xrtransport/transport/transport.h"

void open_dma_buf_exchange(xrtransport::Transport& transport);
void write_to_dma_buf_exchange(int fd);

#endif // XRTRANSPORT_VULKAN2_CLIENT_DMA_BUF_EXCHANGE_H
