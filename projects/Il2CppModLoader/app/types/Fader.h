#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Fader {
        namespace {
            app::Fader__Class* type_info_ref = nullptr;
        }
        app::Fader__Class** type_info = &type_info_ref;
        inline app::Fader__Class* get_class() {
            return il2cpp::get_class<app::Fader__Class>(type_info, "", "Fader");
        }
        inline app::Fader* create() {
            return il2cpp::create_object<app::Fader>(get_class());
        }
    } // namespace Fader
} // namespace app::classes::types