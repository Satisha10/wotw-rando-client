#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace List_1_System_Byte__1__Array {
        namespace {
            app::List_1_System_Byte__1__Array__Class* type_info_ref = nullptr;
        }
        app::List_1_System_Byte__1__Array__Class** type_info = &type_info_ref;
        inline app::List_1_System_Byte__1__Array__Class* get_class() {
            return il2cpp::get_class<app::List_1_System_Byte__1__Array__Class>(type_info, "System.Collections.Generic", "List`1[System.Byte[]][]");
        }
        inline app::List_1_System_Byte__1__Array* create() {
            return il2cpp::create_object<app::List_1_System_Byte__1__Array>(get_class());
        }
    } // namespace List_1_System_Byte__1__Array
} // namespace app::classes::types