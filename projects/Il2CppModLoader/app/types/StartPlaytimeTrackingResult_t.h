#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartPlaytimeTrackingResult_t {
        namespace {
            app::StartPlaytimeTrackingResult_t__Class* type_info_ref = nullptr;
        }
        app::StartPlaytimeTrackingResult_t__Class** type_info = &type_info_ref;
        inline app::StartPlaytimeTrackingResult_t__Class* get_class() {
            return il2cpp::get_class<app::StartPlaytimeTrackingResult_t__Class>(type_info, "Steamworks", "StartPlaytimeTrackingResult_t");
        }
        inline app::StartPlaytimeTrackingResult_t* create() {
            return il2cpp::create_object<app::StartPlaytimeTrackingResult_t>(get_class());
        }
        inline app::StartPlaytimeTrackingResult_t__Boxed* box(app::StartPlaytimeTrackingResult_t value) {
            return il2cpp::box_value<app::StartPlaytimeTrackingResult_t__Boxed>(get_class(), value);
        }
    } // namespace StartPlaytimeTrackingResult_t
} // namespace app::classes::types