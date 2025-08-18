cmake_minimum_required(VERSION 3.30)
project(untitled8)

set(CMAKE_CXX_STANDARD 20)

add_executable(paint main.cpp
        shapes/shape.h
        shapes/rectangle/rectangle.cpp
        shapes/rectangle/rectangle.h
        shapes/shape_merge_class.h
        shapes/circle/circle.cpp
        shapes/circle/circle.h
        shapes/triangle/triangle.cpp
        shapes/triangle/triangle.h
        shapes/square/square.cpp
        shapes/square/square.h
        interface/interface.hpp
        interface/interface.cpp
        storage/Storage.cpp
        storage/Storage.h
)
