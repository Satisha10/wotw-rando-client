#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HttpListenerWebSocketContext {
        namespace {
            app::HttpListenerWebSocketContext__Class* type_info_ref = nullptr;
        }
        app::HttpListenerWebSocketContext__Class** type_info = &type_info_ref;
        inline app::HttpListenerWebSocketContext__Class* get_class() {
            return il2cpp::get_class<app::HttpListenerWebSocketContext__Class>(type_info, "System.Net.WebSockets", "HttpListenerWebSocketContext");
        }
        inline app::HttpListenerWebSocketContext* create() {
            return il2cpp::create_object<app::HttpListenerWebSocketContext>(get_class());
        }
    } // namespace HttpListenerWebSocketContext
} // namespace app::classes::types