#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MakeScriptableObject {
        namespace {
            app::MakeScriptableObject__Class* type_info_ref = nullptr;
        }
        app::MakeScriptableObject__Class** type_info = &type_info_ref;
        inline app::MakeScriptableObject__Class* get_class() {
            return il2cpp::get_class<app::MakeScriptableObject__Class>(type_info, "", "MakeScriptableObject");
        }
        inline app::MakeScriptableObject* create() {
            return il2cpp::create_object<app::MakeScriptableObject>(get_class());
        }
    } // namespace MakeScriptableObject
} // namespace app::classes::types