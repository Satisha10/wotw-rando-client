#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GhostPlayer_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GhostPlayer_c__Class** type_info;
        inline app::GhostPlayer_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GhostPlayer_c__Class>(type_info, "", "GhostPlayer", "<>c");
        }
        inline app::GhostPlayer_c* create() {
            return il2cpp::create_object<app::GhostPlayer_c>(get_class());
        }
    } // namespace GhostPlayer_c
} // namespace app::classes::types