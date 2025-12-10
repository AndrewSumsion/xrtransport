#include "synchronization.h"
#include "transport_manager.h"

#include "xrtransport/time.h"

#include <asio.hpp>

namespace xrtransport {

static XrTime last_sync = INT64_MIN;
static XrDuration sync_interval = 200'000'000; // 200ms
static int sync_iterations = 20;

static XrDuration time_offset = 0;

static void do_synchronize() {
    Transport& transport = get_transport();

    // keep stream locked while in between messages
    auto lock = transport.lock_stream();

    XrTime min_t1{};
    XrTime min_t2{};
    XrTime min_t3{};
    XrDuration min_rtt = INT64_MAX;

    for (int i = 0; i < sync_iterations; i++) {
        auto msg_out = transport.start_message(XRTP_MSG_SYNCHRONIZATION_REQUEST);
        XrTime t1 = get_time();
        asio::write(msg_out.buffer, asio::buffer(&t1, sizeof(XrTime)));
        msg_out.flush();

        auto msg_in = transport.await_message(XRTP_MSG_SYNCHRONIZATION_RESPONSE);
        XrTime t2{};
        asio::read(msg_in.stream, asio::buffer(&t2, sizeof(XrTime)));

        XrTime t3 = get_time();

        XrDuration rtt = t3 - t1;
        if (rtt < min_rtt) {
            min_rtt = rtt;
            min_t1 = t1;
            min_t2 = t2;
            min_t3 = t3;
        }
    }

    XrDuration delay = min_rtt / 2;
    time_offset = (min_t1 + delay) - min_t2;
}

XrDuration get_time_offset(bool try_synchronize) {
    if (try_synchronize) {
        XrTime time = get_time();
        if (time > last_sync + sync_interval) {
            do_synchronize();
        }
    }

    return time_offset;
}

} // namespace xrtransport