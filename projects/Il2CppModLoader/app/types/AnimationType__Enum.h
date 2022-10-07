#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationType__Enum {
        namespace {
            app::AnimationType__Enum__Class* type_info_ref = nullptr;
        }
        app::AnimationType__Enum__Class** type_info = &type_info_ref;
        inline app::AnimationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::AnimationType__Enum__Class>(type_info, "Moon", "AnimationType");
        }
        inline app::AnimationType__Enum* create() {
            return il2cpp::create_object<app::AnimationType__Enum>(get_class());
        }
    } // namespace AnimationType__Enum
} // namespace app::classes::types