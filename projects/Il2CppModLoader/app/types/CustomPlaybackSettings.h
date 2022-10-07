#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CustomPlaybackSettings {
        namespace {
            app::CustomPlaybackSettings__Class* type_info_ref = nullptr;
        }
        app::CustomPlaybackSettings__Class** type_info = &type_info_ref;
        inline app::CustomPlaybackSettings__Class* get_class() {
            return il2cpp::get_class<app::CustomPlaybackSettings__Class>(type_info, "Moon.Timeline", "CustomPlaybackSettings");
        }
        inline app::CustomPlaybackSettings* create() {
            return il2cpp::create_object<app::CustomPlaybackSettings>(get_class());
        }
    } // namespace CustomPlaybackSettings
} // namespace app::classes::types