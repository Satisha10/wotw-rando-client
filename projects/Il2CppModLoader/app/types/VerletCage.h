#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VerletCage {
        namespace {
            app::VerletCage__Class* type_info_ref = nullptr;
        }
        app::VerletCage__Class** type_info = &type_info_ref;
        inline app::VerletCage__Class* get_class() {
            return il2cpp::get_class<app::VerletCage__Class>(type_info, "", "VerletCage");
        }
        inline app::VerletCage* create() {
            return il2cpp::create_object<app::VerletCage>(get_class());
        }
    } // namespace VerletCage
} // namespace app::classes::types