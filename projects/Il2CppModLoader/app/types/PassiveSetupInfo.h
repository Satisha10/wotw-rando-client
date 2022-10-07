#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PassiveSetupInfo {
        namespace {
            app::PassiveSetupInfo__Class* type_info_ref = nullptr;
        }
        app::PassiveSetupInfo__Class** type_info = &type_info_ref;
        inline app::PassiveSetupInfo__Class* get_class() {
            return il2cpp::get_class<app::PassiveSetupInfo__Class>(type_info, "", "PassiveSetupInfo");
        }
        inline app::PassiveSetupInfo* create() {
            return il2cpp::create_object<app::PassiveSetupInfo>(get_class());
        }
    } // namespace PassiveSetupInfo
} // namespace app::classes::types