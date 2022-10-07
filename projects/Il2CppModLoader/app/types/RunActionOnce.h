#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RunActionOnce {
        namespace {
            app::RunActionOnce__Class* type_info_ref = nullptr;
        }
        app::RunActionOnce__Class** type_info = &type_info_ref;
        inline app::RunActionOnce__Class* get_class() {
            return il2cpp::get_class<app::RunActionOnce__Class>(type_info, "", "RunActionOnce");
        }
        inline app::RunActionOnce* create() {
            return il2cpp::create_object<app::RunActionOnce>(get_class());
        }
    } // namespace RunActionOnce
} // namespace app::classes::types