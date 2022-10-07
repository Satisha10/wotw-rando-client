#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerProjectileSpawner {
        namespace {
            app::ServerProjectileSpawner__Class* type_info_ref = nullptr;
        }
        app::ServerProjectileSpawner__Class** type_info = &type_info_ref;
        inline app::ServerProjectileSpawner__Class* get_class() {
            return il2cpp::get_class<app::ServerProjectileSpawner__Class>(type_info, "", "ServerProjectileSpawner");
        }
        inline app::ServerProjectileSpawner* create() {
            return il2cpp::create_object<app::ServerProjectileSpawner>(get_class());
        }
    } // namespace ServerProjectileSpawner
} // namespace app::classes::types