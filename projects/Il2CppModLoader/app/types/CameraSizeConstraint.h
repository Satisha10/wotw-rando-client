#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraSizeConstraint {
        namespace {
            app::CameraSizeConstraint__Class* type_info_ref = nullptr;
        }
        app::CameraSizeConstraint__Class** type_info = &type_info_ref;
        inline app::CameraSizeConstraint__Class* get_class() {
            return il2cpp::get_class<app::CameraSizeConstraint__Class>(type_info, "", "CameraSizeConstraint");
        }
        inline app::CameraSizeConstraint* create() {
            return il2cpp::create_object<app::CameraSizeConstraint>(get_class());
        }
    } // namespace CameraSizeConstraint
} // namespace app::classes::types