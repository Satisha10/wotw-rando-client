#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeDependencyAttribute {
        namespace {
            app::TypeDependencyAttribute__Class* type_info_ref = nullptr;
        }
        app::TypeDependencyAttribute__Class** type_info = &type_info_ref;
        inline app::TypeDependencyAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeDependencyAttribute__Class>(type_info, "System.Runtime.CompilerServices", "TypeDependencyAttribute");
        }
        inline app::TypeDependencyAttribute* create() {
            return il2cpp::create_object<app::TypeDependencyAttribute>(get_class());
        }
    } // namespace TypeDependencyAttribute
} // namespace app::classes::types