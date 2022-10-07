#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SandWormSetSpeedSettingsBehaviour {
        namespace {
            app::SandWormSetSpeedSettingsBehaviour__Class* type_info_ref = nullptr;
        }
        app::SandWormSetSpeedSettingsBehaviour__Class** type_info = &type_info_ref;
        inline app::SandWormSetSpeedSettingsBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SandWormSetSpeedSettingsBehaviour__Class>(type_info, "", "SandWormSetSpeedSettingsBehaviour");
        }
        inline app::SandWormSetSpeedSettingsBehaviour* create() {
            return il2cpp::create_object<app::SandWormSetSpeedSettingsBehaviour>(get_class());
        }
    } // namespace SandWormSetSpeedSettingsBehaviour
} // namespace app::classes::types