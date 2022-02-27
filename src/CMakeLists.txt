cmake_minimum_required(VERSION 3.10)

add_executable(SB31_2 main.cpp listgraph.cpp matrixgraph.cpp)
target_include_directories(SB31_2 PUBLIC ${MY_INCLUDE_DIR})
