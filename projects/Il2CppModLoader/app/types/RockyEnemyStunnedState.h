#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyStunnedState {
        namespace {
            app::RockyEnemyStunnedState__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyStunnedState__Class** type_info = &type_info_ref;
        inline app::RockyEnemyStunnedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyStunnedState__Class>(type_info, "", "RockyEnemyStunnedState");
        }
        inline app::RockyEnemyStunnedState* create() {
            return il2cpp::create_object<app::RockyEnemyStunnedState>(get_class());
        }
    } // namespace RockyEnemyStunnedState
} // namespace app::classes::types