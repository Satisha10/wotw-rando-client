#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayMode__Enum {
        namespace {
            app::PlayMode__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayMode__Enum__Class** type_info = &type_info_ref;
        inline app::PlayMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayMode__Enum__Class>(type_info, "UnityEngine", "PlayMode");
        }
        inline app::PlayMode__Enum* create() {
            return il2cpp::create_object<app::PlayMode__Enum>(get_class());
        }
    } // namespace PlayMode__Enum
} // namespace app::classes::types