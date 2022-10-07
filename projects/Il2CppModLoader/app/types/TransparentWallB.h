#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TransparentWallB {
        namespace {
            app::TransparentWallB__Class* type_info_ref = nullptr;
        }
        app::TransparentWallB__Class** type_info = &type_info_ref;
        inline app::TransparentWallB__Class* get_class() {
            return il2cpp::get_class<app::TransparentWallB__Class>(type_info, "", "TransparentWallB");
        }
        inline app::TransparentWallB* create() {
            return il2cpp::create_object<app::TransparentWallB>(get_class());
        }
    } // namespace TransparentWallB
} // namespace app::classes::types