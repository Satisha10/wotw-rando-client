#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberGhostTrailMeshUpdate {
        namespace {
            app::UberGhostTrailMeshUpdate__Class* type_info_ref = nullptr;
        }
        app::UberGhostTrailMeshUpdate__Class** type_info = &type_info_ref;
        inline app::UberGhostTrailMeshUpdate__Class* get_class() {
            return il2cpp::get_class<app::UberGhostTrailMeshUpdate__Class>(type_info, "", "UberGhostTrailMeshUpdate");
        }
        inline app::UberGhostTrailMeshUpdate* create() {
            return il2cpp::create_object<app::UberGhostTrailMeshUpdate>(get_class());
        }
    } // namespace UberGhostTrailMeshUpdate
} // namespace app::classes::types