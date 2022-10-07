#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICredentials {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICredentials__Class** type_info;
        inline app::ICredentials__Class* get_class() {
            return il2cpp::get_class<app::ICredentials__Class>(type_info, "System.Net", "ICredentials");
        }
        inline app::ICredentials__Array* create_array(int size) {
            return il2cpp::array_new<app::ICredentials__Array>(get_class(), size);
        }
        inline app::ICredentials__Array* create_array(const std::vector<app::ICredentials*>& items) {
            return il2cpp::array_new<app::ICredentials__Array>(get_class(), items);
        }
    } // namespace ICredentials
} // namespace app::classes::types