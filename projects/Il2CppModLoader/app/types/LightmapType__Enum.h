#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LightmapType__Enum {
        namespace {
            app::LightmapType__Enum__Class* type_info_ref = nullptr;
        }
        app::LightmapType__Enum__Class** type_info = &type_info_ref;
        inline app::LightmapType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightmapType__Enum__Class>(type_info, "UnityEngineInternal", "LightmapType");
        }
        inline app::LightmapType__Enum* create() {
            return il2cpp::create_object<app::LightmapType__Enum>(get_class());
        }
    } // namespace LightmapType__Enum
} // namespace app::classes::types