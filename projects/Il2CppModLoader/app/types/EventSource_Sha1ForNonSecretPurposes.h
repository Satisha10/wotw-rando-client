#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EventSource_Sha1ForNonSecretPurposes {
        namespace {
            app::EventSource_Sha1ForNonSecretPurposes__Class* type_info_ref = nullptr;
        }
        app::EventSource_Sha1ForNonSecretPurposes__Class** type_info = &type_info_ref;
        inline app::EventSource_Sha1ForNonSecretPurposes__Class* get_class() {
            return il2cpp::get_nested_class<app::EventSource_Sha1ForNonSecretPurposes__Class>(type_info, "System.Diagnostics.Tracing", "EventSource", "Sha1ForNonSecretPurposes");
        }
        inline app::EventSource_Sha1ForNonSecretPurposes* create() {
            return il2cpp::create_object<app::EventSource_Sha1ForNonSecretPurposes>(get_class());
        }
        inline app::EventSource_Sha1ForNonSecretPurposes__Boxed* box(app::EventSource_Sha1ForNonSecretPurposes value) {
            return il2cpp::box_value<app::EventSource_Sha1ForNonSecretPurposes__Boxed>(get_class(), value);
        }
    } // namespace EventSource_Sha1ForNonSecretPurposes
} // namespace app::classes::types