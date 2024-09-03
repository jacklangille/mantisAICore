cmake_minimum_required(VERSION 3.5)
project(jetsonCore)

set(CMAKE_CXX_STANDARD 17)

find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})

set(PROTO_SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR})
set(PROTO_FILES ${PROTO_SRC_DIR}/proto/protocol.proto)

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

add_library(proto_files ${PROTO_SRCS} ${PROTO_HDRS})

add_executable(sender src/sender.cpp)
add_executable(adam src/adam.cpp)

target_link_libraries(sender proto_files ${Protobuf_LIBRARIES})
target_link_libraries(adam proto_files ${Protobuf_LIBRARIES})
