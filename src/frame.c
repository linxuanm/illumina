#include "frame.h"

#include <stdlib.h>

void initFrame(RuntimeFrame *frame) {

}

void destroyFrame(RuntimeFrame *frame) {
    for (int i = 0; i < frame->varIndex; ++i) {
        free(frame->localVars[i]);
    }

    for (int i = 0; i < frame->tempIndex; ++i) {
        free(frame->tempPool[i]);
    }
}

int addLocalVar(RuntimeFrame *frame, void *object) {
    int currIndex = frame->varIndex;

    if (currIndex >= LOCAL_POOL_SIZE) {
        // TODO: raise pool overflow error
    }

    frame->localVars[currIndex] = object;
    ++frame->varIndex;

    return currIndex;
}

void addTempVar(RuntimeFrame *frame, void *object) {
    if (frame->tempIndex >= TEMP_POOL_SIZE) {
        // TODO: raise pool overflow error
    }

    frame->tempPool[frame->tempIndex++] = object;
}

void pushStack(RuntimeFrame *frame, void *object) {
    if (frame->stackIndex >= STACK_SIZE) {
        // TODO: raise stack overflow error
    }

    frame->operandStack[frame->stackIndex++] = object;
}

void *popStack(RuntimeFrame *frame) {
    if (frame->stackIndex <= 0) {
        // TODO: raise empty stack error
    }

    return frame->operandStack[--frame->stackIndex];
}