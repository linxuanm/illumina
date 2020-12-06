#include <stdio.h>
#include <stdlib.h>

#include "runtime/bytecode/bytefuncs.h"
#include "runtime/struct/frame.h"

void printBits(int const size, void const * const ptr) {
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
    RuntimeFrame *frame = makeFrame();
    int32_t a = -65536;
    int32_t b;
    frameWriteDouble(frame, 0, a);
    b = frameReadDouble(frame, 0);

    printf("%d", b);

    return 0;
}