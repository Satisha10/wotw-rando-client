#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomWater {
        namespace {
            app::CustomWater__Class* type_info_ref = nullptr;
        }
        app::CustomWater__Class** type_info = &type_info_ref;
        inline app::CustomWater__Class* get_class() {
            return il2cpp::get_class<app::CustomWater__Class>(type_info, "", "CustomWater");
        }
        inline app::CustomWater* create() {
            return il2cpp::create_object<app::CustomWater>(get_class());
        }
    } // namespace CustomWater
} // namespace app::classes::types