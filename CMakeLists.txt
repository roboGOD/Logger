cmake_minimum_required (VERSION 3.5)

project (Logger)

set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror -std=c++14")
set (source_dir "${PROJECT_SOURCE_DIR}/src/")

file (GLOB source_files "${source_dir}/*")

add_executable (Logger ${source_files})
