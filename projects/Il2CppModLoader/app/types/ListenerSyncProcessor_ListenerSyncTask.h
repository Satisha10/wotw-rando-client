#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ListenerSyncProcessor_ListenerSyncTask {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ListenerSyncProcessor_ListenerSyncTask__Class** type_info;
        inline app::ListenerSyncProcessor_ListenerSyncTask__Class* get_class() {
            return il2cpp::get_nested_class<app::ListenerSyncProcessor_ListenerSyncTask__Class>(type_info, "Moon.Wwise", "ListenerSyncProcessor", "ListenerSyncTask");
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask* create() {
            return il2cpp::create_object<app::ListenerSyncProcessor_ListenerSyncTask>(get_class());
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create_array(int size) {
            return il2cpp::array_new<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class(), size);
        }
        inline app::ListenerSyncProcessor_ListenerSyncTask__Array* create_array(const std::vector<app::ListenerSyncProcessor_ListenerSyncTask*>& items) {
            return il2cpp::array_new<app::ListenerSyncProcessor_ListenerSyncTask__Array>(get_class(), items);
        }
    } // namespace ListenerSyncProcessor_ListenerSyncTask
} // namespace app::classes::types