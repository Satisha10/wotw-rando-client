#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstanceMethodCallExpression1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstanceMethodCallExpression1__Class** type_info;
        inline app::InstanceMethodCallExpression1__Class* get_class() {
            return il2cpp::get_class<app::InstanceMethodCallExpression1__Class>(type_info, "System.Linq.Expressions", "InstanceMethodCallExpression1");
        }
        inline app::InstanceMethodCallExpression1* create() {
            return il2cpp::create_object<app::InstanceMethodCallExpression1>(get_class());
        }
    } // namespace InstanceMethodCallExpression1
} // namespace app::classes::types