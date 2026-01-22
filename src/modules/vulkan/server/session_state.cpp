// SPDX-License-Identifier: LGPL-3.0-or-later

#include "session_state.h"

#include <unordered_map>

namespace {

std::unordered_map<XrSwapchain, SwapchainState> swapchain_states;
std::unordered_map<XrSession, SessionState> session_states;

} // namespace

std::optional<std::reference_wrapper<SwapchainState>> get_swapchain_state(XrSwapchain handle) {
    auto it = swapchain_states.find(handle);
    if (it == swapchain_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

std::optional<std::reference_wrapper<SessionState>> get_session_state(XrSession handle) {
    auto it = session_states.find(handle);
    if (it == session_states.end()) {
        return std::nullopt;
    }
    else {
        return it->second;
    }
}

SwapchainState& store_swapchain_state(
    XrSwapchain handle,
    XrSession parent_handle,
    std::vector<SharedImage>&& shared_images,
    std::vector<RuntimeImage>&& runtime_images,
    ImageType image_type,
    uint32_t width,
    uint32_t height
) {
    return swapchain_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle,
            parent_handle,
            std::move(shared_images),
            std::move(runtime_images),
            image_type,
            width,
            height
        )
    ).first->second;
}

SessionState& store_session_state(
    XrSession handle
) {
    return session_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle
        )
    ).first->second;
}

void destroy_swapchain_state(XrSwapchain handle) {
    swapchain_states.erase(handle);
}

void destroy_session_state(XrSession handle) {
    session_states.erase(handle);
}