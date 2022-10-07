#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValueGetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlValueGetter__Class** type_info;
        inline app::XmlValueGetter__Class* get_class() {
            return il2cpp::get_class<app::XmlValueGetter__Class>(type_info, "System.Xml.Schema", "XmlValueGetter");
        }
        inline app::XmlValueGetter* create() {
            return il2cpp::create_object<app::XmlValueGetter>(get_class());
        }
    } // namespace XmlValueGetter
} // namespace app::classes::types