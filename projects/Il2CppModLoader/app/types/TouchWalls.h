#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchWalls {
        namespace {
            app::TouchWalls__Class* type_info_ref = nullptr;
        }
        app::TouchWalls__Class** type_info = &type_info_ref;
        inline app::TouchWalls__Class* get_class() {
            return il2cpp::get_class<app::TouchWalls__Class>(type_info, "RootMotion.Demos", "TouchWalls");
        }
        inline app::TouchWalls* create() {
            return il2cpp::create_object<app::TouchWalls>(get_class());
        }
    } // namespace TouchWalls
} // namespace app::classes::types