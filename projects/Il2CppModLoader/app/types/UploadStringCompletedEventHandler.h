#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UploadStringCompletedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UploadStringCompletedEventHandler__Class** type_info;
        inline app::UploadStringCompletedEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UploadStringCompletedEventHandler__Class>(type_info, "System.Net", "UploadStringCompletedEventHandler");
        }
        inline app::UploadStringCompletedEventHandler* create() {
            return il2cpp::create_object<app::UploadStringCompletedEventHandler>(get_class());
        }
    } // namespace UploadStringCompletedEventHandler
} // namespace app::classes::types