#include "name_table.h"

#include <stdlib.h>

#include "common/util/assert.h"

void name_table_init(NAME_TABLE_SIZE_T size, name_table_t *name_table) {
    name_table->size = size;
    name_table->names = malloc(size * sizeof(char *));
}

void name_table_release(name_table_t *name_table) {
    for (int i = 0; i < name_table->size; ++i) {
        free(name_table->names[i]);
    }

    free(name_table->names);
}