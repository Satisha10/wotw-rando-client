#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SurfaceMaterialSoundPair {
        namespace {
            app::SurfaceMaterialSoundPair__Class* type_info_ref = nullptr;
        }
        app::SurfaceMaterialSoundPair__Class** type_info = &type_info_ref;
        inline app::SurfaceMaterialSoundPair__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialSoundPair__Class>(type_info, "", "SurfaceMaterialSoundPair");
        }
        inline app::SurfaceMaterialSoundPair* create() {
            return il2cpp::create_object<app::SurfaceMaterialSoundPair>(get_class());
        }
    } // namespace SurfaceMaterialSoundPair
} // namespace app::classes::types