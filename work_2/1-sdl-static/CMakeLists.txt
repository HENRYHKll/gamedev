cmake_minimum_required(VERSION 3.18)
project(1-sdl-static)

find_package(SDL2 REQUIRED)
add_executable(1-sdl-static ${CMAKE_CURRENT_LIST_DIR}/../main.cxx)
target_compile_features(1-sdl-static PUBLIC cxx_std_17)

find_library(SDL2_LIB libSDL2.a)

target_link_libraries(1-sdl-static
    ${SDL2_LIB}
    -lm
    -ldl
    -lpthread
    -lrt
    )
