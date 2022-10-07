#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlaybackStatusHasChanged_t {
        namespace {
            app::PlaybackStatusHasChanged_t__Class* type_info_ref = nullptr;
        }
        app::PlaybackStatusHasChanged_t__Class** type_info = &type_info_ref;
        inline app::PlaybackStatusHasChanged_t__Class* get_class() {
            return il2cpp::get_class<app::PlaybackStatusHasChanged_t__Class>(type_info, "Steamworks", "PlaybackStatusHasChanged_t");
        }
        inline app::PlaybackStatusHasChanged_t* create() {
            return il2cpp::create_object<app::PlaybackStatusHasChanged_t>(get_class());
        }
        inline app::PlaybackStatusHasChanged_t__Boxed* box(app::PlaybackStatusHasChanged_t value) {
            return il2cpp::box_value<app::PlaybackStatusHasChanged_t__Boxed>(get_class(), value);
        }
    } // namespace PlaybackStatusHasChanged_t
} // namespace app::classes::types