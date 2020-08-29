#ifndef ILLUMINA_STACKFUNCS_H
#define ILLUMINA_STACKFUNCS_H

#include "frame.h"
#include "primitives.h"

void intAdd(RuntimeFrame *frame) {
    IntObject *a = popStack(frame);
    IntObject *b = popStack(frame);

    IntObject result = *a + *b;

    addTempVar(frame, &result);
    pushStack(frame, &result);
}

#endif //ILLUMINA_STACKFUNCS_H
