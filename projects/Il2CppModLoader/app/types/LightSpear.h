#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightSpear {
        namespace {
            app::LightSpear__Class* type_info_ref = nullptr;
        }
        app::LightSpear__Class** type_info = &type_info_ref;
        inline app::LightSpear__Class* get_class() {
            return il2cpp::get_class<app::LightSpear__Class>(type_info, "", "LightSpear");
        }
        inline app::LightSpear* create() {
            return il2cpp::create_object<app::LightSpear>(get_class());
        }
    } // namespace LightSpear
} // namespace app::classes::types