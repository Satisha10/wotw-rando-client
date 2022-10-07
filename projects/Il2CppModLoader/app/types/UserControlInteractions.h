#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UserControlInteractions {
        namespace {
            app::UserControlInteractions__Class* type_info_ref = nullptr;
        }
        app::UserControlInteractions__Class** type_info = &type_info_ref;
        inline app::UserControlInteractions__Class* get_class() {
            return il2cpp::get_class<app::UserControlInteractions__Class>(type_info, "RootMotion.Demos", "UserControlInteractions");
        }
        inline app::UserControlInteractions* create() {
            return il2cpp::create_object<app::UserControlInteractions>(get_class());
        }
    } // namespace UserControlInteractions
} // namespace app::classes::types