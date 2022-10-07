#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MessageAndStackTrace__Array {
        namespace {
            app::MessageAndStackTrace__Array__Class* type_info_ref = nullptr;
        }
        app::MessageAndStackTrace__Array__Class** type_info = &type_info_ref;
        inline app::MessageAndStackTrace__Array__Class* get_class() {
            return il2cpp::get_class<app::MessageAndStackTrace__Array__Class>(type_info, "Moon.ContinuousIntegration", "MessageAndStackTrace[]");
        }
        inline app::MessageAndStackTrace__Array* create() {
            return il2cpp::create_object<app::MessageAndStackTrace__Array>(get_class());
        }
    } // namespace MessageAndStackTrace__Array
} // namespace app::classes::types