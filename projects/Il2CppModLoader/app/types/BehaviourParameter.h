#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BehaviourParameter {
        namespace {
            app::BehaviourParameter__Class* type_info_ref = nullptr;
        }
        app::BehaviourParameter__Class** type_info = &type_info_ref;
        inline app::BehaviourParameter__Class* get_class() {
            return il2cpp::get_class<app::BehaviourParameter__Class>(type_info, "Moon.BehaviourSystem", "BehaviourParameter");
        }
        inline app::BehaviourParameter* create() {
            return il2cpp::create_object<app::BehaviourParameter>(get_class());
        }
    } // namespace BehaviourParameter
} // namespace app::classes::types