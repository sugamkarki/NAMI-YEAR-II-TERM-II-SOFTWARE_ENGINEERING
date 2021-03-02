cmake_minimum_required(VERSION 3.17)
project(clion)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(main
        main.cpp
        )
add_executable(circle circle.cpp)