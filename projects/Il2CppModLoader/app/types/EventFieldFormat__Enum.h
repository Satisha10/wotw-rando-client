#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventFieldFormat__Enum {
        namespace {
            app::EventFieldFormat__Enum__Class* type_info_ref = nullptr;
        }
        app::EventFieldFormat__Enum__Class** type_info = &type_info_ref;
        inline app::EventFieldFormat__Enum__Class* get_class() {
            return il2cpp::get_class<app::EventFieldFormat__Enum__Class>(type_info, "System.Diagnostics.Tracing", "EventFieldFormat");
        }
        inline app::EventFieldFormat__Enum* create() {
            return il2cpp::create_object<app::EventFieldFormat__Enum>(get_class());
        }
    } // namespace EventFieldFormat__Enum
} // namespace app::classes::types