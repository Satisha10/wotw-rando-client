#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Tiles {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_TV_Tiles__Class** type_info;
        inline app::CameraFilterPack_TV_Tiles__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Tiles__Class>(type_info, "", "CameraFilterPack_TV_Tiles");
        }
        inline app::CameraFilterPack_TV_Tiles* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Tiles>(get_class());
        }
    } // namespace CameraFilterPack_TV_Tiles
} // namespace app::classes::types