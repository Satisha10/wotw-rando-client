#include <dll_main.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

INJECT_C_DLLEXPORT bool in_menu();

namespace
{
    constexpr float NO_AIR_DECELERATION_DURATION = 0.2f;
    constexpr float NO_AIR_DECELERATION_RESET_DURATION = 0.2f;
    float aim_timer = 0.0f;
    float reset_timer = 0.0f;

    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, IsInventoryVisible, ());
    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    bool is_aiming_launch(app::CharacterAirNoDeceleration* this_ptr)
    {
        if (!in_menu())
        {
            if (aim_timer >= 0.0f)
                aim_timer -= TimeUtility::get_deltaTime();
            if (reset_timer >= 0.0f)
                reset_timer -= TimeUtility::get_deltaTime();
        }

        auto* sein = get_sein();
        auto* wrapper = sein->fields.Abilities->fields.ChargeJumpWrapper;
        if (wrapper->fields.HasState && wrapper->fields.State->fields.m_state == app::SeinChargeJump_State__Enum_Aiming)
        {
            aim_timer = NO_AIR_DECELERATION_DURATION;
            if (reset_timer > 0.0f)
                this_ptr->fields.m_noDeceleration = true;
        }

        return aim_timer > 0.0f;
    }

    IL2CPP_INTERCEPT(, CharacterAirNoDeceleration, void, UpdateCharacterState, (app::CharacterAirNoDeceleration* this_ptr)) {
        auto* platform_behaviour = this_ptr->fields.PlatformBehaviour;
        auto* platform_movement = platform_behaviour->fields.PlatformMovement;
        if (!il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsSuspended")->fields)
        {
            if (il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsOnGround")->fields)
                this_ptr->fields.m_noDeceleration = false;

            if (0.00000000 <= il2cpp::invoke<app::Single__Boxed>(platform_movement, "get_LocalSpeedY")->fields &&
                platform_movement->fields._.Ceiling->fields.IsOn)
                this_ptr->fields.m_noDeceleration = false;

            auto* left_right_movement = platform_behaviour->fields.LeftRightMovement;
            if (!left_right_movement->fields.m_settings->fields.LockInput &&
                !is_aiming_launch(this_ptr) &&
                left_right_movement->fields.m_horizontalInput != 0.0)
            {
                if (this_ptr->fields.m_noDeceleration)
                    reset_timer = NO_AIR_DECELERATION_RESET_DURATION;

                this_ptr->fields.m_noDeceleration = false;
            }
        }
    }
}

INJECT_C_DLLEXPORT bool in_menu()
{
    return il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->m_sMenu->fields.m_equipmentWhellVisible
        || UI::get_MainMenuVisible()
        || UI::get_WorldMapVisible()
        || UI::get_ShardShopVisible()
        || UI::IsInventoryVisible();
}