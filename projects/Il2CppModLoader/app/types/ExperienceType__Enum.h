#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExperienceType__Enum {
        namespace {
            app::ExperienceType__Enum__Class* type_info_ref = nullptr;
        }
        app::ExperienceType__Enum__Class** type_info = &type_info_ref;
        inline app::ExperienceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExperienceType__Enum__Class>(type_info, "ScreenshotIcons", "ExperienceType");
        }
        inline app::ExperienceType__Enum* create() {
            return il2cpp::create_object<app::ExperienceType__Enum>(get_class());
        }
    } // namespace ExperienceType__Enum
} // namespace app::classes::types