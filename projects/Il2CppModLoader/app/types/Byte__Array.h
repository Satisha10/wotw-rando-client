#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Byte__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Byte__Array__Class** type_info;
        inline app::Byte__Array__Class* get_class() {
            return il2cpp::get_class<app::Byte__Array__Class>(type_info, "System", "Byte[]");
        }
        inline app::Byte__Array* create() {
            return il2cpp::create_object<app::Byte__Array>(get_class());
        }
        inline app::Byte__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::Byte__Array__Array>(get_class(), size);
        }
        inline app::Byte__Array__Array* create_array(const std::vector<app::Byte__Array*>& items) {
            return il2cpp::array_new<app::Byte__Array__Array>(get_class(), items);
        }
    } // namespace Byte__Array
} // namespace app::classes::types