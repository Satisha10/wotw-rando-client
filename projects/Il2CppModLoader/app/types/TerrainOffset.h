#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TerrainOffset {
        namespace {
            app::TerrainOffset__Class* type_info_ref = nullptr;
        }
        app::TerrainOffset__Class** type_info = &type_info_ref;
        inline app::TerrainOffset__Class* get_class() {
            return il2cpp::get_class<app::TerrainOffset__Class>(type_info, "RootMotion.Demos", "TerrainOffset");
        }
        inline app::TerrainOffset* create() {
            return il2cpp::create_object<app::TerrainOffset>(get_class());
        }
    } // namespace TerrainOffset
} // namespace app::classes::types