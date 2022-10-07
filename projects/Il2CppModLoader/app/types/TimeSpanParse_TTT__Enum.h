#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TTT__Enum {
        namespace {
            app::TimeSpanParse_TTT__Enum__Class* type_info_ref = nullptr;
        }
        app::TimeSpanParse_TTT__Enum__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TTT__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TTT__Enum__Class>(type_info, "System.Globalization", "TimeSpanParse", "TTT");
        }
        inline app::TimeSpanParse_TTT__Enum* create() {
            return il2cpp::create_object<app::TimeSpanParse_TTT__Enum>(get_class());
        }
    } // namespace TimeSpanParse_TTT__Enum
} // namespace app::classes::types