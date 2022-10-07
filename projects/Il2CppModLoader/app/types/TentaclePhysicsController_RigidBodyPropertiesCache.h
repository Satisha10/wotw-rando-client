#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentaclePhysicsController_RigidBodyPropertiesCache {
        namespace {
            app::TentaclePhysicsController_RigidBodyPropertiesCache__Class* type_info_ref = nullptr;
        }
        app::TentaclePhysicsController_RigidBodyPropertiesCache__Class** type_info = &type_info_ref;
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache__Class* get_class() {
            return il2cpp::get_nested_class<app::TentaclePhysicsController_RigidBodyPropertiesCache__Class>(type_info, "", "TentaclePhysicsController", "RigidBodyPropertiesCache");
        }
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache* create() {
            return il2cpp::create_object<app::TentaclePhysicsController_RigidBodyPropertiesCache>(get_class());
        }
        inline app::TentaclePhysicsController_RigidBodyPropertiesCache__Boxed* box(app::TentaclePhysicsController_RigidBodyPropertiesCache value) {
            return il2cpp::box_value<app::TentaclePhysicsController_RigidBodyPropertiesCache__Boxed>(get_class(), value);
        }
    } // namespace TentaclePhysicsController_RigidBodyPropertiesCache
} // namespace app::classes::types