#ifndef XRTRANSPORT_CLIENT_SYNCHRONIZATION_H
#define XRTRANSPORT_CLIENT_SYNCHRONIZATION_H

#include "openxr/openxr.h"

namespace xrtransport {

/**
 * Returns the offset between the local timer and the remote timer:
 * time_offset = local - remote
 * 
 * If try_synchronize is true and it has been long enough since the last sync,
 * a full synchronization will be performed with the server via the Transport.
 * This means that if you call this method with try_synchronize=true, the
 * Transport *must* not be in the middle of sending or receiving any messages.
 */
XrDuration get_time_offset(bool try_synchronize = false);

void enable_synchronization();
void disable_synchronization();

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_SYNCHRONIZATION