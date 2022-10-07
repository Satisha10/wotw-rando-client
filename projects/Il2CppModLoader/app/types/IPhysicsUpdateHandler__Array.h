#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPhysicsUpdateHandler__Array {
        namespace {
            app::IPhysicsUpdateHandler__Array__Class* type_info_ref = nullptr;
        }
        app::IPhysicsUpdateHandler__Array__Class** type_info = &type_info_ref;
        inline app::IPhysicsUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IPhysicsUpdateHandler__Array__Class>(type_info, "Moon", "IPhysicsUpdateHandler[]");
        }
        inline app::IPhysicsUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IPhysicsUpdateHandler__Array>(get_class());
        }
    } // namespace IPhysicsUpdateHandler__Array
} // namespace app::classes::types