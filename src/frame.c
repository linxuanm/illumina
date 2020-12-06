#include "frame.h"

#include <stdlib.h>

RuntimeFrame *makeFrame() {
    RuntimeFrame *frame = malloc(sizeof(RuntimeFrame));
    frame->locals = malloc(sizeof(uint32_t) * LOCAL_POOL_SIZE);

    return frame;
}

void destroyFrame(RuntimeFrame *frame) {
    free(frame->locals);
    free(frame);
}

PRIM_TYPE frameRead(RuntimeFrame *frame, int index) {
    return frame->locals[index];
}

void frameWrite(RuntimeFrame *frame, int index, PRIM_TYPE value) {
    frame->locals[index] = value;
}

DOUBLE_PRIM_TYPE frameReadDouble(RuntimeFrame *frame, int index) {
    return
        ((DOUBLE_PRIM_TYPE) frame->locals[index] << PRIM_SIZE) |
        (frame->locals[index + 1]);
}

void frameWriteDouble(RuntimeFrame *frame, int index, DOUBLE_PRIM_TYPE value) {
    frame->locals[index] = (PRIM_TYPE) (value >> PRIM_SIZE);
    frame->locals[index + 1] = (PRIM_TYPE) value;
}