#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MechSpiderLeg_Step_d_24 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MechSpiderLeg_Step_d_24__Class** type_info;
        inline app::MechSpiderLeg_Step_d_24__Class* get_class() {
            return il2cpp::get_nested_class<app::MechSpiderLeg_Step_d_24__Class>(type_info, "RootMotion.Demos", "MechSpiderLeg", "<Step>d__24");
        }
        inline app::MechSpiderLeg_Step_d_24* create() {
            return il2cpp::create_object<app::MechSpiderLeg_Step_d_24>(get_class());
        }
    } // namespace MechSpiderLeg_Step_d_24
} // namespace app::classes::types