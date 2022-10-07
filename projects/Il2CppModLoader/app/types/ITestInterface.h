#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITestInterface {
        namespace {
            app::ITestInterface__Class* type_info_ref = nullptr;
        }
        app::ITestInterface__Class** type_info = &type_info_ref;
        inline app::ITestInterface__Class* get_class() {
            return il2cpp::get_class<app::ITestInterface__Class>(type_info, "", "ITestInterface");
        }
    } // namespace ITestInterface
} // namespace app::classes::types