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
    std::vector<ClientImage>&& images,
    VkFence copying_fence
) {
    return swapchain_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle,
            parent_handle,
            std::move(images),
            copying_fence
        )
    ).first->second;
}

SessionState& store_session_state(
    XrSession handle,
    const XrGraphicsBindingVulkan2KHR& graphics_binding,
    VkQueue queue
) {
    return session_states.emplace(
        std::piecewise_construct,
        std::forward_as_tuple(handle),
        std::forward_as_tuple(
            handle,
            std::move(graphics_binding),
            queue
        )
    ).first->second;
}

void destroy_swapchain_state(XrSwapchain handle) {
    swapchain_states.erase(handle);
}

void destroy_session_state(XrSession handle) {
    session_states.erase(handle);
}