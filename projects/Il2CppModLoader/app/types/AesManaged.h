#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AesManaged {
        namespace {
            app::AesManaged__Class* type_info_ref = nullptr;
        }
        app::AesManaged__Class** type_info = &type_info_ref;
        inline app::AesManaged__Class* get_class() {
            return il2cpp::get_class<app::AesManaged__Class>(type_info, "System.Security.Cryptography", "AesManaged");
        }
        inline app::AesManaged* create() {
            return il2cpp::create_object<app::AesManaged>(get_class());
        }
    } // namespace AesManaged
} // namespace app::classes::types