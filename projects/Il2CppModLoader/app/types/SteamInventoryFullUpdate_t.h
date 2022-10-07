#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SteamInventoryFullUpdate_t {
        namespace {
            app::SteamInventoryFullUpdate_t__Class* type_info_ref = nullptr;
        }
        app::SteamInventoryFullUpdate_t__Class** type_info = &type_info_ref;
        inline app::SteamInventoryFullUpdate_t__Class* get_class() {
            return il2cpp::get_class<app::SteamInventoryFullUpdate_t__Class>(type_info, "Steamworks", "SteamInventoryFullUpdate_t");
        }
        inline app::SteamInventoryFullUpdate_t* create() {
            return il2cpp::create_object<app::SteamInventoryFullUpdate_t>(get_class());
        }
        inline app::SteamInventoryFullUpdate_t__Boxed* box(app::SteamInventoryFullUpdate_t value) {
            return il2cpp::box_value<app::SteamInventoryFullUpdate_t__Boxed>(get_class(), value);
        }
    } // namespace SteamInventoryFullUpdate_t
} // namespace app::classes::types