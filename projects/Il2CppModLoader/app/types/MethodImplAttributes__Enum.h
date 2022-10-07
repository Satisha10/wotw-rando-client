#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodImplAttributes__Enum {
        namespace {
            app::MethodImplAttributes__Enum__Class* type_info_ref = nullptr;
        }
        app::MethodImplAttributes__Enum__Class** type_info = &type_info_ref;
        inline app::MethodImplAttributes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MethodImplAttributes__Enum__Class>(type_info, "System.Reflection", "MethodImplAttributes");
        }
        inline app::MethodImplAttributes__Enum* create() {
            return il2cpp::create_object<app::MethodImplAttributes__Enum>(get_class());
        }
    } // namespace MethodImplAttributes__Enum
} // namespace app::classes::types