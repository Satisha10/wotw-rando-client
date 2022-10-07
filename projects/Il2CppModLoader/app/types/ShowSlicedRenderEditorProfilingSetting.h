#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShowSlicedRenderEditorProfilingSetting {
        namespace {
            app::ShowSlicedRenderEditorProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::ShowSlicedRenderEditorProfilingSetting__Class** type_info = &type_info_ref;
        inline app::ShowSlicedRenderEditorProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::ShowSlicedRenderEditorProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ShowSlicedRenderEditorProfilingSetting");
        }
        inline app::ShowSlicedRenderEditorProfilingSetting* create() {
            return il2cpp::create_object<app::ShowSlicedRenderEditorProfilingSetting>(get_class());
        }
    } // namespace ShowSlicedRenderEditorProfilingSetting
} // namespace app::classes::types