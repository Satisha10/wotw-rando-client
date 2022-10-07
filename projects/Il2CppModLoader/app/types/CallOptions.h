#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CallOptions {
        namespace {
            app::CallOptions__Class* type_info_ref = nullptr;
        }
        app::CallOptions__Class** type_info = &type_info_ref;
        inline app::CallOptions__Class* get_class() {
            return il2cpp::get_class<app::CallOptions__Class>(type_info, "", "CallOptions");
        }
        inline app::CallOptions* create() {
            return il2cpp::create_object<app::CallOptions>(get_class());
        }
    } // namespace CallOptions
} // namespace app::classes::types