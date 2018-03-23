CC=gcc
FLAGS=--std=c11 -O3 -ggdb
INCLUDE_DIRS=-Iinclude
EXEC_NAME=todo-list

SOURCES=src/main.c src/keyboard.c
INCLUDES=include/program.h include/tty.h include/keyboard.h

all: $(SOURCES) $(INCLUDES)
	$(CC) $(INCLUDE_DIRS) -o $(EXEC_NAME) $(SOURCES) $(FLAGS)
