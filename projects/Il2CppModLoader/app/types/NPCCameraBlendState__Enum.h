#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NPCCameraBlendState__Enum {
        namespace {
            app::NPCCameraBlendState__Enum__Class* type_info_ref = nullptr;
        }
        app::NPCCameraBlendState__Enum__Class** type_info = &type_info_ref;
        inline app::NPCCameraBlendState__Enum__Class* get_class() {
            return il2cpp::get_class<app::NPCCameraBlendState__Enum__Class>(type_info, "Moon", "NPCCameraBlendState");
        }
        inline app::NPCCameraBlendState__Enum* create() {
            return il2cpp::create_object<app::NPCCameraBlendState__Enum>(get_class());
        }
    } // namespace NPCCameraBlendState__Enum
} // namespace app::classes::types