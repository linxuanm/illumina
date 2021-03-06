cmake_minimum_required(VERSION 3.13)

project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

option(INCLUDE_RUNTIME "Include the Illumina runtime" ON)
option(INCLUDE_COMPILER "Include the Illumina compiler" ON)

set(RUNTIME_DIR src/runtime)
set(COMPILER_DIR src/compiler)

set(ILLUMINA_HEADERS src/common/debug.h)
set(ILLUMINA_SOURCES)

add_executable(Illumina src/main.c ${ILLUMINA_HEADERS} ${ILLUMINA_SOURCES})

include_directories(src)

if(INCLUDE_RUNTIME)
    include(${RUNTIME_DIR}/CMakeLists.txt)
    message("Runtime included")
endif()

if(INCLUDE_COMPILER)
    include(${COMPILER_DIR}/CMakeLists.txt)
    message("Compiler included")
endif()

unset(INCLUDE_RUNTIME CACHE)
unset(INCLUDE_COMPILER CACHE)
