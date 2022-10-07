#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserFavoriteItemsListChanged_t {
        namespace {
            app::UserFavoriteItemsListChanged_t__Class* type_info_ref = nullptr;
        }
        app::UserFavoriteItemsListChanged_t__Class** type_info = &type_info_ref;
        inline app::UserFavoriteItemsListChanged_t__Class* get_class() {
            return il2cpp::get_class<app::UserFavoriteItemsListChanged_t__Class>(type_info, "Steamworks", "UserFavoriteItemsListChanged_t");
        }
        inline app::UserFavoriteItemsListChanged_t* create() {
            return il2cpp::create_object<app::UserFavoriteItemsListChanged_t>(get_class());
        }
        inline app::UserFavoriteItemsListChanged_t__Boxed* box(app::UserFavoriteItemsListChanged_t value) {
            return il2cpp::box_value<app::UserFavoriteItemsListChanged_t__Boxed>(get_class(), value);
        }
    } // namespace UserFavoriteItemsListChanged_t
} // namespace app::classes::types