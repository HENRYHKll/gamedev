cmake_minimum_required(VERSION 3.18)

project(Library VERSION 0.0.53)

configure_file(
        config.h.in 
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(lib-static STATIC lib.cpp lib.h)
set_target_properties(
        lib-static PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        lib-static 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)
add_library(lib-dynamic SHARED lib.cpp lib.h)
set_target_properties(
        lib-dynamic PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        lib-dynamic 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)