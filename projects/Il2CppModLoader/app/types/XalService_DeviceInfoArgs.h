#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_DeviceInfoArgs {
        namespace {
            app::XalService_DeviceInfoArgs__Class* type_info_ref = nullptr;
        }
        app::XalService_DeviceInfoArgs__Class** type_info = &type_info_ref;
        inline app::XalService_DeviceInfoArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_DeviceInfoArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "DeviceInfoArgs");
        }
        inline app::XalService_DeviceInfoArgs* create() {
            return il2cpp::create_object<app::XalService_DeviceInfoArgs>(get_class());
        }
        inline app::XalService_DeviceInfoArgs__Boxed* box(app::XalService_DeviceInfoArgs value) {
            return il2cpp::box_value<app::XalService_DeviceInfoArgs__Boxed>(get_class(), value);
        }
    } // namespace XalService_DeviceInfoArgs
} // namespace app::classes::types