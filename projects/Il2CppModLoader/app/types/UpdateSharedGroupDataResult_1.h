#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateSharedGroupDataResult_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UpdateSharedGroupDataResult_1__Class** type_info;
        inline app::UpdateSharedGroupDataResult_1__Class* get_class() {
            return il2cpp::get_class<app::UpdateSharedGroupDataResult_1__Class>(type_info, "PlayFab.ServerModels", "UpdateSharedGroupDataResult");
        }
        inline app::UpdateSharedGroupDataResult_1* create() {
            return il2cpp::create_object<app::UpdateSharedGroupDataResult_1>(get_class());
        }
    } // namespace UpdateSharedGroupDataResult_1
} // namespace app::classes::types