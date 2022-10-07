#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VisibleLight__Array {
        namespace {
            app::VisibleLight__Array__Class* type_info_ref = nullptr;
        }
        app::VisibleLight__Array__Class** type_info = &type_info_ref;
        inline app::VisibleLight__Array__Class* get_class() {
            return il2cpp::get_class<app::VisibleLight__Array__Class>(type_info, "UnityEngine.Experimental.Rendering", "VisibleLight[]");
        }
        inline app::VisibleLight__Array* create() {
            return il2cpp::create_object<app::VisibleLight__Array>(get_class());
        }
    } // namespace VisibleLight__Array
} // namespace app::classes::types