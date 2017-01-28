project(dummy NONE)

message(STATUS "Compiler: ${CMAKE_CXX_COMPILER}")

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_COLOR_MAKEFILE ON)

set(CMAKE_CXX_FLAGS "-std=c++1y -Wall -Wextra")

# boost
find_package(Boost REQUIRED COMPONENTS system filesystem program_options)
message(STATUS "Boost library dir = ${Boost_LIBRARY_DIRS}")
message(STATUS "Boost include dir = ${Boost_INCLUDE_DIRS}")


# set output directories
set( EXECUTEABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin CACHE PATH "Output directory for executables")


add_executable(main main.cpp)
target_link_libraries(main ${Boost_LIBRARIES})
