#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateCharacterStatisticsResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateCharacterStatisticsResult_1__Class** type_info;
        inline app::UpdateCharacterStatisticsResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateCharacterStatisticsResult_1__Class>(type_info, "PlayFab.ServerModels", "UpdateCharacterStatisticsResult");
        }
        inline app::UpdateCharacterStatisticsResult_1* create() {
            return il2cpp::create_object<app::UpdateCharacterStatisticsResult_1>(get_class());
        }
    } // namespace UpdateCharacterStatisticsResult_1
} // namespace app::classes::types