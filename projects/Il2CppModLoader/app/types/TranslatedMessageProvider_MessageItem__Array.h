#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TranslatedMessageProvider_MessageItem__Array {
        namespace {
            app::TranslatedMessageProvider_MessageItem__Array__Class* type_info_ref = nullptr;
        }
        app::TranslatedMessageProvider_MessageItem__Array__Class** type_info = &type_info_ref;
        inline app::TranslatedMessageProvider_MessageItem__Array__Class* get_class() {
            return il2cpp::get_class<app::TranslatedMessageProvider_MessageItem__Array__Class>(type_info, "", "TranslatedMessageProvider+MessageItem[]");
        }
        inline app::TranslatedMessageProvider_MessageItem__Array* create() {
            return il2cpp::create_object<app::TranslatedMessageProvider_MessageItem__Array>(get_class());
        }
    } // namespace TranslatedMessageProvider_MessageItem__Array
} // namespace app::classes::types