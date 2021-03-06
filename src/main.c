#include <stdio.h>
#include <stdlib.h>

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

}