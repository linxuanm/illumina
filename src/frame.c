#include "frame.h"

#include <stdlib.h>

void initFrame(RuntimeFrame *frame) {

}

void destroyFrame(RuntimeFrame *frame) {
    for (int i = 0; i < frame->allocatedIndex; ++i) {
        free(frame->localVars[i]);
    }
}

int addLocalVar(RuntimeFrame *frame, void *object) {
    int currIndex = frame->allocatedIndex;

    if (currIndex >= LOCAL_POOL_SIZE) {
        // TODO: raise pool overflow error
    }

    frame->localVars[currIndex] = object;
    ++frame->allocatedIndex;

    return currIndex;
}

void pushStack(RuntimeFrame *frame, void *object) {
    int stackIndex = frame->stackIndex;

    if (stackIndex >= STACK_SIZE) {
        // TODO: raise stack overflow error
    }

    frame->operandStack[stackIndex] = object;
    ++frame->stackIndex;
}

void *popStack(RuntimeFrame *frame) {
    int stackIndex = frame->stackIndex;

    if (stackIndex <= 0) {
        // TODO: raise empty stack error
    }

    return frame->operandStack[--stackIndex];
}