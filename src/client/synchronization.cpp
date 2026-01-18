#include "synchronization.h"
#include "runtime.h"

#include "xrtransport/time.h"

#include <asio.hpp>
#include <spdlog/spdlog.h>

namespace xrtransport {

static XrTime last_sync = INT64_MIN;
static XrDuration sync_interval = 200'000'000; // 200ms
static int sync_iterations = 20;

static bool synchronization_enabled = false;
static XrDuration time_offset = 0;

static void do_synchronize() {
    Transport& transport = get_runtime().get_transport();

    // keep stream locked while in between messages
    auto lock = transport.acquire_message_lock();

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
    last_sync = get_time();
}

XrDuration get_time_offset(bool try_synchronize) {
    if (try_synchronize && synchronization_enabled) {
        XrTime time = get_time();
        if (time > last_sync + sync_interval) {
            XrDuration old_offset = time_offset;
            XrTime start_time = get_time();
            do_synchronize();
            XrTime end_time = get_time();
            XrDuration took = end_time - start_time;
            XrDuration drift = old_offset - time_offset;
            spdlog::debug(
                "Synchronization complete. "
                "Drift: {:.3f} milliseconds, "
                "Took: {:.3f} milliseconds",
                (float)drift / 1000000,
                (float)took / 1000000
            );
        }
    }

    return time_offset;
}

void enable_synchronization() {
    synchronization_enabled = true;
}

void disable_synchronization() {
    synchronization_enabled = false;
}

} // namespace xrtransport