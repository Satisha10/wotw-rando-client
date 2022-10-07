#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IKuReceiver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IKuReceiver__Class** type_info;
        inline app::IKuReceiver__Class* get_class() {
            return il2cpp::get_class<app::IKuReceiver__Class>(type_info, "", "IKuReceiver");
        }
        inline app::IKuReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::IKuReceiver__Array>(get_class(), size);
        }
        inline app::IKuReceiver__Array* create_array(const std::vector<app::IKuReceiver*>& items) {
            return il2cpp::array_new<app::IKuReceiver__Array>(get_class(), items);
        }
    } // namespace IKuReceiver
} // namespace app::classes::types