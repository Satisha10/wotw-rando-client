#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vector2DebugMenuItem {
        namespace {
            app::Vector2DebugMenuItem__Class* type_info_ref = nullptr;
        }
        app::Vector2DebugMenuItem__Class** type_info = &type_info_ref;
        inline app::Vector2DebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::Vector2DebugMenuItem__Class>(type_info, "", "Vector2DebugMenuItem");
        }
        inline app::Vector2DebugMenuItem* create() {
            return il2cpp::create_object<app::Vector2DebugMenuItem>(get_class());
        }
    } // namespace Vector2DebugMenuItem
} // namespace app::classes::types