#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldAreaCondition {
        namespace {
            app::WorldMapOverworldAreaCondition__Class* type_info_ref = nullptr;
        }
        app::WorldMapOverworldAreaCondition__Class** type_info = &type_info_ref;
        inline app::WorldMapOverworldAreaCondition__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldAreaCondition__Class>(type_info, "", "WorldMapOverworldAreaCondition");
        }
        inline app::WorldMapOverworldAreaCondition* create() {
            return il2cpp::create_object<app::WorldMapOverworldAreaCondition>(get_class());
        }
    } // namespace WorldMapOverworldAreaCondition
} // namespace app::classes::types