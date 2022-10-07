#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberDofCacheDictionary {
        namespace {
            app::UberDofCacheDictionary__Class* type_info_ref = nullptr;
        }
        app::UberDofCacheDictionary__Class** type_info = &type_info_ref;
        inline app::UberDofCacheDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberDofCacheDictionary__Class>(type_info, "", "UberDofCacheDictionary");
        }
        inline app::UberDofCacheDictionary* create() {
            return il2cpp::create_object<app::UberDofCacheDictionary>(get_class());
        }
    } // namespace UberDofCacheDictionary
} // namespace app::classes::types