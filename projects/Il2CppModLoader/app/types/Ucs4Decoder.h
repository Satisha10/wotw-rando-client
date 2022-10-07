#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Ucs4Decoder {
        namespace {
            app::Ucs4Decoder__Class* type_info_ref = nullptr;
        }
        app::Ucs4Decoder__Class** type_info = &type_info_ref;
        inline app::Ucs4Decoder__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder__Class>(type_info, "System.Xml", "Ucs4Decoder");
        }
        inline app::Ucs4Decoder* create() {
            return il2cpp::create_object<app::Ucs4Decoder>(get_class());
        }
    } // namespace Ucs4Decoder
} // namespace app::classes::types