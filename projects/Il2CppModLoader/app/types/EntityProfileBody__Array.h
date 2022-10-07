#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityProfileBody__Array {
        namespace {
            app::EntityProfileBody__Array__Class* type_info_ref = nullptr;
        }
        app::EntityProfileBody__Array__Class** type_info = &type_info_ref;
        inline app::EntityProfileBody__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityProfileBody__Array__Class>(type_info, "PlayFab.ProfilesModels", "EntityProfileBody[]");
        }
        inline app::EntityProfileBody__Array* create() {
            return il2cpp::create_object<app::EntityProfileBody__Array>(get_class());
        }
    } // namespace EntityProfileBody__Array
} // namespace app::classes::types