#include "server.h"
#include "xrtransport/asio_compat.h"

#include <spdlog/spdlog.h>
#include <asio.hpp>

#ifdef _WIN32
    #define WIN32_LEAN_AND_MEAN
    #include <windows.h>
#elif __linux__
    #include <unistd.h>
    #include <limits.h>
#else
    #error "This file supports only Windows and Linux."
#endif

#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include <cassert>
#include <algorithm>
#include <string_view>

using asio::ip::tcp;
using asio::local::stream_protocol;
using namespace xrtransport;
namespace fs = std::filesystem;

// Type alias for TCP socket wrapped in DuplexStreamImpl
using TcpDuplexStream = DuplexStreamImpl<tcp::socket>;

std::string exe_path() {
#ifdef _WIN32
    // Get UTF-16 path
    wchar_t wbuf[MAX_PATH];
    DWORD len = GetModuleFileNameW(nullptr, wbuf, MAX_PATH);
    if (len == 0)
        throw std::runtime_error("GetModuleFileNameW failed");

    std::wstring ws(wbuf, len);

    // Convert UTF-16 -> UTF-8
    int size = WideCharToMultiByte(
        CP_UTF8, 0,
        ws.c_str(), static_cast<int>(ws.size()),
        nullptr, 0, nullptr, nullptr
    );
    if (size == 0)
        throw std::runtime_error("WideCharToMultiByte sizing failed");

    std::string utf8(size, '\0');
    WideCharToMultiByte(
        CP_UTF8, 0,
        ws.c_str(), static_cast<int>(ws.size()),
        utf8.data(), size, nullptr, nullptr
    );
    return utf8;

#elif __linux__
    char buf[PATH_MAX];
    ssize_t len = readlink("/proc/self/exe", buf, sizeof(buf));
    if (len == -1)
        throw std::runtime_error("readlink failed");
    return std::string(buf, len);

#endif
}

static inline bool is_filename_module(std::string_view filename) {
#ifdef _WIN32
    constexpr std::string_view module_prefix = "module_";
    constexpr std::string_view module_ext = ".dll";
#elif __linux__
    constexpr std::string_view module_prefix = "libmodule_";
    constexpr std::string_view module_ext = ".so";
#endif
    bool prefix_matches = filename.size() >= module_prefix.size()
        && std::equal(module_prefix.begin(), module_prefix.end(), filename.begin());
    bool ext_matches = filename.size() >= module_ext.size()
        && std::equal(module_ext.rbegin(), module_ext.rend(), filename.rbegin());
    
    return prefix_matches && ext_matches;
}

static std::vector<std::string> collect_module_paths() {
    fs::path exe_dir = fs::path(exe_path()).parent_path();

    std::vector<std::string> results;

    assert(fs::exists(exe_dir) && fs::is_directory(exe_dir));

    for (const auto& entry : fs::directory_iterator(exe_dir)) {
        if (!entry.is_regular_file()) continue;
        const fs::path& p = entry.path();
        if (!is_filename_module(entry.path().filename().string())) continue;
        results.push_back(p.string());
    }

    return results;
}

static void print_usage() {
    std::cout << "Usage:\n";
    std::cout << "xrtransport_server_main tcp [bind_addr] [port]\n";
    std::cout << "xrtransport_server_main unix <path>\n";
    std::cout << "Arguments define transport medium: tcp socket or unix socket.\n";
}

static AcceptorImpl<tcp::acceptor, tcp::socket> create_tcp_acceptor(asio::io_context& io_context, std::string bind_addr, std::string port_str) {
    unsigned short port_num = std::stoul(port_str);
        
    return AcceptorImpl<tcp::acceptor, tcp::socket>(
        io_context,
        tcp::acceptor(
            io_context,
            tcp::endpoint(asio::ip::make_address_v4(bind_addr), port_num)
        )
    );
}

static AcceptorImpl<stream_protocol::acceptor, stream_protocol::socket> create_unix_acceptor(asio::io_context& io_context, std::string path) {
    return AcceptorImpl<stream_protocol::acceptor, stream_protocol::socket>(
        io_context,
        stream_protocol::acceptor(
            io_context,
            stream_protocol::endpoint(path)
        )
    );
}

static inline void prepare_socket_file(std::string path_str) {
    fs::path path(path_str);
    std::error_code ec;
    fs::remove(path, ec); // ignore error if it doesn't exist
    fs::create_directories(path.parent_path());
}

int main(int argc, char** argv) {
    if (argc < 2) {
        print_usage();
        return 1;
    }

    asio::io_context io_context;
    
    std::string transport_type = argv[1];
    std::unique_ptr<Acceptor> acceptor;
    
    if (transport_type == "tcp") {
        std::string bind_addr = "127.0.0.1";
        std::string port_str = "5892";
        if (argc >= 3) {
            bind_addr = argv[2];
        }
        if (argc >= 4) {
            port_str = argv[3];
        }

        try {
            acceptor = std::make_unique<AcceptorImpl<tcp::acceptor, tcp::socket>>(create_tcp_acceptor(io_context, bind_addr, port_str));
        }
        catch (const std::exception& e) {
            spdlog::error("Failed to create TCP acceptor: {}", e.what());
            return 1;
        }
    }
    else if (transport_type == "unix") {
        if (argc < 3) {
            std::cout << "You must specify the path of the socket.\n";
            print_usage();
            return 1;
        }

        std::string unix_path = argv[2];
        prepare_socket_file(unix_path);

        try {
            acceptor = std::make_unique<AcceptorImpl<stream_protocol::acceptor, stream_protocol::socket>>(create_unix_acceptor(io_context, unix_path));
        }
        catch (const std::exception& e) {
            spdlog::error("Failed to create Unix acceptor: {}", e.what());
            return 1;
        }
    }
    else {
        std::cout << "Invalid option.\n";
        print_usage();
        return 1;
    }

    while (true) {
        try {
            spdlog::info("Waiting for a client...");

            auto stream = acceptor->accept();

            spdlog::info("Client connected");

            if (!Server::do_handshake(*stream)) {
                // handshake failed, socket was closed, try again
                spdlog::warn("Client handshake failed");
                continue;
            }
            
            Server server(
                std::move(stream),
                io_context,
                collect_module_paths()
            );

            // Run server event loop synchronously until it stops
            server.run();
        }
        catch (const std::exception& e) {
            spdlog::error("Connection ended due to error: {}", e.what());
        }
    }
}