#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ExplainUnzip_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ExplainUnzip_c__Class** type_info;
        inline app::ExplainUnzip_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ExplainUnzip_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ExplainUnzip", "<>c");
        }
        inline app::ExplainUnzip_c* create() {
            return il2cpp::create_object<app::ExplainUnzip_c>(get_class());
        }
    } // namespace ExplainUnzip_c
} // namespace app::classes::types