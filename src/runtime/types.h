#ifndef ILLUMINA_TYPES_H
#define ILLUMINA_TYPES_H

#include <stdint.h>

#define TYPES_TYPE_INT 0
#define TYPES_TYPE_FLOAT 1
#define TYPES_TYPE_CHAR 2
#define TYPES_TYPE_REF 3
#define TYPES_TYPE_RAW 4

// for ease of conversion
#define TYPES_COUNT 5

extern char *TYPE_NAME[];

typedef struct type_t {
    uint8_t type_tag;
    uint32_t ref_class; // link pool entry
} type_t;

#endif //ILLUMINA_TYPES_H
