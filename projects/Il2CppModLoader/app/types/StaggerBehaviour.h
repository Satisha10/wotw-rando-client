#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StaggerBehaviour {
        namespace {
            app::StaggerBehaviour__Class* type_info_ref = nullptr;
        }
        app::StaggerBehaviour__Class** type_info = &type_info_ref;
        inline app::StaggerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaggerBehaviour__Class>(type_info, "", "StaggerBehaviour");
        }
        inline app::StaggerBehaviour* create() {
            return il2cpp::create_object<app::StaggerBehaviour>(get_class());
        }
    } // namespace StaggerBehaviour
} // namespace app::classes::types