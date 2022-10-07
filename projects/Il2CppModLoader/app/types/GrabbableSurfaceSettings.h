#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GrabbableSurfaceSettings {
        namespace {
            app::GrabbableSurfaceSettings__Class* type_info_ref = nullptr;
        }
        app::GrabbableSurfaceSettings__Class** type_info = &type_info_ref;
        inline app::GrabbableSurfaceSettings__Class* get_class() {
            return il2cpp::get_class<app::GrabbableSurfaceSettings__Class>(type_info, "", "GrabbableSurfaceSettings");
        }
        inline app::GrabbableSurfaceSettings* create() {
            return il2cpp::create_object<app::GrabbableSurfaceSettings>(get_class());
        }
    } // namespace GrabbableSurfaceSettings
} // namespace app::classes::types