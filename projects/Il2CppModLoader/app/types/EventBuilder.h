#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventBuilder {
        namespace {
            app::EventBuilder__Class* type_info_ref = nullptr;
        }
        app::EventBuilder__Class** type_info = &type_info_ref;
        inline app::EventBuilder__Class* get_class() {
            return il2cpp::get_class<app::EventBuilder__Class>(type_info, "System.Reflection.Emit", "EventBuilder");
        }
        inline app::EventBuilder* create() {
            return il2cpp::create_object<app::EventBuilder>(get_class());
        }
    } // namespace EventBuilder
} // namespace app::classes::types