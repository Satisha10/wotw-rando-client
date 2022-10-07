#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointChains_Chain__Array {
        namespace {
            app::JointChains_Chain__Array__Class* type_info_ref = nullptr;
        }
        app::JointChains_Chain__Array__Class** type_info = &type_info_ref;
        inline app::JointChains_Chain__Array__Class* get_class() {
            return il2cpp::get_class<app::JointChains_Chain__Array__Class>(type_info, "Moon", "JointChains+Chain[]");
        }
        inline app::JointChains_Chain__Array* create() {
            return il2cpp::create_object<app::JointChains_Chain__Array>(get_class());
        }
    } // namespace JointChains_Chain__Array
} // namespace app::classes::types