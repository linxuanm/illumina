#include <stdio.h>
#include <stdlib.h>

#include "stackfuncs.h"
#include "frame.h"

int main() {
    IntObject a = 10;
    IntObject b = 20;

    IntObject *result = addInt(&a, &b);

    printf("%lld", *result);

    return 0;
}