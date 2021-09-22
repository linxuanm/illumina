set(COMPILER_HEADERS
        src/compiler/parsing/preprocessing.h
)

set(COMPILER_SOURCES
        src/compiler/parsing/preprocessing.c
)

message("Compiler Headers:")
log_list(COMPILER_HEADERS)

message("Compiler Sources:")
log_list(COMPILER_SOURCES)

list(APPEND ILLUMINA_HEADERS ${COMPILER_HEADERS})
list(APPEND ILLUMINA_SOURCES ${COMPILER_SOURCES})
