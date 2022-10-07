#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Datatype_dayTimeDuration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Datatype_dayTimeDuration__Class** type_info;
        inline app::Datatype_dayTimeDuration__Class* get_class() {
            return il2cpp::get_class<app::Datatype_dayTimeDuration__Class>(type_info, "System.Xml.Schema", "Datatype_dayTimeDuration");
        }
        inline app::Datatype_dayTimeDuration* create() {
            return il2cpp::create_object<app::Datatype_dayTimeDuration>(get_class());
        }
    } // namespace Datatype_dayTimeDuration
} // namespace app::classes::types