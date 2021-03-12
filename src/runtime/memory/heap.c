#include "heap.h"

#include <stdlib.h>

#include "common/util/assert.h"

heap_t *heap_init(HEAP_SIZE_T max_size) {
    heap_t *heap = malloc(sizeof(heap_t));
    ASSERT_MALLOC(heap);

    heap->max_size = max_size;

    return heap;
}