#ifndef XRTRANSPORT_VULKAN2_SERVER_DMA_BUF_EXCHANGE_H
#define XRTRANSPORT_VULKAN2_SERVER_DMA_BUF_EXCHANGE_H

// path that the client should connect to
const char* get_client_dma_buf_exchange_path();
void open_dma_buf_exchange();
int read_from_dma_buf_exchange();

#endif // XRTRANSPORT_VULKAN2_SERVER_DMA_BUF_EXCHANGE_H