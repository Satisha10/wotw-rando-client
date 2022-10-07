#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityLineage {
        namespace {
            app::EntityLineage__Class* type_info_ref = nullptr;
        }
        app::EntityLineage__Class** type_info = &type_info_ref;
        inline app::EntityLineage__Class* get_class() {
            return il2cpp::get_class<app::EntityLineage__Class>(type_info, "PlayFab.ProfilesModels", "EntityLineage");
        }
        inline app::EntityLineage* create() {
            return il2cpp::create_object<app::EntityLineage>(get_class());
        }
    } // namespace EntityLineage
} // namespace app::classes::types