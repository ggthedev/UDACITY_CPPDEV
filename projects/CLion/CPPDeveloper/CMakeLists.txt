cmake_minimum_required(VERSION 3.25) #set the minimum version of cmake needed to build the project

project(CPPDeveloper LANGUAGES CXX) #set the project name + source code language

set(CMAKE_CXX_STANDARD 17) #set the C++ standard
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ../../../build) #set the run time directory which will contain the binary

#following defines a binary with name and source files needed to generate it
add_executable(vectorsDance ../../../src/vectorsIntro.cpp)
add_executable(final-proj ../../../src/udacppdev.cpp)