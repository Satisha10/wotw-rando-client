#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourZone__Enum__Array {
        namespace {
            app::SpiderBossBehaviourZone__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::SpiderBossBehaviourZone__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossBehaviourZone__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourZone__Enum__Array__Class>(type_info, "", "SpiderBossBehaviourZone[]");
        }
        inline app::SpiderBossBehaviourZone__Enum__Array* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourZone__Enum__Array>(get_class());
        }
    } // namespace SpiderBossBehaviourZone__Enum__Array
} // namespace app::classes::types