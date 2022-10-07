#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkImageSourceSettings {
        namespace {
            app::AkImageSourceSettings__Class* type_info_ref = nullptr;
        }
        app::AkImageSourceSettings__Class** type_info = &type_info_ref;
        inline app::AkImageSourceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkImageSourceSettings__Class>(type_info, "", "AkImageSourceSettings");
        }
        inline app::AkImageSourceSettings* create() {
            return il2cpp::create_object<app::AkImageSourceSettings>(get_class());
        }
    } // namespace AkImageSourceSettings
} // namespace app::classes::types