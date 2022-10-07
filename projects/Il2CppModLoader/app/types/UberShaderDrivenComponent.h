#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderDrivenComponent {
        namespace {
            app::UberShaderDrivenComponent__Class* type_info_ref = nullptr;
        }
        app::UberShaderDrivenComponent__Class** type_info = &type_info_ref;
        inline app::UberShaderDrivenComponent__Class* get_class() {
            return il2cpp::get_class<app::UberShaderDrivenComponent__Class>(type_info, "Moon.UI", "UberShaderDrivenComponent");
        }
        inline app::UberShaderDrivenComponent* create() {
            return il2cpp::create_object<app::UberShaderDrivenComponent>(get_class());
        }
    } // namespace UberShaderDrivenComponent
} // namespace app::classes::types