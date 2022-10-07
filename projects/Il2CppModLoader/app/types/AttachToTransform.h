#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AttachToTransform {
        namespace {
            app::AttachToTransform__Class* type_info_ref = nullptr;
        }
        app::AttachToTransform__Class** type_info = &type_info_ref;
        inline app::AttachToTransform__Class* get_class() {
            return il2cpp::get_class<app::AttachToTransform__Class>(type_info, "", "AttachToTransform");
        }
        inline app::AttachToTransform* create() {
            return il2cpp::create_object<app::AttachToTransform>(get_class());
        }
    } // namespace AttachToTransform
} // namespace app::classes::types