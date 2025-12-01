#include "function_loader.h"

#include "openxr/openxr.h"

namespace xrtransport {

FunctionLoader::FunctionLoader(PFN_xrGetInstanceProcAddr pfn_xrGetInstanceProcAddr) :
    pfn_xrGetInstanceProcAddr(pfn_xrGetInstanceProcAddr),
    loader_instance(XR_NULL_HANDLE)
{}

} // namespace xrtransport