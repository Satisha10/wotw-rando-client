#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShellSlugEntity {
        namespace {
            app::ShellSlugEntity__Class* type_info_ref = nullptr;
        }
        app::ShellSlugEntity__Class** type_info = &type_info_ref;
        inline app::ShellSlugEntity__Class* get_class() {
            return il2cpp::get_class<app::ShellSlugEntity__Class>(type_info, "", "ShellSlugEntity");
        }
        inline app::ShellSlugEntity* create() {
            return il2cpp::create_object<app::ShellSlugEntity>(get_class());
        }
    } // namespace ShellSlugEntity
} // namespace app::classes::types