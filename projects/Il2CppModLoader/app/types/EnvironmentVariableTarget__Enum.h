#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnvironmentVariableTarget__Enum {
        namespace {
            app::EnvironmentVariableTarget__Enum__Class* type_info_ref = nullptr;
        }
        app::EnvironmentVariableTarget__Enum__Class** type_info = &type_info_ref;
        inline app::EnvironmentVariableTarget__Enum__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentVariableTarget__Enum__Class>(type_info, "System", "EnvironmentVariableTarget");
        }
        inline app::EnvironmentVariableTarget__Enum* create() {
            return il2cpp::create_object<app::EnvironmentVariableTarget__Enum>(get_class());
        }
    } // namespace EnvironmentVariableTarget__Enum
} // namespace app::classes::types