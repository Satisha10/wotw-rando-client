#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinGrabRope_VerticalVFXPlayer {
        namespace {
            app::SeinGrabRope_VerticalVFXPlayer__Class* type_info_ref = nullptr;
        }
        app::SeinGrabRope_VerticalVFXPlayer__Class** type_info = &type_info_ref;
        inline app::SeinGrabRope_VerticalVFXPlayer__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGrabRope_VerticalVFXPlayer__Class>(type_info, "", "SeinGrabRope", "VerticalVFXPlayer");
        }
        inline app::SeinGrabRope_VerticalVFXPlayer* create() {
            return il2cpp::create_object<app::SeinGrabRope_VerticalVFXPlayer>(get_class());
        }
    } // namespace SeinGrabRope_VerticalVFXPlayer
} // namespace app::classes::types