#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum {
        namespace {
            app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class* type_info_ref = nullptr;
        }
        app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class** type_info = &type_info_ref;
        inline app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum__Class>(type_info, "", "AkWindowsSettings+PlatformAdvancedSettings", "AudioAPI");
        }
        inline app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum* create() {
            return il2cpp::create_object<app::AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum>(get_class());
        }
    } // namespace AkWindowsSettings_PlatformAdvancedSettings_AudioAPI__Enum
} // namespace app::classes::types