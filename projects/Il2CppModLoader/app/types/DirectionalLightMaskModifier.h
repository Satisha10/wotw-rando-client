#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DirectionalLightMaskModifier {
        namespace {
            app::DirectionalLightMaskModifier__Class* type_info_ref = nullptr;
        }
        app::DirectionalLightMaskModifier__Class** type_info = &type_info_ref;
        inline app::DirectionalLightMaskModifier__Class* get_class() {
            return il2cpp::get_class<app::DirectionalLightMaskModifier__Class>(type_info, "", "DirectionalLightMaskModifier");
        }
        inline app::DirectionalLightMaskModifier* create() {
            return il2cpp::create_object<app::DirectionalLightMaskModifier>(get_class());
        }
    } // namespace DirectionalLightMaskModifier
} // namespace app::classes::types