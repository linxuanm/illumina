cmake_minimum_required(VERSION 3.13)

set(COMPILER_HEADERS
        src/compiler/parsing/generated/Absyn.h
        src/compiler/parsing/generated/Parser.h
        src/compiler/parsing/generated/Buffer.c

        src/compiler/compiler_state.h
        src/compiler/parsing/AST.h
        src/compiler/parsing/file_parser.h
        src/compiler/parsing/op_lit.h
)

set(COMPILER_SOURCES
        src/compiler/parsing/generated/Absyn.c
        src/compiler/parsing/generated/Parser.c
        src/compiler/parsing/generated/Lexer.c
        src/compiler/parsing/generated/Buffer.c

        src/compiler/compiler_state.c
        src/compiler/parsing/AST.c
        src/compiler/parsing/file_parser.c
)

message("Compiler Headers:")
log_list(COMPILER_HEADERS)

message("Compiler Sources:")
log_list(COMPILER_SOURCES)

list(APPEND ILLUMINA_HEADERS ${COMPILER_HEADERS})
list(APPEND ILLUMINA_SOURCES ${COMPILER_SOURCES})
