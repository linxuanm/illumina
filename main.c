#include <stdio.h>
#include <stdlib.h>
#include <compiler/parsing/generated/Absyn.h>

#include "common/util/io_string.h"
#include "common/logging.h"
#include "common/util/assert.h"
#include "common/util/stream.h"
#include "compiler/parsing/generated/Absyn.h"
#include "compiler/parsing/file_parser.h"
#include "compiler/parsing/AST.h"

void print_bits(int const size, void const * const ptr) {
    unsigned char *b = (unsigned char *) ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i > -1; i--) {
        for (j = 7; j > -1; j--) {
            byte = (unsigned char) ((b[i] >> j) & 1);
            printf("%u", byte);
        }
    }
    puts("");
}

int main() {
    Program raw = parse_program("test_code.lux");
    program_t *node = gen_ast(raw);
    
}
