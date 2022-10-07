#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StudioCreatedEventData {
        namespace {
            app::StudioCreatedEventData__Class* type_info_ref = nullptr;
        }
        app::StudioCreatedEventData__Class** type_info = &type_info_ref;
        inline app::StudioCreatedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioCreatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "StudioCreatedEventData");
        }
        inline app::StudioCreatedEventData* create() {
            return il2cpp::create_object<app::StudioCreatedEventData>(get_class());
        }
    } // namespace StudioCreatedEventData
} // namespace app::classes::types