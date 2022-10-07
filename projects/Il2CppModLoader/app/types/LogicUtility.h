#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LogicUtility {
        namespace {
            app::LogicUtility__Class* type_info_ref = nullptr;
        }
        app::LogicUtility__Class** type_info = &type_info_ref;
        inline app::LogicUtility__Class* get_class() {
            return il2cpp::get_class<app::LogicUtility__Class>(type_info, "", "LogicUtility");
        }
        inline app::LogicUtility* create() {
            return il2cpp::create_object<app::LogicUtility>(get_class());
        }
    } // namespace LogicUtility
} // namespace app::classes::types