#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MakeEnemyAttackPlayerAction {
        namespace {
            app::MakeEnemyAttackPlayerAction__Class* type_info_ref = nullptr;
        }
        app::MakeEnemyAttackPlayerAction__Class** type_info = &type_info_ref;
        inline app::MakeEnemyAttackPlayerAction__Class* get_class() {
            return il2cpp::get_class<app::MakeEnemyAttackPlayerAction__Class>(type_info, "", "MakeEnemyAttackPlayerAction");
        }
        inline app::MakeEnemyAttackPlayerAction* create() {
            return il2cpp::create_object<app::MakeEnemyAttackPlayerAction>(get_class());
        }
    } // namespace MakeEnemyAttackPlayerAction
} // namespace app::classes::types