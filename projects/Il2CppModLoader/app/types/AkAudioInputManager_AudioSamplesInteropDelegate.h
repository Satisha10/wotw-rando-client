#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioInputManager_AudioSamplesInteropDelegate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioInputManager_AudioSamplesInteropDelegate__Class** type_info;
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate__Class* get_class() {
            return il2cpp::get_nested_class<app::AkAudioInputManager_AudioSamplesInteropDelegate__Class>(type_info, "", "AkAudioInputManager", "AudioSamplesInteropDelegate");
        }
        inline app::AkAudioInputManager_AudioSamplesInteropDelegate* create() {
            return il2cpp::create_object<app::AkAudioInputManager_AudioSamplesInteropDelegate>(get_class());
        }
    } // namespace AkAudioInputManager_AudioSamplesInteropDelegate
} // namespace app::classes::types