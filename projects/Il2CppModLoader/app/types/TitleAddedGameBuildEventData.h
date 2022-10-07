#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TitleAddedGameBuildEventData {
        namespace {
            app::TitleAddedGameBuildEventData__Class* type_info_ref = nullptr;
        }
        app::TitleAddedGameBuildEventData__Class** type_info = &type_info_ref;
        inline app::TitleAddedGameBuildEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAddedGameBuildEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleAddedGameBuildEventData");
        }
        inline app::TitleAddedGameBuildEventData* create() {
            return il2cpp::create_object<app::TitleAddedGameBuildEventData>(get_class());
        }
    } // namespace TitleAddedGameBuildEventData
} // namespace app::classes::types