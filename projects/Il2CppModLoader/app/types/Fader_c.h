#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Fader_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Fader_c__Class** type_info;
        inline app::Fader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Fader_c__Class>(type_info, "", "Fader", "<>c");
        }
        inline app::Fader_c* create() {
            return il2cpp::create_object<app::Fader_c>(get_class());
        }
    } // namespace Fader_c
} // namespace app::classes::types