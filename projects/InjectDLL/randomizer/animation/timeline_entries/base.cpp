#pragma once

#include <randomizer/animation/timeline_entries/base.h>
#include <randomizer/animation/animation.h>
#include <randomizer/animation/timeline.h>
#include <randomizer/sound.h>

namespace randomizer
{
    namespace timeline_entries
    {
        void Base::parse(nlohmann::json const& j)
        {
            id = j.value<int>("id", 0);
            type = j.value<TimelineEntryType>("type", TimelineEntryType::Unknown);
            start_time = j.value("start_time", 0);
        }

        void Target::parse(nlohmann::json const& j)
        {
            target_type = j.value<TimelineObjectType>("target_type", TimelineObjectType::Unknown);
            Base::parse(j);
        }

        app::GameObject* get_target(TimelineState const& state, TimelineObjectType target_type, int id)
        {
            app::GameObject* root = nullptr;
            switch (target_type)
            {
            case TimelineObjectType::Animation:
            {
                auto animation = state.active_animations.find(id);
                if (animation != state.active_animations.end())
                    root = animation->second->root();
                break;
            }
            case TimelineObjectType::Sound:
            {
                auto sound = state.active_sounds.find(id);
                if (sound != state.active_sounds.end())
                    root = sound->second->root();
                break;
            }
            case TimelineObjectType::Text:
                // TODO: Handle text
                break;
            default:
                break;
            }

            return root;
        }
    }
}