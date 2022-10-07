#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CGameID {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CGameID__Class** type_info;
        inline app::CGameID__Class* get_class() {
            return il2cpp::get_class<app::CGameID__Class>(type_info, "Steamworks", "CGameID");
        }
        inline app::CGameID* create() {
            return il2cpp::create_object<app::CGameID>(get_class());
        }
        inline app::CGameID__Boxed* box(app::CGameID value) {
            return il2cpp::box_value<app::CGameID__Boxed>(get_class(), value);
        }
    } // namespace CGameID
} // namespace app::classes::types