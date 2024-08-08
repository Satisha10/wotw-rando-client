#pragma once

#include <Core/enums/async_loading_state.h>
#include <Common/event_bus.h>
#include <Core/macros.h>

namespace core::api::game::in_game_timer {
    enum class TimeStepType {
        InGameTime,
        AsyncLoadingTime,
    };

    struct TimeStep {
        TimeStepType type;
        float duration;
    };

    CORE_DLLEXPORT common::EventBus<TimeStep>& time_step_event_bus();
    CORE_DLLEXPORT AsyncLoadingState get_last_async_loading_state();
}
