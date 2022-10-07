#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentSelectionGrid_EquipmentAnchorGroup__Array {
        namespace {
            app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class* type_info_ref = nullptr;
        }
        app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class>(type_info, "", "EquipmentSelectionGrid+EquipmentAnchorGroup[]");
        }
        inline app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array* create() {
            return il2cpp::create_object<app::EquipmentSelectionGrid_EquipmentAnchorGroup__Array>(get_class());
        }
    } // namespace EquipmentSelectionGrid_EquipmentAnchorGroup__Array
} // namespace app::classes::types