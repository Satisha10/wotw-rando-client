#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CC_BrightnessContrastGamma {
        namespace {
            app::CC_BrightnessContrastGamma__Class* type_info_ref = nullptr;
        }
        app::CC_BrightnessContrastGamma__Class** type_info = &type_info_ref;
        inline app::CC_BrightnessContrastGamma__Class* get_class() {
            return il2cpp::get_class<app::CC_BrightnessContrastGamma__Class>(type_info, "", "CC_BrightnessContrastGamma");
        }
        inline app::CC_BrightnessContrastGamma* create() {
            return il2cpp::create_object<app::CC_BrightnessContrastGamma>(get_class());
        }
    } // namespace CC_BrightnessContrastGamma
} // namespace app::classes::types