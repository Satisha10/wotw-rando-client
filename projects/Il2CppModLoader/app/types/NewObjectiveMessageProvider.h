#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NewObjectiveMessageProvider {
        namespace {
            app::NewObjectiveMessageProvider__Class* type_info_ref = nullptr;
        }
        app::NewObjectiveMessageProvider__Class** type_info = &type_info_ref;
        inline app::NewObjectiveMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::NewObjectiveMessageProvider__Class>(type_info, "", "NewObjectiveMessageProvider");
        }
        inline app::NewObjectiveMessageProvider* create() {
            return il2cpp::create_object<app::NewObjectiveMessageProvider>(get_class());
        }
    } // namespace NewObjectiveMessageProvider
} // namespace app::classes::types