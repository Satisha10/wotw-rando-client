#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OnScreenPositions {
        namespace {
            app::OnScreenPositions__Class* type_info_ref = nullptr;
        }
        app::OnScreenPositions__Class** type_info = &type_info_ref;
        inline app::OnScreenPositions__Class* get_class() {
            return il2cpp::get_class<app::OnScreenPositions__Class>(type_info, "", "OnScreenPositions");
        }
        inline app::OnScreenPositions* create() {
            return il2cpp::create_object<app::OnScreenPositions>(get_class());
        }
    } // namespace OnScreenPositions
} // namespace app::classes::types