cmake_minimum_required(VERSION 3.13)

project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

option(INCLUDE_RUNTIME "Include the Illumina runtime" ON)
option(INCLUDE_COMPILER "Include the Illumina compiler" ON)

set(COMMON_HEADERS src/common/debug.h)
set(COMMON_SOURCES)

set(RUNTIME_DIR src/runtime)
set(COMPILER_DIR src/compiler)

add_executable(Illumina src/main.c ${COMMON_HEADERS} ${COMMON_SOURCES})

if(INCLUDE_RUNTIME)
    include_directories(RUNTIME_DIR)
    message("Runtime included")
endif()

if(INCLUDE_COMPILER)
    include_directories(COMPILER_DIR)
    message("Compiler included")
endif()

unset(INCLUDE_RUNTIME CACHE)
unset(INCLUDE_COMPILER CACHE)
