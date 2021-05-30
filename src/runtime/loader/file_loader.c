#include "file_loader.h"

#include <stdlib.h>

#include "common/logging.h"
#include "runtime/structure/link_table.h"

void file_name_table_init(NAME_TABLE_SIZE_T size, file_name_table_t *table) {
    table->size = size;
    table->names = malloc(size * sizeof(char *));
}

void file_name_table_release(file_name_table_t *table) {
    for (int i = 0; i < table->size; ++i) {
        free(table->names[i]);
    }

    free(table->names);
}

void file_linker_init(LINKER_SIZE_T size, file_linker_t *linker) {
    linker->size = size;
    linker->links = malloc(size * sizeof(file_linker_ref_t));
}

void file_linker_release(file_linker_t *linker) {
    free(linker->links);
}

void file_linker_load_entry(file_linker_ref_t *entry, stream_t *stream) {
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

file_rep_t *load_file_rep(stream_t *stream) {
    file_rep_t *object_file = malloc(sizeof(file_rep_t));

    // header
    if (stream_read_4(stream) != 0xABCDDCBA) {
        ERROR("Invalid object file signature (expected 0xABCDDCBA)");
        VM_SET_THREAD_ERRNO(VM_ERRNO_BAD_FILE_FORMAT);
        return object_file;
    }

    stream_read_4(stream);
    stream_read_8(stream);

    // name table
    NAME_TABLE_SIZE_T name_table_size = stream_read_4(stream);
    file_name_table_init(name_table_size, &object_file->name_table);

    for (int i = 0; i < name_table_size; ++i) {
        uint16_t name_length = stream_read_2(stream);

        object_file->name_table.names[i] = stream_read_str(stream, name_length);
    }

    // link table
    LINKER_SIZE_T link_table_size = stream_read_4(stream);
    file_linker_init(link_table_size, &object_file->link_table);

    for (int i = 0; i < link_table_size; ++i) {
        file_linker_load_entry(&object_file->link_table.links[i], stream);
    }

    VM_RETURN_IF_ERROR(object_file);

    // end of structure setup

    // classes


    return object_file;
}