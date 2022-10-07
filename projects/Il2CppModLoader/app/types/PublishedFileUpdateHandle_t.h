#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PublishedFileUpdateHandle_t {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PublishedFileUpdateHandle_t__Class** type_info;
        inline app::PublishedFileUpdateHandle_t__Class* get_class() {
            return il2cpp::get_class<app::PublishedFileUpdateHandle_t__Class>(type_info, "Steamworks", "PublishedFileUpdateHandle_t");
        }
        inline app::PublishedFileUpdateHandle_t* create() {
            return il2cpp::create_object<app::PublishedFileUpdateHandle_t>(get_class());
        }
        inline app::PublishedFileUpdateHandle_t__Boxed* box(app::PublishedFileUpdateHandle_t value) {
            return il2cpp::box_value<app::PublishedFileUpdateHandle_t__Boxed>(get_class(), value);
        }
    } // namespace PublishedFileUpdateHandle_t
} // namespace app::classes::types