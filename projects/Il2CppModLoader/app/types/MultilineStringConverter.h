#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MultilineStringConverter {
        namespace {
            app::MultilineStringConverter__Class* type_info_ref = nullptr;
        }
        app::MultilineStringConverter__Class** type_info = &type_info_ref;
        inline app::MultilineStringConverter__Class* get_class() {
            return il2cpp::get_class<app::MultilineStringConverter__Class>(type_info, "System.ComponentModel", "MultilineStringConverter");
        }
        inline app::MultilineStringConverter* create() {
            return il2cpp::create_object<app::MultilineStringConverter>(get_class());
        }
    } // namespace MultilineStringConverter
} // namespace app::classes::types