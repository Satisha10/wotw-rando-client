#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyPlantLogic {
        namespace {
            app::EnergyPlantLogic__Class* type_info_ref = nullptr;
        }
        app::EnergyPlantLogic__Class** type_info = &type_info_ref;
        inline app::EnergyPlantLogic__Class* get_class() {
            return il2cpp::get_class<app::EnergyPlantLogic__Class>(type_info, "", "EnergyPlantLogic");
        }
        inline app::EnergyPlantLogic* create() {
            return il2cpp::create_object<app::EnergyPlantLogic>(get_class());
        }
    } // namespace EnergyPlantLogic
} // namespace app::classes::types