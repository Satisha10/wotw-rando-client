#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyWaitForTrigger {
        namespace {
            app::LegacyWaitForTrigger__Class* type_info_ref = nullptr;
        }
        app::LegacyWaitForTrigger__Class** type_info = &type_info_ref;
        inline app::LegacyWaitForTrigger__Class* get_class() {
            return il2cpp::get_class<app::LegacyWaitForTrigger__Class>(type_info, "", "LegacyWaitForTrigger");
        }
        inline app::LegacyWaitForTrigger* create() {
            return il2cpp::create_object<app::LegacyWaitForTrigger>(get_class());
        }
    } // namespace LegacyWaitForTrigger
} // namespace app::classes::types