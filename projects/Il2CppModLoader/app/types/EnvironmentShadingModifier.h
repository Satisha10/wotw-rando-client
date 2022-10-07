#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentShadingModifier {
        namespace {
            app::EnvironmentShadingModifier__Class* type_info_ref = nullptr;
        }
        app::EnvironmentShadingModifier__Class** type_info = &type_info_ref;
        inline app::EnvironmentShadingModifier__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentShadingModifier__Class>(type_info, "", "EnvironmentShadingModifier");
        }
        inline app::EnvironmentShadingModifier* create() {
            return il2cpp::create_object<app::EnvironmentShadingModifier>(get_class());
        }
    } // namespace EnvironmentShadingModifier
} // namespace app::classes::types