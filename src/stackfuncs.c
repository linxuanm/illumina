#include "stackfuncs.h"

#include <stdlib.h>

#include "allocation.h"

void biFunc(RuntimeFrame *frame, void (*func)(void *, void *, void **)) {
    void *a = popStack(frame);
    void *b = popStack(frame);
    void *result;

    func(a, b, &result);

    addTempVar(frame, result);
    pushStack(frame, result);
}

void _addInt(IntObject *a, IntObject *b, IntObject **result) {
    *result = NEW_INT;
    **result = *a + *b;
}

void addInt(RuntimeFrame *frame) {
    biFunc(frame, (void (*)(void *, void *, void **)) &_addInt);
}