cmake_minimum_required(VERSION 3.27)
project(Exercism)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp/hello-world)
include_directories(cpp/hello-world/test)

add_executable(Exercism
        cpp/hello-world/test/catch.hpp
        cpp/hello-world/test/tests-main.cpp
        cpp/hello-world/hello_world.cpp
        cpp/hello-world/hello_world.h
        cpp/hello-world/hello_world_test.cpp
        cpp/pacman-rules/conditionFunction.cpp
        cpp/pacman-rules/conditionFunction.h
        cpp/last-will/test/functions.cpp
        cpp/last-will/myFunctions.cpp
        mesTests.cpp
        main.h)
