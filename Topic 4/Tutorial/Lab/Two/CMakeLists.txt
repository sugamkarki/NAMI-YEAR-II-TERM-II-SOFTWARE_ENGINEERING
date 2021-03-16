cmake_minimum_required(VERSION 3.17)
project(two C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(two
        BasicShape.h)
