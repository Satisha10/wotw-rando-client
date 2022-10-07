#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OrbSpawnerManager_ItemToSpawn__Array {
        namespace {
            app::OrbSpawnerManager_ItemToSpawn__Array__Class* type_info_ref = nullptr;
        }
        app::OrbSpawnerManager_ItemToSpawn__Array__Class** type_info = &type_info_ref;
        inline app::OrbSpawnerManager_ItemToSpawn__Array__Class* get_class() {
            return il2cpp::get_class<app::OrbSpawnerManager_ItemToSpawn__Array__Class>(type_info, "", "OrbSpawnerManager+ItemToSpawn[]");
        }
        inline app::OrbSpawnerManager_ItemToSpawn__Array* create() {
            return il2cpp::create_object<app::OrbSpawnerManager_ItemToSpawn__Array>(get_class());
        }
    } // namespace OrbSpawnerManager_ItemToSpawn__Array
} // namespace app::classes::types