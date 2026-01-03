#include "dma_buf_exchange.h"

#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <cstdlib>
#include <stdexcept>
#include <cstring>

int dma_buf_exchange_fd;

const char* get_client_dma_buf_exchange_path() {
    const char* client_path = std::getenv("XRTP_CLIENT_FD_EXCHANGE_PATH");
    if (!client_path) {
        throw std::runtime_error("XRTP_CLIENT_FD_EXCHANGE_PATH environment variable not set");
    }

    return client_path;
}

void open_dma_buf_exchange() {
    const char* server_path = std::getenv("XRTP_SERVER_FD_EXCHANGE_PATH");
    if (!server_path) {
        throw std::runtime_error("XRTP_SERVER_FD_EXCHANGE_PATH environment variable not set");
    }

    int server_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_fd < 0) {
        throw std::runtime_error("Unable to create DMA BUF exchange server socket: " + std::to_string(errno));
    }

    unlink(server_path); // ignore error if any

    sockaddr_un addr{};
    std::strncpy(addr.sun_path, server_path, sizeof(addr.sun_path - 1));

    if (bind(server_fd, (sockaddr*)&addr, sizeof(addr)) < 0) {
        throw std::runtime_error("Unable to bind to DMA BUF exchange path: " +
            std::string(server_path) + ", errno: " + std::to_string(errno));
    }

    if (listen(server_fd, 1) < 0) {
        throw std::runtime_error("Error listening on DMA BUF socket: " + std::to_string(errno));
    }

    dma_buf_exchange_fd = accept(server_fd, nullptr, nullptr);
    if (dma_buf_exchange_fd < 0) {
        throw std::runtime_error("Error accepting client on DMA BUF socket: " + std::to_string(errno));
    }

    close(server_fd);
}

int read_from_dma_buf_exchange() {
    msghdr msg{};

    char msg_buffer[1]{}; // for dummy byte
    struct iovec io{
        .iov_base = msg_buffer,
        .iov_len = sizeof(msg_buffer)
    };

    char cmsg_buffer[CMSG_SPACE(sizeof(int))]{};
    msg.msg_iov = &io;
    msg.msg_iovlen = 1;
    msg.msg_control = cmsg_buffer;
    msg.msg_controllen = sizeof(cmsg_buffer);

    if (recvmsg(dma_buf_exchange_fd, &msg, 0) < 0) {
        throw std::runtime_error("Error receiving DMA BUF exchange message: " + std::to_string(errno));
    }

    cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
    if (cmsg == nullptr ||
        cmsg->cmsg_level != SOL_SOCKET ||
        cmsg->cmsg_type != SCM_RIGHTS) {
        throw std::runtime_error("Invalid control message: " + std::to_string(errno));
    }

    int fd{};
    std::memcpy(&fd, CMSG_DATA(cmsg), sizeof(fd));
    return fd;
}