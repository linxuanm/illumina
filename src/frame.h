#ifndef ILLUMINA_FRAME_H
#define ILLUMINA_FRAME_H

#include <stdint.h>
#include "specs.h"

typedef struct RuntimeFrame {
    PRIM_TYPE *locals;
} RuntimeFrame;

RuntimeFrame *makeFrame();
void destroyFrame(RuntimeFrame *);

PRIM_TYPE frameRead(RuntimeFrame *, int);
void frameWrite(RuntimeFrame *, int, PRIM_TYPE);

/*
 * Compiler keeps track of double-length primitives.
 * Note this when writing bytecode; there is no safe checks.
 */
DOUBLE_PRIM_TYPE frameReadDouble(RuntimeFrame *, int);
void frameWriteDouble(RuntimeFrame *, int, DOUBLE_PRIM_TYPE);

#endif //ILLUMINA_FRAME_H
