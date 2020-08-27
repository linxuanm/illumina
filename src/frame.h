#ifndef ILLUMINA_FRAME_H
#define ILLUMINA_FRAME_H

#include "args.h"

typedef struct RuntimeFrame {
    void *localVars[LOCAL_POOL_SIZE];
    int allocatedIndex;
} RuntimeFrame;

extern void initFrame(RuntimeFrame *frame);
/*
 * Returns the index assigned to the newly
 * allocated variable.
 */
extern int addObject(RuntimeFrame *frame, void *object);

#endif //ILLUMINA_FRAME_H
