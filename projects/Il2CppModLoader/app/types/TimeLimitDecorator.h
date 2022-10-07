#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeLimitDecorator {
        namespace {
            app::TimeLimitDecorator__Class* type_info_ref = nullptr;
        }
        app::TimeLimitDecorator__Class** type_info = &type_info_ref;
        inline app::TimeLimitDecorator__Class* get_class() {
            return il2cpp::get_class<app::TimeLimitDecorator__Class>(type_info, "Moon.BehaviourSystem", "TimeLimitDecorator");
        }
        inline app::TimeLimitDecorator* create() {
            return il2cpp::create_object<app::TimeLimitDecorator>(get_class());
        }
    } // namespace TimeLimitDecorator
} // namespace app::classes::types