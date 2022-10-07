#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterComponent {
        namespace {
            app::UberWaterComponent__Class* type_info_ref = nullptr;
        }
        app::UberWaterComponent__Class** type_info = &type_info_ref;
        inline app::UberWaterComponent__Class* get_class() {
            return il2cpp::get_class<app::UberWaterComponent__Class>(type_info, "", "UberWaterComponent");
        }
        inline app::UberWaterComponent* create() {
            return il2cpp::create_object<app::UberWaterComponent>(get_class());
        }
    } // namespace UberWaterComponent
} // namespace app::classes::types