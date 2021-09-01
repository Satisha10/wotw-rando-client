#include <input\enums\actions.h>
#include <input\enums\buttons.h>

namespace input
{
    using rando_input_callback = void(*)();

    // The methods below will only work for Action::OpenRandoWheel and higher.

    void add_on_pressed_callback(Action action, rando_input_callback callback);
    void add_on_released_callback(Action action, rando_input_callback callback);
    void add_controller_binding(Action action, ControllerButton button);

    bool is_pressed(Action action);
}