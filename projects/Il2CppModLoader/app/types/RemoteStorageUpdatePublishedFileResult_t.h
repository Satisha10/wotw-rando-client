#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteStorageUpdatePublishedFileResult_t {
        namespace {
            app::RemoteStorageUpdatePublishedFileResult_t__Class* type_info_ref = nullptr;
        }
        app::RemoteStorageUpdatePublishedFileResult_t__Class** type_info = &type_info_ref;
        inline app::RemoteStorageUpdatePublishedFileResult_t__Class* get_class() {
            return il2cpp::get_class<app::RemoteStorageUpdatePublishedFileResult_t__Class>(type_info, "Steamworks", "RemoteStorageUpdatePublishedFileResult_t");
        }
        inline app::RemoteStorageUpdatePublishedFileResult_t* create() {
            return il2cpp::create_object<app::RemoteStorageUpdatePublishedFileResult_t>(get_class());
        }
        inline app::RemoteStorageUpdatePublishedFileResult_t__Boxed* box(app::RemoteStorageUpdatePublishedFileResult_t value) {
            return il2cpp::box_value<app::RemoteStorageUpdatePublishedFileResult_t__Boxed>(get_class(), value);
        }
    } // namespace RemoteStorageUpdatePublishedFileResult_t
} // namespace app::classes::types