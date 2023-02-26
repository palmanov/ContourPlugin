cmake_minimum_required(VERSION 3.5)

project(ContourLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(ContourLib
    include
    /usr/local/include
    /opt/homebrew/include)

add_library(ContourLib
    include/contourmethod.h src/contourmethod.cpp)

install(TARGETS ContourLib
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

link_libraries(ContourLib PUBLIC boost)
