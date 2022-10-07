#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimelineMarkerRecord__Array {
        namespace {
            app::TimelineMarkerRecord__Array__Class* type_info_ref = nullptr;
        }
        app::TimelineMarkerRecord__Array__Class** type_info = &type_info_ref;
        inline app::TimelineMarkerRecord__Array__Class* get_class() {
            return il2cpp::get_class<app::TimelineMarkerRecord__Array__Class>(type_info, "Moon.Timeline", "TimelineMarkerRecord[]");
        }
        inline app::TimelineMarkerRecord__Array* create() {
            return il2cpp::create_object<app::TimelineMarkerRecord__Array>(get_class());
        }
    } // namespace TimelineMarkerRecord__Array
} // namespace app::classes::types