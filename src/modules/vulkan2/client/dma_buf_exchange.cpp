#include "dma_buf_exchange.h"
#include "vulkan2_common.h"

#include "xrtransport/transport/transport.h"
#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"

#include <sys/socket.h>

using namespace xrtransport;

static int dma_buf_exchange_fd;

void open_dma_buf_exchange(Transport& transport) {
    char* dma_buf_exchange_path{};

    auto msg_out = transport.start_message(XRTP_MSG_VULKAN2_GET_DMA_BUF_EXCHANGE_PATH);
    msg_out.flush();

    auto msg_in = transport.await_message(XRTP_MSG_VULKAN2_RETURN_DMA_BUF_EXCHANGE_PATH);
    DeserializeContext d_ctx(msg_in.stream);
    deserialize_ptr(&dma_buf_exchange_path, d_ctx);

    dma_buf_exchange_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (dma_buf_exchange_fd < 0) {
        throw std::runtime_error("Failed to create DMA BUF exchange socket");
    }

    sockaddr_un addr{};
    addr.sun_family = AF_UNIX;
    std::strncpy(addr.sun_path, dma_buf_exchange_path, sizeof(addr.sun_path - 1));

    if (connect(dma_buf_exchange_fd, (sockaddr*)&addr, sizeof(addr)) < 0) {
        throw std::runtime_error("Failed to connect DMA BUF exchange socket to path: " + std::string(dma_buf_exchange_path));
    }
}

void write_to_dma_buf_exchange(int fd) {
    msghdr msg{};
    char buf[CMSG_SPACE(sizeof(fd))]{};

    // one byte of dummy data to send with FD
    uint8_t dummy = 0;
    iovec io = {
        .iov_base = &dummy,
        .iov_len = 1
    };

    msg.msg_iov = &io;
    msg.msg_iovlen = 1;

    msg.msg_control = buf;
    msg.msg_controllen = sizeof(buf);

    cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
    cmsg->cmsg_level = SOL_SOCKET;
    cmsg->cmsg_type = SCM_RIGHTS;
    cmsg->cmsg_len = CMSG_LEN(sizeof(fd));

    std::memcpy(CMSG_DATA(cmsg), &fd, sizeof(fd));

    if (sendmsg(dma_buf_exchange_fd, &msg, 0) == -1) {
        throw std::runtime_error("Failed to send FD via SCM_RIGHTS");
    }
}