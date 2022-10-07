#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFrustumOptimizer_BoundsCache {
        namespace {
            app::CameraFrustumOptimizer_BoundsCache__Class* type_info_ref = nullptr;
        }
        app::CameraFrustumOptimizer_BoundsCache__Class** type_info = &type_info_ref;
        inline app::CameraFrustumOptimizer_BoundsCache__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraFrustumOptimizer_BoundsCache__Class>(type_info, "", "CameraFrustumOptimizer", "BoundsCache");
        }
        inline app::CameraFrustumOptimizer_BoundsCache* create() {
            return il2cpp::create_object<app::CameraFrustumOptimizer_BoundsCache>(get_class());
        }
        inline app::CameraFrustumOptimizer_BoundsCache__Boxed* box(app::CameraFrustumOptimizer_BoundsCache value) {
            return il2cpp::box_value<app::CameraFrustumOptimizer_BoundsCache__Boxed>(get_class(), value);
        }
    } // namespace CameraFrustumOptimizer_BoundsCache
} // namespace app::classes::types