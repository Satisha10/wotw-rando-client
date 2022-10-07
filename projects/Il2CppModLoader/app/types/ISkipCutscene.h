#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISkipCutscene {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISkipCutscene__Class** type_info;
        inline app::ISkipCutscene__Class* get_class() {
            return il2cpp::get_class<app::ISkipCutscene__Class>(type_info, "", "ISkipCutscene");
        }
        inline app::ISkipCutscene__Array* create_array(int size) {
            return il2cpp::array_new<app::ISkipCutscene__Array>(get_class(), size);
        }
        inline app::ISkipCutscene__Array* create_array(const std::vector<app::ISkipCutscene*>& items) {
            return il2cpp::array_new<app::ISkipCutscene__Array>(get_class(), items);
        }
    } // namespace ISkipCutscene
} // namespace app::classes::types