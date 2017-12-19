cmake_minimum_required(VERSION 3.8)
project(Zachet)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Form.h Sphere.h Sphere.cpp Point.h)
add_executable(Zachet ${SOURCE_FILES})