#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Music_MusicTrack__Array {
        namespace {
            app::Music_MusicTrack__Array__Class* type_info_ref = nullptr;
        }
        app::Music_MusicTrack__Array__Class** type_info = &type_info_ref;
        inline app::Music_MusicTrack__Array__Class* get_class() {
            return il2cpp::get_class<app::Music_MusicTrack__Array__Class>(type_info, "Core", "Music+MusicTrack[]");
        }
        inline app::Music_MusicTrack__Array* create() {
            return il2cpp::create_object<app::Music_MusicTrack__Array>(get_class());
        }
    } // namespace Music_MusicTrack__Array
} // namespace app::classes::types