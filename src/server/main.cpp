#include "server.h"
#include "xrtransport/asio_compat.h"

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

using asio::ip::tcp;
using namespace xrtransport;

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

static std::vector<std::string> collect_module_paths() {
    namespace fs = std::filesystem;
    fs::path modules_dir = fs::path(exe_path()) / "modules";
#ifdef _WIN32
    fs::path module_ext = fs::path(".dll");
#elif __linux__
    fs::path module_ext = fs::path(".so");
#endif

    std::vector<std::string> results;

    if (!fs::exists(modules_dir) || !fs::is_directory(modules_dir)) {
        return results; // empty
    }

    for (const auto& entry : fs::directory_iterator(modules_dir)) {
        if (!entry.is_regular_file()) continue;
        const fs::path& p = entry.path();
        if (p.extension() != module_ext) continue;
        results.push_back(p.string());
    }

    return results;
}

int main(int argc, char** argv) {
    while (true) {
        try {
            asio::io_context io_context;

            tcp::acceptor acceptor(
                io_context,
                tcp::endpoint(asio::ip::address_v4::loopback(), 5892)
            );

            std::cout << "Waiting for a client...\n";

            tcp::socket socket(io_context);
            acceptor.accept(socket);

            std::cout << "Client connected from: "
                    << socket.remote_endpoint() << "\n";
            
            Server server(
                std::make_unique<TcpDuplexStream>(std::move(socket)),
                io_context,
                collect_module_paths()
            );

            if (!server.do_handshake()) {
                // handshake failed, socket was closed, try again
                continue;
            }

            // Run server event loop synchronously until it stops
            server.run();
        }
        catch (std::exception& e) {
            std::cerr << "Error: " << e.what() << "\n";
        }
    }
}