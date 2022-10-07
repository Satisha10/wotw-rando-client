#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CategoryAttribute_1 {
        namespace {
            app::CategoryAttribute_1__Class* type_info_ref = nullptr;
        }
        app::CategoryAttribute_1__Class** type_info = &type_info_ref;
        inline app::CategoryAttribute_1__Class* get_class() {
            return il2cpp::get_class<app::CategoryAttribute_1__Class>(type_info, "Moon.BehaviourSystem.BTEditor", "CategoryAttribute");
        }
        inline app::CategoryAttribute_1* create() {
            return il2cpp::create_object<app::CategoryAttribute_1>(get_class());
        }
    } // namespace CategoryAttribute_1
} // namespace app::classes::types