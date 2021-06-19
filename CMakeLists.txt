cmake_minimum_required(VERSION 3.13)

project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

option(INCLUDE_RUNTIME "Include the Illumina runtime" ON)
option(INCLUDE_COMPILER "Include the Illumina compiler" ON)

function(log_list LIST)
    foreach(element IN LISTS ${LIST})
        message("\t- ${element}")
    endforeach()
endfunction()

include_directories(src)

message("Building Illumina ${CMAKE_PROJECT_VERSION}")

set(RUNTIME_DIR src/runtime)
set(COMPILER_DIR src/compiler)

set(ILLUMINA_HEADERS)
set(ILLUMINA_SOURCES)

set(COMMON_HEADERS
        src/common/logging.h
        src/common/util/stream.h
        src/common/util/assert.h
        src/common/specs.h
    )

set(COMMON_SOURCES
        src/common/util/stream.c
)

message("\nIncluded Common Library")

message("Common Headers:")
log_list(COMMON_HEADERS)

message("Common Sources:")
log_list(COMMON_SOURCES)

list(APPEND ILLUMINA_HEADERS ${COMMON_HEADERS})
list(APPEND ILLUMINA_SOURCES ${COMMON_SOURCES})

if(INCLUDE_RUNTIME)
    message("\nIncluded Illumina Runtime")
    include(${RUNTIME_DIR}/CMakeLists.txt)
endif()

if(INCLUDE_COMPILER)
    message("\nIncluded Illumina Compiler")
    include(${COMPILER_DIR}/CMakeLists.txt)
endif()

add_executable(Illumina src/main.c ${ILLUMINA_HEADERS} ${ILLUMINA_SOURCES})

add_compile_definitions(DEBUG_MODE)

message("\nDone")

unset(INCLUDE_RUNTIME CACHE)
unset(INCLUDE_COMPILER CACHE)
