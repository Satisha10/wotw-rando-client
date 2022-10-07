#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DeactivatePetrifiedFogAction {
        namespace {
            app::DeactivatePetrifiedFogAction__Class* type_info_ref = nullptr;
        }
        app::DeactivatePetrifiedFogAction__Class** type_info = &type_info_ref;
        inline app::DeactivatePetrifiedFogAction__Class* get_class() {
            return il2cpp::get_class<app::DeactivatePetrifiedFogAction__Class>(type_info, "", "DeactivatePetrifiedFogAction");
        }
        inline app::DeactivatePetrifiedFogAction* create() {
            return il2cpp::create_object<app::DeactivatePetrifiedFogAction>(get_class());
        }
    } // namespace DeactivatePetrifiedFogAction
} // namespace app::classes::types