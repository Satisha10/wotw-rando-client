#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellUIShardEquipStatus {
        namespace {
            app::SpellUIShardEquipStatus__Class* type_info_ref = nullptr;
        }
        app::SpellUIShardEquipStatus__Class** type_info = &type_info_ref;
        inline app::SpellUIShardEquipStatus__Class* get_class() {
            return il2cpp::get_class<app::SpellUIShardEquipStatus__Class>(type_info, "", "SpellUIShardEquipStatus");
        }
        inline app::SpellUIShardEquipStatus* create() {
            return il2cpp::create_object<app::SpellUIShardEquipStatus>(get_class());
        }
    } // namespace SpellUIShardEquipStatus
} // namespace app::classes::types