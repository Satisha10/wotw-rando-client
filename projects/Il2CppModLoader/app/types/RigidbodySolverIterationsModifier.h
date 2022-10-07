#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RigidbodySolverIterationsModifier {
        namespace {
            app::RigidbodySolverIterationsModifier__Class* type_info_ref = nullptr;
        }
        app::RigidbodySolverIterationsModifier__Class** type_info = &type_info_ref;
        inline app::RigidbodySolverIterationsModifier__Class* get_class() {
            return il2cpp::get_class<app::RigidbodySolverIterationsModifier__Class>(type_info, "", "RigidbodySolverIterationsModifier");
        }
        inline app::RigidbodySolverIterationsModifier* create() {
            return il2cpp::create_object<app::RigidbodySolverIterationsModifier>(get_class());
        }
    } // namespace RigidbodySolverIterationsModifier
} // namespace app::classes::types