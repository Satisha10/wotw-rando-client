#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugHubItem__Array {
        namespace {
            app::DebugHubItem__Array__Class* type_info_ref = nullptr;
        }
        app::DebugHubItem__Array__Class** type_info = &type_info_ref;
        inline app::DebugHubItem__Array__Class* get_class() {
            return il2cpp::get_class<app::DebugHubItem__Array__Class>(type_info, "", "DebugHubItem[]");
        }
        inline app::DebugHubItem__Array* create() {
            return il2cpp::create_object<app::DebugHubItem__Array>(get_class());
        }
    } // namespace DebugHubItem__Array
} // namespace app::classes::types