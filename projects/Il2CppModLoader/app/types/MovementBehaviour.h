#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovementBehaviour {
        namespace {
            app::MovementBehaviour__Class* type_info_ref = nullptr;
        }
        app::MovementBehaviour__Class** type_info = &type_info_ref;
        inline app::MovementBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MovementBehaviour__Class>(type_info, "", "MovementBehaviour");
        }
        inline app::MovementBehaviour* create() {
            return il2cpp::create_object<app::MovementBehaviour>(get_class());
        }
    } // namespace MovementBehaviour
} // namespace app::classes::types