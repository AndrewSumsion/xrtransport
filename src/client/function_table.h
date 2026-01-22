// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef XRTRANSPORT_CLIENT_FUNCTION_TABLE
#define XRTRANSPORT_CLIENT_FUNCTION_TABLE

#include "openxr/openxr.h"

#include <unordered_map>
#include <string>

namespace xrtransport {

class FunctionTable {
private:
    std::unordered_map<std::string, PFN_xrVoidFunction> table;

public:
    void init_with_rpc_functions();

    // if the function is in the table, returns it via out, otherwise returns nullptr
    template <typename FuncPtr,
            typename = std::enable_if_t<
                std::is_pointer_v<FuncPtr> &&
                std::is_function_v<std::remove_pointer_t<FuncPtr>>
            >>
    void get_function(std::string name, FuncPtr& out) const {
        auto it = table.find(name);
        if (it == table.end()) {
            out = nullptr;
            return;
        }

        out = reinterpret_cast<FuncPtr>(it->second);
    }

    // this function is to be used to add a layer to a function's call chain.
    // this is similar to OpenXR API layers, but totally internal to this runtime.
    // the new function will be placed in the table, and the old function must be
    // saved so that the new function can call down the chain.
    // if there was no old function, it will be set to nullptr.
    template <typename FuncPtr,
            typename = std::enable_if_t<
                std::is_pointer_v<FuncPtr> &&
                std::is_function_v<std::remove_pointer_t<FuncPtr>>
            >>
    void add_function_layer(std::string name, FuncPtr new_function, FuncPtr& old_function) {
        auto it = table.find(name);
        if (it != table.end()) {
            old_function = reinterpret_cast<FuncPtr>(it->second);
            table.erase(it);
        }
        else {
            old_function = nullptr;
        }

        table.emplace(name, reinterpret_cast<PFN_xrVoidFunction>(new_function));
    }
};

} // namespace xrtransport

#endif // XRTRANSPORT_CLIENT_FUNCTION_TABLE