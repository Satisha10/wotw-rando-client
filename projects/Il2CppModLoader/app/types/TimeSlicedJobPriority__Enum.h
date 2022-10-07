#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSlicedJobPriority__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeSlicedJobPriority__Enum__Class** type_info;
        inline app::TimeSlicedJobPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::TimeSlicedJobPriority__Enum__Class>(type_info, "Moon.TimeSlicer", "TimeSlicedJobPriority");
        }
        inline app::TimeSlicedJobPriority__Enum* create() {
            return il2cpp::create_object<app::TimeSlicedJobPriority__Enum>(get_class());
        }
    } // namespace TimeSlicedJobPriority__Enum
} // namespace app::classes::types