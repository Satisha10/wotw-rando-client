#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimatorPostprocessUpdateData {
        namespace {
            app::AnimatorPostprocessUpdateData__Class* type_info_ref = nullptr;
        }
        app::AnimatorPostprocessUpdateData__Class** type_info = &type_info_ref;
        inline app::AnimatorPostprocessUpdateData__Class* get_class() {
            return il2cpp::get_class<app::AnimatorPostprocessUpdateData__Class>(type_info, "Moon", "AnimatorPostprocessUpdateData");
        }
        inline app::AnimatorPostprocessUpdateData* create() {
            return il2cpp::create_object<app::AnimatorPostprocessUpdateData>(get_class());
        }
        inline app::AnimatorPostprocessUpdateData__Boxed* box(app::AnimatorPostprocessUpdateData value) {
            return il2cpp::box_value<app::AnimatorPostprocessUpdateData__Boxed>(get_class(), value);
        }
    } // namespace AnimatorPostprocessUpdateData
} // namespace app::classes::types