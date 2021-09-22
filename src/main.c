#include <stdio.h>
#include <stdlib.h>

#include "compiler/parsing/preprocessing.h"

#include "common/util/io_string.h"
#include "common/logging.h"
#include "common/util/assert.h"
#include "common/util/stream.h"

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
    uint8_t *code;
    FILE_SIZE_T length = read_from_file(&code, "test_code.lux");
    //printf("%s", code);
    uint8_t *new_code = preprocess_code(code);
    printf("%d", new_code[0]);
}
