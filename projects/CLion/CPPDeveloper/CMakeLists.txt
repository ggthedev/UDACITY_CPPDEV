cmake_minimum_required(VERSION 3.25)
project(CPPDeveloper)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../../../build")

add_executable(hello main.cpp)
add_executable(vectorsDance ../../../src/vectorsIntro.cpp)
