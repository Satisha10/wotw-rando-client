#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RijndaelManagedTransformMode__Enum {
        namespace {
            app::RijndaelManagedTransformMode__Enum__Class* type_info_ref = nullptr;
        }
        app::RijndaelManagedTransformMode__Enum__Class** type_info = &type_info_ref;
        inline app::RijndaelManagedTransformMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManagedTransformMode__Enum__Class>(type_info, "System.Security.Cryptography", "RijndaelManagedTransformMode");
        }
        inline app::RijndaelManagedTransformMode__Enum* create() {
            return il2cpp::create_object<app::RijndaelManagedTransformMode__Enum>(get_class());
        }
    } // namespace RijndaelManagedTransformMode__Enum
} // namespace app::classes::types