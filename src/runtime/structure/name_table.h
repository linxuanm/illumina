#ifndef ILLUMINA_NAME_TABLE_H
#define ILLUMINA_NAME_TABLE_H

#include "common/specs.h"

/*
 * A table used to reference the pre-compiled name
 * of functions, variables and classes to ease debugging,
 * as names are not retained at the VM level.
 */
typedef struct name_table_t {
    NAME_TABLE_SIZE_T size;
    uint8_t **names;
} name_table_t;

name_table_t *name_table_init(NAME_TABLE_SIZE_T);
void name_table_release(name_table_t *);

#endif //ILLUMINA_NAME_TABLE_H
