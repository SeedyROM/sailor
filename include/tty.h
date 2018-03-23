#pragma once
#include <termios.h>
#include <unistd.h>

// Keep these around for the entire execution of the program.
static struct termios old_tty, new_tty; 

// Function to configure our TTY.
static void tty_configure() {
    // Get our old tty's fd and store it for later
    // so we can restore it.
    tcgetattr(STDIN_FILENO, &old_tty);
    new_tty = old_tty;

    // Take STDIN on key-input instead of waiting for \n.
    // Disable echo.
    new_tty.c_lflag &= ~(ICANON | ECHO);
    
    // Make the changes to our new terminal.
    tcsetattr(STDIN_FILENO, TCSANOW, &new_tty);
}

// Function to restoret the TTY to it's original state.
static void tty_restore() {
    tcsetattr(STDIN_FILENO, TCSANOW, &old_tty);
}