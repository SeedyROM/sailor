#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef enum {
    NO_KEY = 0,
    UP = 'A',
    DOWN = 'B',
    RIGHT = 'C',
    LEFT = 'D',
} keyboard_key;

void keyboard_handle_keys(program_state* state);