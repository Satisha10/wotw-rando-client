#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MotionBlurSlider {
        namespace {
            app::MotionBlurSlider__Class* type_info_ref = nullptr;
        }
        app::MotionBlurSlider__Class** type_info = &type_info_ref;
        inline app::MotionBlurSlider__Class* get_class() {
            return il2cpp::get_class<app::MotionBlurSlider__Class>(type_info, "", "MotionBlurSlider");
        }
        inline app::MotionBlurSlider* create() {
            return il2cpp::create_object<app::MotionBlurSlider>(get_class());
        }
    } // namespace MotionBlurSlider
} // namespace app::classes::types