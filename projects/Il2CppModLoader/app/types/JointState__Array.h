#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointState__Array {
        namespace {
            app::JointState__Array__Class* type_info_ref = nullptr;
        }
        app::JointState__Array__Class** type_info = &type_info_ref;
        inline app::JointState__Array__Class* get_class() {
            return il2cpp::get_class<app::JointState__Array__Class>(type_info, "", "JointState[]");
        }
        inline app::JointState__Array* create() {
            return il2cpp::create_object<app::JointState__Array>(get_class());
        }
    } // namespace JointState__Array
} // namespace app::classes::types