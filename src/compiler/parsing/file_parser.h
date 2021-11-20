#ifndef ILLUMINA_FILE_PARSER_H
#define ILLUMINA_FILE_PARSER_H

#include "compiler/parsing/generated/Absyn.h"
#include "compiler/parsing/generated/Parser.h"
#include "compiler/parsing/AST.h"

Program parse_program(char *);

// check for error flag after invoking this
program_t *conv_program(Program);

#endif //ILLUMINA_FILE_PARSER_H
