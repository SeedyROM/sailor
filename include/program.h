#pragma once 

#include "keyboard.h"

// Some data structures.
typedef enum {
    false,
    true
} bool;

typedef enum {
    INPUT,
    DRAW_UI,
} program_states;

typedef struct _program_state {
    bool running;
    program_states state;
    keyboard_key key_pressed;
} program_state;