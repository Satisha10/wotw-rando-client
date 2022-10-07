#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneMetaData_WorldMapIcon {
        namespace {
            app::SceneMetaData_WorldMapIcon__Class* type_info_ref = nullptr;
        }
        app::SceneMetaData_WorldMapIcon__Class** type_info = &type_info_ref;
        inline app::SceneMetaData_WorldMapIcon__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_WorldMapIcon__Class>(type_info, "", "SceneMetaData", "WorldMapIcon");
        }
        inline app::SceneMetaData_WorldMapIcon* create() {
            return il2cpp::create_object<app::SceneMetaData_WorldMapIcon>(get_class());
        }
        inline app::SceneMetaData_WorldMapIcon__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneMetaData_WorldMapIcon__Array>(get_class(), size);
        }
        inline app::SceneMetaData_WorldMapIcon__Array* create_array(const std::vector<app::SceneMetaData_WorldMapIcon*>& items) {
            return il2cpp::array_new<app::SceneMetaData_WorldMapIcon__Array>(get_class(), items);
        }
    } // namespace SceneMetaData_WorldMapIcon
} // namespace app::classes::types