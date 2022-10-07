#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamAchievements_c_DisplayClass15_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SteamAchievements_c_DisplayClass15_0__Class** type_info;
        inline app::SteamAchievements_c_DisplayClass15_0__Class* get_class() {
            return il2cpp::get_nested_class<app::SteamAchievements_c_DisplayClass15_0__Class>(type_info, "SystemIntegration.Synchronizer.Achievements", "SteamAchievements", "<>c__DisplayClass15_0");
        }
        inline app::SteamAchievements_c_DisplayClass15_0* create() {
            return il2cpp::create_object<app::SteamAchievements_c_DisplayClass15_0>(get_class());
        }
    } // namespace SteamAchievements_c_DisplayClass15_0
} // namespace app::classes::types