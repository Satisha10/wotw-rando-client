#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntitySpawnSetup {
        namespace {
            app::EntitySpawnSetup__Class* type_info_ref = nullptr;
        }
        app::EntitySpawnSetup__Class** type_info = &type_info_ref;
        inline app::EntitySpawnSetup__Class* get_class() {
            return il2cpp::get_class<app::EntitySpawnSetup__Class>(type_info, "", "EntitySpawnSetup");
        }
        inline app::EntitySpawnSetup* create() {
            return il2cpp::create_object<app::EntitySpawnSetup>(get_class());
        }
    } // namespace EntitySpawnSetup
} // namespace app::classes::types