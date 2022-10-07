#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerLoopHelper_InsertionMode__Enum {
        namespace {
            app::PlayerLoopHelper_InsertionMode__Enum__Class* type_info_ref = nullptr;
        }
        app::PlayerLoopHelper_InsertionMode__Enum__Class** type_info = &type_info_ref;
        inline app::PlayerLoopHelper_InsertionMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerLoopHelper_InsertionMode__Enum__Class>(type_info, "Moon", "PlayerLoopHelper", "InsertionMode");
        }
        inline app::PlayerLoopHelper_InsertionMode__Enum* create() {
            return il2cpp::create_object<app::PlayerLoopHelper_InsertionMode__Enum>(get_class());
        }
    } // namespace PlayerLoopHelper_InsertionMode__Enum
} // namespace app::classes::types