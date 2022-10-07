#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallType__Enum {
        namespace {
            app::CallType__Enum__Class* type_info_ref = nullptr;
        }
        app::CallType__Enum__Class** type_info = &type_info_ref;
        inline app::CallType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CallType__Enum__Class>(type_info, "System.Runtime.Remoting.Messaging", "CallType");
        }
        inline app::CallType__Enum* create() {
            return il2cpp::create_object<app::CallType__Enum>(get_class());
        }
    } // namespace CallType__Enum
} // namespace app::classes::types