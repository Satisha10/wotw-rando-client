#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IEntry__Class** type_info;
        inline app::IEntry__Class* get_class() {
            return il2cpp::get_class<app::IEntry__Class>(type_info, "", "IEntry");
        }
        inline app::IEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::IEntry__Array>(get_class(), size);
        }
        inline app::IEntry__Array* create_array(const std::vector<app::IEntry*>& items) {
            return il2cpp::array_new<app::IEntry__Array>(get_class(), items);
        }
    } // namespace IEntry
} // namespace app::classes::types