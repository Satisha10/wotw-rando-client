#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventLocation {
        namespace {
            app::EventLocation__Class* type_info_ref = nullptr;
        }
        app::EventLocation__Class** type_info = &type_info_ref;
        inline app::EventLocation__Class* get_class() {
            return il2cpp::get_class<app::EventLocation__Class>(type_info, "PlayFab.PlayStreamModels", "EventLocation");
        }
        inline app::EventLocation* create() {
            return il2cpp::create_object<app::EventLocation>(get_class());
        }
    } // namespace EventLocation
} // namespace app::classes::types