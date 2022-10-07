#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NavMesh_OnNavMeshPreUpdate {
        namespace {
            app::NavMesh_OnNavMeshPreUpdate__Class* type_info_ref = nullptr;
        }
        app::NavMesh_OnNavMeshPreUpdate__Class** type_info = &type_info_ref;
        inline app::NavMesh_OnNavMeshPreUpdate__Class* get_class() {
            return il2cpp::get_nested_class<app::NavMesh_OnNavMeshPreUpdate__Class>(type_info, "UnityEngine.AI", "NavMesh", "OnNavMeshPreUpdate");
        }
        inline app::NavMesh_OnNavMeshPreUpdate* create() {
            return il2cpp::create_object<app::NavMesh_OnNavMeshPreUpdate>(get_class());
        }
    } // namespace NavMesh_OnNavMeshPreUpdate
} // namespace app::classes::types