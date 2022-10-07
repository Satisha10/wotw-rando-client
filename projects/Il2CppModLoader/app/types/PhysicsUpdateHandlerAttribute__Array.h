#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PhysicsUpdateHandlerAttribute__Array {
        namespace {
            app::PhysicsUpdateHandlerAttribute__Array__Class* type_info_ref = nullptr;
        }
        app::PhysicsUpdateHandlerAttribute__Array__Class** type_info = &type_info_ref;
        inline app::PhysicsUpdateHandlerAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicsUpdateHandlerAttribute__Array__Class>(type_info, "Moon", "PhysicsUpdateHandlerAttribute[]");
        }
        inline app::PhysicsUpdateHandlerAttribute__Array* create() {
            return il2cpp::create_object<app::PhysicsUpdateHandlerAttribute__Array>(get_class());
        }
    } // namespace PhysicsUpdateHandlerAttribute__Array
} // namespace app::classes::types