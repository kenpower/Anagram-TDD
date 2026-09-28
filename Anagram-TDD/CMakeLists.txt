cmake_minimum_required(VERSION 3.14)
project(AnagramTDD LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(anagram STATIC src/anagram.cpp)
target_include_directories(anagram PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(tests)
