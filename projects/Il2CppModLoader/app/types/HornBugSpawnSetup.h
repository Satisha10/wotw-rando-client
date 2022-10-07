#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HornBugSpawnSetup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HornBugSpawnSetup__Class** type_info;
        inline app::HornBugSpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::HornBugSpawnSetup__Class>(type_info, "", "HornBugSpawnSetup");
        }
        inline app::HornBugSpawnSetup* create() {
            return il2cpp::create_object<app::HornBugSpawnSetup>(get_class());
        }
    } // namespace HornBugSpawnSetup
} // namespace app::classes::types