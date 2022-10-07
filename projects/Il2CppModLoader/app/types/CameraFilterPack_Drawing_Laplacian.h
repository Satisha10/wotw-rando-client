#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Laplacian {
        namespace {
            app::CameraFilterPack_Drawing_Laplacian__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_Drawing_Laplacian__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_Laplacian__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Laplacian__Class>(type_info, "", "CameraFilterPack_Drawing_Laplacian");
        }
        inline app::CameraFilterPack_Drawing_Laplacian* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Laplacian>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Laplacian
} // namespace app::classes::types