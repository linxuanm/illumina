#include "name_table.h"

#include <stdlib.h>

#include "common/util/assert.h"

name_table_t *name_table_init(NAME_TABLE_SIZE_T size) {
    name_table_t *name_table = malloc(sizeof(name_table_t));
    ASSERT_MALLOC(name_table);

    name_table->size = size;
    name_table->names = malloc(size * sizeof(char *));
    ASSERT_MALLOC(name_table->names);

    return name_table;
}