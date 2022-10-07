#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraMultiplyMotionBlurAnimator {
        namespace {
            app::CameraMultiplyMotionBlurAnimator__Class* type_info_ref = nullptr;
        }
        app::CameraMultiplyMotionBlurAnimator__Class** type_info = &type_info_ref;
        inline app::CameraMultiplyMotionBlurAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraMultiplyMotionBlurAnimator__Class>(type_info, "", "CameraMultiplyMotionBlurAnimator");
        }
        inline app::CameraMultiplyMotionBlurAnimator* create() {
            return il2cpp::create_object<app::CameraMultiplyMotionBlurAnimator>(get_class());
        }
    } // namespace CameraMultiplyMotionBlurAnimator
} // namespace app::classes::types