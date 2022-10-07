#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoftJointLimit {
        namespace {
            app::SoftJointLimit__Class* type_info_ref = nullptr;
        }
        app::SoftJointLimit__Class** type_info = &type_info_ref;
        inline app::SoftJointLimit__Class* get_class() {
            return il2cpp::get_class<app::SoftJointLimit__Class>(type_info, "UnityEngine", "SoftJointLimit");
        }
        inline app::SoftJointLimit* create() {
            return il2cpp::create_object<app::SoftJointLimit>(get_class());
        }
        inline app::SoftJointLimit__Boxed* box(app::SoftJointLimit value) {
            return il2cpp::box_value<app::SoftJointLimit__Boxed>(get_class(), value);
        }
    } // namespace SoftJointLimit
} // namespace app::classes::types