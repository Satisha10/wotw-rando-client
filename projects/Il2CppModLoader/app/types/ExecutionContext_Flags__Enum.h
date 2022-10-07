#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExecutionContext_Flags__Enum {
        namespace {
            app::ExecutionContext_Flags__Enum__Class* type_info_ref = nullptr;
        }
        app::ExecutionContext_Flags__Enum__Class** type_info = &type_info_ref;
        inline app::ExecutionContext_Flags__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ExecutionContext_Flags__Enum__Class>(type_info, "System.Threading", "ExecutionContext", "Flags");
        }
        inline app::ExecutionContext_Flags__Enum* create() {
            return il2cpp::create_object<app::ExecutionContext_Flags__Enum>(get_class());
        }
    } // namespace ExecutionContext_Flags__Enum
} // namespace app::classes::types