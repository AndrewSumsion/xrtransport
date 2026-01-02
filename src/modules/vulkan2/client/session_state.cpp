#include "session_state.h"

#include <openxr/openxr.h>

#include <optional>
#include <unordered_map>

namespace {

std::unordered_map<XrSwapchain, SwapchainState> swapchain_states;
std::unordered_map<XrSession, SessionState> session_states;

} // namespace

std::optional<SwapchainState&> get_swapchain_state(XrSwapchain handle) {
    auto it = swapchain_states.find(handle);
    if (it == swapchain_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

std::optional<SessionState&> get_session_state(XrSession handle) {
    auto it = session_states.find(handle);
    if (it == session_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

SwapchainState& store_swapchain_state(XrSwapchain handle, SwapchainState&& swapchain_state) {
    return swapchain_states.emplace(handle, std::move(swapchain_state)).first->second;
}

SessionState& store_session_state(XrSession handle, SessionState&& session_state) {
    return session_states.emplace(handle, std::move(session_state)).first->second;
}

void destroy_swapchain_state(XrSwapchain handle) {
    swapchain_states.erase(handle);
}

void destroy_session_state(XrSession handle) {
    session_states.erase(handle);
}