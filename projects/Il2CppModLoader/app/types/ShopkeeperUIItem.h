#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShopkeeperUIItem {
        namespace {
            app::ShopkeeperUIItem__Class* type_info_ref = nullptr;
        }
        app::ShopkeeperUIItem__Class** type_info = &type_info_ref;
        inline app::ShopkeeperUIItem__Class* get_class() {
            return il2cpp::get_class<app::ShopkeeperUIItem__Class>(type_info, "", "ShopkeeperUIItem");
        }
        inline app::ShopkeeperUIItem* create() {
            return il2cpp::create_object<app::ShopkeeperUIItem>(get_class());
        }
    } // namespace ShopkeeperUIItem
} // namespace app::classes::types