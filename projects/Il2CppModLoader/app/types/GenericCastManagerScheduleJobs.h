#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericCastManagerScheduleJobs {
        namespace {
            app::GenericCastManagerScheduleJobs__Class* type_info_ref = nullptr;
        }
        app::GenericCastManagerScheduleJobs__Class** type_info = &type_info_ref;
        inline app::GenericCastManagerScheduleJobs__Class* get_class() {
            return il2cpp::get_class<app::GenericCastManagerScheduleJobs__Class>(type_info, "", "GenericCastManagerScheduleJobs");
        }
        inline app::GenericCastManagerScheduleJobs* create() {
            return il2cpp::create_object<app::GenericCastManagerScheduleJobs>(get_class());
        }
    } // namespace GenericCastManagerScheduleJobs
} // namespace app::classes::types