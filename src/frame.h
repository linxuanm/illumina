#ifndef ILLUMINA_FRAME_H
#define ILLUMINA_FRAME_H

#include "args.h"

typedef struct RuntimeFrame {
    void *localVars[LOCAL_POOL_SIZE];
    int varIndex;

    void *operandStack[STACK_SIZE];
    int stackIndex;

    /*
     * A rather hacky way to ease the
     * garbage collection of partial results
     * created in the operand stack.
     */
    void *tempPool[TEMP_POOL_SIZE];
    int tempIndex;
} RuntimeFrame;

void initFrame(RuntimeFrame *frame);
void destroyFrame(RuntimeFrame *frame);

/*
 * Returns the index assigned to the newly
 * allocated variable.
 */
int addLocalVar(RuntimeFrame *frame, void *object);
void addTempVar(RuntimeFrame *frame, void *object);

void pushStack(RuntimeFrame *frame, void *object);
void *popStack(RuntimeFrame *frame);

#endif //ILLUMINA_FRAME_H
