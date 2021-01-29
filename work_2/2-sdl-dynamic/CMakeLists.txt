cmake_minimum_required(VERSION 3.18)
project(2-sdl-dynamic)

find_package(SDL2 REQUIRED)
add_executable(2-sdl-dynamic ../main.cxx)
target_compile_features(2-sdl-dynamic PUBLIC cxx_std_17)

target_link_libraries(2-sdl-dynamic 
                    PRIVATE 
                    SDL2::SDL2)