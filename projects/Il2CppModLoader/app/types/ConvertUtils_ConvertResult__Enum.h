#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConvertUtils_ConvertResult__Enum {
        namespace {
            app::ConvertUtils_ConvertResult__Enum__Class* type_info_ref = nullptr;
        }
        app::ConvertUtils_ConvertResult__Enum__Class** type_info = &type_info_ref;
        inline app::ConvertUtils_ConvertResult__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConvertUtils_ConvertResult__Enum__Class>(type_info, "Newtonsoft.Json.Utilities", "ConvertUtils", "ConvertResult");
        }
        inline app::ConvertUtils_ConvertResult__Enum* create() {
            return il2cpp::create_object<app::ConvertUtils_ConvertResult__Enum>(get_class());
        }
    } // namespace ConvertUtils_ConvertResult__Enum
} // namespace app::classes::types