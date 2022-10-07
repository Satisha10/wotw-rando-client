#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityReactions {
        namespace {
            app::EntityReactions__Class* type_info_ref = nullptr;
        }
        app::EntityReactions__Class** type_info = &type_info_ref;
        inline app::EntityReactions__Class* get_class() {
            return il2cpp::get_class<app::EntityReactions__Class>(type_info, "", "EntityReactions");
        }
        inline app::EntityReactions* create() {
            return il2cpp::create_object<app::EntityReactions>(get_class());
        }
    } // namespace EntityReactions
} // namespace app::classes::types