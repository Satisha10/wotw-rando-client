#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioProperties {
        namespace {
            app::AudioProperties__Class* type_info_ref = nullptr;
        }
        app::AudioProperties__Class** type_info = &type_info_ref;
        inline app::AudioProperties__Class* get_class() {
            return il2cpp::get_class<app::AudioProperties__Class>(type_info, "", "AudioProperties");
        }
        inline app::AudioProperties* create() {
            return il2cpp::create_object<app::AudioProperties>(get_class());
        }
    } // namespace AudioProperties
} // namespace app::classes::types