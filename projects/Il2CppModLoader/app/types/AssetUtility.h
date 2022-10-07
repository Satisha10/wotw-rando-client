#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AssetUtility {
        namespace {
            app::AssetUtility__Class* type_info_ref = nullptr;
        }
        app::AssetUtility__Class** type_info = &type_info_ref;
        inline app::AssetUtility__Class* get_class() {
            return il2cpp::get_class<app::AssetUtility__Class>(type_info, "", "AssetUtility");
        }
        inline app::AssetUtility* create() {
            return il2cpp::create_object<app::AssetUtility>(get_class());
        }
    } // namespace AssetUtility
} // namespace app::classes::types