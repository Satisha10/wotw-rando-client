#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationSpeedSettings {
        namespace {
            app::SeinAnimationSpeedSettings__Class* type_info_ref = nullptr;
        }
        app::SeinAnimationSpeedSettings__Class** type_info = &type_info_ref;
        inline app::SeinAnimationSpeedSettings__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationSpeedSettings__Class>(type_info, "", "SeinAnimationSpeedSettings");
        }
        inline app::SeinAnimationSpeedSettings* create() {
            return il2cpp::create_object<app::SeinAnimationSpeedSettings>(get_class());
        }
    } // namespace SeinAnimationSpeedSettings
} // namespace app::classes::types