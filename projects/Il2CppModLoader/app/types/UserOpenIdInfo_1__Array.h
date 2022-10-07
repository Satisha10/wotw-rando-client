#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserOpenIdInfo_1__Array {
        namespace {
            app::UserOpenIdInfo_1__Array__Class* type_info_ref = nullptr;
        }
        app::UserOpenIdInfo_1__Array__Class** type_info = &type_info_ref;
        inline app::UserOpenIdInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::UserOpenIdInfo_1__Array__Class>(type_info, "PlayFab.ServerModels", "UserOpenIdInfo[]");
        }
        inline app::UserOpenIdInfo_1__Array* create() {
            return il2cpp::create_object<app::UserOpenIdInfo_1__Array>(get_class());
        }
    } // namespace UserOpenIdInfo_1__Array
} // namespace app::classes::types