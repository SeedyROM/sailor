#pragma once
#include <stdio.h>
#include <stdlib.h>

struct _program_state;

typedef enum {
    NO_KEY = 0,
    UP = 'A',
    DOWN = 'B',
    RIGHT = 'C',
    LEFT = 'D',
} keyboard_key;

void keyboard_handle_keys(struct _program_state* state);