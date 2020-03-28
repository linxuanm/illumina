cmake_minimum_required(VERSION 3.13)
project(Illumina
        VERSION 1.0
        DESCRIPTION "A static programming language"
        LANGUAGES C)

add_subdirectory(src)

set(CMAKE_C_STANDARD 11)