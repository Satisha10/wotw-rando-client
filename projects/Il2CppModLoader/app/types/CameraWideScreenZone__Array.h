#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraWideScreenZone__Array {
        namespace {
            app::CameraWideScreenZone__Array__Class* type_info_ref = nullptr;
        }
        app::CameraWideScreenZone__Array__Class** type_info = &type_info_ref;
        inline app::CameraWideScreenZone__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraWideScreenZone__Array__Class>(type_info, "", "CameraWideScreenZone[]");
        }
        inline app::CameraWideScreenZone__Array* create() {
            return il2cpp::create_object<app::CameraWideScreenZone__Array>(get_class());
        }
    } // namespace CameraWideScreenZone__Array
} // namespace app::classes::types