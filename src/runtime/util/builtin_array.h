#ifndef ILLUMINA_BUILTIN_ARRAY_H
#define ILLUMINA_BUILTIN_ARRAY_H

#include <stdlib.h>

#include "common/util/assert.h"

typedef struct {
    uint16_t elem_size;
    uint32_t size;

    uint32_t alloc_size;
    uint8_t *mem;
} builtin_array_t;

builtin_array_t *make_array(uint32_t, uint16_t);

#endif //ILLUMINA_BUILTIN_ARRAY_H
