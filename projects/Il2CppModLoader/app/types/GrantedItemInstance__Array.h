#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrantedItemInstance__Array {
        namespace {
            app::GrantedItemInstance__Array__Class* type_info_ref = nullptr;
        }
        app::GrantedItemInstance__Array__Class** type_info = &type_info_ref;
        inline app::GrantedItemInstance__Array__Class* get_class() {
            return il2cpp::get_class<app::GrantedItemInstance__Array__Class>(type_info, "PlayFab.ServerModels", "GrantedItemInstance[]");
        }
        inline app::GrantedItemInstance__Array* create() {
            return il2cpp::create_object<app::GrantedItemInstance__Array>(get_class());
        }
    } // namespace GrantedItemInstance__Array
} // namespace app::classes::types