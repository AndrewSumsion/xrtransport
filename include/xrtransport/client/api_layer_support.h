// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_API_LAYER_SUPPORT_H
#define XRTRANSPORT_API_LAYER_SUPPORT_H

#include "xrtransport/transport/transport_c_api.h"

#include "openxr/openxr.h"

typedef XrResult (*PFN_xrtransportGetTransport)(xrtp_Transport* transport_out);

#endif // XRTRANSPORT_API_LAYER_SUPPORT_H