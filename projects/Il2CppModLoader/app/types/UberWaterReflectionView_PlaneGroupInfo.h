#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterReflectionView_PlaneGroupInfo {
        namespace {
            app::UberWaterReflectionView_PlaneGroupInfo__Class* type_info_ref = nullptr;
        }
        app::UberWaterReflectionView_PlaneGroupInfo__Class** type_info = &type_info_ref;
        inline app::UberWaterReflectionView_PlaneGroupInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterReflectionView_PlaneGroupInfo__Class>(type_info, "", "UberWaterReflectionView", "PlaneGroupInfo");
        }
        inline app::UberWaterReflectionView_PlaneGroupInfo* create() {
            return il2cpp::create_object<app::UberWaterReflectionView_PlaneGroupInfo>(get_class());
        }
        inline app::UberWaterReflectionView_PlaneGroupInfo__Boxed* box(app::UberWaterReflectionView_PlaneGroupInfo value) {
            return il2cpp::box_value<app::UberWaterReflectionView_PlaneGroupInfo__Boxed>(get_class(), value);
        }
    } // namespace UberWaterReflectionView_PlaneGroupInfo
} // namespace app::classes::types