cmake_minimum_required(VERSION 3.5)

project(ContourTest LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    ../lib/include
    include
    /usr/local/include
    /opt/homebrew/include)
add_executable(ContourTest src/main.cpp)
target_link_libraries(ContourLib)
