#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GetFileMetadata {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GetFileMetadata__Class** type_info;
        inline app::GetFileMetadata__Class* get_class() {
            return il2cpp::get_class<app::GetFileMetadata__Class>(type_info, "PlayFab.DataModels", "GetFileMetadata");
        }
        inline app::GetFileMetadata* create() {
            return il2cpp::create_object<app::GetFileMetadata>(get_class());
        }
        inline app::GetFileMetadata__Array* create_array(int size) {
            return il2cpp::array_new<app::GetFileMetadata__Array>(get_class(), size);
        }
        inline app::GetFileMetadata__Array* create_array(const std::vector<app::GetFileMetadata*>& items) {
            return il2cpp::array_new<app::GetFileMetadata__Array>(get_class(), items);
        }
    } // namespace GetFileMetadata
} // namespace app::classes::types