cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD 20)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_library(protocol Message.cpp Messages.cpp)