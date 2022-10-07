#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UInt16Enum__Enum__Array {
        namespace {
            app::UInt16Enum__Enum__Array__Class* type_info_ref = nullptr;
        }
        app::UInt16Enum__Enum__Array__Class** type_info = &type_info_ref;
        inline app::UInt16Enum__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::UInt16Enum__Enum__Array__Class>(type_info, "System", "UInt16Enum[]");
        }
        inline app::UInt16Enum__Enum__Array* create() {
            return il2cpp::create_object<app::UInt16Enum__Enum__Array>(get_class());
        }
    } // namespace UInt16Enum__Enum__Array
} // namespace app::classes::types