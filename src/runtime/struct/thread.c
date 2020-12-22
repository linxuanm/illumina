#include "thread.h"

#include <stdlib.h>

LocalStack *makeStack(int stackSize) {
    LocalStack *stack = malloc(sizeof(LocalStack));
    stack->elems = malloc(sizeof(PRIM_TYPE) * stackSize);
    stack->maxSize = stackSize;
}

void destroyStack(LocalStack *stack) {
    free(stack->elems);
    free(stack);
}