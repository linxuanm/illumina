#include "const_pool.h"

#include <stdlib.h>

#include "common/util/assert.h"

const_pool_t *const_pool_init(CONST_POOL_SIZE_T size) {
    const_pool_t *sym_table = malloc(sizeof(const_pool_t));
    ASSERT_MALLOC(sym_table);

    sym_table->size = size;
    sym_table->const_references = malloc(size * sizeof(const_pool_ref_t));
    ASSERT_MALLOC(sym_table->const_references);

    return sym_table;
}

void const_pool_release(const_pool_t *sym_table) {
    free(sym_table->const_references);
    free(sym_table);
}