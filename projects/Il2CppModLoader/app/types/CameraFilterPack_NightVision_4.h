#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_NightVision_4 {
        namespace {
            app::CameraFilterPack_NightVision_4__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_NightVision_4__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_NightVision_4__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_NightVision_4__Class>(type_info, "", "CameraFilterPack_NightVision_4");
        }
        inline app::CameraFilterPack_NightVision_4* create() {
            return il2cpp::create_object<app::CameraFilterPack_NightVision_4>(get_class());
        }
    } // namespace CameraFilterPack_NightVision_4
} // namespace app::classes::types