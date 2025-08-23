cmake_minimum_required(VERSION 3.30)
project(Paint)
set(CMAKE_CXX_STANDARD 20)
file(GLOB_RECURSE SOURCES src/*.cpp)
file(GLOB_RECURSE HEADERS "${PROJECT_SOURCE_DIR}/include/*.h")
add_executable(Paint ${SOURCES} ${HEADERS})
        target_include_directories(${PROJECT_NAME} PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

