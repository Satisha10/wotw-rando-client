#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RotationSpace__Enum {
        namespace {
            app::RotationSpace__Enum__Class* type_info_ref = nullptr;
        }
        app::RotationSpace__Enum__Class** type_info = &type_info_ref;
        inline app::RotationSpace__Enum__Class* get_class() {
            return il2cpp::get_class<app::RotationSpace__Enum__Class>(type_info, "Moon", "RotationSpace");
        }
        inline app::RotationSpace__Enum* create() {
            return il2cpp::create_object<app::RotationSpace__Enum>(get_class());
        }
    } // namespace RotationSpace__Enum
} // namespace app::classes::types