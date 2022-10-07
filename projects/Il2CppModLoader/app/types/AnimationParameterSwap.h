#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationParameterSwap {
        namespace {
            app::AnimationParameterSwap__Class* type_info_ref = nullptr;
        }
        app::AnimationParameterSwap__Class** type_info = &type_info_ref;
        inline app::AnimationParameterSwap__Class* get_class() {
            return il2cpp::get_class<app::AnimationParameterSwap__Class>(type_info, "", "AnimationParameterSwap");
        }
        inline app::AnimationParameterSwap* create() {
            return il2cpp::create_object<app::AnimationParameterSwap>(get_class());
        }
    } // namespace AnimationParameterSwap
} // namespace app::classes::types