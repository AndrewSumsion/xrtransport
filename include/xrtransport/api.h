// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_API_H
#define XRTRANSPORT_API_H

#ifdef _WIN32
#define XRTP_API_EXPORT __declspec(dllexport)
#define XRTP_API_IMPORT __declspec(dllimport)
#else
#define XRTP_API_EXPORT
#define XRTP_API_IMPORT
#endif

#ifdef XRTRANSPORT_EXPORT_API
#define XRTP_API XRTP_API_EXPORT
#else
#define XRTP_API XRTP_API_IMPORT
#endif

#endif // XRTRANSPORT_API_H