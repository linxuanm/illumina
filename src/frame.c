#include "frame.h"

void initFrame(RuntimeFrame *frame) {

}

int addObject(RuntimeFrame *frame, void *object) {
    int currIndex = frame->allocatedIndex;

    if (currIndex >= LOCAL_POOL_SIZE) {
        // TODO: raise pool overflow error
    }

    frame->localVars[currIndex] = object;
    ++frame->allocatedIndex;

    return currIndex;
}