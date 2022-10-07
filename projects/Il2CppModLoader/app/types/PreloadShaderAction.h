#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PreloadShaderAction {
        namespace {
            app::PreloadShaderAction__Class* type_info_ref = nullptr;
        }
        app::PreloadShaderAction__Class** type_info = &type_info_ref;
        inline app::PreloadShaderAction__Class* get_class() {
            return il2cpp::get_class<app::PreloadShaderAction__Class>(type_info, "", "PreloadShaderAction");
        }
        inline app::PreloadShaderAction* create() {
            return il2cpp::create_object<app::PreloadShaderAction>(get_class());
        }
    } // namespace PreloadShaderAction
} // namespace app::classes::types