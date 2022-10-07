#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VolumeHasChanged_t {
        namespace {
            app::VolumeHasChanged_t__Class* type_info_ref = nullptr;
        }
        app::VolumeHasChanged_t__Class** type_info = &type_info_ref;
        inline app::VolumeHasChanged_t__Class* get_class() {
            return il2cpp::get_class<app::VolumeHasChanged_t__Class>(type_info, "Steamworks", "VolumeHasChanged_t");
        }
        inline app::VolumeHasChanged_t* create() {
            return il2cpp::create_object<app::VolumeHasChanged_t>(get_class());
        }
        inline app::VolumeHasChanged_t__Boxed* box(app::VolumeHasChanged_t value) {
            return il2cpp::box_value<app::VolumeHasChanged_t__Boxed>(get_class(), value);
        }
    } // namespace VolumeHasChanged_t
} // namespace app::classes::types