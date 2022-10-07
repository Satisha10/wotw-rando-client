#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoginWithCustomIDRequest {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoginWithCustomIDRequest__Class** type_info;
        inline app::LoginWithCustomIDRequest__Class* get_class() {
            return il2cpp::get_class<app::LoginWithCustomIDRequest__Class>(type_info, "PlayFab.ClientModels", "LoginWithCustomIDRequest");
        }
        inline app::LoginWithCustomIDRequest* create() {
            return il2cpp::create_object<app::LoginWithCustomIDRequest>(get_class());
        }
    } // namespace LoginWithCustomIDRequest
} // namespace app::classes::types