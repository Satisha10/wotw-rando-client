#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ForceSuccessDecorator {
        namespace {
            app::ForceSuccessDecorator__Class* type_info_ref = nullptr;
        }
        app::ForceSuccessDecorator__Class** type_info = &type_info_ref;
        inline app::ForceSuccessDecorator__Class* get_class() {
            return il2cpp::get_class<app::ForceSuccessDecorator__Class>(type_info, "Moon.BehaviourSystem", "ForceSuccessDecorator");
        }
        inline app::ForceSuccessDecorator* create() {
            return il2cpp::create_object<app::ForceSuccessDecorator>(get_class());
        }
    } // namespace ForceSuccessDecorator
} // namespace app::classes::types