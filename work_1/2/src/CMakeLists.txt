cmake_minimum_required(VERSION 3.18)

project(hello VERSION 0.0.15)

configure_file(
        config.h.in 
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_executable(hello-static main.cpp)
set_target_properties(
        hello-static PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        hello-static 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
        hello-static
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)
target_link_libraries(hello-static lib-static)

add_executable(hello-dynamic main.cpp)
set_target_properties(
        hello-dynamic PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
)
target_include_directories(
        hello-dynamic 
        PRIVATE 
        ${CMAKE_CURRENT_BINARY_DIR}
)

target_include_directories(
        hello-dynamic
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)
target_link_libraries(hello-dynamic lib-dynamic)

include(CTest)
add_test(NAME chec_hello_dynamic 
        COMMAND hello-dynamic)
add_test(NAME chec_hello_static 
        COMMAND hello-static)        
