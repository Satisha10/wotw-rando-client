#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyCodeButtonInput__Array {
        namespace {
            app::KeyCodeButtonInput__Array__Class* type_info_ref = nullptr;
        }
        app::KeyCodeButtonInput__Array__Class** type_info = &type_info_ref;
        inline app::KeyCodeButtonInput__Array__Class* get_class() {
            return il2cpp::get_class<app::KeyCodeButtonInput__Array__Class>(type_info, "SmartInput", "KeyCodeButtonInput[]");
        }
        inline app::KeyCodeButtonInput__Array* create() {
            return il2cpp::create_object<app::KeyCodeButtonInput__Array>(get_class());
        }
    } // namespace KeyCodeButtonInput__Array
} // namespace app::classes::types