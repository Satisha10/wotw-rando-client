#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeIdentifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeIdentifier__Class** type_info;
        inline app::TypeIdentifier__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifier__Class>(type_info, "System", "TypeIdentifier");
        }
        inline app::TypeIdentifier__Array* create_array(int size) {
            return il2cpp::array_new<app::TypeIdentifier__Array>(get_class(), size);
        }
        inline app::TypeIdentifier__Array* create_array(const std::vector<app::TypeIdentifier*>& items) {
            return il2cpp::array_new<app::TypeIdentifier__Array>(get_class(), items);
        }
    } // namespace TypeIdentifier
} // namespace app::classes::types