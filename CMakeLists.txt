cmake_minimum_required(VERSION 3.0)
project(TicTacToe)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(SOURCE main.cpp tictactoe.h tictactoe.cpp)
add_executable(${PROJECT_NAME} ${SOURCE})
set(CMAKE_CXX_STANDARD 17)
set_property(TARGET TicTacToe
    PROPERTY CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)