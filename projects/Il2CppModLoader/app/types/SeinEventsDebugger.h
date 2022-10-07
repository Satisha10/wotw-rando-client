#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinEventsDebugger {
        namespace {
            app::SeinEventsDebugger__Class* type_info_ref = nullptr;
        }
        app::SeinEventsDebugger__Class** type_info = &type_info_ref;
        inline app::SeinEventsDebugger__Class* get_class() {
            return il2cpp::get_class<app::SeinEventsDebugger__Class>(type_info, "", "SeinEventsDebugger");
        }
        inline app::SeinEventsDebugger* create() {
            return il2cpp::create_object<app::SeinEventsDebugger>(get_class());
        }
    } // namespace SeinEventsDebugger
} // namespace app::classes::types