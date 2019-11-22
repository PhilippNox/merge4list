cmake_minimum_required(VERSION 3.14.2)
project(Merge4list)

set(CMAKE_C_STANDARD 99)
include_directories(libft/includes/ ./include data/)

aux_source_directory(sort merge)

add_executable(merge ${merge})
target_link_libraries(merge ${PROJECT_SOURCE_DIR}/libft/lib/libft.a)

target_include_directories(merge PUBLIC src/sort)