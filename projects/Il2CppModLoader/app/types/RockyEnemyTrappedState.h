#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemyTrappedState {
        namespace {
            app::RockyEnemyTrappedState__Class* type_info_ref = nullptr;
        }
        app::RockyEnemyTrappedState__Class** type_info = &type_info_ref;
        inline app::RockyEnemyTrappedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemyTrappedState__Class>(type_info, "", "RockyEnemyTrappedState");
        }
        inline app::RockyEnemyTrappedState* create() {
            return il2cpp::create_object<app::RockyEnemyTrappedState>(get_class());
        }
    } // namespace RockyEnemyTrappedState
} // namespace app::classes::types