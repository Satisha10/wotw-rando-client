#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VirtualClipsProviderTester {
        namespace {
            app::VirtualClipsProviderTester__Class* type_info_ref = nullptr;
        }
        app::VirtualClipsProviderTester__Class** type_info = &type_info_ref;
        inline app::VirtualClipsProviderTester__Class* get_class() {
            return il2cpp::get_class<app::VirtualClipsProviderTester__Class>(type_info, "", "VirtualClipsProviderTester");
        }
        inline app::VirtualClipsProviderTester* create() {
            return il2cpp::create_object<app::VirtualClipsProviderTester>(get_class());
        }
    } // namespace VirtualClipsProviderTester
} // namespace app::classes::types