#include "heap.h"

#include <stdlib.h>

#include "common/util/assert.h"

heap_t *heap_init() {
    heap_t *heap = malloc(sizeof(heap_t));
    ASSERT_MALLOC(heap);

    return heap;
}

void heap_release(heap_t *heap) {
    free(heap);
}