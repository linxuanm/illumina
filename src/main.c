#define DEBUG_MODE 1
#define VM_64_BIT_HEAP 1

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
    stream_t stream;
    stream_from_file(&stream, "test.iasm");

    file_rep_t file = load_file_rep(&stream);

    return 0;
}
