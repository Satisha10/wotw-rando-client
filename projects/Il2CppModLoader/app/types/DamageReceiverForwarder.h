#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DamageReceiverForwarder {
        namespace {
            app::DamageReceiverForwarder__Class* type_info_ref = nullptr;
        }
        app::DamageReceiverForwarder__Class** type_info = &type_info_ref;
        inline app::DamageReceiverForwarder__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiverForwarder__Class>(type_info, "", "DamageReceiverForwarder");
        }
        inline app::DamageReceiverForwarder* create() {
            return il2cpp::create_object<app::DamageReceiverForwarder>(get_class());
        }
    } // namespace DamageReceiverForwarder
} // namespace app::classes::types