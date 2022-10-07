#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateModifierDataVirtualAnimatorFactory {
        namespace {
            app::UberStateModifierDataVirtualAnimatorFactory__Class* type_info_ref = nullptr;
        }
        app::UberStateModifierDataVirtualAnimatorFactory__Class** type_info = &type_info_ref;
        inline app::UberStateModifierDataVirtualAnimatorFactory__Class* get_class() {
            return il2cpp::get_class<app::UberStateModifierDataVirtualAnimatorFactory__Class>(type_info, "", "UberStateModifierDataVirtualAnimatorFactory");
        }
        inline app::UberStateModifierDataVirtualAnimatorFactory* create() {
            return il2cpp::create_object<app::UberStateModifierDataVirtualAnimatorFactory>(get_class());
        }
    } // namespace UberStateModifierDataVirtualAnimatorFactory
} // namespace app::classes::types