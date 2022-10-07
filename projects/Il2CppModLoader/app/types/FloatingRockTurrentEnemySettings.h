#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurrentEnemySettings {
        namespace {
            app::FloatingRockTurrentEnemySettings__Class* type_info_ref = nullptr;
        }
        app::FloatingRockTurrentEnemySettings__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurrentEnemySettings__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurrentEnemySettings__Class>(type_info, "", "FloatingRockTurrentEnemySettings");
        }
        inline app::FloatingRockTurrentEnemySettings* create() {
            return il2cpp::create_object<app::FloatingRockTurrentEnemySettings>(get_class());
        }
    } // namespace FloatingRockTurrentEnemySettings
} // namespace app::classes::types