#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorSetupData__Array {
        namespace {
            app::DoorSetupData__Array__Class* type_info_ref = nullptr;
        }
        app::DoorSetupData__Array__Class** type_info = &type_info_ref;
        inline app::DoorSetupData__Array__Class* get_class() {
            return il2cpp::get_class<app::DoorSetupData__Array__Class>(type_info, "", "DoorSetupData[]");
        }
        inline app::DoorSetupData__Array* create() {
            return il2cpp::create_object<app::DoorSetupData__Array>(get_class());
        }
    } // namespace DoorSetupData__Array
} // namespace app::classes::types