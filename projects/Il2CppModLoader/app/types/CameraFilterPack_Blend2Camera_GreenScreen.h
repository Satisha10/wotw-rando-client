#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Blend2Camera_GreenScreen {
        namespace {
            app::CameraFilterPack_Blend2Camera_GreenScreen__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Blend2Camera_GreenScreen__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Blend2Camera_GreenScreen__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Blend2Camera_GreenScreen__Class>(type_info, "", "CameraFilterPack_Blend2Camera_GreenScreen");
        }
        inline app::CameraFilterPack_Blend2Camera_GreenScreen* create() {
            return il2cpp::create_object<app::CameraFilterPack_Blend2Camera_GreenScreen>(get_class());
        }
    } // namespace CameraFilterPack_Blend2Camera_GreenScreen
} // namespace app::classes::types