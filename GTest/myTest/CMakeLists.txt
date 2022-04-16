cmake_minimum_required(VERSION 3.16.3)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(myTest tests.cpp)
target_link_libraries(myTest ${GTEST_LIBRARIES} pthread)