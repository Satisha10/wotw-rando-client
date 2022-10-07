#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderPrefabWarmer {
        namespace {
            app::UberShaderPrefabWarmer__Class* type_info_ref = nullptr;
        }
        app::UberShaderPrefabWarmer__Class** type_info = &type_info_ref;
        inline app::UberShaderPrefabWarmer__Class* get_class() {
            return il2cpp::get_class<app::UberShaderPrefabWarmer__Class>(type_info, "", "UberShaderPrefabWarmer");
        }
        inline app::UberShaderPrefabWarmer* create() {
            return il2cpp::create_object<app::UberShaderPrefabWarmer>(get_class());
        }
    } // namespace UberShaderPrefabWarmer
} // namespace app::classes::types