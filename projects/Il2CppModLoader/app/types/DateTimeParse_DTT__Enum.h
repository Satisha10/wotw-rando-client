#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_DTT__Enum {
        namespace {
            app::DateTimeParse_DTT__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeParse_DTT__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeParse_DTT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_DTT__Enum__Class>(type_info, "System", "DateTimeParse", "DTT");
        }
        inline app::DateTimeParse_DTT__Enum* create() {
            return il2cpp::create_object<app::DateTimeParse_DTT__Enum>(get_class());
        }
    } // namespace DateTimeParse_DTT__Enum
} // namespace app::classes::types