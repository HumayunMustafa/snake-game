cmake_minimum_required(VERSION 3.24)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(SnakeGame
main.cc)

target_link_libraries(SnakeGame ncurses tinfo)