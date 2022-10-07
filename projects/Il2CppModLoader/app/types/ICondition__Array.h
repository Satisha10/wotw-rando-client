#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICondition__Array {
        namespace {
            app::ICondition__Array__Class* type_info_ref = nullptr;
        }
        app::ICondition__Array__Class** type_info = &type_info_ref;
        inline app::ICondition__Array__Class* get_class() {
            return il2cpp::get_class<app::ICondition__Array__Class>(type_info, "", "ICondition[]");
        }
        inline app::ICondition__Array* create() {
            return il2cpp::create_object<app::ICondition__Array>(get_class());
        }
    } // namespace ICondition__Array
} // namespace app::classes::types