#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateGroupDataItemView {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateGroupDataItemView__Class** type_info;
        inline app::UberStateGroupDataItemView__Class* get_class() {
            return il2cpp::get_class<app::UberStateGroupDataItemView__Class>(type_info, "Moon.UberStateVisualization", "UberStateGroupDataItemView");
        }
        inline app::UberStateGroupDataItemView* create() {
            return il2cpp::create_object<app::UberStateGroupDataItemView>(get_class());
        }
    } // namespace UberStateGroupDataItemView
} // namespace app::classes::types