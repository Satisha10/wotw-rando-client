#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyDiscoverWorldMapAreasAction {
        namespace {
            app::LegacyDiscoverWorldMapAreasAction__Class* type_info_ref = nullptr;
        }
        app::LegacyDiscoverWorldMapAreasAction__Class** type_info = &type_info_ref;
        inline app::LegacyDiscoverWorldMapAreasAction__Class* get_class() {
            return il2cpp::get_class<app::LegacyDiscoverWorldMapAreasAction__Class>(type_info, "", "LegacyDiscoverWorldMapAreasAction");
        }
        inline app::LegacyDiscoverWorldMapAreasAction* create() {
            return il2cpp::create_object<app::LegacyDiscoverWorldMapAreasAction>(get_class());
        }
    } // namespace LegacyDiscoverWorldMapAreasAction
} // namespace app::classes::types