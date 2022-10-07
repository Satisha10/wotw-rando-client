#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Reaction__Array {
        namespace {
            app::Reaction__Array__Class* type_info_ref = nullptr;
        }
        app::Reaction__Array__Class** type_info = &type_info_ref;
        inline app::Reaction__Array__Class* get_class() {
            return il2cpp::get_class<app::Reaction__Array__Class>(type_info, "Moon.Timeline", "Reaction[]");
        }
        inline app::Reaction__Array* create() {
            return il2cpp::create_object<app::Reaction__Array>(get_class());
        }
    } // namespace Reaction__Array
} // namespace app::classes::types