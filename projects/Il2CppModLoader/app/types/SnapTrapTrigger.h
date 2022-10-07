#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SnapTrapTrigger {
        namespace {
            app::SnapTrapTrigger__Class* type_info_ref = nullptr;
        }
        app::SnapTrapTrigger__Class** type_info = &type_info_ref;
        inline app::SnapTrapTrigger__Class* get_class() {
            return il2cpp::get_class<app::SnapTrapTrigger__Class>(type_info, "", "SnapTrapTrigger");
        }
        inline app::SnapTrapTrigger* create() {
            return il2cpp::create_object<app::SnapTrapTrigger>(get_class());
        }
    } // namespace SnapTrapTrigger
} // namespace app::classes::types