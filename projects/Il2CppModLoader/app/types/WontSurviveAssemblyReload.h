#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WontSurviveAssemblyReload {
        namespace {
            app::WontSurviveAssemblyReload__Class* type_info_ref = nullptr;
        }
        app::WontSurviveAssemblyReload__Class** type_info = &type_info_ref;
        inline app::WontSurviveAssemblyReload__Class* get_class() {
            return il2cpp::get_class<app::WontSurviveAssemblyReload__Class>(type_info, "", "WontSurviveAssemblyReload");
        }
        inline app::WontSurviveAssemblyReload* create() {
            return il2cpp::create_object<app::WontSurviveAssemblyReload>(get_class());
        }
    } // namespace WontSurviveAssemblyReload
} // namespace app::classes::types