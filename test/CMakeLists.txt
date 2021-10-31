cmake_minimum_required(VERSION 3.13)

set(TEST_HEADERS
        parse_test.c
)

set(TEST_HEADERS
        parse_test.h
)

add_executable(IlluminaTest ${TEST_HEADERS} ${TEST_SOURCES})
