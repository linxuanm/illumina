#ifndef ILLUMINA_HEAP_H
#define ILLUMINA_HEAP_H

#include <inttypes.h>

#include "runtime/specs.h"

typedef HEAP_OBJECT_COUNT_T heap_id_t;
typedef OBJECT_SIZE_T obj_size_t;

typedef struct heap_t {
    HEAP_SIZE_T max_size; // unused until a better malloc is implemented
} heap_t;

heap_t *heap_init(HEAP_SIZE_T);
void heap_release(heap_t *);

heap_id_t heap_malloc_object(obj_size_t);
void *heap_get_index(heap_id_t);

#endif //ILLUMINA_HEAP_H
