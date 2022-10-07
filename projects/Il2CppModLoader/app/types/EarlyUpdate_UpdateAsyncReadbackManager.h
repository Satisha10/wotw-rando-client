#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateAsyncReadbackManager {
        namespace {
            app::EarlyUpdate_UpdateAsyncReadbackManager__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UpdateAsyncReadbackManager__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateAsyncReadbackManager__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateAsyncReadbackManager__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateAsyncReadbackManager");
        }
        inline app::EarlyUpdate_UpdateAsyncReadbackManager* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateAsyncReadbackManager>(get_class());
        }
        inline app::EarlyUpdate_UpdateAsyncReadbackManager__Boxed* box(app::EarlyUpdate_UpdateAsyncReadbackManager value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateAsyncReadbackManager__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateAsyncReadbackManager
} // namespace app::classes::types