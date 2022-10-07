#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourEventIdGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BehaviourEventIdGenerator__Class** type_info;
        inline app::BehaviourEventIdGenerator__Class* get_class() {
            return il2cpp::get_class<app::BehaviourEventIdGenerator__Class>(type_info, "UberBehaviourTree", "BehaviourEventIdGenerator");
        }
        inline app::BehaviourEventIdGenerator* create() {
            return il2cpp::create_object<app::BehaviourEventIdGenerator>(get_class());
        }
    } // namespace BehaviourEventIdGenerator
} // namespace app::classes::types