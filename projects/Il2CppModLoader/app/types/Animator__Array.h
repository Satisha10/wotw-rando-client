#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Animator__Array {
        namespace {
            app::Animator__Array__Class* type_info_ref = nullptr;
        }
        app::Animator__Array__Class** type_info = &type_info_ref;
        inline app::Animator__Array__Class* get_class() {
            return il2cpp::get_class<app::Animator__Array__Class>(type_info, "UnityEngine", "Animator[]");
        }
        inline app::Animator__Array* create() {
            return il2cpp::create_object<app::Animator__Array>(get_class());
        }
    } // namespace Animator__Array
} // namespace app::classes::types