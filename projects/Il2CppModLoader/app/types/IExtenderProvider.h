#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IExtenderProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IExtenderProvider__Class** type_info;
        inline app::IExtenderProvider__Class* get_class() {
            return il2cpp::get_class<app::IExtenderProvider__Class>(type_info, "System.ComponentModel", "IExtenderProvider");
        }
        inline app::IExtenderProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::IExtenderProvider__Array>(get_class(), size);
        }
        inline app::IExtenderProvider__Array* create_array(const std::vector<app::IExtenderProvider*>& items) {
            return il2cpp::array_new<app::IExtenderProvider__Array>(get_class(), items);
        }
    } // namespace IExtenderProvider
} // namespace app::classes::types