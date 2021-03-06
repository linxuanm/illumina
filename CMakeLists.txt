cmake_minimum_required(VERSION 3.13)

project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C
)

set(CMAKE_C_STANDARD 11)

option(INCLUDE_RUNTIME "Include the Illumina runtime" ON)
option(INCLUDE_COMPILER "Include the Illumina compiler" ON)

include_directories(src)

set(RUNTIME_DIR src/runtime)
set(COMPILER_DIR src/compiler)

set(ILLUMINA_HEADERS)
set(ILLUMINA_SOURCES)

set(COMMON_HEADERS src/common/debug.h)
set(COMMON_SOURCES)

message("\nIncluded Common Library")

message("Common Headers:")
foreach(header IN LISTS COMMON_HEADERS)
    message("\t- ${header}")
endforeach()

message("Common Sources:")
foreach(header IN LISTS COMMON_Sources)
    message("\t- ${header}")
endforeach()

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

unset(INCLUDE_RUNTIME CACHE)
unset(INCLUDE_COMPILER CACHE)
