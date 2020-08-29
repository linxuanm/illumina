#ifndef ILLUMINA_STACKFUNCS_H
#define ILLUMINA_STACKFUNCS_H

#include "frame.h"
#include "primitives.h"

static void biFunc(RuntimeFrame *frame, void (*func)(void *, void *, void **));

void intAdd(RuntimeFrame *frame);
void intSub(RuntimeFrame *frame);

static void _addInt(IntObject *a, IntObject *b, IntObject **result);

void addInt(RuntimeFrame *frame);

#endif //ILLUMINA_STACKFUNCS_H
