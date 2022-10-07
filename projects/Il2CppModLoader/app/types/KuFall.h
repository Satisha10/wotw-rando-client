#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuFall {
        namespace {
            app::KuFall__Class* type_info_ref = nullptr;
        }
        app::KuFall__Class** type_info = &type_info_ref;
        inline app::KuFall__Class* get_class() {
            return il2cpp::get_class<app::KuFall__Class>(type_info, "", "KuFall");
        }
        inline app::KuFall* create() {
            return il2cpp::create_object<app::KuFall>(get_class());
        }
    } // namespace KuFall
} // namespace app::classes::types