#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MobileAuthenticatedStream_OperationType__Enum {
        namespace {
            app::MobileAuthenticatedStream_OperationType__Enum__Class* type_info_ref = nullptr;
        }
        app::MobileAuthenticatedStream_OperationType__Enum__Class** type_info = &type_info_ref;
        inline app::MobileAuthenticatedStream_OperationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MobileAuthenticatedStream_OperationType__Enum__Class>(type_info, "Mono.Net.Security", "MobileAuthenticatedStream", "OperationType");
        }
        inline app::MobileAuthenticatedStream_OperationType__Enum* create() {
            return il2cpp::create_object<app::MobileAuthenticatedStream_OperationType__Enum>(get_class());
        }
    } // namespace MobileAuthenticatedStream_OperationType__Enum
} // namespace app::classes::types