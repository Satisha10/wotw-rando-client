#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuPushWall {
        namespace {
            app::KuPushWall__Class* type_info_ref = nullptr;
        }
        app::KuPushWall__Class** type_info = &type_info_ref;
        inline app::KuPushWall__Class* get_class() {
            return il2cpp::get_class<app::KuPushWall__Class>(type_info, "", "KuPushWall");
        }
        inline app::KuPushWall* create() {
            return il2cpp::create_object<app::KuPushWall>(get_class());
        }
    } // namespace KuPushWall
} // namespace app::classes::types