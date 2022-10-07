#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InventoryScreenPickupElements__Array {
        namespace {
            app::InventoryScreenPickupElements__Array__Class* type_info_ref = nullptr;
        }
        app::InventoryScreenPickupElements__Array__Class** type_info = &type_info_ref;
        inline app::InventoryScreenPickupElements__Array__Class* get_class() {
            return il2cpp::get_class<app::InventoryScreenPickupElements__Array__Class>(type_info, "", "InventoryScreenPickupElements[]");
        }
        inline app::InventoryScreenPickupElements__Array* create() {
            return il2cpp::create_object<app::InventoryScreenPickupElements__Array>(get_class());
        }
    } // namespace InventoryScreenPickupElements__Array
} // namespace app::classes::types