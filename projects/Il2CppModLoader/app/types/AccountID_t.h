#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AccountID_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AccountID_t__Class** type_info;
        inline app::AccountID_t__Class* get_class() {
            return il2cpp::get_class<app::AccountID_t__Class>(type_info, "Steamworks", "AccountID_t");
        }
        inline app::AccountID_t* create() {
            return il2cpp::create_object<app::AccountID_t>(get_class());
        }
        inline app::AccountID_t__Boxed* box(app::AccountID_t value) {
            return il2cpp::box_value<app::AccountID_t__Boxed>(get_class(), value);
        }
    } // namespace AccountID_t
} // namespace app::classes::types