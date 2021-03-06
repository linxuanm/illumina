cmake_minimum_required(VERSION 3.13)

project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C)

option(INCLUDE_RUNTIME "Include the Illumina runtime" ON)
option(INCLUDE_COMPILER "Include the Illumina compiler" ON)

set(COMMON_INCLUDES)
set(RUNTIME_DIR src/runtime)
set(COMPILER_DIR src/compiler)

add_executable(Illumina src/main.c ${COMMON_INCLUDES})

if(INCLUDE_RUNTIME)
    include_directories(RUNTIME_DIR)
    message("Runtime included")
endif()

if(INCLUDE_COMPILER)
    include_directories(COMPILER_DIR)
    message("Compiler included")
endif()

set(CMAKE_C_STANDARD 11)