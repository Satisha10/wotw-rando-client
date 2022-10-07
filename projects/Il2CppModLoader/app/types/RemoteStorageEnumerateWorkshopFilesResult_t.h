#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageEnumerateWorkshopFilesResult_t {
        namespace {
            app::RemoteStorageEnumerateWorkshopFilesResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageEnumerateWorkshopFilesResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageEnumerateWorkshopFilesResult_t__Class>(type_info, "Steamworks", "RemoteStorageEnumerateWorkshopFilesResult_t");
        }
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageEnumerateWorkshopFilesResult_t>(get_class());
        }
        inline app::RemoteStorageEnumerateWorkshopFilesResult_t__Boxed* box(app::RemoteStorageEnumerateWorkshopFilesResult_t value) {
            return il2cpp::box_value<app::RemoteStorageEnumerateWorkshopFilesResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageEnumerateWorkshopFilesResult_t
} // namespace app::classes::types