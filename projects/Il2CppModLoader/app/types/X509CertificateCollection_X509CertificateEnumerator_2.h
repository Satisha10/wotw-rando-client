#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509CertificateCollection_X509CertificateEnumerator_2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509CertificateCollection_X509CertificateEnumerator_2__Class** type_info;
        inline app::X509CertificateCollection_X509CertificateEnumerator_2__Class* get_class() {
            return il2cpp::get_nested_class<app::X509CertificateCollection_X509CertificateEnumerator_2__Class>(type_info, "Mono.Security.X509", "X509CertificateCollection", "X509CertificateEnumerator");
        }
        inline app::X509CertificateCollection_X509CertificateEnumerator_2* create() {
            return il2cpp::create_object<app::X509CertificateCollection_X509CertificateEnumerator_2>(get_class());
        }
    } // namespace X509CertificateCollection_X509CertificateEnumerator_2
} // namespace app::classes::types