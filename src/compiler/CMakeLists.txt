set(COMPILER_HEADERS
        src/compiler/parsing/generated/Absyn.h
        src/compiler/parsing/generated/Parser.h
        src/compiler/parsing/file_parser.h
)

set(COMPILER_SOURCES
        src/compiler/parsing/generated/Absyn.c
        src/compiler/parsing/generated/Parser.c
)

message("Compiler Headers:")
log_list(COMPILER_HEADERS)

message("Compiler Sources:")
log_list(COMPILER_SOURCES)

list(APPEND ILLUMINA_HEADERS ${COMPILER_HEADERS})
list(APPEND ILLUMINA_SOURCES ${COMPILER_SOURCES})
