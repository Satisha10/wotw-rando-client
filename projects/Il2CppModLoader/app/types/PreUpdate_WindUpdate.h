#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreUpdate_WindUpdate {
        namespace {
            app::PreUpdate_WindUpdate__Class* type_info_ref = nullptr;
        }
        app::PreUpdate_WindUpdate__Class** type_info = &type_info_ref;
        inline app::PreUpdate_WindUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::PreUpdate_WindUpdate__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "PreUpdate", "WindUpdate");
        }
        inline app::PreUpdate_WindUpdate* create() {
            return il2cpp::create_object<app::PreUpdate_WindUpdate>(get_class());
        }
        inline app::PreUpdate_WindUpdate__Boxed* box(app::PreUpdate_WindUpdate value) {
            return il2cpp::box_value<app::PreUpdate_WindUpdate__Boxed>(get_class(), value);
        }
    } // namespace PreUpdate_WindUpdate
} // namespace app::classes::types