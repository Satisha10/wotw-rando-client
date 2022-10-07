#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListUsersCharactersRequest_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListUsersCharactersRequest_1__Class** type_info;
        inline app::ListUsersCharactersRequest_1__Class* get_class() {
            return il2cpp::get_class<app::ListUsersCharactersRequest_1__Class>(type_info, "PlayFab.ServerModels", "ListUsersCharactersRequest");
        }
        inline app::ListUsersCharactersRequest_1* create() {
            return il2cpp::create_object<app::ListUsersCharactersRequest_1>(get_class());
        }
    } // namespace ListUsersCharactersRequest_1
} // namespace app::classes::types