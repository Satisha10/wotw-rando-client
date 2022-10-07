#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PlayerUberStateAreaMapInformation_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PlayerUberStateAreaMapInformation_c__Class** type_info;
        inline app::PlayerUberStateAreaMapInformation_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayerUberStateAreaMapInformation_c__Class>(type_info, "Moon.uberSerializationWisp", "PlayerUberStateAreaMapInformation", "<>c");
        }
        inline app::PlayerUberStateAreaMapInformation_c* create() {
            return il2cpp::create_object<app::PlayerUberStateAreaMapInformation_c>(get_class());
        }
    } // namespace PlayerUberStateAreaMapInformation_c
} // namespace app::classes::types