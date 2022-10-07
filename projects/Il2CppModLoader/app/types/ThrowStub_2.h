#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ThrowStub_2 {
        namespace {
            app::ThrowStub_2__Class* type_info_ref = nullptr;
        }
        app::ThrowStub_2__Class** type_info = &type_info_ref;
        inline app::ThrowStub_2__Class* get_class() {
            return il2cpp::get_class<app::ThrowStub_2__Class>(type_info, "Unity", "ThrowStub");
        }
        inline app::ThrowStub_2* create() {
            return il2cpp::create_object<app::ThrowStub_2>(get_class());
        }
    } // namespace ThrowStub_2
} // namespace app::classes::types