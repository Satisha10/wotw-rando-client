#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherAlgorithmType__Enum {
        namespace {
            app::CipherAlgorithmType__Enum__Class* type_info_ref = nullptr;
        }
        app::CipherAlgorithmType__Enum__Class** type_info = &type_info_ref;
        inline app::CipherAlgorithmType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CipherAlgorithmType__Enum__Class>(type_info, "Mono.Security.Protocol.Tls", "CipherAlgorithmType");
        }
        inline app::CipherAlgorithmType__Enum* create() {
            return il2cpp::create_object<app::CipherAlgorithmType__Enum>(get_class());
        }
    } // namespace CipherAlgorithmType__Enum
} // namespace app::classes::types