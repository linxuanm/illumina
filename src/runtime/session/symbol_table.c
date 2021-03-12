#include "symbol_table.h"

#include <stdlib.h>

#include "common/util/assert.h"

sym_table_t *sym_table_init(SYM_TABLE_SIZE_T size) {
    sym_table_t *sym_table = malloc(sizeof(sym_table_t));
    ASSERT_MALLOC(sym_table);

    sym_table->size = size;
    sym_table->sym_references = malloc(size * sizeof(sym_ref_t));
    ASSERT_MALLOC(sym_table->sym_references);

    return sym_table;
}

void sym_table_release(sym_table_t *sym_table) {
    free(sym_table->sym_references);
    free(sym_table);
}