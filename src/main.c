#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "tty.h"
#include "program.h"
#include "keyboard.h"

int main(int argc, char** argv) {
    program_state state;
    state.running = true;
    state.state = INPUT;
    
    tty_configure();
    while(state.running) {
        keyboard_handle_keys(&state);
    }
    tty_restore();
    
    return 0;
}