cmake_minimum_required(VERSION 3.25)
project(postfix)

set(CMAKE_CXX_STANDARD 17)
set(INCLUDE_DIRECTORIES ./)

add_executable(postfix main.cpp stapel.h stapel_imp.h)
