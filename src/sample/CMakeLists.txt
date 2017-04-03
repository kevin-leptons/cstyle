cmake_minimum_required(VERSION 3.0)
project(cstyle-sample)

# output directory
# dynamic and static libraries => lib
# exutables => bin
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(src/inc)
add_subdirectory(src/imp)
