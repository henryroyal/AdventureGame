cmake_minimum_required(VERSION 3.9)
project(AdventureGame C)

set(CMAKE_C_STANDARD 99)

include_directories(include)
#link_libraries(ncurses)
add_executable(AdventureGame main.c
        src/clock.c include/clock.h src/world.c)
