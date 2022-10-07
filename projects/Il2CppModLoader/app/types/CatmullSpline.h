#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CatmullSpline {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CatmullSpline__Class** type_info;
        inline app::CatmullSpline__Class* get_class() {
            return il2cpp::get_class<app::CatmullSpline__Class>(type_info, "", "CatmullSpline");
        }
        inline app::CatmullSpline* create() {
            return il2cpp::create_object<app::CatmullSpline>(get_class());
        }
    } // namespace CatmullSpline
} // namespace app::classes::types