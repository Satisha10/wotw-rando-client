#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShootingSpiderSettings {
        namespace {
            app::ShootingSpiderSettings__Class* type_info_ref = nullptr;
        }
        app::ShootingSpiderSettings__Class** type_info = &type_info_ref;
        inline app::ShootingSpiderSettings__Class* get_class() {
            return il2cpp::get_class<app::ShootingSpiderSettings__Class>(type_info, "", "ShootingSpiderSettings");
        }
        inline app::ShootingSpiderSettings* create() {
            return il2cpp::create_object<app::ShootingSpiderSettings>(get_class());
        }
    } // namespace ShootingSpiderSettings
} // namespace app::classes::types