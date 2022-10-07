#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeSpanParse_TimeSpanThrowStyle__Enum {
        namespace {
            app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class* type_info_ref = nullptr;
        }
        app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class** type_info = &type_info_ref;
        inline app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::TimeSpanParse_TimeSpanThrowStyle__Enum__Class>(type_info, "System.Globalization", "TimeSpanParse", "TimeSpanThrowStyle");
        }
        inline app::TimeSpanParse_TimeSpanThrowStyle__Enum* create() {
            return il2cpp::create_object<app::TimeSpanParse_TimeSpanThrowStyle__Enum>(get_class());
        }
    } // namespace TimeSpanParse_TimeSpanThrowStyle__Enum
} // namespace app::classes::types