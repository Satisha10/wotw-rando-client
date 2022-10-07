#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AdditiveBodyRotation {
        namespace {
            app::AdditiveBodyRotation__Class* type_info_ref = nullptr;
        }
        app::AdditiveBodyRotation__Class** type_info = &type_info_ref;
        inline app::AdditiveBodyRotation__Class* get_class() {
            return il2cpp::get_class<app::AdditiveBodyRotation__Class>(type_info, "Moon", "AdditiveBodyRotation");
        }
        inline app::AdditiveBodyRotation* create() {
            return il2cpp::create_object<app::AdditiveBodyRotation>(get_class());
        }
    } // namespace AdditiveBodyRotation
} // namespace app::classes::types