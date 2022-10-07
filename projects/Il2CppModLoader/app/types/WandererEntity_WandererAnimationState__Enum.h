#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererEntity_WandererAnimationState__Enum {
        namespace {
            app::WandererEntity_WandererAnimationState__Enum__Class* type_info_ref = nullptr;
        }
        app::WandererEntity_WandererAnimationState__Enum__Class** type_info = &type_info_ref;
        inline app::WandererEntity_WandererAnimationState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererEntity_WandererAnimationState__Enum__Class>(type_info, "", "WandererEntity", "WandererAnimationState");
        }
        inline app::WandererEntity_WandererAnimationState__Enum* create() {
            return il2cpp::create_object<app::WandererEntity_WandererAnimationState__Enum>(get_class());
        }
    } // namespace WandererEntity_WandererAnimationState__Enum
} // namespace app::classes::types