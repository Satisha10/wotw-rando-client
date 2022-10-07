#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleNewsUpdatedEventData {
        namespace {
            app::TitleNewsUpdatedEventData__Class* type_info_ref = nullptr;
        }
        app::TitleNewsUpdatedEventData__Class** type_info = &type_info_ref;
        inline app::TitleNewsUpdatedEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleNewsUpdatedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleNewsUpdatedEventData");
        }
        inline app::TitleNewsUpdatedEventData* create() {
            return il2cpp::create_object<app::TitleNewsUpdatedEventData>(get_class());
        }
    } // namespace TitleNewsUpdatedEventData
} // namespace app::classes::types