#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DateTimeParse_TM__Enum {
        namespace {
            app::DateTimeParse_TM__Enum__Class* type_info_ref = nullptr;
        }
        app::DateTimeParse_TM__Enum__Class** type_info = &type_info_ref;
        inline app::DateTimeParse_TM__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DateTimeParse_TM__Enum__Class>(type_info, "System", "DateTimeParse", "TM");
        }
        inline app::DateTimeParse_TM__Enum* create() {
            return il2cpp::create_object<app::DateTimeParse_TM__Enum>(get_class());
        }
    } // namespace DateTimeParse_TM__Enum
} // namespace app::classes::types