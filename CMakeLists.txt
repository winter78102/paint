cmake_minimum_required(VERSION 3.30)
project(untitled8)

set(CMAKE_CXX_STANDARD 20)

add_executable(paint main.cpp
        shapes/Shape.h
        shapes/rectangle/Rectangle.cpp
        shapes/rectangle/Rectangle.h
        shapes/shape_merge_class.h
        shapes/circle/circle.cpp
        shapes/circle/circle.h
        shapes/triangle/triangle.cpp
        shapes/triangle/triangle.h
        shapes/square/Square.cpp
        shapes/square/Square.h
        interface/interface.hpp
        interface/interface.cpp
        storage/Storage.cpp
        storage/Storage.h
        shapes/Shape.cpp
)
