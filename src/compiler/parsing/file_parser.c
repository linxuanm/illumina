#include "file_parser.h"

#include <stdio.h>

#include "common/logging.h"

Program parse_program(char *str) {
    Program program;

    FILE *input = fopen(str, "r");
    if (!input) {
        ERROR("Unable to open file %s", str);
        return NULL;
    }

    program = pProgram(input);

    if (program) {
        DEBUG("Parsed program %s", str);
    } else {
        ERROR("Parse error in %s", str);
        return NULL;
    }

    return program;
}
