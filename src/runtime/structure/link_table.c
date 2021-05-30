#include "link_table.h"

#include <stdlib.h>

#include "common/util/assert.h"

void link_table_init(LINK_TABLE_SIZE_T size, link_table_t *const_pool) {
    const_pool->size = size;
    const_pool->const_references = malloc(size * sizeof(link_table_ref_t));
}

void link_table_release(link_table_t *sym_table) {
    free(sym_table->const_references);
}