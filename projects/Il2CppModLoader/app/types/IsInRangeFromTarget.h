#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsInRangeFromTarget {
        namespace {
            app::IsInRangeFromTarget__Class* type_info_ref = nullptr;
        }
        app::IsInRangeFromTarget__Class** type_info = &type_info_ref;
        inline app::IsInRangeFromTarget__Class* get_class() {
            return il2cpp::get_class<app::IsInRangeFromTarget__Class>(type_info, "Moon.BehaviourSystem", "IsInRangeFromTarget");
        }
        inline app::IsInRangeFromTarget* create() {
            return il2cpp::create_object<app::IsInRangeFromTarget>(get_class());
        }
    } // namespace IsInRangeFromTarget
} // namespace app::classes::types