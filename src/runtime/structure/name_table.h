#ifndef ILLUMINA_NAME_TABLE_H
#define ILLUMINA_NAME_TABLE_H

#include "common/specs.h"

/*
 * A table used to reference the name of functions,
 * variables and classes to allow symbolic linking
 * during the loading phrase. Separated from the
 * symbol table for flexibility purposes.
 */
typedef struct name_table_t {
    NAME_TABLE_SIZE_T size;
    uint8_t **names;
} name_table_t;

void name_table_init(NAME_TABLE_SIZE_T, name_table_t *);
void name_table_release(name_table_t *);

#endif //ILLUMINA_NAME_TABLE_H
