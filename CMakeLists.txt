cmake_minimum_required(VERSION 3.5)

project(Contour LANGUAGES CXX)

add_subdirectory(lib)
add_subdirectory(test)
enable_testing ()
add_test (NAME ContourTest COMMAND ContourTest)
