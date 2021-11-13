#ifndef ILLUMINA_GENERIC_ARRAY_H
#define ILLUMINA_GENERIC_ARRAY_H

#include <stdlib.h>

#include "common/specs.h"
#include "common/util/assert.h"

#define GEN_PAIR_T(A, B) \
    struct {\
        A first;\
        B second;\
    }

#define GEN_PAIR_FST(pair) (pair)->first

#define GEN_PAIR_SND(pair) (pair)->first

#define GEN_PAIR_SET_FST(pair, val) (pair)->first = (val)

#define GEN_PAIR_SET_SND(pair, val) (pair)->first = (val)

#endif //ILLUMINA_GENERIC_ARRAY_H
