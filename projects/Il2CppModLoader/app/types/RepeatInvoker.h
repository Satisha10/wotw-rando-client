#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RepeatInvoker {
        namespace {
            app::RepeatInvoker__Class* type_info_ref = nullptr;
        }
        app::RepeatInvoker__Class** type_info = &type_info_ref;
        inline app::RepeatInvoker__Class* get_class() {
            return il2cpp::get_class<app::RepeatInvoker__Class>(type_info, "", "RepeatInvoker");
        }
        inline app::RepeatInvoker* create() {
            return il2cpp::create_object<app::RepeatInvoker>(get_class());
        }
    } // namespace RepeatInvoker
} // namespace app::classes::types