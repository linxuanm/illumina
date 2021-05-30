#include "link_table.h"

#include <stdlib.h>

#include "common/util/assert.h"

void link_table_init(LINK_TABLE_SIZE_T size, link_table_t *const_pool) {
    const_pool->size = size;
    const_pool->links = malloc(size * sizeof(link_table_ref_t));
}

void link_table_release(link_table_t *sym_table) {
    free(sym_table->links);
}

void link_table_load_entry(link_table_ref_t *entry, stream_t *stream) {
    entry->tag = stream_read_1(stream);

    switch (entry->tag) {
        case LINK_TYPE_INT:
        case LINK_TYPE_FLOAT:
        case LINK_TYPE_FIELD_REF:
            entry->value = stream_read_4(stream);
            entry->extra = stream_read_4(stream);
            break;

        case LINK_TYPE_STRING:
        case LINK_TYPE_GLOBAL_VAR:
        case LINK_TYPE_FUNCTION:
        case LINK_TYPE_CLASS:
            entry->value = stream_read_4(stream);
            break;

        default:
            VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
            return;
    }
}