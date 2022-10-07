#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioSampleProvider {
        namespace {
            app::AudioSampleProvider__Class* type_info_ref = nullptr;
        }
        app::AudioSampleProvider__Class** type_info = &type_info_ref;
        inline app::AudioSampleProvider__Class* get_class() {
            return il2cpp::get_class<app::AudioSampleProvider__Class>(type_info, "UnityEngine.Experimental.Audio", "AudioSampleProvider");
        }
        inline app::AudioSampleProvider* create() {
            return il2cpp::create_object<app::AudioSampleProvider>(get_class());
        }
    } // namespace AudioSampleProvider
} // namespace app::classes::types