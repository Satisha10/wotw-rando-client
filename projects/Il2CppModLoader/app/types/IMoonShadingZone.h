#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonShadingZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonShadingZone__Class** type_info;
        inline app::IMoonShadingZone__Class* get_class() {
            return il2cpp::get_class<app::IMoonShadingZone__Class>(type_info, "", "IMoonShadingZone");
        }
        inline app::IMoonShadingZone__Array* create_array(int size) {
            return il2cpp::array_new<app::IMoonShadingZone__Array>(get_class(), size);
        }
        inline app::IMoonShadingZone__Array* create_array(const std::vector<app::IMoonShadingZone*>& items) {
            return il2cpp::array_new<app::IMoonShadingZone__Array>(get_class(), items);
        }
    } // namespace IMoonShadingZone
} // namespace app::classes::types