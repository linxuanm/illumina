#ifndef ILLUMINA_HEAP_H
#define ILLUMINA_HEAP_H

#include <inttypes.h>

#include "common/specs.h"

typedef HEAP_OBJECT_COUNT_T heap_id_t;
typedef OBJECT_SIZE_T obj_size_t;

typedef struct heap_t {

} heap_t;

heap_t *heap_init();
void heap_release(heap_t *);

heap_id_t heap_malloc_object(obj_size_t);
void *heap_get_index(heap_id_t);

#endif //ILLUMINA_HEAP_H
