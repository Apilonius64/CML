cmake_minimum_required(VERSION 3.0)
project(cml)

file(GLOB_RECURSE test src/main/*.cpp src/main/*.h)
file(GLOB_RECURSE sources src/cml/*.h src/cml/*.cpp)
file(GLOB_RECURSE data res/*)

add_executable(cml ${sources} ${test})
target_include_directories(cml PUBLIC src/)

file(COPY ${data} DESTINATION res)