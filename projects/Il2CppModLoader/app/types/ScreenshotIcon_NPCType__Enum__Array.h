#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScreenshotIcon_NPCType__Enum__Array {
        namespace {
            app::ScreenshotIcon_NPCType__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::ScreenshotIcon_NPCType__Enum__Array__Class** type_info = &type_info_ref;
        inline app::ScreenshotIcon_NPCType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ScreenshotIcon_NPCType__Enum__Array__Class>(type_info, "", "ScreenshotIcon+NPCType[]");
        }
        inline app::ScreenshotIcon_NPCType__Enum__Array* create() {
            return il2cpp::create_object<app::ScreenshotIcon_NPCType__Enum__Array>(get_class());
        }
    } // namespace ScreenshotIcon_NPCType__Enum__Array
} // namespace app::classes::types