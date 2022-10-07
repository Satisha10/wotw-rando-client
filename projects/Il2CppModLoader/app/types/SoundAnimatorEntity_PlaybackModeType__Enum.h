#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundAnimatorEntity_PlaybackModeType__Enum {
        namespace {
            app::SoundAnimatorEntity_PlaybackModeType__Enum__Class* type_info_ref = nullptr;
        }
        app::SoundAnimatorEntity_PlaybackModeType__Enum__Class** type_info = &type_info_ref;
        inline app::SoundAnimatorEntity_PlaybackModeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundAnimatorEntity_PlaybackModeType__Enum__Class>(type_info, "Moon.Timeline", "SoundAnimatorEntity", "PlaybackModeType");
        }
        inline app::SoundAnimatorEntity_PlaybackModeType__Enum* create() {
            return il2cpp::create_object<app::SoundAnimatorEntity_PlaybackModeType__Enum>(get_class());
        }
    } // namespace SoundAnimatorEntity_PlaybackModeType__Enum
} // namespace app::classes::types