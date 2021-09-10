#include <stdio.h>
#include <stdlib.h>

#include "common/logging.h"
#include "common/util/assert.h"
#include "common/util/stream.h"
#include "runtime/loader/file_loader.h"

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
    int a = -255;
    unsigned int b = a;
    printf("%u", b);
    return 0;
}
