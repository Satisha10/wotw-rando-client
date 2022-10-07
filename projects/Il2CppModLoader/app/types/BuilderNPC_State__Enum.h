#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderNPC_State__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderNPC_State__Enum__Class** type_info;
        inline app::BuilderNPC_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderNPC_State__Enum__Class>(type_info, "", "BuilderNPC", "State");
        }
        inline app::BuilderNPC_State__Enum* create() {
            return il2cpp::create_object<app::BuilderNPC_State__Enum>(get_class());
        }
    } // namespace BuilderNPC_State__Enum
} // namespace app::classes::types