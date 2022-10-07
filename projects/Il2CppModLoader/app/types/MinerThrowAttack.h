#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MinerThrowAttack {
        namespace {
            app::MinerThrowAttack__Class* type_info_ref = nullptr;
        }
        app::MinerThrowAttack__Class** type_info = &type_info_ref;
        inline app::MinerThrowAttack__Class* get_class() {
            return il2cpp::get_class<app::MinerThrowAttack__Class>(type_info, "", "MinerThrowAttack");
        }
        inline app::MinerThrowAttack* create() {
            return il2cpp::create_object<app::MinerThrowAttack>(get_class());
        }
    } // namespace MinerThrowAttack
} // namespace app::classes::types