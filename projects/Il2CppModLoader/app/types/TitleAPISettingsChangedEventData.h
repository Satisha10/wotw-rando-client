#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleAPISettingsChangedEventData {
        namespace {
            app::TitleAPISettingsChangedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleAPISettingsChangedEventData__Class** type_info = &type_info_ref;
        inline app::TitleAPISettingsChangedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAPISettingsChangedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleAPISettingsChangedEventData");
        }
        inline app::TitleAPISettingsChangedEventData* create() {
            return il2cpp::create_object<app::TitleAPISettingsChangedEventData>(get_class());
        }
    } // namespace TitleAPISettingsChangedEventData
} // namespace app::classes::types