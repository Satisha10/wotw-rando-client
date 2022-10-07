#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Image_OriginVertical__Enum {
        namespace {
            app::Image_OriginVertical__Enum__Class* type_info_ref = nullptr;
        }
        app::Image_OriginVertical__Enum__Class** type_info = &type_info_ref;
        inline app::Image_OriginVertical__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Image_OriginVertical__Enum__Class>(type_info, "UnityEngine.UI", "Image", "OriginVertical");
        }
        inline app::Image_OriginVertical__Enum* create() {
            return il2cpp::create_object<app::Image_OriginVertical__Enum>(get_class());
        }
    } // namespace Image_OriginVertical__Enum
} // namespace app::classes::types