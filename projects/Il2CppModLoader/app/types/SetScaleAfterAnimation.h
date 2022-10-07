#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetScaleAfterAnimation {
        namespace {
            app::SetScaleAfterAnimation__Class* type_info_ref = nullptr;
        }
        app::SetScaleAfterAnimation__Class** type_info = &type_info_ref;
        inline app::SetScaleAfterAnimation__Class* get_class() {
            return il2cpp::get_class<app::SetScaleAfterAnimation__Class>(type_info, "", "SetScaleAfterAnimation");
        }
        inline app::SetScaleAfterAnimation* create() {
            return il2cpp::create_object<app::SetScaleAfterAnimation>(get_class());
        }
    } // namespace SetScaleAfterAnimation
} // namespace app::classes::types