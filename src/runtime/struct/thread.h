#ifndef ILLUMINA_THREAD_H
#define ILLUMINA_THREAD_H

#include "../reference/specs.h"

/*
 * The local stack is a per-thread container
 * for storage of partial results.
 */
typedef struct LocalStack {
    PRIM_TYPE *elems;
    int currSize;
    int maxSize;
} LocalStack;

LocalStack *makeStack(int);
void destroyStack(LocalStack *);

/*
 * Each thread carries its own program counter
 * as well as a local stack. Bytecode in a thread
 * can access static members, but not the other
 * way around (duh).
 */
typedef struct VMThread {
    int pc;
    LocalStack *stack;
} VMThread;

#endif //ILLUMINA_THREAD_H
