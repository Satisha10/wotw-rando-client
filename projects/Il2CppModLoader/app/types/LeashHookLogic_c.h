#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LeashHookLogic_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LeashHookLogic_c__Class** type_info;
        inline app::LeashHookLogic_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LeashHookLogic_c__Class>(type_info, "", "LeashHookLogic", "<>c");
        }
        inline app::LeashHookLogic_c* create() {
            return il2cpp::create_object<app::LeashHookLogic_c>(get_class());
        }
    } // namespace LeashHookLogic_c
} // namespace app::classes::types