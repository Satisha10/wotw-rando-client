#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwitchLevelAttribute {
        namespace {
            app::SwitchLevelAttribute__Class* type_info_ref = nullptr;
        }
        app::SwitchLevelAttribute__Class** type_info = &type_info_ref;
        inline app::SwitchLevelAttribute__Class* get_class() {
            return il2cpp::get_class<app::SwitchLevelAttribute__Class>(type_info, "System.Diagnostics", "SwitchLevelAttribute");
        }
        inline app::SwitchLevelAttribute* create() {
            return il2cpp::create_object<app::SwitchLevelAttribute>(get_class());
        }
    } // namespace SwitchLevelAttribute
} // namespace app::classes::types