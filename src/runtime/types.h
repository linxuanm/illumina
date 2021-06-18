#ifndef ILLUMINA_TYPES_H
#define ILLUMINA_TYPES_H

#include <stdint.h>

#define TYPES_INT 1
#define TYPES_FLOAT 2
#define TYPES_CHAR 3
#define TYPES_REF 4
#define TYPES_RAW 5

typedef struct type_t {
    uint8_t type_tag;
    uint32_t ref_class; // link pool entry
} type_t;

#endif //ILLUMINA_TYPES_H
