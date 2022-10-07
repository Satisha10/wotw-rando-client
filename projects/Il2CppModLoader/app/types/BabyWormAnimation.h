#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BabyWormAnimation {
        namespace {
            app::BabyWormAnimation__Class* type_info_ref = nullptr;
        }
        app::BabyWormAnimation__Class** type_info = &type_info_ref;
        inline app::BabyWormAnimation__Class* get_class() {
            return il2cpp::get_class<app::BabyWormAnimation__Class>(type_info, "", "BabyWormAnimation");
        }
        inline app::BabyWormAnimation* create() {
            return il2cpp::create_object<app::BabyWormAnimation>(get_class());
        }
    } // namespace BabyWormAnimation
} // namespace app::classes::types