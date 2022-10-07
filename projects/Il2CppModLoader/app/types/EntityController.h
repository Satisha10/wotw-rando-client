#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityController {
        namespace {
            app::EntityController__Class* type_info_ref = nullptr;
        }
        app::EntityController__Class** type_info = &type_info_ref;
        inline app::EntityController__Class* get_class() {
            return il2cpp::get_class<app::EntityController__Class>(type_info, "", "EntityController");
        }
        inline app::EntityController* create() {
            return il2cpp::create_object<app::EntityController>(get_class());
        }
    } // namespace EntityController
} // namespace app::classes::types