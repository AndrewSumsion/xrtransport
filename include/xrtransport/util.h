#ifndef XRTRANSPORT_UTIL_H
#define XRTRANSPORT_UTIL_H

#include <cstddef>

namespace xrtransport {

template <typename T>
std::size_t count_null_terminated(T* x) {
    std::size_t count = 0;
    while (*(x++) != T{}) ++count;
    return count;
}

} // namespace xrtransport

#endif // XRTRANSPORT_UTIL_H