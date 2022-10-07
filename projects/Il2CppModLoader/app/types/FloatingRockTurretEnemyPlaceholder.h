#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatingRockTurretEnemyPlaceholder {
        namespace {
            app::FloatingRockTurretEnemyPlaceholder__Class* type_info_ref = nullptr;
        }
        app::FloatingRockTurretEnemyPlaceholder__Class** type_info = &type_info_ref;
        inline app::FloatingRockTurretEnemyPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FloatingRockTurretEnemyPlaceholder__Class>(type_info, "", "FloatingRockTurretEnemyPlaceholder");
        }
        inline app::FloatingRockTurretEnemyPlaceholder* create() {
            return il2cpp::create_object<app::FloatingRockTurretEnemyPlaceholder>(get_class());
        }
    } // namespace FloatingRockTurretEnemyPlaceholder
} // namespace app::classes::types