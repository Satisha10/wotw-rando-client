#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicLightsSettings {
        namespace {
            app::DynamicLightsSettings__Class* type_info_ref = nullptr;
        }
        app::DynamicLightsSettings__Class** type_info = &type_info_ref;
        inline app::DynamicLightsSettings__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightsSettings__Class>(type_info, "", "DynamicLightsSettings");
        }
        inline app::DynamicLightsSettings* create() {
            return il2cpp::create_object<app::DynamicLightsSettings>(get_class());
        }
    } // namespace DynamicLightsSettings
} // namespace app::classes::types