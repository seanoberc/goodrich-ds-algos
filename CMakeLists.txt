cmake_minimum_required(VERSION 4.1)
project(goodrich_ds_algos)

set(CMAKE_CXX_STANDARD 14)

add_executable(goodrich_ds_algos
        ch3-using-arrays/main.cpp
        ch3-using-arrays/GameEntry.cpp
        ch3-using-arrays/GameEntry.h
        ch3-using-arrays/Scores.h
        ch3-using-arrays/Scores.cpp)
