#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AudioStateZone__Array {
        namespace {
            app::AudioStateZone__Array__Class* type_info_ref = nullptr;
        }
        app::AudioStateZone__Array__Class** type_info = &type_info_ref;
        inline app::AudioStateZone__Array__Class* get_class() {
            return il2cpp::get_class<app::AudioStateZone__Array__Class>(type_info, "", "AudioStateZone[]");
        }
        inline app::AudioStateZone__Array* create() {
            return il2cpp::create_object<app::AudioStateZone__Array>(get_class());
        }
    } // namespace AudioStateZone__Array
} // namespace app::classes::types