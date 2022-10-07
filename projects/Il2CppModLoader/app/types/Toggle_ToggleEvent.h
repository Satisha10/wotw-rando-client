#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Toggle_ToggleEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Toggle_ToggleEvent__Class** type_info;
        inline app::Toggle_ToggleEvent__Class* get_class() {
            return il2cpp::get_nested_class<app::Toggle_ToggleEvent__Class>(type_info, "UnityEngine.UI", "Toggle", "ToggleEvent");
        }
        inline app::Toggle_ToggleEvent* create() {
            return il2cpp::create_object<app::Toggle_ToggleEvent>(get_class());
        }
    } // namespace Toggle_ToggleEvent
} // namespace app::classes::types