#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InsectLegPhysicsController {
        namespace {
            app::InsectLegPhysicsController__Class* type_info_ref = nullptr;
        }
        app::InsectLegPhysicsController__Class** type_info = &type_info_ref;
        inline app::InsectLegPhysicsController__Class* get_class() {
            return il2cpp::get_class<app::InsectLegPhysicsController__Class>(type_info, "", "InsectLegPhysicsController");
        }
        inline app::InsectLegPhysicsController* create() {
            return il2cpp::create_object<app::InsectLegPhysicsController>(get_class());
        }
    } // namespace InsectLegPhysicsController
} // namespace app::classes::types