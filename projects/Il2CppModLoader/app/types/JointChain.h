#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JointChain {
        namespace {
            app::JointChain__Class* type_info_ref = nullptr;
        }
        app::JointChain__Class** type_info = &type_info_ref;
        inline app::JointChain__Class* get_class() {
            return il2cpp::get_class<app::JointChain__Class>(type_info, "Moon", "JointChain");
        }
        inline app::JointChain* create() {
            return il2cpp::create_object<app::JointChain>(get_class());
        }
    } // namespace JointChain
} // namespace app::classes::types