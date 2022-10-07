#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BanInfo__Array {
        namespace {
            app::BanInfo__Array__Class* type_info_ref = nullptr;
        }
        app::BanInfo__Array__Class** type_info = &type_info_ref;
        inline app::BanInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::BanInfo__Array__Class>(type_info, "PlayFab.ServerModels", "BanInfo[]");
        }
        inline app::BanInfo__Array* create() {
            return il2cpp::create_object<app::BanInfo__Array>(get_class());
        }
    } // namespace BanInfo__Array
} // namespace app::classes::types