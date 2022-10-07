#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightTorchIsSolidCondition {
        namespace {
            app::LightTorchIsSolidCondition__Class* type_info_ref = nullptr;
        }
        app::LightTorchIsSolidCondition__Class** type_info = &type_info_ref;
        inline app::LightTorchIsSolidCondition__Class* get_class() {
            return il2cpp::get_class<app::LightTorchIsSolidCondition__Class>(type_info, "", "LightTorchIsSolidCondition");
        }
        inline app::LightTorchIsSolidCondition* create() {
            return il2cpp::create_object<app::LightTorchIsSolidCondition>(get_class());
        }
    } // namespace LightTorchIsSolidCondition
} // namespace app::classes::types