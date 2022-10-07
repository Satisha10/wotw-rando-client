#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RequestCallback {
        namespace {
            app::RequestCallback__Class* type_info_ref = nullptr;
        }
        app::RequestCallback__Class** type_info = &type_info_ref;
        inline app::RequestCallback__Class* get_class() {
            return il2cpp::get_class<app::RequestCallback__Class>(type_info, "Moon.Network.Web", "RequestCallback");
        }
        inline app::RequestCallback* create() {
            return il2cpp::create_object<app::RequestCallback>(get_class());
        }
    } // namespace RequestCallback
} // namespace app::classes::types