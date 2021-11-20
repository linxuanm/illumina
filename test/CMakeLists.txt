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

add_library(CompilerTestLib ${COMPILER_TEST_HEADERS} ${COMPILER_TEST_SOURCES})

add_executable(CompilerTest parse_test.c)
target_link_libraries(CompilerTest
        IlluminaLib
        CompilerTestLib
        ${CHECK_LIBRARIES}
)

add_test(NAME CompilerTest COMMAND CompilerTest)
