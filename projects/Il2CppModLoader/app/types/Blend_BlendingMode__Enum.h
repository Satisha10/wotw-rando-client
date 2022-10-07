#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Blend_BlendingMode__Enum {
        namespace {
            app::Blend_BlendingMode__Enum__Class* type_info_ref = nullptr;
        }
        app::Blend_BlendingMode__Enum__Class** type_info = &type_info_ref;
        inline app::Blend_BlendingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Blend_BlendingMode__Enum__Class>(type_info, "Colorful", "Blend", "BlendingMode");
        }
        inline app::Blend_BlendingMode__Enum* create() {
            return il2cpp::create_object<app::Blend_BlendingMode__Enum>(get_class());
        }
    } // namespace Blend_BlendingMode__Enum
} // namespace app::classes::types