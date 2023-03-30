# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/depthai-core EXCLUDE_FROM_ALL)

# project name and language
project(cpp-oak LANGUAGES CXX)

add_executable(cpp-oak src/main.cpp)

#target_link_libraries(cpp-oak PRIVATE depthai::opencv)