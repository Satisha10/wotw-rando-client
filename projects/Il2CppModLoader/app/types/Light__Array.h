#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Light__Array {
        namespace {
            app::Light__Array__Class* type_info_ref = nullptr;
        }
        app::Light__Array__Class** type_info = &type_info_ref;
        inline app::Light__Array__Class* get_class() {
            return il2cpp::get_class<app::Light__Array__Class>(type_info, "UnityEngine", "Light[]");
        }
        inline app::Light__Array* create() {
            return il2cpp::create_object<app::Light__Array>(get_class());
        }
    } // namespace Light__Array
} // namespace app::classes::types