cmake_minimum_required(VERSION 3.18)
project(hello-world VERSION 0.0.13)

configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.hxx
)
set(SOURCES
        main.cxx
        version.cxx
)
set(HEADERS
        version.hxx)

add_executable(hello-world ${SOURCES} ${HEADERS})
target_compile_features(hello-world PUBLIC cxx_std_17)
target_include_directories(
        hello-world
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)

include(CTest)
add_test(NAME chec_hello_world 
        COMMAND hello-world)