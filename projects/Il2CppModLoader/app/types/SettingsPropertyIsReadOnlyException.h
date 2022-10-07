#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SettingsPropertyIsReadOnlyException {
        namespace {
            app::SettingsPropertyIsReadOnlyException__Class* type_info_ref = nullptr;
        }
        app::SettingsPropertyIsReadOnlyException__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyIsReadOnlyException__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyIsReadOnlyException__Class>(type_info, "System.Configuration", "SettingsPropertyIsReadOnlyException");
        }
        inline app::SettingsPropertyIsReadOnlyException* create() {
            return il2cpp::create_object<app::SettingsPropertyIsReadOnlyException>(get_class());
        }
    } // namespace SettingsPropertyIsReadOnlyException
} // namespace app::classes::types