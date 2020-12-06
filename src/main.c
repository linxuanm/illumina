#include <stdio.h>
#include <stdlib.h>

#include "stackfuncs.h"
#include "frame.h"

void printBits(int const size, void const * const ptr) {
    unsigned char *b = (unsigned char *) ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = ((b[i] >> j) & 1);
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