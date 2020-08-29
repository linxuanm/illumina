#include <stdio.h>
#include <stdlib.h>

#include "primitives.h"
#include "frame.h"

int main() {
    void *objs[64];

    uint64_t a = 64;
    int b = 12;

    objs[0] = &a;
    objs[1] = &b;

    printf("%d", *(int *) objs[1]);

    return 0;
}