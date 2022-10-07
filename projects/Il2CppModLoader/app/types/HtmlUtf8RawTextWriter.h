#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HtmlUtf8RawTextWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HtmlUtf8RawTextWriter__Class** type_info;
        inline app::HtmlUtf8RawTextWriter__Class* get_class() {
            return il2cpp::get_class<app::HtmlUtf8RawTextWriter__Class>(type_info, "System.Xml", "HtmlUtf8RawTextWriter");
        }
        inline app::HtmlUtf8RawTextWriter* create() {
            return il2cpp::create_object<app::HtmlUtf8RawTextWriter>(get_class());
        }
    } // namespace HtmlUtf8RawTextWriter
} // namespace app::classes::types