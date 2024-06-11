cmake_minimum_required(VERSION 3.10) 

project(ai_csw)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCE_FILES src/main.cpp)
add_executable(main ${SOURCE_FILES})
