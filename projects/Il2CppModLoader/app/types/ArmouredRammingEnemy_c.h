#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArmouredRammingEnemy_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArmouredRammingEnemy_c__Class** type_info;
        inline app::ArmouredRammingEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ArmouredRammingEnemy_c__Class>(type_info, "", "ArmouredRammingEnemy", "<>c");
        }
        inline app::ArmouredRammingEnemy_c* create() {
            return il2cpp::create_object<app::ArmouredRammingEnemy_c>(get_class());
        }
    } // namespace ArmouredRammingEnemy_c
} // namespace app::classes::types