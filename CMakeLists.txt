cmake_minimum_required(VERSION 3.4.0)

# Globals
set(EXECUTABLE_NAME todo-list)
set(PROJECT_BUILD_DIR "${CMAKE_SOURCE_DIR}/.cmakebuild")

project(${EXECUTABLE_NAME})
# Configure our shit
set(CMAKE_BINARY_DIR ${PROJECT_BUILD_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR})

include_directories("${CMAKE_SOURCE_DIR}/include")
set(SOURCES src/main.c src/keyboard.c)

# Add our executable
add_executable(${EXECUTABLE_NAME} ${SOURCES})