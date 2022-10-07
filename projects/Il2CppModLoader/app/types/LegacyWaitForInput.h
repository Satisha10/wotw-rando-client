#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyWaitForInput {
        namespace {
            app::LegacyWaitForInput__Class* type_info_ref = nullptr;
        }
        app::LegacyWaitForInput__Class** type_info = &type_info_ref;
        inline app::LegacyWaitForInput__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForInput__Class>(type_info, "", "LegacyWaitForInput");
        }
        inline app::LegacyWaitForInput* create() {
            return il2cpp::create_object<app::LegacyWaitForInput>(get_class());
        }
    } // namespace LegacyWaitForInput
} // namespace app::classes::types