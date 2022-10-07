#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JsonContractType__Enum {
        namespace {
            app::JsonContractType__Enum__Class* type_info_ref = nullptr;
        }
        app::JsonContractType__Enum__Class** type_info = &type_info_ref;
        inline app::JsonContractType__Enum__Class* get_class() {
            return il2cpp::get_class<app::JsonContractType__Enum__Class>(type_info, "Newtonsoft.Json.Serialization", "JsonContractType");
        }
        inline app::JsonContractType__Enum* create() {
            return il2cpp::create_object<app::JsonContractType__Enum>(get_class());
        }
    } // namespace JsonContractType__Enum
} // namespace app::classes::types