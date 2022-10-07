#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Tile_ColliderType__Enum {
        namespace {
            app::Tile_ColliderType__Enum__Class* type_info_ref = nullptr;
        }
        app::Tile_ColliderType__Enum__Class** type_info = &type_info_ref;
        inline app::Tile_ColliderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Tile_ColliderType__Enum__Class>(type_info, "UnityEngine.Tilemaps", "Tile", "ColliderType");
        }
        inline app::Tile_ColliderType__Enum* create() {
            return il2cpp::create_object<app::Tile_ColliderType__Enum>(get_class());
        }
    } // namespace Tile_ColliderType__Enum
} // namespace app::classes::types