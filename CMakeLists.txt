cmake_minimum_required(VERSION 3.14)
project(z3)

set(CMAKE_CXX_STANDARD 17)

add_executable(z3 main.cpp player.cpp team.cpp player.h team.h)