cmake_minimum_required(VERSION 3.22)

project(CppTestTemplate VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(Catch2 3 REQUIRED)
# find_package(SDL2 REQUIRED)
# include_directories(${SDL2_INCLUDE_DIRS})

add_executable(
    ${PROJECT_NAME}
    src/example.hpp
    src/example.cpp
    tests/test.cpp
)

target_link_libraries(${PROJECT_NAME} PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)

catch_discover_tests(${PROJECT_NAME})

# target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
target_compile_options(
    ${PROJECT_NAME}
    PRIVATE
    -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic
    -Wold-style-cast -Wcast-align -Wunused -Woverloaded-virtual
    -Wpedantic -Wconversion -Wsign-conversion -Wmisleading-indentation
    -Wduplicated-cond -Wduplicated-branches -Wlogical-op -Wnull-dereference
    -Wuseless-cast -Wdouble-promotion -Wformat=2 -Wimplicit-fallthrough
    # -Weffc++
)
