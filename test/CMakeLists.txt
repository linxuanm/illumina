cmake_minimum_required(VERSION 3.13)

FIND_PACKAGE(Check REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

set(COMPILER_TEST_HEADERS
        cases.h
)

set(COMPILER_TEST_SOURCES
        parse_test.c
        cases.c
)

add_executable(CompilerTest ${COMPILER_TEST_SOURCES})
target_link_libraries(CompilerTest
        IlluminaLib
        ${CHECK_LIBRARIES}
        ${COMPILER_TEST_HEADERS}
)

add_test(NAME CompilerTest COMMAND CompilerTest)
