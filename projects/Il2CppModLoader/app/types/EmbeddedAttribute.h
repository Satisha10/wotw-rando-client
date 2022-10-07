#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmbeddedAttribute {
        namespace {
            app::EmbeddedAttribute__Class* type_info_ref = nullptr;
        }
        app::EmbeddedAttribute__Class** type_info = &type_info_ref;
        inline app::EmbeddedAttribute__Class* get_class() {
            return il2cpp::get_class<app::EmbeddedAttribute__Class>(type_info, "Microsoft.CodeAnalysis", "EmbeddedAttribute");
        }
        inline app::EmbeddedAttribute* create() {
            return il2cpp::create_object<app::EmbeddedAttribute>(get_class());
        }
    } // namespace EmbeddedAttribute
} // namespace app::classes::types