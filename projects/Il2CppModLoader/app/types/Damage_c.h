#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Damage_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Damage_c__Class** type_info;
        inline app::Damage_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Damage_c__Class>(type_info, "", "Damage", "<>c");
        }
        inline app::Damage_c* create() {
            return il2cpp::create_object<app::Damage_c>(get_class());
        }
    } // namespace Damage_c
} // namespace app::classes::types