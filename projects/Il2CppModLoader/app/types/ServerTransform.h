#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerTransform {
        namespace {
            app::ServerTransform__Class* type_info_ref = nullptr;
        }
        app::ServerTransform__Class** type_info = &type_info_ref;
        inline app::ServerTransform__Class* get_class() {
            return il2cpp::get_class<app::ServerTransform__Class>(type_info, "", "ServerTransform");
        }
        inline app::ServerTransform* create() {
            return il2cpp::create_object<app::ServerTransform>(get_class());
        }
    } // namespace ServerTransform
} // namespace app::classes::types