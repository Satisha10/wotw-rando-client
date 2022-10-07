#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameMapUI_HintsSettings {
        namespace {
            app::GameMapUI_HintsSettings__Class* type_info_ref = nullptr;
        }
        app::GameMapUI_HintsSettings__Class** type_info = &type_info_ref;
        inline app::GameMapUI_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::GameMapUI_HintsSettings__Class>(type_info, "", "GameMapUI", "HintsSettings");
        }
        inline app::GameMapUI_HintsSettings* create() {
            return il2cpp::create_object<app::GameMapUI_HintsSettings>(get_class());
        }
        inline app::GameMapUI_HintsSettings__Boxed* box(app::GameMapUI_HintsSettings value) {
            return il2cpp::box_value<app::GameMapUI_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace GameMapUI_HintsSettings
} // namespace app::classes::types