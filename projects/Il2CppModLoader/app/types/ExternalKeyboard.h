#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExternalKeyboard {
        namespace {
            app::ExternalKeyboard__Class* type_info_ref = nullptr;
        }
        app::ExternalKeyboard__Class** type_info = &type_info_ref;
        inline app::ExternalKeyboard__Class* get_class() {
            return il2cpp::get_class<app::ExternalKeyboard__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExternalKeyboard");
        }
        inline app::ExternalKeyboard* create() {
            return il2cpp::create_object<app::ExternalKeyboard>(get_class());
        }
    } // namespace ExternalKeyboard
} // namespace app::classes::types