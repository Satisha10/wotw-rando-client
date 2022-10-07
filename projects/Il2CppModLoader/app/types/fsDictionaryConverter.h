#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsDictionaryConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsDictionaryConverter__Class** type_info;
        inline app::fsDictionaryConverter__Class* get_class() {
            return il2cpp::get_class<app::fsDictionaryConverter__Class>(type_info, "FullSerializer.Internal", "fsDictionaryConverter");
        }
        inline app::fsDictionaryConverter* create() {
            return il2cpp::create_object<app::fsDictionaryConverter>(get_class());
        }
    } // namespace fsDictionaryConverter
} // namespace app::classes::types