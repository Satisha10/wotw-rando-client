#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RockyEnemySpiritLeashedState {
        namespace {
            app::RockyEnemySpiritLeashedState__Class* type_info_ref = nullptr;
        }
        app::RockyEnemySpiritLeashedState__Class** type_info = &type_info_ref;
        inline app::RockyEnemySpiritLeashedState__Class* get_class() {
            return il2cpp::get_class<app::RockyEnemySpiritLeashedState__Class>(type_info, "", "RockyEnemySpiritLeashedState");
        }
        inline app::RockyEnemySpiritLeashedState* create() {
            return il2cpp::create_object<app::RockyEnemySpiritLeashedState>(get_class());
        }
    } // namespace RockyEnemySpiritLeashedState
} // namespace app::classes::types