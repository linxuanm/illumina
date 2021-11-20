#include "file_parser.h"

#include <stdio.h>

#include "compiler/compiler_state.h"
#include "common/logging.h"

Program parse_program(char *str) {
    Program program;

    FILE *input = fopen(str, "r");
    if (!input) {
        COMPILER_SET_ERRNO(IO_ERROR, "Unable to open file %s", str);
        return NULL;
    }

    program = pProgram(input);

    if (program) {
        DEBUG("Parsed program %s", str);
    } else {
        COMPILER_SET_ERRNO(SYNTAX_ERROR, "Parse error in %s", str);
        return NULL;
    }

    return program;
}

program_t *conv_program(Program prog) {
    Program raw = parse_program("test_code.lux");
    return gen_ast(raw);
}
