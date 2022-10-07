#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EMarketNotAllowedReasonFlags__Enum {
        namespace {
            app::EMarketNotAllowedReasonFlags__Enum__Class* type_info_ref = nullptr;
        }
        app::EMarketNotAllowedReasonFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EMarketNotAllowedReasonFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EMarketNotAllowedReasonFlags__Enum__Class>(type_info, "Steamworks", "EMarketNotAllowedReasonFlags");
        }
        inline app::EMarketNotAllowedReasonFlags__Enum* create() {
            return il2cpp::create_object<app::EMarketNotAllowedReasonFlags__Enum>(get_class());
        }
    } // namespace EMarketNotAllowedReasonFlags__Enum
} // namespace app::classes::types