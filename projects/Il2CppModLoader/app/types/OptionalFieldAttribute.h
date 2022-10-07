#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OptionalFieldAttribute {
        namespace {
            app::OptionalFieldAttribute__Class* type_info_ref = nullptr;
        }
        app::OptionalFieldAttribute__Class** type_info = &type_info_ref;
        inline app::OptionalFieldAttribute__Class* get_class() {
            return il2cpp::get_class<app::OptionalFieldAttribute__Class>(type_info, "System.Runtime.Serialization", "OptionalFieldAttribute");
        }
        inline app::OptionalFieldAttribute* create() {
            return il2cpp::create_object<app::OptionalFieldAttribute>(get_class());
        }
    } // namespace OptionalFieldAttribute
} // namespace app::classes::types