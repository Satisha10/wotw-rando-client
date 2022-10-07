#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StudioUserRemovedEventData {
        namespace {
            app::StudioUserRemovedEventData__Class* type_info_ref = nullptr;
        }
        app::StudioUserRemovedEventData__Class** type_info = &type_info_ref;
        inline app::StudioUserRemovedEventData__Class* get_class() {
            return il2cpp::get_class<app::StudioUserRemovedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "StudioUserRemovedEventData");
        }
        inline app::StudioUserRemovedEventData* create() {
            return il2cpp::create_object<app::StudioUserRemovedEventData>(get_class());
        }
    } // namespace StudioUserRemovedEventData
} // namespace app::classes::types