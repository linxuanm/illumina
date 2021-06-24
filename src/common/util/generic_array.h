#ifndef ILLUMINA_GENERIC_ARRAY_H
#define ILLUMINA_GENERIC_ARRAY_H

#include <stdlib.h>

#include "common/specs.h"
#include "common/util/assert.h"

#define GEN_ARRAY_T(T) \
    struct {\
        POOL_SIZE_T size;\
        T *elem;\
    };

#define GEN_ARRAY_INIT(array, size, T) \
    do {\
        (array)->size = (size);\
        (array)->elem = malloc((size) * sizeof(T));\
        ASSERT_MALLOC((array)->elem);\
    } while (0)

#define GEN_ARRAY_SIZE(array) ((array)->size);

#define GEN_ARRAY_GET(array, i) ((array)->elem[(i)])

#define GEN_ARRAY_SET(array, i, val) (array)->elem[(i)] = (val)

#define GEN_ARRAY_RELEASE(array) free((array)->elem)

#endif //ILLUMINA_GENERIC_ARRAY_H
