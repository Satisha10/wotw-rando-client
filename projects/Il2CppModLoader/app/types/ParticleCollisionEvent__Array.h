#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleCollisionEvent__Array {
        namespace {
            app::ParticleCollisionEvent__Array__Class* type_info_ref = nullptr;
        }
        app::ParticleCollisionEvent__Array__Class** type_info = &type_info_ref;
        inline app::ParticleCollisionEvent__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleCollisionEvent__Array__Class>(type_info, "UnityEngine", "ParticleCollisionEvent[]");
        }
        inline app::ParticleCollisionEvent__Array* create() {
            return il2cpp::create_object<app::ParticleCollisionEvent__Array>(get_class());
        }
    } // namespace ParticleCollisionEvent__Array
} // namespace app::classes::types