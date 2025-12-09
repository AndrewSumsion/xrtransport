#ifndef XRTRANSPORT_TIME_H
#define XRTRANSPORT_TIME_H

#include "openxr/openxr.h"

#if defined(_WIN32)
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#define XRTRANSPORT_PLATFORM_TIME LARGE_INTEGER
#elif defined(__linux__)
#include <time.h>
#define XRTRANSPORT_PLATFORM_TIME timespec
#else
#error platform not supported
#endif

namespace xrtransport {

inline void get_platform_time(XRTRANSPORT_PLATFORM_TIME* platform_time) {
#ifdef _WIN32
    QueryPerformanceCounter(platform_time);
#else
    clock_gettime(CLOCK_MONOTONIC, platform_time);
#endif
}

inline void convert_from_platform_time(const XRTRANSPORT_PLATFORM_TIME* platform_time, XrTime* xr_time) {
#ifdef _WIN32
    LARGE_INTEGER qpf{};
    QueryPerformanceFrequency(&qpf);

    // just using doubles because it's most likely good enough for now and a full 128 bit multiply
    // and divide would be very complicated
    double seconds = (double)platform_time->QuadPart / (double)qpf.QuadPart;
    *xr_time = (XrTime)(seconds * 1'000'000'000);
#else
    *xr_time = platform_time->tv_sec * 1'000'000'000 + platform_time->tv_nsec;
#endif
}

inline void convert_to_platform_time(XrTime xr_time, XRTRANSPORT_PLATFORM_TIME* platform_time) {
#ifdef _WIN32
    LARGE_INTEGER qpf;
    QueryPerformanceFrequency(&qpf);

    double seconds = xr_time / 1'000'000'000.0;
    platform_time->QuadPart = (LONGLONG)(seconds * qpf.QuadPart);
#else
    platform_time->tv_sec = xr_time / 1'000'000'000;
    platform_time->tv_nsec = xr_time % 1'000'000'000;
#endif
}

inline XrTime get_time() {
    XRTRANSPORT_PLATFORM_TIME platform_time{};
    get_platform_time(&platform_time);
    XrTime xr_time{};
    convert_from_platform_time(&platform_time, &xr_time);
    return xr_time;
}

} // namespace xrtransport

#endif // XRTRANSPORT_TIME_H