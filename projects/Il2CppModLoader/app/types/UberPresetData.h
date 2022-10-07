#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetData {
        namespace {
            app::UberPresetData__Class* type_info_ref = nullptr;
        }
        app::UberPresetData__Class** type_info = &type_info_ref;
        inline app::UberPresetData__Class* get_class() {
            return il2cpp::get_class<app::UberPresetData__Class>(type_info, "", "UberPresetData");
        }
        inline app::UberPresetData* create() {
            return il2cpp::create_object<app::UberPresetData>(get_class());
        }
    } // namespace UberPresetData
} // namespace app::classes::types