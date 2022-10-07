#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SwarmAgent__Array {
        namespace {
            app::SwarmAgent__Array__Class* type_info_ref = nullptr;
        }
        app::SwarmAgent__Array__Class** type_info = &type_info_ref;
        inline app::SwarmAgent__Array__Class* get_class() {
            return il2cpp::get_class<app::SwarmAgent__Array__Class>(type_info, "", "SwarmAgent[]");
        }
        inline app::SwarmAgent__Array* create() {
            return il2cpp::create_object<app::SwarmAgent__Array>(get_class());
        }
    } // namespace SwarmAgent__Array
} // namespace app::classes::types