#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashInteractable {
        namespace {
            app::SpiritLeashInteractable__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashInteractable__Class** type_info = &type_info_ref;
        inline app::SpiritLeashInteractable__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashInteractable__Class>(type_info, "", "SpiritLeashInteractable");
        }
        inline app::SpiritLeashInteractable* create() {
            return il2cpp::create_object<app::SpiritLeashInteractable>(get_class());
        }
    } // namespace SpiritLeashInteractable
} // namespace app::classes::types