#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TaskState__Enum {
        namespace {
            app::TaskState__Enum__Class* type_info_ref = nullptr;
        }
        app::TaskState__Enum__Class** type_info = &type_info_ref;
        inline app::TaskState__Enum__Class* get_class() {
            return il2cpp::get_class<app::TaskState__Enum__Class>(type_info, "Moon.ArtOptimization", "TaskState");
        }
        inline app::TaskState__Enum* create() {
            return il2cpp::create_object<app::TaskState__Enum>(get_class());
        }
    } // namespace TaskState__Enum
} // namespace app::classes::types