#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainData_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TerrainData_1__Class** type_info;
        inline app::TerrainData_1__Class* get_class() {
            return il2cpp::get_class<app::TerrainData_1__Class>(type_info, "UnityEngine", "TerrainData");
        }
        inline app::TerrainData_1* create() {
            return il2cpp::create_object<app::TerrainData_1>(get_class());
        }
    } // namespace TerrainData_1
} // namespace app::classes::types