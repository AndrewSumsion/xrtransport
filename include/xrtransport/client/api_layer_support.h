#ifndef XRTRANSPORT_API_LAYER_SUPPORT_H
#define XRTRANSPORT_API_LAYER_SUPPORT_H

#include "xrtransport/transport/transport.h"

#include "openxr/openxr.h"

typedef XrResult (*PFN_xrtransportGetTransport)(xrtransport::Transport** transport_out);

#endif // XRTRANSPORT_API_LAYER_SUPPORT_H