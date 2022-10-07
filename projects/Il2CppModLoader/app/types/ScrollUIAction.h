#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScrollUIAction {
        namespace {
            app::ScrollUIAction__Class* type_info_ref = nullptr;
        }
        app::ScrollUIAction__Class** type_info = &type_info_ref;
        inline app::ScrollUIAction__Class* get_class() {
            return il2cpp::get_class<app::ScrollUIAction__Class>(type_info, "", "ScrollUIAction");
        }
        inline app::ScrollUIAction* create() {
            return il2cpp::create_object<app::ScrollUIAction>(get_class());
        }
    } // namespace ScrollUIAction
} // namespace app::classes::types