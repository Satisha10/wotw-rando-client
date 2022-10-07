#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PickupMessageIcon_PickupType__Enum {
        namespace {
            app::PickupMessageIcon_PickupType__Enum__Class* type_info_ref = nullptr;
        }
        app::PickupMessageIcon_PickupType__Enum__Class** type_info = &type_info_ref;
        inline app::PickupMessageIcon_PickupType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PickupMessageIcon_PickupType__Enum__Class>(type_info, "", "PickupMessageIcon", "PickupType");
        }
        inline app::PickupMessageIcon_PickupType__Enum* create() {
            return il2cpp::create_object<app::PickupMessageIcon_PickupType__Enum>(get_class());
        }
    } // namespace PickupMessageIcon_PickupType__Enum
} // namespace app::classes::types