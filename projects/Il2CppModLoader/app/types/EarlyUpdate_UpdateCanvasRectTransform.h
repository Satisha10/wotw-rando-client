#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EarlyUpdate_UpdateCanvasRectTransform {
        namespace {
            app::EarlyUpdate_UpdateCanvasRectTransform__Class* type_info_ref = nullptr;
        }
        app::EarlyUpdate_UpdateCanvasRectTransform__Class** type_info = &type_info_ref;
        inline app::EarlyUpdate_UpdateCanvasRectTransform__Class* get_class() {
            return il2cpp::get_nested_class<app::EarlyUpdate_UpdateCanvasRectTransform__Class>(type_info, "UnityEngine.Experimental.PlayerLoop", "EarlyUpdate", "UpdateCanvasRectTransform");
        }
        inline app::EarlyUpdate_UpdateCanvasRectTransform* create() {
            return il2cpp::create_object<app::EarlyUpdate_UpdateCanvasRectTransform>(get_class());
        }
        inline app::EarlyUpdate_UpdateCanvasRectTransform__Boxed* box(app::EarlyUpdate_UpdateCanvasRectTransform value) {
            return il2cpp::box_value<app::EarlyUpdate_UpdateCanvasRectTransform__Boxed>(get_class(), value);
        }
    } // namespace EarlyUpdate_UpdateCanvasRectTransform
} // namespace app::classes::types