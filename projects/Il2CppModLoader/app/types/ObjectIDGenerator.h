#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectIDGenerator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectIDGenerator__Class** type_info;
        inline app::ObjectIDGenerator__Class* get_class() {
            return il2cpp::get_class<app::ObjectIDGenerator__Class>(type_info, "System.Runtime.Serialization", "ObjectIDGenerator");
        }
        inline app::ObjectIDGenerator* create() {
            return il2cpp::create_object<app::ObjectIDGenerator>(get_class());
        }
    } // namespace ObjectIDGenerator
} // namespace app::classes::types