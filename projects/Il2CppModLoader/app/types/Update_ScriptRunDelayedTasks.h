#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Update_ScriptRunDelayedTasks {
        namespace {
            app::Update_ScriptRunDelayedTasks__Class* type_info_ref = nullptr;
        }
        app::Update_ScriptRunDelayedTasks__Class** type_info = &type_info_ref;
        inline app::Update_ScriptRunDelayedTasks__Class* get_class() {
            return il2cpp::get_nested_class<app::Update_ScriptRunDelayedTasks__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "Update", "ScriptRunDelayedTasks");
        }
        inline app::Update_ScriptRunDelayedTasks* create() {
            return il2cpp::create_object<app::Update_ScriptRunDelayedTasks>(get_class());
        }
        inline app::Update_ScriptRunDelayedTasks__Boxed* box(app::Update_ScriptRunDelayedTasks value) {
            return il2cpp::box_value<app::Update_ScriptRunDelayedTasks__Boxed>(get_class(), value);
        }
    } // namespace Update_ScriptRunDelayedTasks
} // namespace app::classes::types