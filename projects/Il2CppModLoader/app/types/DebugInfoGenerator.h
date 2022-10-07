#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugInfoGenerator {
        namespace {
            app::DebugInfoGenerator__Class* type_info_ref = nullptr;
        }
        app::DebugInfoGenerator__Class** type_info = &type_info_ref;
        inline app::DebugInfoGenerator__Class* get_class() {
            return il2cpp::get_class<app::DebugInfoGenerator__Class>(type_info, "System.Runtime.CompilerServices", "DebugInfoGenerator");
        }
        inline app::DebugInfoGenerator* create() {
            return il2cpp::create_object<app::DebugInfoGenerator>(get_class());
        }
    } // namespace DebugInfoGenerator
} // namespace app::classes::types