#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DemoTimeoutTimeMenuItem_TimeoutType__Enum {
        namespace {
            app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class* type_info_ref = nullptr;
        }
        app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class** type_info = &type_info_ref;
        inline app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DemoTimeoutTimeMenuItem_TimeoutType__Enum__Class>(type_info, "", "DemoTimeoutTimeMenuItem", "TimeoutType");
        }
        inline app::DemoTimeoutTimeMenuItem_TimeoutType__Enum* create() {
            return il2cpp::create_object<app::DemoTimeoutTimeMenuItem_TimeoutType__Enum>(get_class());
        }
    } // namespace DemoTimeoutTimeMenuItem_TimeoutType__Enum
} // namespace app::classes::types