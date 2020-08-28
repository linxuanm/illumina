#ifndef ILLUMINA_FRAME_H
#define ILLUMINA_FRAME_H

#include "args.h"

typedef struct RuntimeFrame {
    void *localVars[LOCAL_POOL_SIZE];
    int allocatedIndex;

    void *operandStack[STACK_SIZE];
    int stackIndex;
} RuntimeFrame;

extern void initFrame(RuntimeFrame *frame);
extern void destroyFrame(RuntimeFrame *frame);

/*
 * Returns the index assigned to the newly
 * allocated variable.
 */
extern int addLocalVar(RuntimeFrame *frame, void *object);

extern void pushStack(RuntimeFrame *frame, void *object);
extern void *popStack(RuntimeFrame *frame);

#endif //ILLUMINA_FRAME_H
