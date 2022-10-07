#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Spear {
        namespace {
            app::Spear__Class* type_info_ref = nullptr;
        }
        app::Spear__Class** type_info = &type_info_ref;
        inline app::Spear__Class* get_class() {
            return il2cpp::get_class<app::Spear__Class>(type_info, "", "Spear");
        }
        inline app::Spear* create() {
            return il2cpp::create_object<app::Spear>(get_class());
        }
    } // namespace Spear
} // namespace app::classes::types