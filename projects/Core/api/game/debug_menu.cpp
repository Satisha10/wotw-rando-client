#include <Core/api/game/debug_menu.h>
#include <Modloader/app/methods/CheatsHandler.h>
#include <Modloader/app/types/CheatsHandler.h>
#include <Modloader/app/types/DebugValues.h>
#include <optional>

using namespace app::classes;

namespace core::api::game::debug_menu {
    /**
     * This flag is true if Debug Controls have been enabled
     * at any point since the game started or the debug
     * menu has been opened at least once.
     */
    bool debug_was_active_this_session = false;

    /**
     * If true, prevents enabling debug mode
     */
    bool prevent_cheats = false;

    std::optional<bool> was_debug_enabled_initially = std::nullopt;

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebug, (app::CheatsHandler* this_ptr)) {
        if (prevent_cheats) {
            return;
        }

        debug_was_active_this_session = true;
        next::CheatsHandler::ActivateDebug(this_ptr);
    }

    IL2CPP_INTERCEPT(CheatsHandler, void, ActivateDebugMenu, (app::CheatsHandler* this_ptr)) {
        if (prevent_cheats) {
            return;
        }

        debug_was_active_this_session = true;
        next::CheatsHandler::ActivateDebugMenu(this_ptr);
    }

    void set_should_prevent_cheats(bool prevent) {
        if (!was_debug_enabled_initially.has_value()) {
            was_debug_enabled_initially = is_debug_enabled();
        }

        if (prevent && is_debug_enabled()) {
            set_debug_enabled(false);
        } else if (!prevent && was_debug_enabled_initially.has_value() && *was_debug_enabled_initially) {
            set_debug_enabled(true);
        }

        prevent_cheats = prevent;
    }

    bool should_prevent_cheats() {
        return prevent_cheats;
    }

    void set_debug_enabled(bool enable) {
        if (enable && prevent_cheats) {
            return;
        }

        if (enable) {
            debug_was_active_this_session = true;
        }

        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        if (cheats->Instance->fields.DebugEnabled != enable) {
            cheats->Instance->fields.DebugEnabled = enable;
            cheats->DebugWasEnabled = cheats->DebugWasEnabled || enable;
            cheats->DebugAlwaysEnabled = enable;
            types::DebugValues::get_class()->static_fields->DebugControlsEnabled = enable;
        }
    }

    bool is_debug_enabled() {
        const auto cheats = types::CheatsHandler::get_class()->static_fields;
        return cheats->Instance->fields.DebugEnabled;
    }

    bool was_debug_active_this_session() {
        return debug_was_active_this_session;
    }
}
