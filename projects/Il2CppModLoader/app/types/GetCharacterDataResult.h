#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetCharacterDataResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetCharacterDataResult__Class** type_info;
        inline app::GetCharacterDataResult__Class* get_class() {
            return il2cpp::get_class<app::GetCharacterDataResult__Class>(type_info, "PlayFab.ClientModels", "GetCharacterDataResult");
        }
        inline app::GetCharacterDataResult* create() {
            return il2cpp::create_object<app::GetCharacterDataResult>(get_class());
        }
    } // namespace GetCharacterDataResult
} // namespace app::classes::types