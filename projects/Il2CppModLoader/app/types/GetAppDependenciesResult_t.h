#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetAppDependenciesResult_t {
        namespace {
            app::GetAppDependenciesResult_t__Class* type_info_ref = nullptr;
        }
        app::GetAppDependenciesResult_t__Class** type_info = &type_info_ref;
        inline app::GetAppDependenciesResult_t__Class* get_class() {
            return il2cpp::get_class<app::GetAppDependenciesResult_t__Class>(type_info, "Steamworks", "GetAppDependenciesResult_t");
        }
        inline app::GetAppDependenciesResult_t* create() {
            return il2cpp::create_object<app::GetAppDependenciesResult_t>(get_class());
        }
        inline app::GetAppDependenciesResult_t__Boxed* box(app::GetAppDependenciesResult_t value) {
            return il2cpp::box_value<app::GetAppDependenciesResult_t__Boxed>(get_class(), value);
        }
    } // namespace GetAppDependenciesResult_t
} // namespace app::classes::types