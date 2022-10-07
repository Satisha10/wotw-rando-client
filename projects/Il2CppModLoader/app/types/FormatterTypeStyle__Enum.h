#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FormatterTypeStyle__Enum {
        namespace {
            app::FormatterTypeStyle__Enum__Class* type_info_ref = nullptr;
        }
        app::FormatterTypeStyle__Enum__Class** type_info = &type_info_ref;
        inline app::FormatterTypeStyle__Enum__Class* get_class() {
            return il2cpp::get_class<app::FormatterTypeStyle__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters", "FormatterTypeStyle");
        }
        inline app::FormatterTypeStyle__Enum* create() {
            return il2cpp::create_object<app::FormatterTypeStyle__Enum>(get_class());
        }
    } // namespace FormatterTypeStyle__Enum
} // namespace app::classes::types