cmake_minimum_required(VERSION 3.24)
project(Objektorientert_programering)

set(CMAKE_CXX_STANDARD 17)

add_executable(Objektorientert_programering main.cpp)
target_include_directories(Objektorientert_programering PUBLIC "${CMAKE_SOURCE_DIR}/include")
