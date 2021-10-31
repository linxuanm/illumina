cmake_minimum_required(VERSION 3.13)

FIND_PACKAGE(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

set(TEST_SOURCES
        parse_test.c
)

add_executable(IlluminaTest ${TEST_SOURCES})
target_link_libraries(IlluminaTest IlluminaLib ${CHECK_LIBRARIES})

add_test(NAME IlluminaTest COMMAND IlluminaTest)
