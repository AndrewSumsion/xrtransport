#include "xrtransport/server/module_interface.h"
#include "xrtransport/handle_exchange.h"
#include "messages.h"

#include "xrtransport/serialization/serializer.h"
#include "xrtransport/serialization/deserializer.h"
#include "xrtransport/util.h"

// we want to import symbols from here, not export them
#undef XRTRANSPORT_EXPORT_API
#include "xrtransport/transport/transport.h"

#include <openxr/openxr.h>
#include <spdlog/spdlog.h>

#include <unistd.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <cstdlib>
#include <cstring>
#include <memory>

using namespace xrtransport;

namespace {

std::unique_ptr<Transport> transport;
int server_fd = -1;
int socket_fd = -1;

};

bool xrtp_on_init(
    xrtp_Transport transport_handle,
    xrtransport::FunctionLoader* function_loader,
    std::uint32_t num_extensions,
    const XrExtensionProperties* extensions
) {
    transport = std::make_unique<Transport>(transport_handle);
    transport->register_handler(XRTP_MSG_HANDLE_EXCHANGE_LINUX_GET_PATH, [&](MessageLockIn msg_in){
        const char* client_path = std::getenv("XRTP_CLIENT_FD_EXCHANGE_PATH");
        if (!client_path) {
            spdlog::error("XRTP_CLIENT_FD_EXCHANGE_PATH environment variable not set");
        }

        auto msg_out = transport->start_message(XRTP_MSG_HANDLE_EXCHANGE_LINUX_RETURN_PATH);
        SerializeContext s_ctx(msg_out.buffer);
        serialize_ptr(client_path, count_null_terminated(client_path), s_ctx);
        msg_out.flush();
    });
    transport->register_handler(XRTP_MSG_HANDLE_EXCHANGE_LINUX_CLIENT_CONNECTING, [&](MessageLockIn msg_in){
        socket_fd = accept(server_fd, nullptr, nullptr);
        if (socket_fd < 0) {
            spdlog::error("Error accepting handle exchange client: {}", errno);
        }
    });
    return true;
}

void xrtp_get_required_extensions(
    std::uint32_t* num_extensions_out,
    const char** extensions_out
) {
    *num_extensions_out = 0;
}

void xrtp_on_instance(
    xrtp_Transport transport_handle,
    xrtransport::FunctionLoader* function_loader,
    XrInstance instance
) {
    const char* server_path = std::getenv("XRTP_SERVER_FD_EXCHANGE_PATH");
    if (!server_path) {
        spdlog::error("XRTP_SERVER_FD_EXCHANGE_PATH environment variable not set, "
            "not starting handle exchange server.");
        return;
    }

    if (server_fd >= 0) {
        // close existing server socket if it's already open
        close(server_fd);
        server_fd = -1;
    }
    if (socket_fd >= 0) {
        // close existing socket if it's already open
        close(socket_fd);
        socket_fd = -1;
    }

    server_fd = socket(AF_UNIX, SOCK_STREAM, 0);
    if (server_fd < 0) {
        spdlog::error("Unable to create handle exchange server socket: {}", errno);
        return;
    }

    unlink(server_path); // ignore error if any

    sockaddr_un addr{};
    addr.sun_family = AF_UNIX;
    std::strncpy(addr.sun_path, server_path, sizeof(addr.sun_path) - 1);

    if (bind(server_fd, (sockaddr*)&addr, sizeof(addr)) < 0) {
        spdlog::error("Unable to bind to handle exchange path: {}, errno: {}", server_path, errno);
        close(server_fd);
        server_fd = -1;
        return;
    }

    // make it readable and writeable by anyone
    chmod(server_path, 0666);

    if (listen(server_fd, 1) < 0) {
        spdlog::error("Error listening on handler exchange server socket: {}", errno);
        close(server_fd);
        server_fd = -1;
        return;
    }
}

void xrtp_on_instance_destroy() {
    if (server_fd >= 0) {
        close(server_fd);
        server_fd = -1;
    }
    if (socket_fd >= 0) {
        close(socket_fd);
        socket_fd = -1;
    }
}

void xrtp_on_shutdown() {
    if (server_fd >= 0) {
        close(server_fd);
        server_fd = -1;
    }
    if (socket_fd >= 0) {
        close(socket_fd);
        socket_fd = -1;
    }
}

xrtp_Handle xrtp_read_handle() {
    if (socket_fd < 0) {
        spdlog::error("Handle exchange was not properly created, returning null handle.");
        return 0;
    }

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

    if (recvmsg(socket_fd, &msg, 0) < 0) {
        spdlog::error("Error receiving handle exchange message: {}", errno);
        return 0;
    }

    cmsghdr* cmsg = CMSG_FIRSTHDR(&msg);
    if (cmsg == nullptr ||
        cmsg->cmsg_level != SOL_SOCKET ||
        cmsg->cmsg_type != SCM_RIGHTS) {
        spdlog::error("Invalid control message: " + errno);
        return 0;
    }

    int fd{};
    std::memcpy(&fd, CMSG_DATA(cmsg), sizeof(fd));
    return static_cast<xrtp_Handle>(fd);
}

void xrtp_write_handle(xrtp_Handle handle) {
    if (socket_fd <= 0) {
        spdlog::error("Handle exchange was not properly created, not writing handle.");
        return;
    }

    int fd = static_cast<int>(handle);

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

    if (sendmsg(socket_fd, &msg, 0) == -1) {
        spdlog::error("Failed to send FD via SCM_RIGHTS: {}", errno);
    }

    // now that sendmsg has returned, it's safe to close local fd handle
    close(fd);
}