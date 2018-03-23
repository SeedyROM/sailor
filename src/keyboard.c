#include "program.h"
#include "keyboard.h"

void keyboard_handle_keys(program_state* state) {
    // Get a single character from stdin.
    const char key = getchar();

    // Check if arrow key.
    if(key == '\033') {
        getchar(); // Ignore this byte!
        // Get the next byte which is our direction.
        const char direction = getchar();

        // Set our state.
        if(
            direction == UP ||
            direction == DOWN ||
            direction == RIGHT ||
            direction == LEFT
        ) {
            state->key_pressed = direction;
        }
    } else {
        // Otherwise no valid keys are pressed!.
        state->key_pressed = NO_KEY;
    }
    printf("%c\n", state->key_pressed);
}