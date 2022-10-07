#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSerpentPlaceholderMarker {
        namespace {
            app::WaterSerpentPlaceholderMarker__Class* type_info_ref = nullptr;
        }
        app::WaterSerpentPlaceholderMarker__Class** type_info = &type_info_ref;
        inline app::WaterSerpentPlaceholderMarker__Class* get_class() {
            return il2cpp::get_class<app::WaterSerpentPlaceholderMarker__Class>(type_info, "", "WaterSerpentPlaceholderMarker");
        }
        inline app::WaterSerpentPlaceholderMarker* create() {
            return il2cpp::create_object<app::WaterSerpentPlaceholderMarker>(get_class());
        }
    } // namespace WaterSerpentPlaceholderMarker
} // namespace app::classes::types