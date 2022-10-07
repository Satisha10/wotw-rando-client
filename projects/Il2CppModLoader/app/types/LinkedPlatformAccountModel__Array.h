#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkedPlatformAccountModel__Array {
        namespace {
            app::LinkedPlatformAccountModel__Array__Class* type_info_ref = nullptr;
        }
        app::LinkedPlatformAccountModel__Array__Class** type_info = &type_info_ref;
        inline app::LinkedPlatformAccountModel__Array__Class* get_class() {
            return il2cpp::get_class<app::LinkedPlatformAccountModel__Array__Class>(type_info, "PlayFab.ClientModels", "LinkedPlatformAccountModel[]");
        }
        inline app::LinkedPlatformAccountModel__Array* create() {
            return il2cpp::create_object<app::LinkedPlatformAccountModel__Array>(get_class());
        }
    } // namespace LinkedPlatformAccountModel__Array
} // namespace app::classes::types