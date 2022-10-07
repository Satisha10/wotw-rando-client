#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaapiJsonStopSoundArgs {
        namespace {
            app::WaapiJsonStopSoundArgs__Class* type_info_ref = nullptr;
        }
        app::WaapiJsonStopSoundArgs__Class** type_info = &type_info_ref;
        inline app::WaapiJsonStopSoundArgs__Class* get_class() {
            return il2cpp::get_class<app::WaapiJsonStopSoundArgs__Class>(type_info, "", "WaapiJsonStopSoundArgs");
        }
        inline app::WaapiJsonStopSoundArgs* create() {
            return il2cpp::create_object<app::WaapiJsonStopSoundArgs>(get_class());
        }
    } // namespace WaapiJsonStopSoundArgs
} // namespace app::classes::types