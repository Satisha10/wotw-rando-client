#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeystoneDoorLogic {
        namespace {
            app::KeystoneDoorLogic__Class* type_info_ref = nullptr;
        }
        app::KeystoneDoorLogic__Class** type_info = &type_info_ref;
        inline app::KeystoneDoorLogic__Class* get_class() {
            return il2cpp::get_class<app::KeystoneDoorLogic__Class>(type_info, "", "KeystoneDoorLogic");
        }
        inline app::KeystoneDoorLogic* create() {
            return il2cpp::create_object<app::KeystoneDoorLogic>(get_class());
        }
    } // namespace KeystoneDoorLogic
} // namespace app::classes::types