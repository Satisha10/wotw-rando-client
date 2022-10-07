#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityOperationPermit__Enum {
        namespace {
            app::EntityOperationPermit__Enum__Class* type_info_ref = nullptr;
        }
        app::EntityOperationPermit__Enum__Class** type_info = &type_info_ref;
        inline app::EntityOperationPermit__Enum__Class* get_class() {
            return il2cpp::get_class<app::EntityOperationPermit__Enum__Class>(type_info, "Moon.Timeline", "EntityOperationPermit");
        }
        inline app::EntityOperationPermit__Enum* create() {
            return il2cpp::create_object<app::EntityOperationPermit__Enum>(get_class());
        }
    } // namespace EntityOperationPermit__Enum
} // namespace app::classes::types