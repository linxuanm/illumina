#ifndef ILLUMINA_HEAP_H
#define ILLUMINA_HEAP_H

#include <inttypes.h>

#include "runtime/specs.h"

typedef HEAP_OBJECT_COUNT_T heap_id_t;
typedef OBJECT_SIZE_T obj_size_t;

typedef struct heap_t {
    HEAP_SIZE_T max_size; // unused for now
} heap_t;

heap_t *init_heap(HEAP_SIZE_T);
void release_heap(heap_t *);

heap_id_t malloc_object(obj_size_t);

#endif //ILLUMINA_HEAP_H
