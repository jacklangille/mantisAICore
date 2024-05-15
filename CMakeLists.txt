cmake_minimum_required(VERSION 3.10) 

project(obc_ai_sw)

# Set C++14 
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(/usr/local/include/eigen3/Eigen)
include_directories(include)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/network/ethernetPayload.cpp
    src/network/uartMicro.cpp
    src/network/uartPayload1.cpp
    src/network/uartPayload2.cpp
)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
