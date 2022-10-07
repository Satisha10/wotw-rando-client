#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObsoleteAttribute {
        namespace {
            app::ObsoleteAttribute__Class* type_info_ref = nullptr;
        }
        app::ObsoleteAttribute__Class** type_info = &type_info_ref;
        inline app::ObsoleteAttribute__Class* get_class() {
            return il2cpp::get_class<app::ObsoleteAttribute__Class>(type_info, "System", "ObsoleteAttribute");
        }
        inline app::ObsoleteAttribute* create() {
            return il2cpp::create_object<app::ObsoleteAttribute>(get_class());
        }
    } // namespace ObsoleteAttribute
} // namespace app::classes::types