#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUIGroup {
        namespace {
            app::GUIGroup__Class* type_info_ref = nullptr;
        }
        app::GUIGroup__Class** type_info = &type_info_ref;
        inline app::GUIGroup__Class* get_class() {
            return il2cpp::get_class<app::GUIGroup__Class>(type_info, "Sini.Unity", "GUIGroup");
        }
        inline app::GUIGroup* create() {
            return il2cpp::create_object<app::GUIGroup>(get_class());
        }
        inline app::GUIGroup__Boxed* box(app::GUIGroup value) {
            return il2cpp::box_value<app::GUIGroup__Boxed>(get_class(), value);
        }
    } // namespace GUIGroup
} // namespace app::classes::types