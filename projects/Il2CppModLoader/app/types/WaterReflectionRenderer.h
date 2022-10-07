#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterReflectionRenderer {
        namespace {
            app::WaterReflectionRenderer__Class* type_info_ref = nullptr;
        }
        app::WaterReflectionRenderer__Class** type_info = &type_info_ref;
        inline app::WaterReflectionRenderer__Class* get_class() {
            return il2cpp::get_class<app::WaterReflectionRenderer__Class>(type_info, "", "WaterReflectionRenderer");
        }
        inline app::WaterReflectionRenderer* create() {
            return il2cpp::create_object<app::WaterReflectionRenderer>(get_class());
        }
    } // namespace WaterReflectionRenderer
} // namespace app::classes::types