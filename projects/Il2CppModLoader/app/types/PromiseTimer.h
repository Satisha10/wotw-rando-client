#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PromiseTimer {
        namespace {
            app::PromiseTimer__Class* type_info_ref = nullptr;
        }
        app::PromiseTimer__Class** type_info = &type_info_ref;
        inline app::PromiseTimer__Class* get_class() {
            return il2cpp::get_class<app::PromiseTimer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseTimer");
        }
        inline app::PromiseTimer* create() {
            return il2cpp::create_object<app::PromiseTimer>(get_class());
        }
    } // namespace PromiseTimer
} // namespace app::classes::types