#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcousticTexture {
        namespace {
            app::AcousticTexture__Class* type_info_ref = nullptr;
        }
        app::AcousticTexture__Class** type_info = &type_info_ref;
        inline app::AcousticTexture__Class* get_class() {
            return il2cpp::get_class<app::AcousticTexture__Class>(type_info, "AK.Wwise", "AcousticTexture");
        }
        inline app::AcousticTexture* create() {
            return il2cpp::create_object<app::AcousticTexture>(get_class());
        }
    } // namespace AcousticTexture
} // namespace app::classes::types