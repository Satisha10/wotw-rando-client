#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCutsceneBlocked {
        namespace {
            app::SeinCutsceneBlocked__Class* type_info_ref = nullptr;
        }
        app::SeinCutsceneBlocked__Class** type_info = &type_info_ref;
        inline app::SeinCutsceneBlocked__Class* get_class() {
            return il2cpp::get_class<app::SeinCutsceneBlocked__Class>(type_info, "", "SeinCutsceneBlocked");
        }
        inline app::SeinCutsceneBlocked* create() {
            return il2cpp::create_object<app::SeinCutsceneBlocked>(get_class());
        }
    } // namespace SeinCutsceneBlocked
} // namespace app::classes::types