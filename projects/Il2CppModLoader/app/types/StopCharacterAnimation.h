#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StopCharacterAnimation {
        namespace {
            app::StopCharacterAnimation__Class* type_info_ref = nullptr;
        }
        app::StopCharacterAnimation__Class** type_info = &type_info_ref;
        inline app::StopCharacterAnimation__Class* get_class() {
            return il2cpp::get_class<app::StopCharacterAnimation__Class>(type_info, "", "StopCharacterAnimation");
        }
        inline app::StopCharacterAnimation* create() {
            return il2cpp::create_object<app::StopCharacterAnimation>(get_class());
        }
    } // namespace StopCharacterAnimation
} // namespace app::classes::types