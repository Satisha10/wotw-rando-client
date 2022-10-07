#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SkinningEdge_SkinningCapsule__Array {
        namespace {
            app::SkinningEdge_SkinningCapsule__Array__Class* type_info_ref = nullptr;
        }
        app::SkinningEdge_SkinningCapsule__Array__Class** type_info = &type_info_ref;
        inline app::SkinningEdge_SkinningCapsule__Array__Class* get_class() {
            return il2cpp::get_class<app::SkinningEdge_SkinningCapsule__Array__Class>(type_info, "", "SkinningEdge+SkinningCapsule[]");
        }
        inline app::SkinningEdge_SkinningCapsule__Array* create() {
            return il2cpp::create_object<app::SkinningEdge_SkinningCapsule__Array>(get_class());
        }
    } // namespace SkinningEdge_SkinningCapsule__Array
} // namespace app::classes::types