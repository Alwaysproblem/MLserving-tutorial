cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(add_index)

enable_testing()

find_package(Torch REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
