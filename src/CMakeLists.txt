project(dummy NONE)

message(STATUS "Compiler: ${CMAKE_CXX_COMPILER}")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)

set(CMAKE_CXX_FLAGS "-std=c++1y -Wall -Wextra")

# set output directories
set( EXECUTEABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin CACHE PATH "Output directory for executables")


add_executable(main main.cpp)
message(STATUS "main")
