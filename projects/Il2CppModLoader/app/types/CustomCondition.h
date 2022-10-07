#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomCondition {
        namespace {
            app::CustomCondition__Class* type_info_ref = nullptr;
        }
        app::CustomCondition__Class** type_info = &type_info_ref;
        inline app::CustomCondition__Class* get_class() {
            return il2cpp::get_class<app::CustomCondition__Class>(type_info, "", "CustomCondition");
        }
        inline app::CustomCondition* create() {
            return il2cpp::create_object<app::CustomCondition>(get_class());
        }
    } // namespace CustomCondition
} // namespace app::classes::types