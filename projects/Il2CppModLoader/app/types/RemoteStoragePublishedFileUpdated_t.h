#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStoragePublishedFileUpdated_t {
        namespace {
            app::RemoteStoragePublishedFileUpdated_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStoragePublishedFileUpdated_t__Class** type_info = &type_info_ref;
        inline app::RemoteStoragePublishedFileUpdated_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStoragePublishedFileUpdated_t__Class>(type_info, "Steamworks", "RemoteStoragePublishedFileUpdated_t");
        }
        inline app::RemoteStoragePublishedFileUpdated_t* create() {
            return il2cpp::create_object<app::RemoteStoragePublishedFileUpdated_t>(get_class());
        }
        inline app::RemoteStoragePublishedFileUpdated_t__Boxed* box(app::RemoteStoragePublishedFileUpdated_t value) {
            return il2cpp::box_value<app::RemoteStoragePublishedFileUpdated_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStoragePublishedFileUpdated_t
} // namespace app::classes::types