#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DoorLogic {
        namespace {
            app::DoorLogic__Class* type_info_ref = nullptr;
        }
        app::DoorLogic__Class** type_info = &type_info_ref;
        inline app::DoorLogic__Class* get_class() {
            return il2cpp::get_class<app::DoorLogic__Class>(type_info, "", "DoorLogic");
        }
        inline app::DoorLogic* create() {
            return il2cpp::create_object<app::DoorLogic>(get_class());
        }
    } // namespace DoorLogic
} // namespace app::classes::types