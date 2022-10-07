#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpitterEnemy {
        namespace {
            app::SpitterEnemy__Class* type_info_ref = nullptr;
        }
        app::SpitterEnemy__Class** type_info = &type_info_ref;
        inline app::SpitterEnemy__Class* get_class() {
            return il2cpp::get_class<app::SpitterEnemy__Class>(type_info, "", "SpitterEnemy");
        }
        inline app::SpitterEnemy* create() {
            return il2cpp::create_object<app::SpitterEnemy>(get_class());
        }
    } // namespace SpitterEnemy
} // namespace app::classes::types